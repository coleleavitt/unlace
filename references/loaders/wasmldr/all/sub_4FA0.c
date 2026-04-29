__int64 __fastcall sub_4FA0(__int64 a1, int *a2)
{
  int v2; // eax
  _DWORD *v4; // rax
  _DWORD *v5; // rax
  char *v6; // rax
  __int64 v7; // rax
  _DWORD *v8; // rax
  __int64 v9; // rax
  _WORD *v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  char *v17; // [rsp+0h] [rbp-38h] BYREF
  __m128i v18; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v2 = *a2;
  v19 = __readfsqword(0x28u);
  switch ( v2 )
  {
    case -64:
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v4 = (_DWORD *)qvector_reserve(a1, 0, 5, 1);
      *(_QWORD *)a1 = v4;
      *(_QWORD *)(a1 + 8) = 5;
      *v4 = 1684631414;
      *(_BYTE *)(*(_QWORD *)a1 + 4LL) = 0;
      break;
    case -32:
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v5 = (_DWORD *)qvector_reserve(a1, 0, 5, 1);
      *(_QWORD *)a1 = v5;
      *(_QWORD *)(a1 + 8) = 5;
      *v5 = 1668183398;
      *(_BYTE *)(*(_QWORD *)a1 + 4LL) = 0;
      break;
    case -21:
      v17 = nullptr;
      v18 = 0;
      v6 = (char *)qvector_reserve(&v17, 0, 6, 1);
      v17 = v6;
      v18.m128i_i64[0] = 6;
      *(_DWORD *)v6 = 1717924392;
      v6[4] = 32;
      v17[5] = 0;
      sub_4EE0((__int64 *)&v17, (__int64)"%u)", a2[1]);
      goto LABEL_3;
    case -17:
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v7 = qvector_reserve(a1, 0, 10, 1);
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(a1 + 8) = 10;
      *(_QWORD *)v7 = 0x65726E7265747865LL;
      *(_BYTE *)(v7 + 8) = 102;
      *(_BYTE *)(*(_QWORD *)a1 + 9LL) = 0;
      break;
    case -16:
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v8 = (_DWORD *)qvector_reserve(a1, 0, 8, 1);
      *(_QWORD *)a1 = v8;
      *(_QWORD *)(a1 + 8) = 8;
      *v8 = 1668183398;
      *(_DWORD *)((char *)v8 + 3) = 1717924451;
      *(_BYTE *)(*(_QWORD *)a1 + 7LL) = 0;
      break;
    case -7:
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v9 = qvector_reserve(a1, 0, 4, 1);
      *(_QWORD *)a1 = v9;
      *(_QWORD *)(a1 + 8) = 4;
      *(_WORD *)v9 = 12649;
      *(_BYTE *)(v9 + 2) = 54;
      *(_BYTE *)(*(_QWORD *)a1 + 3LL) = 0;
      break;
    case -6:
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v10 = (_WORD *)qvector_reserve(a1, 0, 3, 1);
      *(_QWORD *)a1 = v10;
      *(_QWORD *)(a1 + 8) = 3;
      *v10 = 14441;
      *(_BYTE *)(*(_QWORD *)a1 + 2LL) = 0;
      break;
    case -5:
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v11 = (_DWORD *)qvector_reserve(a1, 0, 5, 1);
      *(_QWORD *)a1 = v11;
      *(_QWORD *)(a1 + 8) = 5;
      *v11 = 942813558;
      *(_BYTE *)(*(_QWORD *)a1 + 4LL) = 0;
      break;
    case -4:
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v12 = qvector_reserve(a1, 0, 4, 1);
      *(_QWORD *)a1 = v12;
      *(_QWORD *)(a1 + 8) = 4;
      *(_WORD *)v12 = 13926;
      *(_BYTE *)(v12 + 2) = 52;
      *(_BYTE *)(*(_QWORD *)a1 + 3LL) = 0;
      break;
    case -3:
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v13 = qvector_reserve(a1, 0, 4, 1);
      *(_QWORD *)a1 = v13;
      *(_QWORD *)(a1 + 8) = 4;
      *(_WORD *)v13 = 13158;
      *(_BYTE *)(v13 + 2) = 50;
      *(_BYTE *)(*(_QWORD *)a1 + 3LL) = 0;
      break;
    case -2:
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v14 = qvector_reserve(a1, 0, 4, 1);
      *(_QWORD *)a1 = v14;
      *(_QWORD *)(a1 + 8) = 4;
      *(_WORD *)v14 = 13929;
      *(_BYTE *)(v14 + 2) = 52;
      *(_BYTE *)(*(_QWORD *)a1 + 3LL) = 0;
      break;
    case -1:
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v15 = qvector_reserve(a1, 0, 4, 1);
      *(_QWORD *)a1 = v15;
      *(_QWORD *)(a1 + 8) = 4;
      *(_WORD *)v15 = 13161;
      *(_BYTE *)(v15 + 2) = 50;
      *(_BYTE *)(*(_QWORD *)a1 + 3LL) = 0;
      break;
    case 0:
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v16 = qvector_reserve(a1, 0, 4, 1);
      *(_QWORD *)a1 = v16;
      *(_QWORD *)(a1 + 8) = 4;
      *(_WORD *)v16 = 28257;
      *(_BYTE *)(v16 + 2) = 121;
      *(_BYTE *)(*(_QWORD *)a1 + 3LL) = 0;
      break;
    default:
      v17 = nullptr;
      v18 = 0;
      v17 = (char *)qvector_reserve(&v17, 0, 13, 1);
      v18.m128i_i64[0] = 13;
      strcpy(v17, "<type_index[");
      sub_4EE0((__int64 *)&v17, (__int64)"%u]", a2[1]);
LABEL_3:
      *(_QWORD *)a1 = v17;
      *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v18);
      break;
  }
  return a1;
}
