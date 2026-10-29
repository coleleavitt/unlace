_QWORD *__fastcall sub_9BC090(__int64 **a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rdi
  __int64 v8; // rdx
  _QWORD *result; // rax
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rdi
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rdi
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // r12
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rdi
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  __int64 *v31; // rdi
  __int64 v32; // rax
  _QWORD *v33; // rbx
  __int64 *v34; // rdi
  __int64 v35; // r12
  __int64 v36; // rdx
  _QWORD *v37; // [rsp+8h] [rbp-20h]

  switch ( *(_BYTE *)(a2 + 2) >> 3 )
  {
    case 4:
      v22 = *(_QWORD *)(a2 + 16);
      if ( (*(_WORD *)v22 & 0x1FF) != 0x47 )
        return sub_9BB7E0((__int64)a1, v22, a3, a4);
      v37 = a3;
      if ( !(unsigned __int8)sub_B4F1E0(*(_QWORD *)(v22 + 16)) )
      {
        v22 = *(_QWORD *)(a2 + 16);
        a3 = v37;
        return sub_9BB7E0((__int64)a1, v22, a3, a4);
      }
      v31 = *a1;
      v32 = **a1;
      v31[10] += 16;
      v33 = (_QWORD *)((v32 + 15) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v31[1] >= (unsigned __int64)(v33 + 2) && v32 )
        *v31 = (__int64)(v33 + 2);
      else
        v33 = (_QWORD *)sub_962430((__int64)v31, 16, 16, 4, v23, v24);
      *v33 = 2;
      v34 = *a1;
      v33[1] = 0;
      v35 = *(_QWORD *)(v22 + 16);
      v36 = *v34;
      v34[10] += 72;
      result = (_QWORD *)((v36 + 15) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v34[1] >= (unsigned __int64)(result + 9) && v36 )
        *v34 = (__int64)(result + 9);
      else
        result = (_QWORD *)sub_962430((__int64)v34, 72, 72, 4, v23, v24);
      *result = 12;
      result[1] = 0;
      result[2] = v33;
      *((_BYTE *)result + 56) = 0;
      result[8] = v35;
      return result;
    case 5:
    case 6:
      return sub_9BB7E0((__int64)a1, *(_QWORD *)(a2 + 16), a3, a4);
    case 7:
      v25 = sub_9BB7E0((__int64)a1, *(_QWORD *)(a2 + 16), a3, a4);
      v28 = *a1;
      v29 = v25;
      v30 = **a1;
      v28[10] += 24;
      result = (_QWORD *)((v30 + 15) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v28[1] >= (unsigned __int64)(result + 3) && v30 )
        *v28 = (__int64)(result + 3);
      else
        result = (_QWORD *)sub_962430((__int64)v28, 24, 24, 4, v26, v27);
      result[2] = v29;
      *result = 19;
      result[1] = 0;
      return result;
    case 8:
      v10 = sub_9BB7E0((__int64)a1, *(_QWORD *)(a2 + 16), a3, a4);
      v13 = *a1;
      v14 = v10;
      v15 = **a1;
      v13[10] += 24;
      result = (_QWORD *)((v15 + 15) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v13[1] >= (unsigned __int64)(result + 3) && v15 )
        *v13 = (__int64)(result + 3);
      else
        result = (_QWORD *)sub_962430((__int64)v13, 24, 24, 4, v11, v12);
      result[2] = v14;
      *result = 65555;
      result[1] = 0;
      return result;
    case 9:
      v16 = sub_9BB7E0((__int64)a1, *(_QWORD *)(a2 + 16), a3, a4);
      v19 = *a1;
      v20 = v16;
      v21 = **a1;
      v19[10] += 24;
      result = (_QWORD *)((v21 + 15) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v19[1] >= (unsigned __int64)(result + 3) && v21 )
        *v19 = (__int64)(result + 3);
      else
        result = (_QWORD *)sub_962430((__int64)v19, 24, 24, 4, v17, v18);
      result[2] = v20;
      *result = 131091;
      result[1] = 0;
      return result;
    default:
      v7 = *a1;
      v8 = **a1;
      v7[10] += 24;
      result = (_QWORD *)((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v7[1] >= (unsigned __int64)(result + 3) && v8 )
        *v7 = (__int64)(result + 3);
      else
        result = (_QWORD *)sub_962430((__int64)v7, 24, 24, 4, a5, a6);
      *result = 1;
      result[1] = 0;
      result[2] = a2;
      return result;
  }
}

