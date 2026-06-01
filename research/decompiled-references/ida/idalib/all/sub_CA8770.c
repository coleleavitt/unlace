__int64 __fastcall sub_CA8770(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // r15
  _DWORD *v8; // r14
  __int64 v9; // rcx
  __int64 result; // rax
  char *v11; // rdx
  size_t v12; // rsi
  unsigned int v13; // eax
  void *v14; // rdx
  unsigned int v15; // edx
  _DWORD *v16; // rcx
  __int64 v17; // [rsp+8h] [rbp-60h]
  unsigned __int8 v18; // [rsp+1Bh] [rbp-4Dh] BYREF
  unsigned int v19; // [rsp+1Ch] [rbp-4Ch] BYREF
  void *v20; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-40h]

  v18 = 1;
  v19 = 396;
  sub_C9FC00((__int64 *)(a1 + 440), &v19, &v18);
  if ( (*a3 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v20 = (void *)(*(_QWORD *)(a1 + 448) - *(_QWORD *)(a1 + 440));
    sub_C9FE10(a1 + 464, &v20, a3);
  }
  v5 = *(_DWORD *)(a2 + 8);
  v21 = v5;
  if ( v5 > 0x40 )
  {
    sub_2205510(&v20);
    v6 = v21 >> 3;
    v7 = v6 + 4;
    if ( v21 > 0x40 && v20 )
      operator delete[](v20);
  }
  else
  {
    v6 = v5 >> 3;
    v7 = v6 + 4;
  }
  v8 = *(_DWORD **)(a1 + 448);
  v9 = *(_QWORD *)(a1 + 440);
  result = 0;
  v11 = (char *)v8 - v9;
  if ( (unsigned __int64)v8 + v7 - v9 <= 0xFFFFFFFF )
  {
    v12 = (v6 + 11) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v11 < &v11[v12] )
    {
      v17 = *(_QWORD *)(a1 + 448) - v9;
      sub_C9FA60(a1 + 440, v12);
      v8 = (_DWORD *)(*(_QWORD *)(a1 + 440) + v17);
    }
    else if ( __CFADD__(v12, v11) )
    {
      v16 = (_DWORD *)(v12 + *(_QWORD *)(a1 + 448));
      if ( v8 != v16 )
        *(_QWORD *)(a1 + 448) = v16;
    }
    LODWORD(v20) = *(_DWORD *)(a2 + 16);
    *v8 = sub_21EDE70(&v20);
    v13 = *(_DWORD *)(a2 + 8);
    v21 = v13;
    if ( v13 > 0x40 )
    {
      sub_2205510(&v20);
      v13 = v21;
      v14 = v20;
    }
    else
    {
      v14 = *(void **)a2;
    }
    v20 = v14;
    v15 = *(unsigned __int16 *)(a2 + 16);
    v21 = v13;
    sub_220BA60(&v20, v8 + 1, v15 >> 3);
    if ( v21 > 0x40 )
    {
      if ( v20 )
        operator delete[](v20);
    }
    return v18;
  }
  return result;
}
