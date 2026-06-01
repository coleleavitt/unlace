/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442170
// Address: 0x00442170

//----- (00442170) --------------------------------------------------------
int __usercall sub_442170@<eax>(__m128i a1@<xmm0>, int a2, int a3, int a4)
{
  unsigned int v4; // esi
  char *v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // ebx
  unsigned __int8 *v8; // esi
  const char *v9; // edx
  int v10; // esi
  char *v11; // eax
  int v12; // esi
  unsigned int v13; // kr00_4
  const char *v15; // [esp+10h] [ebp-2Ch]
  char *v16; // [esp+24h] [ebp-18h] BYREF
  int v17; // [esp+28h] [ebp-14h]
  int v18; // [esp+2Ch] [ebp-10h]
  int v19; // [esp+38h] [ebp-4h]
  int (__stdcall **v20)(int); // [esp+3Ch] [ebp+0h] BYREF
  char v21[1076]; // [esp+40h] [ebp+4h] BYREF
  int v22; // [esp+474h] [ebp+438h]
  int v23; // [esp+478h] [ebp+43Ch]

  v4 = *(unsigned __int16 *)(a3 + 24);
  v15 = *(const char **)a3;
  v5 = nullptr;
  v16 = nullptr;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( v4 )
  {
    if ( v4 < 0xC )
      goto LABEL_13;
    v6 = *(_DWORD *)(a3 + 26);
    v7 = *(_DWORD *)(a3 + 30);
    if ( *(_BYTE *)(a3 + 16) )
    {
      v6 = _byteswap_ulong(v6);
      v7 = _byteswap_ulong(v7);
    }
    if ( v4 < v7 + v6 + 12 )
    {
LABEL_13:
      v12 = -1;
      goto LABEL_25;
    }
    v8 = (unsigned __int8 *)(v6 + a3 + 38);
    if ( v7 )
    {
      do
      {
        sub_41F840(a1, (int)&v16, "%02x", *v8++);
        --v7;
      }
      while ( v7 );
      v5 = v16;
    }
  }
  v9 = MultiByteStr;
  if ( v17 )
    v9 = v5;
  v10 = *(_DWORD *)(a3 + 12);
  if ( *(_DWORD *)(a4 + 4) )
    v11 = *(char **)a4;
  else
    v11 = (char *)MultiByteStr;
  sub_4400A0((__int8 *)&v20, v11, 0, v15, (const char *)(a3 + 1050), 0, v9);
  v20 = &off_48DEFC;
  v22 = a3 + 16;
  v23 = v10;
  LOBYTE(v19) = 3;
  if ( sub_4413E0(&v20) )
  {
    if ( a2 )
    {
      v13 = strlen(v21);
      if ( v13 )
      {
        if ( v13 + 1 > *(_DWORD *)(a2 + 8) )
          *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v13 + 1, 1u);
        *(_DWORD *)(a2 + 4) = v13 + 1;
        sub_464310(*(_DWORD *)a2, (unsigned int)v21, v13);
        *(_BYTE *)(v13 + *(_DWORD *)a2) = 0;
        v12 = 0;
        goto LABEL_24;
      }
      *(_DWORD *)(a2 + 4) = 0;
    }
    v12 = 0;
  }
  else
  {
    v12 = -1;
  }
LABEL_24:
  sub_440BC0(&v20);
  v5 = v16;
LABEL_25:
  v19 = 5;
  if ( v5 )
  {
    v17 = 0;
    sub_453A20(v5);
  }
  return v12;
}
// 48DEFC: using guessed type int (__stdcall *off_48DEFC)(int);
