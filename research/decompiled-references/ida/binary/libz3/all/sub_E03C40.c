void __fastcall sub_E03C40(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char **exception; // r12
  __int64 (__fastcall *v8)(); // rax
  __int64 v9; // rsi
  __int64 *v10; // rbx
  __int64 *v11; // r14
  __int64 v12; // r15
  __int64 *v13; // r13
  _QWORD *v14; // rax
  __int64 *v15; // rsi
  int v16; // eax
  unsigned int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  int v20; // edi
  int v21; // edx
  _QWORD *v22; // rsi
  _QWORD *i; // rdx
  _QWORD *v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // rax
  int v27; // r8d
  __int64 *v28; // r14
  __int64 *v29; // r12
  __int64 v30; // rsi
  unsigned int v32; // r9d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rsi
  __int64 v37; // [rsp+10h] [rbp-110h]
  __int64 v38; // [rsp+18h] [rbp-108h]
  unsigned int v39; // [rsp+24h] [rbp-FCh]
  __m128i v41; // [rsp+40h] [rbp-E0h] BYREF
  __int64 v42[2]; // [rsp+50h] [rbp-D0h] BYREF
  _QWORD v43[14]; // [rsp+60h] [rbp-C0h] BYREF
  int v44; // [rsp+D0h] [rbp-50h]
  __int64 v45; // [rsp+D8h] [rbp-48h]
  __int64 v46; // [rsp+E0h] [rbp-40h] BYREF

  v8 = *(__int64 (__fastcall **)())(*a1 + 32LL);
  if ( v8 == sub_E0F550 )
  {
    sub_DFBCB0(a1);
    v9 = a1[37];
  }
  else
  {
    v9 = ((__int64 (__fastcall *)(_QWORD *))v8)(a1);
  }
  sub_162A710(v42, v9);
  v38 = v43[0];
  sub_DFBCB0(a1);
  v10 = *(__int64 **)(a3 + 8);
  v37 = a1[37];
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    if ( v11 == v10 )
    {
      v10 = nullptr;
    }
    else
    {
      v12 = *v10;
      v13 = v10;
      if ( *v10 )
        ++*(_DWORD *)(v12 + 8);
      v14 = (_QWORD *)sub_186B270(0x18u);
      v15 = v14 + 1;
      *v14 = 2;
      v16 = 1;
      v10 = v15;
      while ( 1 )
      {
        ++v13;
        *v15 = v12;
        *((_DWORD *)v10 - 1) = v16;
        if ( v11 == v13 )
          break;
        while ( 1 )
        {
          v12 = *v13;
          if ( *v13 )
            ++*(_DWORD *)(v12 + 8);
          v17 = *((_DWORD *)v10 - 1);
          if ( v17 == *((_DWORD *)v10 - 2) )
            break;
          ++v13;
          v10[v17] = v12;
          *((_DWORD *)v10 - 1) = v17 + 1;
          if ( v11 == v13 )
            goto LABEL_13;
        }
        v32 = (3 * v17 + 1) >> 1;
        v33 = 8 * v32 + 8;
        if ( 8 * v17 + 8 >= (unsigned int)v33 || v17 >= v32 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_DF63A0(v42, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v42);
          sub_233E40((__int64)v42);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v39 = (3 * v17 + 1) >> 1;
        v34 = (unsigned int *)sub_186B300(v10 - 1, v33);
        v35 = v34[1];
        v10 = (__int64 *)(v34 + 2);
        *v34 = v39;
        LODWORD(v34) = v35;
        v15 = &v10[v35];
        v16 = (_DWORD)v34 + 1;
      }
    }
  }
LABEL_13:
  v18 = *(_QWORD **)(v38 + 32);
  v19 = *(unsigned int *)(v38 + 40);
  v20 = *(_DWORD *)(a2 + 12);
  v21 = v19 - 1;
  v19 *= 16;
  v22 = (_QWORD *)((char *)v18 + v19);
  i = (_QWORD *)(16LL * (v20 & (unsigned int)v21));
  v24 = (_QWORD *)((char *)i + (_QWORD)v18);
  if ( i != (_QWORD *)v19 )
  {
    for ( i = (_QWORD *)((char *)i + (_QWORD)v18); v22 != i; i += 2 )
    {
      v25 = (_QWORD *)*i;
      if ( *i > 1u )
      {
        if ( *((_DWORD *)v25 + 3) == v20 && (_QWORD *)a2 == v25 )
        {
          v25 = i;
          goto LABEL_20;
        }
      }
      else if ( !v25 )
      {
        goto LABEL_20;
      }
    }
  }
  if ( v18 == v24 )
  {
LABEL_42:
    v25 = nullptr;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v25 = (_QWORD *)*v18;
        if ( *v18 > 1u )
          break;
        if ( !v25 )
          goto LABEL_20;
        v18 += 2;
        if ( v24 == v18 )
          goto LABEL_42;
      }
      if ( *((_DWORD *)v25 + 3) == v20 && (_QWORD *)a2 == v25 )
        break;
      v18 += 2;
      if ( v24 == v18 )
        goto LABEL_42;
    }
    v25 = v18;
  }
LABEL_20:
  v41 = _mm_unpacklo_epi64(
          (__m128i)(unsigned __int64)sub_162A780(v38, v22, i, v18, v24),
          (__m128i)(unsigned __int64)v25[1]);
  sub_DFBCB0(a1);
  v26 = a1[37];
  v43[2] = 0;
  v42[0] = (__int64)&off_1C4CAA0;
  v42[1] = v26;
  v43[0] = v26;
  v43[1] = v26;
  v43[3] = v26;
  v43[8] = v26;
  memset(&v43[4], 0, 32);
  v43[9] = 0;
  v43[10] = &v46;
  v43[11] = 1;
  v43[12] = 0;
  v43[13] = 0;
  v44 = 1065353216;
  v45 = 0;
  v46 = 0;
  if ( v10 )
    v27 = *((_DWORD *)v10 - 1);
  else
    v27 = 0;
  sub_1631DC0(v38, (unsigned int)v42, (unsigned int)&v41, 0, v27, (_DWORD)v10, a5);
  v42[0] = (__int64)&off_1C4CAA0;
  sub_268600((__int64)v43);
  if ( v10 )
  {
    v28 = v10;
    v29 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 < v29 )
    {
      do
      {
        while ( 1 )
        {
          v30 = *v28;
          if ( *v28 )
          {
            if ( (*(_DWORD *)(v30 + 8))-- == 1 )
              break;
          }
          if ( ++v28 >= v29 )
            goto LABEL_29;
        }
        sub_15D7BC0(v37, v30);
        ++v28;
      }
      while ( v28 < v29 );
    }
LABEL_29:
    sub_186B220(v10 - 1);
  }
}

