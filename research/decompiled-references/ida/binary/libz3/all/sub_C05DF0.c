__int64 __fastcall sub_C05DF0(__int64 a1)
{
  __int64 v2; // rbp
  __int64 *v3; // r12
  __int64 *v4; // r13
  __int64 v5; // rsi
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // r12
  __int64 *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v14; // rax
  __int64 v15; // rsi
  __int64 *v16; // rdx
  void *v17; // rdi
  int v18; // ecx
  unsigned int v19; // r13d
  size_t v20; // r12
  _OWORD *v21; // rdx
  _OWORD *v22; // rcx
  _OWORD *v23; // rax
  __int64 (__fastcall *v24)(__int64); // rax
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 i; // r12
  __int64 v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 (__fastcall *v32)(__int64, unsigned int); // rdx
  size_t v34; // rsi

  v2 = sub_186B270(0xA0u);
  sub_1373200(v2, *(_QWORD *)(a1 + 8));
  v3 = *(__int64 **)(a1 + 24);
  v4 = &v3[3 * *(unsigned int *)(a1 + 32)];
  if ( v3 != v4 )
  {
    while ( (unsigned __int64)*v3 <= 1 )
    {
      v3 += 3;
      if ( v4 == v3 )
        goto LABEL_12;
    }
    if ( v4 != v3 )
    {
      v5 = *v3;
      do
      {
        sub_135F9B0(v2, v5, v3[2]);
        v6 = v3 + 3;
        if ( v4 == v3 + 3 )
          break;
        while ( 1 )
        {
          v5 = *v6;
          v3 = v6;
          if ( (unsigned __int64)*v6 > 1 )
            break;
          v6 += 3;
          if ( v4 == v6 )
            goto LABEL_12;
        }
      }
      while ( v4 != v6 );
    }
  }
LABEL_12:
  v7 = *(__int64 **)(a1 + 48);
  v8 = v7;
  v9 = &v7[2 * *(unsigned int *)(a1 + 56)];
  if ( v7 == v9 )
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_42;
  }
  else
  {
    while ( (unsigned __int64)*v8 <= 1 )
    {
      v8 += 2;
      if ( v9 == v8 )
        goto LABEL_60;
    }
    if ( v9 == v8 )
    {
LABEL_60:
      if ( !*(_DWORD *)(a1 + 60) )
        goto LABEL_27;
      v17 = *(void **)(a1 + 48);
      v15 = *(unsigned int *)(a1 + 56);
      v16 = &v7[2 * v15];
      goto LABEL_30;
    }
    v10 = *v8;
    do
    {
      sub_135F980(v2, v10, v8[1]);
      v11 = *v8;
      if ( *v8 )
      {
        v12 = *(_QWORD *)(a1 + 8);
        if ( (*(_DWORD *)(v11 + 8))-- == 1 )
          sub_15D7BC0(v12, v11);
      }
      v14 = v8 + 2;
      if ( v9 == v8 + 2 )
        break;
      while ( 1 )
      {
        v10 = *v14;
        v8 = v14;
        if ( (unsigned __int64)*v14 > 1 )
          break;
        v14 += 2;
        if ( v9 == v14 )
          goto LABEL_26;
      }
    }
    while ( v9 != v14 );
LABEL_26:
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_28;
  }
LABEL_27:
  if ( !*(_DWORD *)(a1 + 64) )
    goto LABEL_43;
LABEL_28:
  v7 = *(__int64 **)(a1 + 48);
  v15 = *(unsigned int *)(a1 + 56);
  v16 = &v7[2 * v15];
  if ( v7 != v16 )
  {
    v17 = *(void **)(a1 + 48);
LABEL_30:
    v18 = 0;
    do
    {
      while ( *v7 )
      {
        *v7 = 0;
        v7 += 2;
        if ( v16 == v7 )
          goto LABEL_34;
      }
      v7 += 2;
      ++v18;
    }
    while ( v16 != v7 );
LABEL_34:
    if ( (unsigned int)v15 > 0x10 && 3 * (int)v15 < (unsigned int)(4 * v18) )
    {
      if ( v17 )
      {
        sub_186B220(v17);
        v19 = *(_DWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 48) = 0;
        v19 >>= 1;
        *(_DWORD *)(a1 + 56) = v19;
        v20 = v19;
        v21 = (_OWORD *)sub_186B270(v20 * 16);
        if ( !v19 )
        {
LABEL_41:
          *(_QWORD *)(a1 + 48) = v21;
          goto LABEL_42;
        }
      }
      else
      {
        v34 = (unsigned int)v15 >> 1;
        *(_QWORD *)(a1 + 48) = 0;
        *(_DWORD *)(a1 + 56) = v34;
        v20 = v34;
        v21 = (_OWORD *)sub_186B270(16 * v34);
      }
      v22 = &v21[v20];
      v23 = v21;
      if ( ((v20 * 16) & 0x10) == 0 || (v23 = v21 + 1, *v21 = 0, v22 != v21 + 1) )
      {
        do
        {
          *v23 = 0;
          v23 += 2;
          *(v23 - 1) = 0;
        }
        while ( v22 != v23 );
      }
      goto LABEL_41;
    }
  }
LABEL_42:
  *(_QWORD *)(a1 + 60) = 0;
LABEL_43:
  v24 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL);
  if ( v24 == sub_C049A0 )
  {
    v25 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 72LL);
    if ( !v25 )
      return v2;
    v26 = *(unsigned int *)(v25 - 4);
  }
  else
  {
    v26 = (unsigned int)v24(a1);
  }
  if ( (_DWORD)v26 )
  {
    for ( i = 0; i != v26; ++i )
    {
      v31 = *(_QWORD *)a1;
      v32 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 32LL);
      if ( v32 == sub_C049C0 )
      {
        v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 72LL) + 8 * i);
      }
      else
      {
        v28 = v32(a1, i);
        v31 = *(_QWORD *)a1;
      }
      v29 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(v31 + 16))(a1, v28);
      if ( v29 )
      {
        v30 = *(unsigned int *)(v29 - 4);
      }
      else
      {
        v29 = 0;
        v30 = 0;
      }
      sub_1376FA0(v2, v28, v30, v29);
    }
  }
  return v2;
}

