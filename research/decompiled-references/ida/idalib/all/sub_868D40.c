__int64 __fastcall sub_868D40(unsigned int *a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v7; // rbx
  int v8; // eax
  int v9; // edx
  int v10; // r13d
  char *v11; // rax
  char v13; // si
  char v14; // dl
  char *v15; // rax
  char *v16; // rax
  char *v17; // rax

  v7 = a3;
  a1[36] = 0;
  if ( a5 != 127 )
  {
    v8 = 15;
    v9 = a5;
    if ( (int)v7 <= 126 )
      v8 = v7;
    v10 = v8;
    if ( (v7 & 0x80) != 0 && a5 <= 126 )
    {
LABEL_20:
      a1[36] = 1;
      v15 = sub_867CC0((__int64)a1, 1u, v9, 0, v7, a4);
      if ( v15 )
      {
        *v15 = -119;
        a1[36] = 0;
        return 0;
      }
      return *a1;
    }
    if ( a2 )
    {
      v11 = sub_867CC0((__int64)a1, 1u, v8, 0, a5, a6);
      if ( v11 )
      {
        *v11 = 99;
LABEL_9:
        if ( (v7 & 0x80) == 0 )
          return 0;
        v9 = v10;
        goto LABEL_20;
      }
    }
    else
    {
      a1[36] = 1;
      if ( !(unsigned int)sub_868510(a1, v8, 0, a5, a6) )
      {
        a1[36] = 0;
        goto LABEL_9;
      }
    }
    return *a1;
  }
  if ( a3 > 126 )
  {
    a1[36] = 1;
    v16 = sub_867CC0((__int64)a1, 1u, 127, (int)a6, a3, a4);
    if ( v16 )
    {
      *v16 = -57;
      a1[36] = 0;
      return 0;
    }
    return *a1;
  }
  if ( a2 && (int)a6 < 0 )
  {
    v17 = sub_867CC0((__int64)a1, 1u, 127, (int)a6, a3, a4);
    if ( v17 )
    {
      *v17 = -57;
      return 0;
    }
    return *a1;
  }
  v13 = 65;
  v14 = byte_23C2F10[a3] | 0xB8;
  if ( *((_BYTE *)&unk_23C2F30 + v7) <= 7u )
    v13 = 0;
  return sub_867BD0(a1, v13, v14, a6);
}
