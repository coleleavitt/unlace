__int64 __fastcall sub_46DDC0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // r13
  unsigned int v3; // r15d
  __int64 v4; // rbp
  __int64 v5; // r12
  unsigned __int64 *v6; // rbx
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rbx
  __int64 v26; // rbp
  __int64 v27; // rax
  unsigned int v28; // [rsp+8h] [rbp-60h]
  unsigned __int64 v29; // [rsp+8h] [rbp-60h]
  unsigned __int64 v30; // [rsp+8h] [rbp-60h]
  unsigned __int64 v31; // [rsp+8h] [rbp-60h]
  unsigned __int64 v32; // [rsp+10h] [rbp-58h]
  unsigned __int64 v33; // [rsp+10h] [rbp-58h]
  unsigned __int64 v34; // [rsp+10h] [rbp-58h]
  __int64 v35; // [rsp+18h] [rbp-50h]
  unsigned __int64 v36; // [rsp+18h] [rbp-50h]
  unsigned __int64 v37; // [rsp+20h] [rbp-48h]
  int v38; // [rsp+2Ch] [rbp-3Ch]

  v2 = a1[1];
  v28 = *(_DWORD *)(a1[10] + 12LL);
  v3 = *(_DWORD *)(a1[11] + 12LL);
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
  v8 = sub_469AB0(v2, *(_QWORD *)v7, 0, v28, v3);
  v9 = v6[1];
  if ( v8 < v9 || (v33 = v8, v20 = sub_4696F0(v2, v9, 0xFFFFFFFFFFFFFFFFLL, v28, v3), v6[1] = v20, v33 < v20) )
  {
    v10 = *(_QWORD *)(v7 + 8);
    if ( *((_DWORD *)v6 + 6) != *(_DWORD *)(v7 + 24) )
    {
      v35 = *(_QWORD *)v7;
      v32 = sub_4696F0(v2, *(_QWORD *)v7, *(_QWORD *)(v7 + 8), v28, v3);
      v11 = sub_469AB0(v2, v35, *v6, v28, v3);
      v10 = v32;
      v12 = v11;
      if ( *v6 == v11 )
        goto LABEL_37;
      v29 = *v6;
      v13 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(*(_QWORD *)a1[10] + 40LL))(a1[10], *v6, 0);
      v14 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(*(_QWORD *)a1[11] + 40LL))(a1[11], v29, 0);
      v10 = v32;
      if ( v13 > v14 )
        v13 = v14;
      if ( v13 >= v12 )
      {
LABEL_37:
        v38 = 3;
        v17 = 0;
        v16 = 0;
        v37 = 0;
      }
      else
      {
        v15 = *v6;
        v37 = v6[2];
        if ( v12 <= *v6 )
          v15 = v12;
        v38 = *((_DWORD *)v6 + 6);
        v16 = v15;
        v17 = v12;
      }
      *v6 = v12;
      *((_DWORD *)v6 + 6) = 3;
      goto LABEL_18;
    }
  }
  else
  {
    if ( v33 != v20 || *((_DWORD *)v6 + 6) != *(_DWORD *)(v7 + 24) )
    {
      *(_QWORD *)v7 = v33;
      return 0;
    }
    v10 = *(_QWORD *)(v7 + 8);
  }
  v38 = 3;
  v12 = *v6;
  v17 = 0;
  v16 = 0;
  v37 = 0;
LABEL_18:
  v6[1] = v10;
  if ( v10 < v12 )
    *v6 = v10;
  v18 = *(_QWORD *)(v7 + 8);
  *(_QWORD *)v7 = v10;
  if ( v18 >= v10 )
  {
    v36 = v18;
    if ( v10 != v18 )
    {
      v34 = v17;
      v30 = v10;
      v21 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(*(_QWORD *)a1[10] + 40LL))(a1[10], v10, 0);
      v22 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(*(_QWORD *)a1[11] + 40LL))(a1[11], v30, 0);
      v17 = v34;
      if ( v21 > v22 )
        v21 = v22;
      if ( v21 < v36 )
      {
        if ( v16 < v34 )
        {
          v23 = a1[13];
          v24 = a1[12];
          v25 = v5 - 32;
          if ( a1[14] < (unsigned __int64)(v23 + 1) )
          {
            v27 = qvector_reserve(a1 + 12, v24, v23 + 1, 32);
            v23 = a1[13];
            v17 = v34;
            a1[12] = v27;
            v24 = v27;
          }
          v26 = v24 + v25;
          v31 = v17;
          memmove((void *)(v24 + v5), (const void *)(v24 + v25), 32 * v23 - v25);
          *(_QWORD *)v26 = v16;
          *(_QWORD *)(v26 + 16) = v37;
          *(_QWORD *)(v26 + 8) = v31;
          *(_DWORD *)(v26 + 24) = v38;
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
  if ( v16 >= v17 )
  {
    *(_DWORD *)(v7 + 24) = 0;
    return 1;
  }
  *(__m128i *)v7 = _mm_loadu_si128((const __m128i *)v6);
  *(__m128i *)(v7 + 12) = _mm_loadu_si128((const __m128i *)((char *)v6 + 12));
  v6[2] = v37;
  *v6 = v16;
  v6[1] = v17;
  *((_DWORD *)v6 + 6) = v38;
  return 0;
}
