__int64 __fastcall sub_70DBE0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 result; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 *v19; // rax
  __int64 v20; // rsi
  __int64 *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  unsigned __int8 v24; // [rsp+Fh] [rbp-89h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int64 v26; // [rsp+18h] [rbp-80h]
  _QWORD v27[15]; // [rsp+20h] [rbp-78h] BYREF

  v27[9] = __readfsqword(0x28u);
  if ( !a2 )
    return 1;
  v12 = a2 & 0xFFFFFFFFFFFFFFFBLL;
  if ( a3 )
  {
    v13 = *(unsigned int *)(a3 + 8);
    if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v13 + 1) )
    {
      sub_2237220(a3, a3 + 16, v13 + 1, 8);
      v13 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v13) = v12;
    ++*(_DWORD *)(a3 + 8);
    return 1;
  }
  v27[0] = a2 & 0xFFFFFFFFFFFFFFFBLL;
  ptr = v27;
  v16 = v27;
  v17 = 1;
  v26 = 0x800000001LL;
  while ( 1 )
  {
    if ( (v12 & 4) != 0 )
    {
      v17 = (unsigned int)(v17 - 1);
      LODWORD(v26) = v17;
      goto LABEL_10;
    }
    v16[v17 - 1] = v12 | 4;
    v18 = (unsigned int)v26;
    result = sub_70AF80(a1, v12 & 0xFFFFFFFFFFFFFFF8LL, (__int64)&ptr, a4, a5, a6, a7, a8, a9, a10, a11);
    v16 = ptr;
    if ( !(_BYTE)result )
      goto LABEL_19;
    v17 = (unsigned int)v26;
    v19 = (__int64 *)((char *)ptr + 8 * v18);
    v20 = 8LL * (unsigned int)v26;
    if ( 8 * v18 != v20 )
    {
      v21 = (__int64 *)((char *)ptr + v20 - 8);
      if ( v19 < v21 )
        break;
    }
LABEL_10:
    if ( !(_DWORD)v17 )
      goto LABEL_18;
LABEL_11:
    v12 = v16[(unsigned int)v17 - 1];
  }
  do
  {
    v22 = *v19;
    v23 = *v21;
    ++v19;
    --v21;
    *(v19 - 1) = v23;
    v21[1] = v22;
  }
  while ( v19 < v21 );
  v17 = (unsigned int)v26;
  v16 = ptr;
  if ( (_DWORD)v26 )
    goto LABEL_11;
LABEL_18:
  result = 1;
LABEL_19:
  if ( v16 != v27 )
  {
    v24 = result;
    free(v16);
    return v24;
  }
  return result;
}
