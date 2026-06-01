__int64 __fastcall sub_6DBAE0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // r13d
  _QWORD *v15; // rbx
  unsigned int v16; // r15d
  unsigned int v17; // eax
  _QWORD *v19; // rbp
  __int64 v20; // rsi
  unsigned __int64 v21; // rdi
  bool v22; // zf
  __int64 v23; // rdi
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // [rsp+8h] [rbp-60h]
  unsigned int v28; // [rsp+1Ch] [rbp-4Ch] BYREF
  __m128 v29; // [rsp+20h] [rbp-48h] BYREF

  v5 = a2[2];
  if ( !v5 || (v6 = *(unsigned int *)(v5 - 4), !(_DWORD)v6) )
  {
LABEL_14:
    v29 = (__m128)*(unsigned __int64 *)(a1 + 8);
    sub_6ACF70(a2, (__int64 *)&v29);
    v15 = (_QWORD *)v29.m128_u64[1];
    v16 = 0;
    if ( v29.m128_u64[1] )
    {
      while ( 1 )
      {
        if ( v16 >= *((_DWORD *)v15 - 1) )
        {
          v14 = 0;
          goto LABEL_21;
        }
        v17 = sub_6DB060(a1, v15[v16], a3);
        v15 = (_QWORD *)v29.m128_u64[1];
        v14 = v17;
        if ( (_BYTE)v17 )
          break;
        ++v16;
        if ( !v29.m128_u64[1] )
          return 0;
      }
      if ( !v29.m128_u64[1] )
        return v14;
LABEL_21:
      v19 = &v15[*((unsigned int *)v15 - 1)];
      if ( v15 >= v19 )
        goto LABEL_28;
      do
      {
        while ( 1 )
        {
          v20 = *v15;
          if ( *v15 )
          {
            v21 = v29.m128_u64[0];
            v22 = (*(_DWORD *)(v20 + 8))-- == 1;
            if ( v22 )
              break;
          }
          if ( ++v15 >= v19 )
            goto LABEL_27;
        }
        sub_15D7BC0(v21, v20);
        ++v15;
      }
      while ( v15 < v19 );
LABEL_27:
      v15 = (_QWORD *)v29.m128_u64[1];
      if ( v29.m128_u64[1] )
LABEL_28:
        sub_186B220(v15 - 1);
    }
    else
    {
      return 0;
    }
    return v14;
  }
  v7 = 8 * v6;
  v8 = 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v5 + v8);
    if ( !*(_WORD *)(v9 + 4) )
    {
      v10 = *(_QWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
      if ( v10 )
      {
        if ( *v10 == 0x200000000LL )
        {
          v11 = *(_QWORD *)(v9 + 32);
          v27 = *(_QWORD *)(v9 + 40);
          if ( !*(_WORD *)(v11 + 4) )
          {
            v12 = *(_QWORD *)(a1 + 24);
            v28 = 0;
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v12 + 64LL))(
                   v12,
                   v11,
                   &v28) )
            {
              v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 72LL))(
                      *(_QWORD *)(a1 + 24),
                      v28);
              if ( !(unsigned __int8)sub_168D740(v13 + 32, v27) )
              {
                v29 = _mm_loadh_ps((const double *)(a1 + 8));
                if ( a3 )
                  ++*(_DWORD *)(a3 + 8);
                sub_14EC390(a1 + 32, v11, v27, &v29);
                (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, __int64))(**(_QWORD **)(a1 + 24) + 80LL))(
                  *(_QWORD *)(a1 + 24),
                  v28,
                  v29.m128_u64[0],
                  v27);
                v25 = v29.m128_u64[0];
                if ( v29.m128_u64[0] )
                {
                  v26 = v29.m128_i64[1];
                  v22 = (*(_DWORD *)(v29.m128_u64[0] + 8))-- == 1;
                  if ( v22 )
                    goto LABEL_40;
                }
                return 1;
              }
            }
            if ( (unsigned __int8)sub_6DA110(a1, v11, v27, a3) || (unsigned __int8)sub_6DA980(a1, v11, v27, a3) )
              return 1;
          }
          if ( !*(_WORD *)(v27 + 4) )
            break;
        }
      }
    }
LABEL_4:
    v8 += 8;
    if ( v7 == v8 )
      goto LABEL_14;
    v5 = a2[2];
  }
  v23 = *(_QWORD *)(a1 + 24);
  v28 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v23 + 64LL))(v23, v27, &v28)
    || (v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 72LL))(*(_QWORD *)(a1 + 24), v28),
        (unsigned __int8)sub_168D740(v24 + 32, v11)) )
  {
    if ( (unsigned __int8)sub_6DA110(a1, v27, v11, a3) || (unsigned __int8)sub_6DA980(a1, v27, v11, a3) )
      return 1;
    goto LABEL_4;
  }
  v29 = _mm_loadh_ps((const double *)(a1 + 8));
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  sub_14EC390(a1 + 32, v27, v11, &v29);
  (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, __int64))(**(_QWORD **)(a1 + 24) + 80LL))(
    *(_QWORD *)(a1 + 24),
    v28,
    v29.m128_u64[0],
    v11);
  v25 = v29.m128_u64[0];
  if ( v29.m128_u64[0] )
  {
    v26 = v29.m128_i64[1];
    v22 = (*(_DWORD *)(v29.m128_u64[0] + 8))-- == 1;
    if ( v22 )
LABEL_40:
      sub_15D7BC0(v26, v25);
  }
  return 1;
}

