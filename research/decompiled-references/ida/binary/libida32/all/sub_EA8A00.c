__int64 __fastcall sub_EA8A00(char *a1, char *a2, __int64 a3, __int64 a4)
{
  char v6; // al
  unsigned __int8 v8; // [rsp+0h] [rbp-1E8h]
  char *v9; // [rsp+8h] [rbp-1E0h] BYREF
  int v10; // [rsp+14h] [rbp-1D4h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+18h] [rbp-1D0h] BYREF
  _BYTE v12[64]; // [rsp+20h] [rbp-1C8h] BYREF
  int v13; // [rsp+60h] [rbp-188h]
  __int64 v14; // [rsp+1A0h] [rbp-48h]
  char v15; // [rsp+1A8h] [rbp-40h]

  v9 = a1;
  v10 = 0;
  v11 = off_2B21588;
  if ( a2 == a1 )
  {
    v6 = 0;
  }
  else
  {
    sub_EA5C80((__int64)v12, (__int64 *)&v11, &v9, a2, &v10, a3, a4);
    while ( 1 )
    {
      v6 = v15;
      if ( v15 )
      {
        v6 = 0;
        goto LABEL_9;
      }
      if ( v14 && v13 == 21 )
        break;
      if ( v9 == a2 )
        goto LABEL_9;
      sub_EA5C80((__int64)v12, (__int64 *)&v11, &v9, a2, &v10, a3, a4);
    }
    v6 = 1;
  }
LABEL_9:
  v8 = v6;
  nullsub_458();
  return v8;
}

