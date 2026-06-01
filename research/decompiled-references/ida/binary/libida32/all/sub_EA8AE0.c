__int64 __fastcall sub_EA8AE0(char *a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  char *v8; // [rsp+8h] [rbp-1E0h] BYREF
  int v9; // [rsp+14h] [rbp-1D4h] BYREF
  __int64 (__fastcall **v10)(); // [rsp+18h] [rbp-1D0h] BYREF
  _BYTE v11[384]; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v12; // [rsp+1A0h] [rbp-48h]
  char v13; // [rsp+1A8h] [rbp-40h]

  v8 = a1;
  v9 = 0;
  v10 = off_2B21588;
  if ( a2 != a1 )
  {
    sub_EA5C80((__int64)v11, (__int64 *)&v10, &v8, a2, &v9, a3, a4);
    while ( !v13 )
    {
      if ( v12 )
      {
        v6 = 1;
        goto LABEL_8;
      }
      if ( v8 == a2 )
        break;
      sub_EA5C80((__int64)v11, (__int64 *)&v10, &v8, a2, &v9, a3, a4);
    }
  }
  v6 = 0;
LABEL_8:
  nullsub_458();
  return v6;
}

