void __fastcall sub_12B6100(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  size_t v6; // r12
  size_t v7; // r13
  __int64 v8; // rdx
  char *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  void **p_src; // rcx
  _QWORD *v14; // rdi
  _QWORD *v15; // rdi
  size_t v16; // r14
  unsigned __int64 v17; // rdi
  char *v18; // rax
  _QWORD *v19; // rcx
  unsigned __int64 v20; // r12
  __int64 v21; // rdi
  _QWORD *v22; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  size_t n; // [rsp+18h] [rbp-50h]
  _QWORD v25[9]; // [rsp+20h] [rbp-48h] BYREF

  sub_1134980(a1, a2, a3, a4);
  *(_QWORD *)a1 = &off_2C40D18;
  v5 = *(_QWORD *)(a1 + 8);
  src = v25;
  sub_12B6040(&src, *(_BYTE **)(v5 + 104), *(_QWORD *)(v5 + 104) + *(_QWORD *)(v5 + 112));
  v6 = n;
  if ( 0x7FFFFFFFFFFFFFFFLL - n <= 0xA )
    std::__throw_length_error("basic_string::append");
  v7 = n + 11;
  if ( src == v25 )
  {
    v8 = 15;
    if ( v7 <= 0xF )
      goto LABEL_4;
  }
  else
  {
    v8 = v25[0];
    if ( v7 <= v25[0] )
    {
LABEL_4:
      qmemcpy((char *)src + n, "/../libexec", 11);
      v9 = (char *)src;
      goto LABEL_5;
    }
  }
  if ( (v7 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_create");
  v16 = 2 * v8;
  if ( v7 < 2 * v8 )
  {
    v17 = v16 + 1;
    if ( (v8 & 0x4000000000000000LL) != 0 )
    {
      v17 = 0x8000000000000000LL;
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v17 = n + 12;
    v16 = n + 11;
  }
  v18 = (char *)operator new(v17);
  v19 = src;
  v9 = v18;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      *v18 = *(_BYTE *)src;
    }
    else
    {
      v22 = src;
      memcpy(v18, src, v6);
      v19 = v22;
    }
  }
  qmemcpy(&v9[v6], "/../libexec", 11);
  if ( v19 != v25 )
    operator delete(v19);
  src = v9;
  v25[0] = v16;
LABEL_5:
  n = v6 + 11;
  v9[v6 + 11] = 0;
  v10 = *(unsigned int *)(a1 + 1160);
  v11 = v10 + 1;
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1164) )
  {
    v20 = *(_QWORD *)(a1 + 1152);
    v21 = a1 + 1152;
    if ( v20 > (unsigned __int64)&src || (unsigned __int64)&src >= v20 + 32 * v10 )
    {
      sub_A8C1F0(v21, v11);
      v12 = *(_QWORD *)(a1 + 1152);
      v10 = *(unsigned int *)(a1 + 1160);
      p_src = &src;
    }
    else
    {
      sub_A8C1F0(v21, v11);
      v12 = *(_QWORD *)(a1 + 1152);
      v10 = *(unsigned int *)(a1 + 1160);
      p_src = (void **)((char *)&src + v12 - v20);
    }
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 1152);
    p_src = &src;
  }
  v14 = (_QWORD *)(v12 + 32 * v10);
  *v14 = v14 + 2;
  sub_12B6040(v14, *p_src, (__int64)p_src[1] + (_QWORD)*p_src);
  v15 = src;
  ++*(_DWORD *)(a1 + 1160);
  if ( v15 != v25 )
    operator delete(v15);
}
