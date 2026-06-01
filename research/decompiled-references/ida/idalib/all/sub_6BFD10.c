__int64 __fastcall sub_6BFD10(__int64 a1, __int64 a2, double a3, __m128 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 *v8; // rbp
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r12
  unsigned __int64 v14; // rsi
  __int64 v15; // r14
  unsigned __int64 v16; // r13
  __int64 v17; // rdx
  unsigned __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // rax
  const char *v22; // rsi
  const char *v23; // rdi
  __int64 v24; // r12
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rax
  __int64 v27; // r13
  unsigned __int64 v28; // r12
  __int64 v29; // rdx
  unsigned __int64 v30; // r14
  __int64 v31; // r13
  unsigned __int64 v32; // r12
  __int64 v33; // rdx
  unsigned __int64 v34; // r14
  __int64 v35; // r12
  __int64 i; // r14
  const char *v37; // rsi
  const char *v38; // rsi
  unsigned __int64 v39; // rax
  const char *v40; // rsi
  size_t v41; // r15
  void *v42; // rax
  const void *v43; // rsi
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v45; // [rsp+18h] [rbp-50h]
  unsigned __int64 v46; // [rsp+28h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  if ( !*(_DWORD *)a1 || (*(_BYTE *)(a1 + 65) & 4) == 0 )
    return 0;
  v8 = *(__int64 **)(a2 + 1672);
  switch ( *(_DWORD *)a1 )
  {
    case 1:
      v31 = 0;
      v32 = 0;
      while ( v32 < *(_QWORD *)(a1 + 80) )
      {
        ++v32;
        v33 = v31 + *(_QWORD *)(a1 + 72);
        v31 += 152;
        v34 = *(_QWORD *)(v33 + 144);
        sub_6BB530(v8, v34, v33);
        sub_6BF360(v8, v34, 1);
      }
      v35 = *(_QWORD *)(a1 + 96);
      for ( i = v35 + 144LL * *(_QWORD *)(a1 + 104); i != v35; v35 += 144 )
      {
        v41 = *(_QWORD *)(a1 + 40);
        ptr = nullptr;
        v45 = 0;
        if ( v41 )
        {
          v42 = (void *)qalloc_or_throw(v41);
          v43 = *(const void **)(a1 + 32);
          *((_QWORD *)&v45 + 1) = v41;
          ptr = v42;
          memcpy(v42, v43, v41);
          *(_QWORD *)&v45 = v41;
        }
        v37 = haystack;
        if ( *(_QWORD *)(v35 + 24) )
          v37 = *(const char **)(v35 + 16);
        sub_6BCB20((__int64 *)&ptr, v37);
        v38 = haystack;
        if ( (_QWORD)v45 )
          v38 = (const char *)ptr;
        v39 = sub_6B9860(v8, v38, 0, 0);
        if ( v39 == -1 )
        {
          v40 = haystack;
          if ( (_QWORD)v45 )
            v40 = (const char *)ptr;
          v39 = sub_6B9860(v8, v40, 1, 1u);
        }
        sub_6BB600(v8, v39, v35, 0.0, a4);
        if ( ptr )
        {
          *(_QWORD *)&v45 = 0;
          qfree(ptr);
        }
      }
      goto LABEL_26;
    case 2:
      v27 = 0;
      v28 = 0;
      while ( v28 < *(_QWORD *)(a1 + 80) )
      {
        ++v28;
        v29 = v27 + *(_QWORD *)(a1 + 72);
        v27 += 152;
        v30 = *(_QWORD *)(v29 + 144);
        sub_6BB530(v8, v30, v29);
        sub_6BF360(v8, v30, 1);
      }
      goto LABEL_26;
    case 3:
      sub_6BFB00((_QWORD *)a1, a2);
      goto LABEL_26;
    case 4:
      v15 = 152;
      v16 = 1;
      while ( v16 < *(_QWORD *)(a1 + 80) )
      {
        ++v16;
        v17 = v15 + *(_QWORD *)(a1 + 72);
        v15 += 152;
        v18 = *(_QWORD *)(v17 + 144);
        sub_6BB530(v8, v18, v17);
        sub_6BF360(v8, v18, 1);
      }
      v19 = *(_QWORD *)(a1 + 96);
      v20 = *(_QWORD *)(a1 + 72);
      v21 = *(_QWORD *)(v20 + 24);
      if ( *(_QWORD *)(v19 + 24) )
      {
        v22 = *(const char **)(v19 + 16);
        v23 = haystack;
        if ( !v21 )
          goto LABEL_14;
      }
      else
      {
        v22 = haystack;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = *(const char **)(v20 + 16);
LABEL_14:
      if ( strcmp(v23, v22) )
        sub_6BFB00((_QWORD *)a1, a2);
LABEL_16:
      if ( (unsigned int)lexcompare_tinfo(*(_QWORD *)(v20 + 64), *(_QWORD *)(v19 + 64), 0, a6, a7) )
        goto LABEL_21;
      v24 = 2304;
      if ( _bittest64(&v24, *(_QWORD *)(v20 + 72) & 0xFLL) )
      {
        v25 = sub_6BB440(*(_QWORD **)(qword_2CCB598 + 1672), 0, *(_DWORD *)(v20 + 88));
        v26 = -1;
        if ( !_bittest64(&v24, *(_QWORD *)(v19 + 72) & 0xFLL) )
          goto LABEL_20;
      }
      else
      {
        if ( !_bittest64(&v24, *(_QWORD *)(v19 + 72) & 0xFLL) )
          goto LABEL_22;
        v25 = -1;
      }
      v26 = sub_6BB440(*(_QWORD **)(qword_2CCB598 + 1672), 0, *(_DWORD *)(v19 + 88));
LABEL_20:
      if ( v25 != v26 )
      {
LABEL_21:
        sub_6BB530(v8, *(_QWORD *)(v20 + 144), v20);
        sub_6BB600(v8, *(_QWORD *)(v20 + 144), v19, a3, a4);
      }
LABEL_22:
      if ( *(_QWORD *)v19 != *(_QWORD *)v20 && !*(_BYTE *)(a1 + 68) )
        sub_6BF220(v8, *(_QWORD *)(v20 + 144), 0);
LABEL_26:
      result = 1;
      break;
    case 5:
      v11 = *(_QWORD *)(a1 + 80);
      if ( *(_QWORD *)(a1 + 104) != v11 )
      {
        if ( !under_debugger )
          interr(3220);
LABEL_55:
        BUG();
      }
      v12 = *(_QWORD *)(a1 + 72);
      v13 = v12 + 152 * v11;
      while ( v12 != v13 )
      {
        v14 = *(_QWORD *)(v12 + 144);
        v12 += 152;
        sub_6BF220(v8, v14, 0);
      }
      goto LABEL_26;
    default:
      if ( !under_debugger )
        interr(3206);
      goto LABEL_55;
  }
  return result;
}
