unsigned __int64 __fastcall sub_1AA2840(
        _QWORD *a1,
        char a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 *a7,
        __int64 a8,
        char a9,
        unsigned int a10,
        unsigned int a11,
        void *a12,
        __int64 a13,
        unsigned __int64 a14)
{
  _QWORD *v17; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v19; // r13
  _QWORD *v20; // rax
  unsigned __int64 v21; // r13
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  unsigned __int64 v25; // r13
  _QWORD *v26; // rax
  unsigned __int64 v27; // r15
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  unsigned __int64 v30; // r13
  _QWORD *v31; // rax
  unsigned __int64 v32; // r15
  _QWORD *v33; // rax
  __int64 v34; // r15
  _QWORD *v35; // rax
  __int64 v36; // r9
  unsigned __int64 v37; // rax
  __int64 v38; // r12
  __m128i *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // [rsp+10h] [rbp-D8h]
  char v49; // [rsp+10h] [rbp-D8h]
  _BYTE v52[200]; // [rsp+20h] [rbp-C8h] BYREF

  switch ( a2 )
  {
    case 0:
    case 1:
    case 2:
      v19 = a14 & 0xFFFFFFFFFFFFFFFELL;
      if ( a14 <= 1 )
        v19 = 0;
      v20 = (_QWORD *)sub_168B6C0((__int64)a1);
      result = sub_EF4970(v20, a2, a3, a4, a11, v19, a12, a13);
      break;
    case 3:
      v21 = a14 & 0xFFFFFFFFFFFFFFFELL;
      if ( a14 <= 1 )
        v21 = 0;
      v22 = (_QWORD *)sub_168B6C0((__int64)a1);
      result = sub_EF45A0(v22, a3, a4, a11, a12, a13, v21);
      break;
    case 4:
      v23 = (_QWORD *)sub_168B6C0((__int64)a1);
      result = sub_EF4110(v23, a3, a4, a11, a12, a13);
      break;
    case 5:
      v24 = (_QWORD *)sub_168B6C0((__int64)a1);
      result = sub_EF4350(v24, a3, a4, a11, a12, a13);
      break;
    case 6:
      v25 = a14 & 0xFFFFFFFFFFFFFFFELL;
      if ( a14 <= 1 )
        v25 = 0;
      v26 = (_QWORD *)sub_168B6C0((__int64)a1);
      result = sub_EF4470(v26, a3, a4, a11, a12, a13, v25);
      break;
    case 7:
      v27 = 0;
      v49 = *((_BYTE *)a1 + 8);
      if ( a14 > 1 )
        v27 = a14 & 0xFFFFFFFFFFFFFFFELL;
      v28 = (_QWORD *)sub_168B6C0((__int64)a1);
      result = sub_EF4820(v28, v49, a3, a4, a11, v27, a12, a13);
      break;
    case 8:
      v29 = (_QWORD *)sub_168B6C0((__int64)a1);
      result = sub_EF4C10(v29, a3, a4, a5, a6, a10, a7, a8, a11);
      break;
    case 9:
    case 10:
    case 11:
      v30 = a14 & 0xFFFFFFFFFFFFFFFELL;
      if ( a14 <= 1 )
        v30 = 0;
      v31 = (_QWORD *)sub_168B6C0((__int64)a1);
      result = sub_EF46D0(v31, a2, a3, a4, a11, v30, a12, a13);
      break;
    case 12:
      v32 = 0;
      if ( a14 > 1 )
        v32 = a14 & 0xFFFFFFFFFFFFFFFELL;
      v33 = (_QWORD *)sub_168B6C0((__int64)a1);
      result = sub_EF4AC0(v33, a3, a4, a9, a11, v32, a12, a13);
      break;
    case 13:
      if ( a13 )
      {
        v34 = sub_168B6F0((__int64)a1);
        v35 = (_QWORD *)sub_168B6C0((__int64)a1);
        v37 = sub_BB0D70(v35, v34, a3, a4, a11, v36, a12, a13);
        *(_BYTE *)(v37 + 29) &= 0x9Fu;
        v38 = v37;
        v39 = (__m128i *)sub_168B6F0((__int64)a1);
        sub_B94AD0(v39, v38, v40, v41, v42, v43);
      }
      else
      {
        sub_168B9F0((__int64)v52, a1, a11, 0xB4Au, 0);
        v38 = 0;
        sub_15F7200(v52);
      }
      result = sub_1C36280(*a1, v38, a3, a11);
      break;
    case 14:
      v44 = (_QWORD *)sub_168B6C0((__int64)a1);
      result = sub_EF4230(v44, a3, a4, a11, a12, a13);
      break;
    case 15:
      v45 = (_QWORD *)sub_168B6C0((__int64)a1);
      result = sub_EF3DB0(v45, a3, a4, a11, a12, a13);
      break;
    case 16:
      v46 = (_QWORD *)sub_168B6C0((__int64)a1);
      result = sub_EF3ED0(v46, a3, a4, a11, a12, a13);
      break;
    case 17:
      v47 = (_QWORD *)sub_168B6C0((__int64)a1);
      result = sub_EF3FF0(v47, a3, a4, a11, a12, a13);
      break;
    case 18:
      v48 = *a7;
      v17 = (_QWORD *)sub_168B6C0((__int64)a1);
      result = sub_EF2EA0(v17, a3, a4, a5, v48, a6, a7 + 1, a8 - 1, a10, a11, a12, a13);
      break;
    case 19:
    case 20:
      result = 1;
      break;
  }
  return result;
}
