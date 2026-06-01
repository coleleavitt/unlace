__int64 __fastcall sub_69F220(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v6; // rbp
  __int64 v7; // r12
  __int64 result; // rax
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // r12
  unsigned int v12; // esi
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // r14d
  __int64 v17; // r14
  __int64 v18; // r13
  __int64 v19; // rax
  const char *v20; // rsi
  const char *v21; // rdi
  __int64 v22; // r12
  int v23; // r15d
  int v24; // eax
  unsigned __int64 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned int v28; // r13d
  unsigned __int64 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rdx
  unsigned int v32; // r13d
  __int64 v33; // r12
  __int64 i; // r14
  const char *v35; // rsi
  const char *v36; // rsi
  unsigned int v37; // eax
  const char *v38; // rsi
  size_t v39; // r15
  void *v40; // rax
  const void *v41; // rsi
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v43; // [rsp+18h] [rbp-50h]
  unsigned __int64 v44; // [rsp+28h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( !*(_DWORD *)a1 || (*(_BYTE *)(a1 + 61) & 4) == 0 )
    return 0;
  v6 = *(__int64 **)(a2 + 1480);
  v7 = a2;
  switch ( *(_DWORD *)a1 )
  {
    case 1:
      v29 = 0;
      while ( v29 < *(_QWORD *)(a1 + 80) )
      {
        v30 = v29++;
        v31 = *(_QWORD *)(a1 + 72) + (v30 << 7);
        v32 = *(_DWORD *)(v31 + 124);
        sub_69AB60((__int64)v6, v32, v31);
        a2 = v32;
        sub_69E890(v6, v32, 1);
      }
      v33 = *(_QWORD *)(a1 + 96);
      for ( i = v33 + (*(_QWORD *)(a1 + 104) << 7); i != v33; v33 += 128 )
      {
        v39 = *(_QWORD *)(a1 + 40);
        ptr = nullptr;
        v43 = 0;
        if ( v39 )
        {
          v40 = (void *)qalloc_or_throw(v39, (const char *)a2);
          v41 = *(const void **)(a1 + 32);
          *((_QWORD *)&v43 + 1) = v39;
          ptr = v40;
          memcpy(v40, v41, v39);
          *(_QWORD *)&v43 = v39;
        }
        v35 = haystack;
        if ( *(_QWORD *)(v33 + 24) )
          v35 = *(const char **)(v33 + 16);
        sub_69C0D0((__int64 *)&ptr, v35);
        v36 = haystack;
        if ( (_QWORD)v43 )
          v36 = (const char *)ptr;
        v37 = sub_698F20(v6, v36, 0, 0);
        if ( v37 == -1 )
        {
          v38 = haystack;
          if ( (_QWORD)v43 )
            v38 = (const char *)ptr;
          v37 = sub_698F20(v6, v38, 1, 1u);
        }
        a2 = v37;
        sub_69AC30((__int64)v6, v37, v33);
        if ( ptr )
        {
          *(_QWORD *)&v43 = 0;
          qfree(ptr);
        }
      }
      goto LABEL_26;
    case 2:
      v25 = 0;
      while ( v25 < *(_QWORD *)(a1 + 80) )
      {
        v26 = v25++;
        v27 = *(_QWORD *)(a1 + 72) + (v26 << 7);
        v28 = *(_DWORD *)(v27 + 124);
        sub_69AB60((__int64)v6, v28, v27);
        sub_69E890(v6, v28, 1);
      }
      goto LABEL_26;
    case 3:
      sub_69F010((_QWORD *)a1, a2);
      goto LABEL_26;
    case 4:
      v13 = 1;
      while ( v13 < *(_QWORD *)(a1 + 80) )
      {
        v14 = v13++;
        v15 = *(_QWORD *)(a1 + 72) + (v14 << 7);
        v16 = *(_DWORD *)(v15 + 124);
        sub_69AB60((__int64)v6, v16, v15);
        sub_69E890(v6, v16, 1);
      }
      v17 = *(_QWORD *)(a1 + 96);
      v18 = *(_QWORD *)(a1 + 72);
      v19 = *(_QWORD *)(v18 + 24);
      if ( *(_QWORD *)(v17 + 24) )
      {
        v20 = *(const char **)(v17 + 16);
        v21 = haystack;
        if ( !v19 )
          goto LABEL_14;
      }
      else
      {
        v20 = haystack;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = *(const char **)(v18 + 16);
LABEL_14:
      if ( strcmp(v21, v20) )
        sub_69F010((_QWORD *)a1, v7);
LABEL_16:
      if ( (unsigned int)lexcompare_tinfo(*(_QWORD *)(v18 + 64), *(_QWORD *)(v17 + 64), 0, a4, a5) )
        goto LABEL_21;
      v22 = 2304;
      if ( _bittest64(&v22, *(_QWORD *)(v18 + 72) & 0xFLL) )
      {
        v23 = sub_69AA70(*(_QWORD **)(qword_2CA1698 + 1480), 0, *(_DWORD *)(v18 + 84));
        v24 = -1;
        if ( !_bittest64(&v22, *(_QWORD *)(v17 + 72) & 0xFLL) )
          goto LABEL_20;
      }
      else
      {
        if ( !_bittest64(&v22, *(_QWORD *)(v17 + 72) & 0xFLL) )
          goto LABEL_22;
        v23 = -1;
      }
      v24 = sub_69AA70(*(_QWORD **)(qword_2CA1698 + 1480), 0, *(_DWORD *)(v17 + 84));
LABEL_20:
      if ( v23 != v24 )
      {
LABEL_21:
        sub_69AB60((__int64)v6, *(_DWORD *)(v18 + 124), v18);
        sub_69AC30((__int64)v6, *(_DWORD *)(v18 + 124), v17);
      }
LABEL_22:
      if ( *(_QWORD *)v17 != *(_QWORD *)v18 && !*(_BYTE *)(a1 + 64) )
        sub_69E750(v6, *(_DWORD *)(v18 + 124), 0);
LABEL_26:
      result = 1;
      break;
    case 5:
      v9 = *(_QWORD *)(a1 + 80);
      if ( *(_QWORD *)(a1 + 104) != v9 )
      {
        if ( !under_debugger )
          interr(3220);
LABEL_55:
        BUG();
      }
      v10 = *(_QWORD *)(a1 + 72);
      v11 = v10 + (v9 << 7);
      while ( v10 != v11 )
      {
        v12 = *(_DWORD *)(v10 + 124);
        v10 += 128;
        sub_69E750(v6, v12, 0);
      }
      goto LABEL_26;
    default:
      if ( !under_debugger )
        interr(3206);
      goto LABEL_55;
  }
  return result;
}

