_QWORD *__fastcall sub_217FB30(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        void (__fastcall *a4)(__int64, unsigned __int64, bool),
        __int64 a5,
        __int64 a6,
        void (__fastcall *a7)(__int64, _QWORD, __int64, _QWORD, __int64, __int64, __int64, unsigned __int64, __int64),
        __int64 a8)
{
  __int64 v10; // rax
  char v11; // di
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  unsigned int v15; // r15d
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rax
  char v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-D0h]
  unsigned int v25; // [rsp+10h] [rbp-C8h]
  char v26; // [rsp+14h] [rbp-C4h]
  unsigned __int8 v27; // [rsp+18h] [rbp-C0h]
  __int64 v28; // [rsp+38h] [rbp-A0h]
  char v29; // [rsp+43h] [rbp-95h]
  char v30; // [rsp+43h] [rbp-95h]
  char v31; // [rsp+43h] [rbp-95h]
  __int64 v33; // [rsp+50h] [rbp-88h] BYREF
  __int64 v34; // [rsp+58h] [rbp-80h] BYREF
  _QWORD v35[2]; // [rsp+60h] [rbp-78h] BYREF
  __int16 v36; // [rsp+70h] [rbp-68h]
  unsigned __int64 v37; // [rsp+88h] [rbp-50h]
  __int64 v38; // [rsp+90h] [rbp-48h]

  v35[0] = a2;
  v35[1] = a3;
  v36 = 2049;
  v33 = 0;
  v34 = 0;
  v10 = sub_2219FE0(v35, &v33, &v34);
  v11 = v10;
  v12 = v10;
  v27 = v10;
  v13 = v10 & 4;
  v14 = v12 >> 3;
  v28 = v13 == 0 ? 32LL : 16LL;
  v26 = 3 - (v13 == 0);
  a4(a5, v14, v13 != 0);
  if ( v14 )
  {
    v15 = 0;
    v16 = 0;
    v25 = 0;
    v24 = 0;
    do
    {
      v19 = sub_2219D60(v35, &v33, &v34);
      v16 += (int)(unsigned __int8)v19 >> v26;
      if ( v19 < 0 )
      {
        v31 = v19;
        v23 = sub_2219FE0(v35, &v33, &v34);
        v19 = v31;
        v16 = (v23 << (7 - v26)) + v16 - v28;
      }
      if ( (v19 & 1) != 0 )
      {
        v29 = v19;
        v21 = sub_221A220(v35, &v33, &v34);
        v19 = v29;
        v25 += v21;
        if ( (v29 & 2) == 0 )
        {
LABEL_4:
          v17 = v27 & (unsigned __int8)v19 & 4;
          if ( !(_DWORD)v17 )
            goto LABEL_5;
          goto LABEL_12;
        }
      }
      else if ( (v19 & 2) == 0 )
      {
        goto LABEL_4;
      }
      v30 = v19;
      v15 += sub_221A220(v35, &v33, &v34);
      v17 = v27 & (unsigned __int8)v30 & 4;
      if ( (v27 & (unsigned __int8)v30 & 4) == 0 )
      {
LABEL_5:
        v18 = v34;
        if ( v34 )
          goto LABEL_13;
        goto LABEL_6;
      }
LABEL_12:
      v24 += sub_221A220(v35, &v33, &v34);
      v18 = v34;
      if ( v34 )
        goto LABEL_13;
LABEL_6:
      v37 = __PAIR64__(v15, v25);
      v38 = v24;
      a7(a8, v25, v24, v11 & 3, v17, v20, v16 << (v11 & 3), __PAIR64__(v15, v25), v24);
      --v14;
    }
    while ( v14 );
  }
  v18 = v34;
LABEL_13:
  *a1 = v18;
  return a1;
}
