__int64 __fastcall sub_16C5190(__int64 *a1, int a2)
{
  int v3; // eax
  char *v4; // rbp
  int v5; // eax
  char *v7; // rbp
  int v8; // eax
  int v9; // edx
  unsigned int v10; // eax
  int v11; // edx
  int v12; // edx
  char *s; // [rsp+0h] [rbp-48h] BYREF
  int v14; // [rsp+8h] [rbp-40h]

  while ( 1 )
  {
    if ( a2 >= 0 )
      return 0;
    v3 = sub_1021B90((__int64)a1, a2);
    sub_1022900((__int64)&s, a1, v3, 1);
    v4 = s;
    if ( !s
      || strlen(s) != 15
      || *(_QWORD *)v4 != 0x686374617263733CLL
      || *((_DWORD *)v4 + 2) != 1634759456
      || *((_WORD *)v4 + 6) != 25955
      || v4[14] != 62 )
    {
      break;
    }
LABEL_17:
    if ( (unsigned __int8)sub_1020490((__int64)a1, a2, nullptr) )
    {
      a2 = sub_10205A0((__int64)a1, a2);
    }
    else
    {
      s = (char *)sub_101FC50((__int64)a1, a2);
      a2 = (int)s;
      v14 = v12;
    }
    if ( a2 >= 0 )
      v9 = a2;
    else
      v9 = sub_1021B90((__int64)a1, a2);
    while ( 1 )
    {
      sub_1022900((__int64)&s, a1, v9, 1);
      v7 = s;
      if ( !s || strlen(s) != 15 )
        break;
      if ( *(_QWORD *)v7 != 0x686374617263733CLL
        || *((_DWORD *)v7 + 2) != 1634759456
        || *((_WORD *)v7 + 6) != 25955
        || (v8 = 0, v7[14] != 62) )
      {
        v8 = 1;
      }
      v9 = a2;
      if ( v8 )
        break;
      if ( a2 < 0 )
        goto LABEL_17;
    }
  }
  v5 = sub_1021B90((__int64)a1, a2);
  if ( !v5 )
    return 0;
  v10 = sub_1021680((__int64)a1, v5);
  LOBYTE(v11) = v10 != 0;
  LOBYTE(v10) = v10 != 3;
  return v11 & v10;
}
