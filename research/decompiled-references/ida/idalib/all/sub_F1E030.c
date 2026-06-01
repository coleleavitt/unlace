void __fastcall sub_F1E030(__int64 a1, const __m128i *a2, __m128i *a3, unsigned __int8 a4, __int64 a5, double a6)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v11; // rax
  char *v12; // rdi
  _BYTE *v13; // rax
  __int64 v14; // r13
  unsigned int v15; // r14d
  __int64 v16; // rbp
  _WORD *v17; // rdx
  void *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r13
  _QWORD *v21; // rbp
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  _BYTE *v26; // rax
  __int64 v27; // rdi
  int v28; // r12d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  bool v33; // al
  _BYTE *v34; // rax
  unsigned __int8 v35; // [rsp+0h] [rbp-8Ch]
  __int64 v36; // [rsp+Ch] [rbp-80h] BYREF
  __m128i v37; // [rsp+14h] [rbp-78h] BYREF
  __m128i v38; // [rsp+24h] [rbp-68h] BYREF
  __int16 v39; // [rsp+44h] [rbp-48h]
  __int64 v40; // [rsp+5Ch] [rbp-30h]
  __int64 v41; // [rsp+64h] [rbp-28h]
  __int64 v42; // [rsp+6Ch] [rbp-20h]

  v9 = *(_DWORD *)a1 & 0x7FFFFFFF;
  v42 = v8;
  v41 = v7;
  v40 = v6;
  switch ( v9 )
  {
    case 0LL:
      v18 = (void *)a3[2].m128i_i64[0];
      if ( a3[1].m128i_i64[1] - (__int64)v18 > 9uLL )
      {
        qmemcpy(v18, "(no value)", 10);
        a3[2].m128i_i64[0] += 10;
      }
      else
      {
        sub_227BF10(a3, "(no value)", 10);
      }
      return;
    case 1LL:
      v25 = *(_QWORD *)(a1 + 8);
      v37 = _mm_loadu_si128(a2);
      v36 = v25;
      v37.m128i_i8[2] |= 8u;
      v39 = 257;
      sub_F74830(&v36, a3, &v37, &v38, 0);
      return;
    case 2LL:
      v20 = *(_QWORD *)(a1 + 16);
      v21 = (_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v22 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v21 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( v22 != 48 )
      {
        v27 = *(_QWORD *)(v20 + 48);
        if ( v22 == 42 )
        {
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
                               - 2) > 4u )
            goto LABEL_34;
          v28 = sub_F1A510(v27, (__int64)a2);
          v32 = sub_F68450(*v21, a2, v29, v30, v31);
          v33 = v28 == (unsigned int)sub_F1A510(v32, (__int64)a2);
LABEL_30:
          if ( !v33 )
          {
LABEL_31:
            sub_B76F90((_QWORD *)v20, a3);
            return;
          }
LABEL_34:
          v34 = (_BYTE *)a3[2].m128i_i64[0];
          if ( (_BYTE *)a3[1].m128i_i64[1] == v34 )
          {
            sub_227BF10(a3, "&", 1);
          }
          else
          {
            *v34 = 38;
            ++a3[2].m128i_i64[0];
          }
          goto LABEL_31;
        }
LABEL_32:
        v33 = v22 == 33;
        goto LABEL_30;
      }
      if ( (*(_BYTE *)(v20 + 28) & 0x7F) != 0x1E )
        goto LABEL_32;
      v23 = *(_QWORD *)(*(_QWORD *)(v20 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_QWORD *)(v23 + 8) & 7LL | (*(__int64 *)(v23 + 8) >> 3) & 1 )
        v23 = sub_F64F00(*(_QWORD *)(v20 + 48));
      v39 = 257;
      v37.m128i_i64[0] = v23 & 0xFFFFFFFFFFFFFFF0LL;
      sub_F74830(&v37, a3, a2, &v38, 0);
      sub_BC0120(v20, a3->m128i_i8, (__int64)a2, a6);
      return;
    case 3LL:
      v24 = a3[2].m128i_i64[0];
      if ( (unsigned __int64)(a3[1].m128i_i64[1] - v24) > 6 )
      {
        *(_DWORD *)v24 = 1819047278;
        *(_WORD *)(v24 + 4) = 29808;
        *(_BYTE *)(v24 + 6) = 114;
        a3[2].m128i_i64[0] += 7;
      }
      else
      {
        sub_227BF10(a3, "nullptr", 7);
      }
      return;
    case 4LL:
      sub_F1A560(a1, a3, (__int64)a2, a4, a5, a6);
      return;
    case 5LL:
      sub_A51C30(*(_DWORD **)(a1 + 8), a3->m128i_i8, (__int64)a2, *(_QWORD *)(a1 + 16), 0, a6);
      return;
    case 6LL:
      sub_F22A90(&v38, *(_QWORD *)(a1 + 8));
      sub_F235E0(&v38, a3, a2, 1);
      return;
    case 7LL:
      sub_F22A90(&v38, *(_QWORD *)(a1 + 8));
      sub_F235E0(&v38, a3, a2, 1);
      v19 = a3[2].m128i_i64[0];
      if ( (unsigned __int64)(a3[1].m128i_i64[1] - v19) > 2 )
      {
        *(_BYTE *)(v19 + 2) = 46;
        *(_WORD *)v19 = 11822;
        a3[2].m128i_i64[0] += 3;
      }
      else
      {
        sub_227BF10(a3, "...", 3);
      }
      return;
    case 8LL:
      v11 = *(_QWORD *)a1;
      v12 = *(char **)(a1 + 8);
      v38 = _mm_loadu_si128(a2);
      v38.m128i_i8[5] = BYTE4(v11) & 1 | v38.m128i_i8[5] & 0xFE;
      sub_F07C00(v12, (__int64)a3, 0, &v38, 0, 0, "\n", 1);
      return;
    case 9LL:
      v13 = (_BYTE *)a3[2].m128i_i64[0];
      if ( (_BYTE *)a3[1].m128i_i64[1] == v13 )
      {
        v35 = a4;
        sub_227BF10(a3, "<", 1);
        a4 = v35;
      }
      else
      {
        *v13 = 60;
        ++a3[2].m128i_i64[0];
      }
      v14 = *(_QWORD *)(a1 + 8);
      v15 = a4;
      v16 = v14 + 24LL * *(unsigned int *)(a1 + 4);
      if ( v16 != v14 )
      {
        while ( 1 )
        {
          sub_F1E030(v14, a2, a3, v15);
          v14 += 24;
          if ( v14 == v16 )
            break;
          v17 = (_WORD *)a3[2].m128i_i64[0];
          if ( a3[1].m128i_i64[1] - (__int64)v17 > 1uLL )
          {
            *v17 = 8236;
            a3[2].m128i_i64[0] += 2;
          }
          else
          {
            sub_227BF10(a3, ", ", 2);
          }
        }
      }
      v26 = (_BYTE *)a3[2].m128i_i64[0];
      if ( (_BYTE *)a3[1].m128i_i64[1] == v26 )
      {
        sub_227BF10(a3, ">", 1);
      }
      else
      {
        *v26 = 62;
        ++a3[2].m128i_i64[0];
      }
      return;
    default:
      return;
  }
}
