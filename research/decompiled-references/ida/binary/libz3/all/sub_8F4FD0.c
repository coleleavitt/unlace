__int64 __fastcall sub_8F4FD0(__int64 a1, __m128i a2, __m128 a3)
{
  __int64 v3; // rax
  unsigned int i; // r14d
  __int64 v6; // rdi
  char v7; // dl
  unsigned int v9; // ebp
  unsigned int v10; // r13d
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // r12
  char v16; // dl
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  unsigned int *v22; // r12
  unsigned int *v23; // r13
  __int64 v24; // rax
  _QWORD *v25; // rsi
  _QWORD *v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int32 v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __m128i v33; // [rsp+0h] [rbp-58h] BYREF
  __int32 v34; // [rsp+14h] [rbp-44h]
  __int64 v35; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 9024);
  if ( v3 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= *(_DWORD *)(v3 - 4) )
        goto LABEL_8;
      v6 = *(_QWORD *)(a1 + 104);
      if ( *(_DWORD *)(a1 + 8632) == 1 && !*(_BYTE *)(v6 + 4) )
      {
        *(_DWORD *)(a1 + 10308) = 3;
LABEL_8:
        *(_DWORD *)(v3 - 4) = 0;
        return 1;
      }
      v7 = sub_18290A0(v6);
      v3 = *(_QWORD *)(a1 + 9024);
      if ( !v7 )
      {
        *(_DWORD *)(a1 + 10308) = 3;
        if ( v3 )
          goto LABEL_8;
        return 1;
      }
      v9 = *(_DWORD *)(v3 + 4LL * i);
      v10 = v9 >> 1;
      v11 = v9 & 0xFFFFFFFE;
      v12 = v9 & 0xFFFFFFFE;
      v13 = v9 >> 1;
      v14 = (unsigned int)*(char *)(*(_QWORD *)(a1 + 8848) + v12);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8872) + 16 * v13 + 11) & 0x40) != 0 )
      {
        v35 = v9 & 0xFFFFFFFE;
        LOBYTE(v34) = v14;
        v33.m128i_i32[0] = v9 & 0xFFFFFFFE;
        sub_8F4D60(a1, v10, *(double *)a2.m128i_i64, a3);
        v12 = v35;
        v14 = (unsigned int)(char)v34;
        v11 = v33.m128i_i32[0];
      }
      if ( qword_1C7EC50 != *(_QWORD *)(a1 + 8984) || *(_BYTE *)(a1 + 2416) )
        return 0;
      v15 = *(_QWORD *)(a1 + 8872) + 16 * v13;
      v16 = *(_BYTE *)(v15 + 11);
      if ( (v16 & 0x10) == 0 )
        break;
      v19 = *(_QWORD *)(a1 + 8840);
      v20 = *(_QWORD *)(a1 + 104);
      v34 = v14;
      v33.m128i_i32[0] = v11;
      v21 = *(_QWORD *)(v19 + 8 * v13);
      v22 = *(unsigned int **)(v21 + 32);
      v23 = *(unsigned int **)(v21 + 40);
      if ( (unsigned __int8)sub_15D2CB0(v20, v22) )
        goto LABEL_21;
      v24 = *(_QWORD *)(a1 + 8656);
      v25 = *(_QWORD **)(v24 + 8LL * *v22);
      v26 = *(_QWORD **)(v24 + 8LL * *v23);
      if ( v34 == 1 )
      {
        sub_8F4690(a1, v25, v26, 8LL * v9 + 2, *(double *)a2.m128i_i64, a3);
LABEL_21:
        if ( *(_QWORD *)(a1 + 8984) != qword_1C7EC50 || *(_BYTE *)(a1 + 2416) )
          return 0;
        goto LABEL_23;
      }
      if ( (unsigned __int8)sub_8EDC90(a1, (__int64)v25, (__int64)v26) )
        goto LABEL_21;
      if ( *(_QWORD *)(a1 + 8984) != qword_1C7EC50 )
        return 0;
      if ( *(_BYTE *)(a1 + 2416) )
        return 0;
      v27 = *(_QWORD *)(a1 + 8656);
      v34 = v33.m128i_i32[0];
      v33 = (__m128i)_mm_loadh_ps((const double *)(v27 + 8LL * *v23));
      v28 = sub_180C100(a1 + 8400, 32);
      a2 = _mm_load_si128(&v33);
      *(_QWORD *)(v28 + 8) = 2;
      v29 = v34;
      *(__m128i *)(v28 + 16) = a2;
      *(_QWORD *)v28 = off_1C57780;
      v30 = qword_1C7EC50;
      if ( *(_QWORD *)(a1 + 8984) != qword_1C7EC50 )
        return 0;
      if ( *(_BYTE *)(a1 + 2416) )
        return 0;
      v31 = v28 | 3;
      *(_QWORD *)(a1 + 8984) = v31;
      *(_DWORD *)(a1 + 8992) = v29 + 1;
      if ( v30 != v31 )
        return 0;
LABEL_23:
      v3 = *(_QWORD *)(a1 + 9024);
      if ( !v3 )
        return 1;
    }
    v17 = *(unsigned __int8 *)(v15 + 15);
    if ( (_BYTE)v17 )
    {
      v18 = *(_QWORD *)(a1 + 8672);
      if ( v18 )
      {
        if ( (unsigned int)(unsigned __int8)v17 >= *(_DWORD *)(v18 - 4) )
          v18 = 0;
        else
          v18 = *(_QWORD *)(v18 + 8 * v17);
      }
      (*(void (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)v18 + 48LL))(v18, v10, (_DWORD)v14 == 1);
    }
    else
    {
      if ( v16 >= 0 )
        goto LABEL_23;
      v32 = *(_QWORD *)(a1 + 8848);
      if ( *(_BYTE *)(v32 + v12) != 1 )
        goto LABEL_23;
      sub_953160(*(_QWORD *)(a1 + 7472), *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8 * v13), v32, v17, v14);
    }
    goto LABEL_21;
  }
  return 1;
}

