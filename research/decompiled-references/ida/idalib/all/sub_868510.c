__int64 __fastcall sub_868510(unsigned int *a1, int a2, __int64 a3, int a4, __int64 a5)
{
  int v6; // edx
  __int64 v7; // rbx
  char *v8; // rax
  unsigned int v10; // eax
  char *v11; // rax
  __int64 v12; // r9
  int v13; // r8d
  char *v14; // rax
  char *v15; // rax
  char v16; // si

  v6 = a4;
  v7 = a2;
  if ( a4 <= 126 )
  {
    v12 = a3;
    v13 = a2;
    goto LABEL_13;
  }
  if ( a4 != 127 )
  {
    if ( a2 <= 126 )
    {
      v8 = sub_867CC0((__int64)a1, 1u, a2, 0, a4, a5);
      if ( v8 )
      {
        *v8 = -117;
        return 0;
      }
      return *a1;
    }
    v15 = sub_867CC0((__int64)a1, 1u, 15, 0, a4, a5);
    if ( v15 )
    {
      *v15 = -117;
LABEL_17:
      v12 = a3;
      v13 = a2;
      v6 = 15;
LABEL_13:
      v14 = sub_867CC0((__int64)a1, 1u, v6, 0, v13, v12);
      if ( v14 )
      {
        *v14 = -119;
        return 0;
      }
    }
    return *a1;
  }
  v10 = a1[36];
  if ( a2 > 126 )
  {
    if ( !v10 && (unsigned __int64)(a5 + 0x80000000LL) >> 32 )
    {
      if ( !(unsigned int)sub_867C50(a1, 15, a5) )
        goto LABEL_17;
      return *a1;
    }
LABEL_10:
    v11 = sub_867CC0((__int64)a1, 1u, 127, a5, a2, a3);
    if ( v11 )
    {
      *v11 = -57;
      return 0;
    }
    return *a1;
  }
  if ( v10 )
  {
    v16 = 0;
    if ( *((_BYTE *)&unk_23C2F30 + v7) > 7u )
      v16 = 65;
    return sub_867BD0(a1, v16, byte_23C2F10[v7] | 0xB8u, a5);
  }
  else
  {
    if ( !((unsigned __int64)(a5 + 0x80000000LL) >> 32) )
      goto LABEL_10;
    return sub_867C50(a1, a2, a5);
  }
}
