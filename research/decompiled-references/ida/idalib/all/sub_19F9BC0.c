__int64 __fastcall sub_19F9BC0(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 *v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // ecx
  int v17; // edi
  __int64 v18; // rsi
  __int64 result; // rax
  __int64 v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  int v23; // esi
  int v24; // edi
  __int64 v25; // r9
  unsigned __int64 v26; // [rsp+8h] [rbp-50h]
  __m128 v27[4]; // [rsp+10h] [rbp-48h] BYREF

  v3 = (__int64)(a1 + 6);
  v8 = *((unsigned int *)a1 + 16);
  v9 = a1[6];
  if ( !(_DWORD)v8 )
    goto LABEL_17;
  v10 = (v8 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v11 = (__int64 *)(v9 + 16LL * v10);
  v12 = *v11;
  if ( a2 != *v11 )
  {
    v23 = 1;
    if ( v12 != -4096 )
    {
      do
      {
        v24 = v23 + 1;
        v10 = (v8 - 1) & (v23 + v10);
        v11 = (__int64 *)(v9 + 16LL * v10);
        v25 = *v11;
        if ( a2 == *v11 )
          goto LABEL_3;
        v23 = v24;
      }
      while ( v25 != -4096 );
    }
LABEL_17:
    sub_A8BEF0(v27, (_QWORD *)(v9 + 16LL * (unsigned int)v8), (_QWORD *)(v9 + 16LL * (unsigned int)v8), v3, 1);
    v13 = v27[0].m128_u64[0];
    goto LABEL_4;
  }
LABEL_3:
  sub_A8BEF0(v27, v11, (_QWORD *)(16 * v8 + v9), v3, 1);
  v13 = v27[0].m128_u64[0];
LABEL_4:
  v26 = v13;
  v14 = (_QWORD *)(a1[6] + 16LL * *((unsigned int *)a1 + 16));
  sub_A8BEF0(v27, v14, v14, v3, 1);
  if ( v26 != v27[0].m128_u64[0] )
  {
    v15 = *(unsigned int *)(v26 + 8);
    v16 = *((_DWORD *)a1 + 2);
    v17 = v15;
    if ( (unsigned int)v15 < v16 )
    {
      v18 = *a1;
      result = *a1 + 32 * v15;
      if ( a2 == *(_QWORD *)result )
      {
        if ( a3 == *(_BYTE *)(result + 8) )
          return result;
        v20 = (unsigned int)(v17 + 1);
        v21 = (_QWORD *)(v18 + 32 * v20);
        v22 = (_QWORD *)(v18 + 32 * (v20 + v16 - 1 - v17));
        while ( v22 != v21 )
        {
          result = (__int64)v21;
          if ( *v21 != a2 )
            break;
          v21 += 4;
          if ( *((_BYTE *)v21 - 24) == a3 )
            return result;
        }
      }
    }
  }
  return 0;
}
