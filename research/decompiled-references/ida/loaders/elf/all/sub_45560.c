__int64 __fastcall sub_45560(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r14
  unsigned __int64 v7; // r12
  unsigned __int16 v8; // bp
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r12
  _QWORD *v14; // rbp
  __int64 v15; // rsi
  bool v16; // cf
  __int64 v17; // rsi
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r10
  int v25; // eax
  _QWORD *v26; // rdx
  unsigned __int64 v27; // rcx
  __m128i v28; // xmm0
  struct _Unwind_Exception *v29; // rbp
  _QWORD *v30; // [rsp+0h] [rbp-58h]
  int v31; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+10h] [rbp-48h]

  v1 = 0;
  if ( *(_QWORD *)(a1 + 536) )
  {
    v4 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v5 = *(_QWORD *)(a1 + 480);
    v32 = v4 - v5;
    if ( qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 536) + v5, 0) != -1 )
    {
      v6 = *(_QWORD *)(a1 + 472);
      v7 = *(unsigned __int16 *)(a1 + 558);
      v31 = *(unsigned __int16 *)(a1 + 560);
      v8 = *(_WORD *)(a1 + 560);
      v9 = qlseek(v6, 0, 1);
      v10 = qlsize(v6) - v9;
      if ( ((v10 | v9) & 0x8000000000000000LL) != 0LL )
      {
        LODWORD(v11) = 0;
LABEL_31:
        sub_EB70((__int64)"%s is incorrect, maximum possible value is %u%s", "PHT entries", v11, "");
      }
      if ( v10 < v8 * v7 )
      {
        v11 = v10 / v7;
        goto LABEL_31;
      }
      sub_454D0((__int64 *)(a1 + 32), v8);
      *(_BYTE *)(a1 + 72) = 1;
      if ( !v31 )
      {
LABEL_47:
        v1 = 1;
        goto LABEL_29;
      }
      v30 = nullptr;
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        v15 = v13 * *(unsigned __int16 *)(a1 + 558);
        v16 = __CFADD__(*(_QWORD *)(a1 + 536), v15);
        v17 = *(_QWORD *)(a1 + 536) + v15;
        v18 = v16;
        if ( v16 || qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v17, 0) == -1 )
          break;
        if ( !*(_BYTE *)(a1 + 72) )
        {
          v29 = (struct _Unwind_Exception *)sub_30AE0();
          sub_A432(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480), v32);
          _Unwind_Resume(v29);
        }
        v14 = (_QWORD *)(v12 + *(_QWORD *)(a1 + 32));
        if ( (int)sub_396B0(a1, (__int64)v14, 4, 1) < 0
          || *(_BYTE *)(a1 + 617) && (int)sub_396B0(a1, (__int64)v14 + 4, 4, 1) < 0
          || (int)sub_396B0(a1, (__int64)(v14 + 1), *(int *)(a1 + 428), 1) < 0
          || (int)sub_396B0(a1, (__int64)(v14 + 2), *(int *)(a1 + 424), 1) < 0
          || (int)sub_396B0(a1, (__int64)(v14 + 3), *(int *)(a1 + 424), 1) < 0
          || (int)sub_396B0(a1, (__int64)(v14 + 4), *(int *)(a1 + 432), 1) < 0
          || (int)sub_396B0(a1, (__int64)(v14 + 5), *(int *)(a1 + 432), 1) < 0
          || !*(_BYTE *)(a1 + 617) && (int)sub_396B0(a1, (__int64)v14 + 4, 4, 1) < 0
          || (int)sub_396B0(a1, (__int64)(v14 + 6), *(int *)(a1 + 432), 1) < 0 )
        {
          v20 = (int)v13 - 1;
          if ( !(_DWORD)v13 )
            v20 = 0;
          sub_454D0((__int64 *)(a1 + 32), v20);
          break;
        }
        if ( *(_DWORD *)v14 == 1 )
        {
          sub_3BC40((_QWORD *)a1, v14);
          v19 = v14[2];
          if ( v19 < *(_QWORD *)(a1 + 56) )
            *(_QWORD *)(a1 + 56) = v19 & 0xFFFFFFFFFFFFF000LL;
        }
        else
        {
          if ( *(_DWORD *)v14 != 2 )
            v14 = v30;
          v30 = v14;
        }
        ++v13;
        v12 += 56;
        if ( v31 <= (int)v13 )
        {
          if ( v30 )
          {
            v21 = v30[5];
            v22 = *(_QWORD *)(a1 + 584);
            v23 = v30[2];
            if ( v30[4] >= v21 )
              v21 = v30[4];
            v24 = v21;
            if ( v22 )
            {
              v25 = 0;
              while ( 1 )
              {
                v26 = (_QWORD *)(*(_QWORD *)(a1 + 576) + 24 * v18);
                v27 = v26[2];
                if ( v23 >= v27 && v23 < v27 + v26[1] )
                  break;
                v18 = ++v25;
                if ( v25 >= v22 )
                  goto LABEL_45;
              }
              v28 = (__m128i)(*v26 + (unsigned __int64)(unsigned int)(v23 - v27));
            }
            else
            {
LABEL_45:
              v28 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
            }
            *(_QWORD *)(a1 + 16) = v24;
            *(_DWORD *)(a1 + 24) = -1;
            *(__m128i *)a1 = _mm_unpacklo_epi64(v28, (__m128i)v23);
          }
          goto LABEL_47;
        }
      }
    }
    v1 = 0;
LABEL_29:
    qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v32, 0);
  }
  return v1;
}

