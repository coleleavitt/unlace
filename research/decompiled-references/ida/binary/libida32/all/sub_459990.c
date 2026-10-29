__int64 __fastcall sub_459990(_QWORD *a1, unsigned __int64 a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // r15d
  __int64 v4; // rbp
  __int64 v5; // r12
  unsigned __int64 *v6; // rbx
  __int64 v7; // rbp
  unsigned int v8; // eax
  unsigned __int64 v9; // rsi
  unsigned int v10; // r10d
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  unsigned int v15; // r14d
  unsigned int v16; // eax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r14
  __int64 v19; // r15
  unsigned __int64 v20; // rcx
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // r10d
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // [rsp+8h] [rbp-60h]
  unsigned int v31; // [rsp+8h] [rbp-60h]
  unsigned int v32; // [rsp+8h] [rbp-60h]
  unsigned __int64 v33; // [rsp+8h] [rbp-60h]
  unsigned int v34; // [rsp+10h] [rbp-58h]
  unsigned int v35; // [rsp+10h] [rbp-58h]
  unsigned __int64 v36; // [rsp+10h] [rbp-58h]
  unsigned int v37; // [rsp+10h] [rbp-58h]
  unsigned int v38; // [rsp+18h] [rbp-50h]
  unsigned __int64 v39; // [rsp+18h] [rbp-50h]
  unsigned __int64 v40; // [rsp+18h] [rbp-50h]
  unsigned __int64 v41; // [rsp+20h] [rbp-48h]
  int v42; // [rsp+2Ch] [rbp-3Ch]

  v2 = *(_DWORD *)(a1[10] + 12LL);
  v3 = *(_DWORD *)(a1[11] + 12LL);
  v30 = a1[1];
  if ( !a2 || a2 >= a1[13] )
  {
    if ( !under_debugger )
      interr(2098);
LABEL_42:
    BUG();
  }
  v4 = a1[12];
  v5 = 32 * a2;
  v6 = (unsigned __int64 *)(v4 + 32 * (a2 - 1));
  v7 = 32 * a2 + v4;
  if ( *v6 >= v6[1] || *(_QWORD *)v7 >= *(_QWORD *)(v7 + 8) )
  {
    if ( !under_debugger )
      interr(2099);
    goto LABEL_42;
  }
  v8 = sub_4556E0(v30, *(_QWORD *)v7, 0, v2, v3);
  v9 = v6[1];
  if ( v8 < v9 || (v36 = v8, v22 = sub_455320(v30, v9, 0xFFFFFFFF, v2, v3), v6[1] = v22, v36 < v22) )
  {
    v10 = *(_DWORD *)(v7 + 8);
    if ( *((_DWORD *)v6 + 6) != *(_DWORD *)(v7 + 24) )
    {
      v38 = *(_DWORD *)v7;
      v34 = sub_455320(v30, *(_DWORD *)v7, v10, v2, v3);
      v11 = sub_4556E0(v30, v38, *(_DWORD *)v6, v2, v3);
      v10 = v34;
      v12 = v11;
      v13 = *v6;
      if ( (_DWORD)v12 == (unsigned int)*v6 )
        goto LABEL_37;
      v14 = (unsigned int)v13;
      v39 = v12;
      v35 = v12;
      v31 = v10;
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)a1[10] + 40LL))(a1[10], (unsigned int)v13, 0);
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)a1[11] + 40LL))(a1[11], v14, 0);
      v10 = v31;
      v12 = v39;
      if ( v15 > v16 )
        v15 = v16;
      if ( v15 >= v35 )
      {
LABEL_37:
        v42 = 3;
        v18 = 0;
        v17 = 0;
        v41 = 0;
      }
      else
      {
        v17 = *v6;
        v18 = v39;
        v41 = v6[2];
        if ( v39 <= *v6 )
          v17 = v39;
        v42 = *((_DWORD *)v6 + 6);
      }
      *v6 = v12;
      *((_DWORD *)v6 + 6) = 3;
      goto LABEL_18;
    }
  }
  else
  {
    if ( v36 != v22 || *((_DWORD *)v6 + 6) != *(_DWORD *)(v7 + 24) )
    {
      *(_QWORD *)v7 = v36;
      return 0;
    }
    v10 = *(_DWORD *)(v7 + 8);
  }
  v42 = 3;
  v12 = *v6;
  v18 = 0;
  v17 = 0;
  v41 = 0;
LABEL_18:
  v19 = v10;
  v6[1] = v10;
  if ( v10 < v12 )
    *v6 = v10;
  v20 = *(_QWORD *)(v7 + 8);
  *(_QWORD *)v7 = v10;
  if ( v20 >= v10 )
  {
    if ( v10 != (_DWORD)v20 )
    {
      v40 = v17;
      v37 = v20;
      v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)a1[10] + 40LL))(a1[10], v10, 0);
      v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)a1[11] + 40LL))(a1[11], v19, 0);
      v24 = v32;
      v17 = v40;
      if ( v32 > v23 )
        v24 = v23;
      if ( v24 < v37 )
      {
        if ( v40 < v18 )
        {
          v25 = a1[13];
          v26 = a1[12];
          v27 = v5 - 32;
          if ( a1[14] < (unsigned __int64)(v25 + 1) )
          {
            v29 = qvector_reserve(a1 + 12, v26, v25 + 1, 32);
            v25 = a1[13];
            v17 = v40;
            a1[12] = v29;
            v26 = v29;
          }
          v28 = v26 + v27;
          v33 = v17;
          memmove((void *)(v26 + v5), (const void *)(v26 + v27), 32 * v25 - v27);
          *(_QWORD *)(v28 + 8) = v18;
          *(_QWORD *)(v28 + 16) = v41;
          *(_QWORD *)v28 = v33;
          *(_DWORD *)(v28 + 24) = v42;
          ++a1[13];
        }
        return 0;
      }
    }
  }
  else
  {
    *(_QWORD *)(v7 + 8) = v10;
  }
  if ( v17 >= v18 )
  {
    *(_DWORD *)(v7 + 24) = 0;
    return 1;
  }
  *(__m128i *)v7 = _mm_loadu_si128((const __m128i *)v6);
  *(__m128i *)(v7 + 12) = _mm_loadu_si128((const __m128i *)((char *)v6 + 12));
  v6[2] = v41;
  *v6 = v17;
  v6[1] = v18;
  *((_DWORD *)v6 + 6) = v42;
  return 0;
}

