__int64 __fastcall sub_9382C0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  int v4; // eax
  __int64 v5; // rax
  __m128i v6; // xmm0
  _QWORD *v7; // rax
  _QWORD *v8; // r13
  __int64 v9; // rbx
  _QWORD *v10; // rbp
  __int64 v11; // r15
  _QWORD *v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 *v16; // rdx
  unsigned int v18; // ebx
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rax
  char **exception; // rbx
  __int64 v24[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = sub_180C100(a1 + 8400, 40);
  *(_BYTE *)(v3 + 8) = *(_BYTE *)(a2 + 8) & 3 | *(_BYTE *)(v3 + 8) & 0xFC;
  *(_DWORD *)(v3 + 12) = *(_DWORD *)(a2 + 12);
  *(_QWORD *)(v3 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)v3 = qword_1C6F870;
  v4 = *(_DWORD *)(a2 + 24);
  *(_QWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 24) = v4;
  v5 = *(_QWORD *)(a2 + 32);
  if ( !v5 )
  {
    *(_QWORD *)v3 = &off_1C578E0;
    return v3;
  }
  v6 = _mm_loadl_epi64((const __m128i *)(v5 - 8));
  v7 = (_QWORD *)sub_186B270(16LL * (unsigned int)_mm_cvtsi128_si32(v6) + 8);
  v8 = v7 + 1;
  *v7 = v6.m128i_i64[0];
  *(_QWORD *)(v3 + 32) = v7 + 1;
  v9 = *(_QWORD *)(a2 + 32);
  if ( !v9 || (v10 = v7 + 1, v11 = v9 + 16LL * *(unsigned int *)(v9 - 4), v9 == v11) )
  {
    *(_QWORD *)v3 = &off_1C578E0;
  }
  else
  {
    do
    {
      sub_15D0E50(v10, v9);
      v9 += 16;
      v10 += 2;
    }
    while ( v9 != v11 );
    v8 = *(_QWORD **)(v3 + 32);
    *(_QWORD *)v3 = &off_1C578E0;
    if ( !v8 )
      return v3;
  }
  if ( *((_DWORD *)v8 - 1) )
  {
    v12 = *(_QWORD **)(a1 + 8600);
    if ( v12 )
    {
      v13 = *((_DWORD *)v12 - 1);
      if ( v13 == *((_DWORD *)v12 - 2) )
      {
        v18 = (3 * v13 + 1) >> 1;
        v19 = 8 * v18 + 8;
        if ( 8 * v13 + 8 >= (unsigned int)v19 || v13 >= v18 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_91CD50(v24, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v24);
          sub_233E40((__int64)v24);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v20 = (unsigned int *)sub_186B300(v12 - 1, v19);
        v21 = v20[1];
        v12 = v20 + 2;
        *v20 = v18;
        *(_QWORD *)(a1 + 8600) = v20 + 2;
        LODWORD(v20) = v21;
        v16 = &v12[v21];
        v15 = (_DWORD)v20 + 1;
      }
      else
      {
        v14 = v13;
        v15 = v13 + 1;
        v16 = &v12[v14];
      }
    }
    else
    {
      v22 = (_QWORD *)sub_186B270(0x18u);
      v12 = v22 + 1;
      *v22 = 2;
      v15 = 1;
      *(_QWORD *)(a1 + 8600) = v12;
      v16 = v12;
    }
    *v16 = v3;
    *((_DWORD *)v12 - 1) = v15;
  }
  return v3;
}

