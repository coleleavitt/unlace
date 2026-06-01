__int64 __fastcall sub_1123A40(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v5; // eax
  __int64 v7; // rbx
  char *v8; // r15
  unsigned __int64 v9; // rax
  _BYTE *v10; // rdi
  size_t v11; // r9
  unsigned __int64 v12; // rdx
  char *v13; // rdi
  __int64 v14; // rax
  size_t v15; // rsi
  __int64 v16; // r14
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int128 v19; // rax
  size_t v20; // r14
  size_t v21; // r15
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  __int64 v24; // r12
  __int64 v25; // rbx
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdi
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rax
  _BYTE *v34; // rdi
  unsigned __int128 v35; // [rsp+0h] [rbp-78h]
  __int64 v36; // [rsp+10h] [rbp-68h]
  size_t v37; // [rsp+18h] [rbp-60h]
  size_t v38; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  size_t n; // [rsp+28h] [rbp-50h]
  _QWORD v41[9]; // [rsp+30h] [rbp-48h] BYREF

  v35 = __PAIR128__(a4, a3);
  src = v41;
  v5 = *(_DWORD *)(a2 + 56);
  n = 0;
  LOBYTE(v41[0]) = 0;
  if ( v5 )
  {
    v7 = 0;
    v36 = 8LL * (unsigned int)(v5 - 1) + 8;
    do
    {
      v14 = *(_QWORD *)(a2 + 48);
      v15 = 0;
      v16 = *(_QWORD *)(v14 + v7);
      if ( v16 )
        v15 = strlen(*(const char **)(v14 + v7));
      v17 = sub_1001430(v16, v15, 1);
      *(_QWORD *)&v19 = sub_10045F0(v17, v18);
      if ( (v35 & v19) != 0 )
      {
        v20 = n;
        if ( n )
        {
          if ( n == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_22;
          v21 = n + 1;
          v22 = src == v41 ? 15LL : v41[0];
          if ( v21 > v22 )
            sub_998B30((__int64)&src, n, 0, ",", 1u);
          else
            *((_BYTE *)src + n) = 44;
          n = v20 + 1;
          *((_BYTE *)src + v21) = 0;
          v20 = n;
          v8 = *(char **)(*(_QWORD *)(a2 + 48) + v7);
          v9 = strlen(v8);
          if ( v9 > 0x7FFFFFFFFFFFFFFFLL - v20 )
            goto LABEL_22;
        }
        else
        {
          v8 = *(char **)(*(_QWORD *)(a2 + 48) + v7);
          v9 = strlen(v8);
        }
        v10 = src;
        v11 = v20 + v9;
        if ( src == v41 )
          v12 = 15;
        else
          v12 = v41[0];
        if ( v11 > v12 )
        {
          v38 = v20 + v9;
          sub_998B30((__int64)&src, v20, 0, v8, v9);
          v10 = src;
          v11 = v38;
        }
        else if ( v9 )
        {
          v13 = (char *)src + v20;
          if ( v9 == 1 )
          {
            *v13 = *v8;
            v10 = src;
          }
          else
          {
            v37 = v20 + v9;
            memcpy(v13, v8, v9);
            v10 = src;
            v11 = v37;
          }
        }
        n = v11;
        v10[v11] = 0;
      }
      v7 += 8;
    }
    while ( v36 != v7 );
    v23 = n + 11;
  }
  else
  {
    v23 = 11;
  }
  v24 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = a1 + 16;
  *(_BYTE *)(a1 + 16) = 0;
  sub_995C30(a1, v23);
  v25 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v25) <= 0xA )
LABEL_22:
    std::__throw_length_error("basic_string::append");
  v26 = v25 + 11;
  if ( v24 == *(_QWORD *)a1 )
    v27 = 15;
  else
    v27 = *(_QWORD *)(a1 + 16);
  if ( v26 > v27 )
    sub_998B30(a1, *(_QWORD *)(a1 + 8), 0, "-fsanitize=", 0xBu);
  else
    qmemcpy((void *)(v25 + *(_QWORD *)a1), "-fsanitize=", 11);
  v28 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v26;
  *(_BYTE *)(v28 + v25 + 11) = 0;
  v29 = *(_QWORD *)(a1 + 8);
  v30 = *(_QWORD *)a1;
  v31 = n + v29;
  if ( v24 == *(_QWORD *)a1 )
    v32 = 15;
  else
    v32 = *(_QWORD *)(a1 + 16);
  if ( v31 > v32 )
  {
    sub_998B30(a1, v29, 0, src, n);
    v30 = *(_QWORD *)a1;
  }
  else if ( n )
  {
    v34 = (_BYTE *)(v29 + v30);
    if ( n == 1 )
      *v34 = *(_BYTE *)src;
    else
      memcpy(v34, src, n);
    v30 = *(_QWORD *)a1;
  }
  *(_QWORD *)(a1 + 8) = v31;
  *(_BYTE *)(v30 + v31) = 0;
  if ( src != v41 )
    operator delete(src);
  return a1;
}
