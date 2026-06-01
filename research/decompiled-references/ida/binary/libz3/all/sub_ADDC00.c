void __fastcall sub_ADDC00(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // rbp
  __int64 v3; // r13
  int v4; // r12d
  __m128i *v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __m128i *v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // r15d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18[11]; // [rsp+10h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 1032);
  if ( !v2 )
    return;
  v3 = v2 + 16LL * *(unsigned int *)(v2 - 4);
  if ( v3 == v2 )
    goto LABEL_18;
  v4 = 0;
  while ( !(unsigned __int8)sub_8E6FA0(*(_QWORD *)(a1 + 8)) )
  {
    v11 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v11 + 104) < *(_DWORD *)(a1 + 32) )
    {
      v17 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v17 + 9328) = "maximum number of quantifier instances was reached";
      if ( !*(_DWORD *)(v17 + 8632) )
        *(_DWORD *)(v17 + 8632) = 1;
      break;
    }
    if ( *(double *)(a1 + 992) >= *(float *)(v2 + 8)
      || *(_BYTE *)(v11 + 101)
      && (unsigned __int8)sub_BDC380(
                            a1 + 40,
                            *(_QWORD *)(**(_QWORD **)v2 + 24LL),
                            *(unsigned int *)(*(_QWORD *)v2 + 24LL),
                            *(_QWORD *)(*(_QWORD *)v2 + 32LL)) )
    {
      sub_ADC860(a1, (__int64 **)v2);
      v10 = v4 + 1;
      if ( v4 == 101 )
        goto LABEL_15;
LABEL_10:
      v2 += 16;
      v4 = v10;
      if ( v3 == v2 )
        break;
    }
    else
    {
      v5 = *(__m128i **)(a1 + 1040);
      if ( v5 )
      {
        v6 = v5[-1].m128i_u32[3];
        if ( v6 == v5[-1].m128i_i32[2] )
        {
          v12 = (3 * v6 + 1) >> 1;
          v13 = 16 * v12 + 8;
          if ( 16 * v6 + 8 >= (unsigned int)v13 || v6 >= v12 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v18, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v18);
            sub_233E40((__int64)v18);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v14 = (unsigned int *)sub_186B300(&v5[-1].m128i_u64[1], v13);
          v15 = v14[1];
          v5 = (__m128i *)(v14 + 2);
          *v14 = v12;
          *(_QWORD *)(a1 + 1040) = v14 + 2;
          LODWORD(v14) = v15;
          v9 = &v5[v15];
          v8 = (_DWORD)v14 + 1;
        }
        else
        {
          v7 = v6;
          v8 = v6 + 1;
          v9 = &v5[v7];
        }
      }
      else
      {
        v16 = (_QWORD *)sub_186B270(0x28u);
        v5 = (__m128i *)(v16 + 1);
        *v16 = 2;
        v8 = 1;
        *(_QWORD *)(a1 + 1040) = v5;
        v9 = v5;
      }
      *v9 = _mm_loadu_si128((const __m128i *)v2);
      v5[-1].m128i_i32[3] = v8;
      v10 = v4 + 1;
      if ( v4 != 101 )
        goto LABEL_10;
LABEL_15:
      if ( (unsigned __int8)sub_8EAFC0(*(_QWORD *)(a1 + 8)) )
        break;
      v2 += 16;
      v4 = 0;
      if ( v3 == v2 )
        break;
    }
  }
  v2 = *(_QWORD *)(a1 + 1032);
  if ( v2 )
LABEL_18:
    *(_DWORD *)(v2 - 4) = 0;
}

