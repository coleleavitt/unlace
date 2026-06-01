/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44EB00
// Address: 0x0044EB00

//----- (0044EB00) --------------------------------------------------------
char __thiscall sub_44EB00(int this, int *a2)
{
  int v3; // eax
  char v4; // dl
  struct sockaddr *p_name; // eax
  unsigned __int16 v7; // cx
  int namelen; // [esp+8h] [ebp-34h] BYREF
  struct sockaddr name; // [esp+Ch] [ebp-30h] BYREF
  char v10; // [esp+1Ch] [ebp-20h] BYREF
  unsigned __int16 v11; // [esp+1Eh] [ebp-1Eh]

  v3 = 16;
  v4 = *(_BYTE *)(this + 52);
  if ( v4 )
    v3 = 28;
  namelen = v3;
  p_name = (struct sockaddr *)&v10;
  if ( !v4 )
    p_name = &name;
  if ( getsockname(*(_DWORD *)(this + 28), p_name, &namelen) )
    return 0;
  v7 = *(_WORD *)name.sa_data;
  if ( *(_BYTE *)(this + 52) )
    v7 = v11;
  *a2 = (unsigned __int16)(v7 << 8) | HIBYTE(v7);
  return 1;
}
