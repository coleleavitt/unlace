__int64 __fastcall sub_8FE1B0(__int64 a1, unsigned __int8 a2, __m128i a3, __m128 a4)
{
  unsigned int v4; // r14d
  __int64 (__fastcall *v6)(__int64, unsigned __int8); // rdx
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // r12
  __int64 v14; // rax
  int v15; // esi
  int v16; // eax
  __int64 v17; // rax
  _QWORD *v18; // rbx
  _QWORD *i; // r14
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // eax
  __int64 *v26; // rbx
  unsigned int v27; // r14d
  unsigned __int64 v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rdi
  unsigned int v32; // eax
  unsigned int v33; // ebx
  unsigned int v35; // eax
  __int64 v36; // rax
  _QWORD *v37; // rdx
  _QWORD *v38; // rbx
  _QWORD *v39; // r15
  char j; // al
  __int64 v41; // [rsp+18h] [rbp-60h] BYREF
  __int64 v42; // [rsp+20h] [rbp-58h] BYREF
  __int64 v43; // [rsp+28h] [rbp-50h]
  __int64 v44; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v45; // [rsp+38h] [rbp-40h]

  v4 = a2;
  if ( !(unsigned __int8)sub_8F7A60(a1, a2) )
    return 0;
  v6 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)a1 + 8LL);
  v7 = *(_QWORD *)(a1 + 112);
  v8 = *(unsigned __int8 *)(v7 + 731);
  if ( v6 == sub_8E5130 )
  {
    if ( *(_BYTE *)(a1 + 176) || *(_QWORD *)(a1 + 8984) != qword_1C7EC50 || *(_BYTE *)(a1 + 2416) )
    {
      v9 = *(_DWORD *)(a1 + 184);
      if ( v9 > *(_DWORD *)(v7 + 476) )
        v9 = *(_DWORD *)(v7 + 476);
      *(_DWORD *)(a1 + 184) = v9;
    }
    else
    {
      sub_8E5080(a1, v8);
      v7 = *(_QWORD *)(a1 + 112);
    }
  }
  else
  {
    v6(a1, v8);
    v7 = *(_QWORD *)(a1 + 112);
  }
  if ( *(_DWORD *)(v7 + 540) > 1u )
  {
    v10 = *(_QWORD *)(a1 + 104);
    if ( !*(_QWORD *)(v10 + 912) )
    {
      v42 = a1;
      v44 = v10;
      v45 = nullptr;
      v33 = sub_B61920(&v42, (__int64)&v44);
      sub_2334C0(&v44);
      return v33;
    }
  }
  sub_8EA730(a1);
  v11 = *(_QWORD *)(a1 + 104);
  v12 = *(_QWORD **)(a1 + 8688);
  v43 = 0;
  v42 = v11;
  if ( !v12 )
    goto LABEL_39;
  v13 = &v12[*((unsigned int *)v12 - 1)];
  if ( v12 == v13 )
    goto LABEL_39;
  do
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v12 + 120LL))(*v12, &v42);
    ++v12;
  }
  while ( v13 != v12 );
  if ( !v43 || !*(_DWORD *)(v43 - 4) )
  {
LABEL_39:
    *(_BYTE *)(a1 + 10440) = 0;
    v35 = sub_8FD390(a1);
    v32 = sub_8EC600(a1, v35);
    goto LABEL_34;
  }
  if ( (unsigned __int8)sub_8F7A60(a1, v4) )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, 0);
    v14 = *(_QWORD *)(a1 + 112);
    *(_BYTE *)(a1 + 10440) = 0;
    if ( *(_DWORD *)(v14 + 540) > 1u && !*(_QWORD *)(*(_QWORD *)(a1 + 104) + 912LL) )
    {
      v44 = *(_QWORD *)(a1 + 104);
      v41 = a1;
      v45 = nullptr;
      v33 = sub_B61920(&v41, (__int64)&v44);
      sub_2334C0(&v44);
LABEL_35:
      if ( !*(_BYTE *)(a1 + 10440) )
        *(_DWORD *)(a1 + 10308) = 3;
      goto LABEL_37;
    }
    while ( 1 )
    {
      v15 = *(_DWORD *)(a1 + 9464);
      v16 = *(_DWORD *)(a1 + 9468);
      if ( v15 != v16 )
        sub_8F7780(a1, v15 - v16);
      v17 = *(_QWORD *)(a1 + 104);
      v45 = nullptr;
      v44 = v17;
      sub_8EA730(a1);
      v18 = *(_QWORD **)(a1 + 8688);
      if ( v18 )
      {
        for ( i = &v18[*((unsigned int *)v18 - 1)]; i != v18; ++v18 )
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v18 + 120LL))(*v18, &v44);
      }
      sub_8F5580(a1, (__int64)&v44, a3, a4);
      v20 = sub_8FD390(a1);
      v25 = sub_8F82B0(a1, v20, v21, v22, v23, v24);
      v26 = v45;
      v27 = v25;
      if ( v45 )
      {
        v28 = (unsigned __int64)&v45[*((unsigned int *)v45 - 1)];
        if ( (unsigned __int64)v45 >= v28 )
          goto LABEL_31;
        do
        {
          while ( 1 )
          {
            v29 = *v26;
            if ( *v26 )
            {
              v30 = v44;
              if ( (*(_DWORD *)(v29 + 8))-- == 1 )
                break;
            }
            if ( (unsigned __int64)++v26 >= v28 )
              goto LABEL_30;
          }
          sub_15D7BC0(v30, v29);
          ++v26;
        }
        while ( (unsigned __int64)v26 < v28 );
LABEL_30:
        v26 = v45;
        if ( v45 )
LABEL_31:
          sub_186B220(v26 - 1);
      }
      if ( v27 != -1 )
        break;
      v36 = *(_QWORD *)(a1 + 9376);
      if ( !v36 )
        break;
      if ( !*(_DWORD *)(v36 - 4) )
        break;
      v37 = *(_QWORD **)(a1 + 8688);
      if ( !v37 )
        break;
      v38 = &v37[*((unsigned int *)v37 - 1)];
      if ( v37 == v38 )
        break;
      v39 = *(_QWORD **)(a1 + 8688);
      for ( j = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v39 + 136LL))(*v39, a1 + 9368);
            !j;
            j = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v39 + 136LL))(*v39, a1 + 9368) )
      {
        if ( v38 == ++v39 )
          goto LABEL_33;
      }
    }
LABEL_33:
    v32 = sub_8EC600(a1, v27);
LABEL_34:
    v33 = v32;
    goto LABEL_35;
  }
  v33 = 0;
LABEL_37:
  sub_2334C0(&v42);
  return v33;
}

