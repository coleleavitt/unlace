__int64 __fastcall sub_672CC0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // r13
  __int64 result; // rax
  __int64 v12; // r13
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned __int8 v18; // [rsp+1h] [rbp-79h]
  void *ptr; // [rsp+2h] [rbp-78h] BYREF
  __int64 v20; // [rsp+Ah] [rbp-70h]
  _QWORD v21[13]; // [rsp+12h] [rbp-68h] BYREF

  if ( !a2 )
    return 1;
  v6 = a2 & 0xFFFFFFFFFFFFFFFBLL;
  v7 = 1;
  v21[0] = v6;
  ptr = v21;
  v9 = v21;
  v20 = 0x800000001LL;
  while ( 1 )
  {
    if ( (v6 & 4) != 0 )
    {
      v7 = (unsigned int)(v7 - 1);
      LODWORD(v20) = v7;
      goto LABEL_4;
    }
    v9[v7 - 1] = v6 | 4;
    v10 = (unsigned int)v20;
    result = sub_66F430(a1, (const __m128i *)(v6 & 0xFFFFFFFFFFFFFFF8LL), (__int64)&ptr, a3, a4, a5, a6);
    v9 = ptr;
    if ( !(_BYTE)result )
      goto LABEL_13;
    v7 = (unsigned int)v20;
    v12 = 8 * v10;
    v13 = (__int64 *)((char *)ptr + v12);
    v14 = 8LL * (unsigned int)v20;
    if ( v14 != v12 )
    {
      v15 = (__int64 *)((char *)ptr + v14 - 8);
      if ( v13 < v15 )
        break;
    }
LABEL_4:
    if ( !(_DWORD)v7 )
      goto LABEL_12;
LABEL_5:
    v6 = v9[(unsigned int)v7 - 1];
  }
  do
  {
    v16 = *v13;
    v17 = *v15;
    ++v13;
    --v15;
    *(v13 - 1) = v17;
    v15[1] = v16;
  }
  while ( v13 < v15 );
  v7 = (unsigned int)v20;
  v9 = ptr;
  if ( (_DWORD)v20 )
    goto LABEL_5;
LABEL_12:
  result = 1;
LABEL_13:
  if ( v9 != v21 )
  {
    v18 = result;
    free(v9);
    return v18;
  }
  return result;
}

