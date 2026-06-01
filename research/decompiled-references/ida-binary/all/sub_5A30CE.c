__int64 __fastcall sub_5A30CE(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  _QWORD v5[6]; // [rsp+10h] [rbp-120h] BYREF
  __int64 v6; // [rsp+40h] [rbp-F0h] BYREF
  __int64 v7; // [rsp+48h] [rbp-E8h] BYREF
  __int64 v8; // [rsp+50h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+58h] [rbp-D8h] BYREF
  const char *v10; // [rsp+60h] [rbp-D0h] BYREF
  int v11; // [rsp+68h] [rbp-C8h]
  char v12; // [rsp+6Ch] [rbp-C4h]
  const char *v13; // [rsp+70h] [rbp-C0h]
  int v14; // [rsp+78h] [rbp-B8h]
  char v15; // [rsp+7Ch] [rbp-B4h]
  const char *v16; // [rsp+80h] [rbp-B0h]
  int v17; // [rsp+88h] [rbp-A8h]
  char v18; // [rsp+8Ch] [rbp-A4h]
  const char *v19; // [rsp+90h] [rbp-A0h]
  int v20; // [rsp+98h] [rbp-98h]
  char v21; // [rsp+9Ch] [rbp-94h]
  _BYTE v22[11]; // [rsp+A0h] [rbp-90h] BYREF
  __int64 src; // [rsp+ABh] [rbp-85h] BYREF
  int v24; // [rsp+B3h] [rbp-7Dh]
  char v25; // [rsp+B7h] [rbp-79h]
  __int64 v26; // [rsp+B8h] [rbp-78h]
  __int64 v27; // [rsp+C0h] [rbp-70h]
  const char **v28; // [rsp+C8h] [rbp-68h]
  const char **v29; // [rsp+D0h] [rbp-60h]
  const char **v30; // [rsp+D8h] [rbp-58h]
  const char **v31; // [rsp+E0h] [rbp-50h]
  const char **v32; // [rsp+E8h] [rbp-48h]
  const char **v33; // [rsp+F0h] [rbp-40h]
  __int64 v34; // [rsp+F8h] [rbp-38h]
  signed int v35; // [rsp+104h] [rbp-2Ch]
  const char **v36; // [rsp+108h] [rbp-28h]
  const char **v37; // [rsp+110h] [rbp-20h]
  char v38; // [rsp+11Fh] [rbp-11h]

  src = 0;
  v24 = 0;
  v25 = 0;
  v10 = "processor";
  v11 = -1;
  v12 = 0;
  v13 = "model";
  v14 = 0;
  v15 = 0;
  v16 = "stepping";
  v17 = 0;
  v18 = 0;
  v19 = "cpu family";
  v20 = 0;
  v21 = 0;
  *(_WORD *)a2 = 9;
  v35 = sub_59FFFE("/proc/cpuinfo", 0, 0);
  if ( v35 < 0 )
    return 0;
  sub_593356(v5);
  v3 = sub_59BA78(0x220u, v5);
  sub_5A41B2(v3, (unsigned int)v35);
  v34 = v3;
  while ( (unsigned __int8)sub_5A41E4(v34, &v9) )
  {
    v38 = 1;
    v30 = &v10;
    v37 = &v10;
    v29 = (const char **)v22;
    while ( v37 != v29 )
    {
      v28 = v37;
      if ( v38 == 1 || !*((_BYTE *)v28 + 12) )
      {
        v38 = 0;
        if ( !(unsigned int)sub_5ADAC7(v9, *v28) )
        {
          v27 = sub_5A436C(v34, &v8);
          if ( v8 )
          {
            v4 = sub_5ADE9D(&v7, v27);
            if ( v27 != v4 )
            {
              *((_DWORD *)v28 + 2) = v7;
              *((_BYTE *)v28 + 12) = 1;
            }
          }
        }
      }
      v37 += 2;
    }
    if ( !(unsigned int)sub_5ADAC7(v9, "vendor_id") )
    {
      v26 = sub_5A436C(v34, &v6);
      if ( v6 )
        sub_5ADF4D(&src, v26, 13);
    }
  }
  sub_59FF54(v35);
  sub_5933A4((__int64)v5);
  v33 = &v10;
  v36 = &v10;
  v32 = (const char **)v22;
  while ( v36 != v32 )
  {
    v31 = v36;
    if ( *((_BYTE *)v36 + 12) != 1 )
      return 0;
    v36 += 2;
  }
  *(_BYTE *)(a2 + 6) = ++v11;
  *(_WORD *)(a2 + 2) = v20;
  *(_WORD *)(a2 + 4) = ((_WORD)v14 << 8) | v17;
  if ( (_BYTE)src )
    memcpy((void *)(a2 + 32), &src, 0xCu);
  return 1;
}
