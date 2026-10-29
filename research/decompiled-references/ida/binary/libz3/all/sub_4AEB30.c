__int64 __fastcall sub_4AEB30(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *exception; // rbx
  _QWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r13
  char v8; // al
  unsigned int v9; // edx
  unsigned int v14; // eax
  unsigned int v15; // r14d
  _QWORD *v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  _QWORD *v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rax
  unsigned int v23; // ecx
  _QWORD *v24; // rdi
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // ebx
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rdx
  __int64 i; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // [rsp+10h] [rbp-58h] BYREF
  __int64 v35; // [rsp+18h] [rbp-50h]
  _QWORD v36[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = *a3;
  v8 = *(_BYTE *)(*a3 + 6);
  if ( (v8 & 2) != 0 )
    return 0;
  *(_BYTE *)(v7 + 6) = v8 | 2;
  v14 = *(_DWORD *)(a1 + 48);
  v15 = *(_DWORD *)(a1 + 52);
  if ( v14 >= v15 )
  {
    v21 = 2 * v15;
    v22 = sub_186B270(8 * v21);
    v23 = *(_DWORD *)(a1 + 48);
    v24 = *(_QWORD **)(a1 + 40);
    v25 = v22;
    if ( v23 )
    {
      if ( v23 - 1 <= 2 || (_QWORD *)v22 == v24 + 1 )
      {
        for ( i = 0; i != v23; ++i )
          *(_QWORD *)(v25 + i * 8) = v24[i];
      }
      else
      {
        v26 = 0;
        do
        {
          *(__m128i *)(v25 + v26 * 8) = _mm_loadu_si128((const __m128i *)&v24[v26]);
          v26 += 2;
        }
        while ( 2LL * (v23 >> 1) != v26 );
        if ( (v23 & 1) != 0 )
          *(_QWORD *)(v25 + 8LL * (v23 & 0xFFFFFFFE)) = v24[v23 & 0xFFFFFFFE];
      }
    }
    if ( v24 && v24 != (_QWORD *)(a1 + 56) )
    {
      sub_186B220(v24);
      v23 = *(_DWORD *)(a1 + 48);
    }
    v27 = *a3;
    *(_QWORD *)(a1 + 40) = v25;
    *(_DWORD *)(a1 + 52) = v21;
    *(_QWORD *)(v25 + 8LL * v23) = v7;
    v7 = 0;
    *(_DWORD *)(a1 + 48) = v23 + 1;
    if ( !v27 )
      goto LABEL_7;
    v7 = v27;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL * v14) = v7;
    *(_DWORD *)(a1 + 48) = v14 + 1;
  }
  ++*(_DWORD *)(v7 + 8);
LABEL_7:
  v16 = *(_QWORD **)(a2 + 8);
  if ( v16 )
  {
    v17 = *((_DWORD *)v16 - 1);
    if ( v17 == *((_DWORD *)v16 - 2) )
    {
      v28 = (3 * v17 + 1) >> 1;
      v29 = 8 * v28 + 8;
      if ( 8 * v17 + 8 >= (unsigned int)v29 || v17 >= v28 )
      {
        exception = __cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v34, "Overflow encountered when expanding vector");
        v4 = v34;
        exception[1] = exception + 3;
        v5 = v35;
        *exception = off_1C63128;
        if ( v4 == v36 )
        {
          qmemcpy(exception + 3, v36, (unsigned int)(v5 + 1));
        }
        else
        {
          v6 = v36[0];
          exception[1] = v4;
          exception[3] = v6;
        }
        exception[2] = v5;
        v34 = v36;
        v35 = 0;
        LOBYTE(v36[0]) = 0;
        sub_233E40((__int64)&v34);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v30 = (unsigned int *)sub_186B300(v16 - 1, v29);
      v31 = v30[1];
      v16 = v30 + 2;
      *v30 = v28;
      *(_QWORD *)(a2 + 8) = v30 + 2;
      LODWORD(v30) = v31;
      v20 = &v16[v31];
      v19 = (_DWORD)v30 + 1;
    }
    else
    {
      v18 = v17;
      v19 = v17 + 1;
      v20 = &v16[v18];
    }
  }
  else
  {
    v33 = (_QWORD *)sub_186B270(0x18u);
    v16 = v33 + 1;
    *v33 = 2;
    v19 = 1;
    *(_QWORD *)(a2 + 8) = v16;
    v20 = v16;
  }
  *v20 = v7;
  v9 = 1;
  *((_DWORD *)v16 - 1) = v19;
  return v9;
}

