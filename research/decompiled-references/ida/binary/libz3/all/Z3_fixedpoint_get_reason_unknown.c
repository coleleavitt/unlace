__int64 __fastcall Z3_fixedpoint_get_reason_unknown(__int64 a1, __int64 a2)
{
  char v2; // bp
  unsigned int v3; // eax
  __int64 v4; // rbx
  void *v6; // [rsp+0h] [rbp-58h] BYREF
  __int64 v7; // [rsp+8h] [rbp-50h]
  char v8[72]; // [rsp+10h] [rbp-48h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29FF10();
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = sub_64C7C0(*(_QWORD *)(a2 + 24) + 48LL);
  if ( v3 == 3 )
  {
    strcpy(v8, "input error");
    v6 = v8;
    v7 = 11;
  }
  else if ( v3 > 3 )
  {
    if ( v3 != 4 )
      goto LABEL_15;
    v6 = v8;
    strcpy(v8, "approximated");
    v7 = 12;
  }
  else
  {
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        strcpy(v8, "timeout");
        v6 = v8;
        v7 = 7;
        goto LABEL_10;
      }
LABEL_15:
      sub_1872CE0("");
      sub_1873130(114, 124);
    }
    v6 = v8;
    strcpy(v8, "ok");
    v7 = 2;
  }
LABEL_10:
  v4 = sub_24ED70((_QWORD *)a1, (__int64)&v6);
  if ( v6 != v8 )
    operator delete(v6, *(_QWORD *)v8 + 1LL);
  if ( v2 )
    byte_1C7EBA0 = 1;
  return v4;
}

