_QWORD *__fastcall sub_217FDB0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        void (__fastcall *a4)(__int64, unsigned __int64, bool),
        __int64 a5,
        __int64 a6,
        void (__fastcall *a7)(__int64, __int64, __int64),
        __int64 a8)
{
  __int64 v10; // rax
  char v11; // di
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  int v15; // ebx
  __int64 v16; // rax
  char v17; // r15
  __int64 v19; // [rsp+0h] [rbp-B8h]
  __int64 v20; // [rsp+8h] [rbp-B0h]
  unsigned int v21; // [rsp+14h] [rbp-A4h]
  unsigned __int8 v22; // [rsp+18h] [rbp-A0h]
  int v23; // [rsp+38h] [rbp-80h]
  char v24; // [rsp+40h] [rbp-78h]
  __int64 v26; // [rsp+50h] [rbp-68h] BYREF
  __int64 v27; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v28[2]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v29; // [rsp+70h] [rbp-48h]

  v28[0] = a2;
  v28[1] = a3;
  v29 = 2049;
  v26 = 0;
  v27 = 0;
  v10 = sub_2219FE0(v28, &v26, &v27);
  v11 = v10;
  v12 = v10;
  v22 = v10;
  v13 = v10 & 4;
  v14 = v12 >> 3;
  v23 = v13 == 0 ? 32 : 16;
  v24 = 3 - (v13 == 0);
  a4(a5, v14, v13 != 0);
  if ( v14 )
  {
    v15 = 0;
    v21 = 0;
    LODWORD(v20) = 0;
    LODWORD(v19) = 0;
    do
    {
      v17 = sub_2219D60(v28, &v26, &v27);
      v15 += (int)(unsigned __int8)v17 >> v24;
      if ( v17 < 0 )
        v15 += ((unsigned int)sub_2219FE0(v28, &v26, &v27) << (7 - v24)) - v23;
      if ( (v17 & 1) != 0 )
      {
        LODWORD(v20) = sub_221A220(v28, &v26, &v27) + v20;
        if ( (v17 & 2) == 0 )
        {
LABEL_4:
          if ( ((unsigned __int8)v17 & v22 & 4) == 0 )
            goto LABEL_5;
          goto LABEL_12;
        }
      }
      else if ( (v17 & 2) == 0 )
      {
        goto LABEL_4;
      }
      v21 += sub_221A220(v28, &v26, &v27);
      if ( ((unsigned __int8)v17 & v22 & 4) == 0 )
      {
LABEL_5:
        v16 = v27;
        if ( v27 )
          goto LABEL_13;
        goto LABEL_6;
      }
LABEL_12:
      LODWORD(v19) = sub_221A220(v28, &v26, &v27) + v19;
      v16 = v27;
      if ( v27 )
        goto LABEL_13;
LABEL_6:
      a7(a8, (v20 << 32) | (unsigned int)(v15 << (v11 & 3)), (v19 << 32) | v21);
      --v14;
    }
    while ( v14 );
  }
  v16 = v27;
LABEL_13:
  *a1 = v16;
  return a1;
}
