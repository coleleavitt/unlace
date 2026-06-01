/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44E6B0
// Address: 0x0044E6B0

//----- (0044E6B0) --------------------------------------------------------
bool __thiscall sub_44E6B0(int this, int a2, char a3)
{
  char v3; // dl
  int v4; // eax
  struct sockaddr *p_name; // esi
  int namelen; // [esp+8h] [ebp-34h] BYREF
  struct sockaddr name; // [esp+Ch] [ebp-30h] BYREF
  char v9; // [esp+1Ch] [ebp-20h] BYREF

  v3 = *(_BYTE *)(this + 52);
  v4 = 16;
  if ( v3 )
    v4 = 28;
  namelen = v4;
  p_name = (struct sockaddr *)&v9;
  if ( !v3 )
    p_name = &name;
  return !getpeername(*(_DWORD *)(this + 28), p_name, &namelen) && sub_44FAE0(a2, (int)p_name, namelen, a3);
}
