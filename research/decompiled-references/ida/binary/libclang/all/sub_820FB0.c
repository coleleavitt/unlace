__int64 __fastcall sub_820FB0(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int8 v2; // al
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  size_t v6; // rbp
  const void *v7; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 result; // rax

  *a1 = *a1 & 7 | sub_6A37B0(a2);
  v2 = sub_6A37C0(a2);
  v3 = *a1;
  *((_DWORD *)a1 + 4) = 0;
  *a1 = (4LL * v2) | v3 & 0xFFFFFFFFFFFFFFFBLL;
  v4 = sub_6A37D0(a2);
  v6 = 8 * v5;
  v7 = (const void *)v4;
  v8 = *((unsigned int *)a1 + 4);
  v9 = (8 * v5) >> 3;
  if ( *((unsigned int *)a1 + 5) < (unsigned __int64)(v8 + v9) )
  {
    sub_25D6060(a1 + 1, a1 + 3, v8 + v9, 8);
    v8 = *((unsigned int *)a1 + 4);
  }
  if ( v6 )
  {
    memcpy((void *)(a1[1] + 8 * v8), v7, v6);
    v8 = *((unsigned int *)a1 + 4);
  }
  result = v9 + v8;
  *((_DWORD *)a1 + 4) = result;
  return result;
}

