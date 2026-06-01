__int64 __fastcall sub_20CC0C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 *v13; // rsi
  __int64 v14; // r8
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // esi
  unsigned int v19; // edx
  __int64 v20; // r8
  int v21; // esi
  int v22; // r10d
  __int64 v23; // r8
  unsigned int v24; // r9d
  __int64 v25; // r8
  __m128 v26; // [rsp+0h] [rbp-18h] BYREF

  if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
    sub_20CB1F0(a1, a2, a3, a4, a5, a6);
  result = *(unsigned __int8 *)(a1 + 7);
  if ( (result & 8) != 0 )
  {
    sub_20BD2A0(a1);
    result = *(unsigned __int8 *)(a1 + 7);
  }
  if ( (result & 0x20) != 0 )
  {
    sub_20A0EA0(a1);
    result = *(unsigned __int8 *)(a1 + 7);
  }
  if ( (result & 0x10) == 0 )
    return result;
  v8 = ***(_QWORD ***)(a1 + 8);
  v9 = *(unsigned int *)(v8 + 176);
  v10 = v8 + 160;
  v11 = *(_QWORD *)(v8 + 160);
  if ( (_DWORD)v9 )
  {
    v12 = (v9 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
    v13 = (__int64 *)(v11 + 16LL * v12);
    v14 = *v13;
    if ( a1 == *v13 )
    {
LABEL_10:
      sub_20CBAA0(&v26, v13, (_QWORD *)(16 * v9 + v11), v10, 1);
      result = v26.m128_u64[0];
      goto LABEL_11;
    }
    v21 = 1;
    if ( v14 != -4096 )
    {
      do
      {
        v22 = v21 + 1;
        v12 = (v9 - 1) & (v21 + v12);
        v13 = (__int64 *)(v11 + 16LL * v12);
        v23 = *v13;
        if ( a1 == *v13 )
          goto LABEL_10;
        v21 = v22;
      }
      while ( v23 != -4096 );
    }
  }
  sub_20CBAA0(&v26, (_QWORD *)(v11 + 16LL * (unsigned int)v9), (_QWORD *)(v11 + 16LL * (unsigned int)v9), v10, 1);
  result = v26.m128_u64[0];
LABEL_11:
  v15 = *(_QWORD **)(result + 8);
  if ( v15 )
    result = operator delete(v15, *v15 + 17LL, 8);
  if ( (*(_BYTE *)(a1 + 7) & 0x10) != 0 )
  {
    v16 = ***(_QWORD ***)(a1 + 8);
    result = *(unsigned int *)(v16 + 176);
    v17 = *(_QWORD *)(v16 + 160);
    if ( (_DWORD)result )
    {
      v18 = result - 1;
      v19 = (result - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
      result = v17 + 16LL * v19;
      v20 = *(_QWORD *)result;
      if ( a1 == *(_QWORD *)result )
      {
LABEL_17:
        *(_QWORD *)result = -8192;
        --*(_DWORD *)(v16 + 168);
        ++*(_DWORD *)(v16 + 172);
        return result;
      }
      result = 1;
      if ( v20 != -4096 )
      {
        while ( 1 )
        {
          v24 = result + 1;
          v19 = v18 & (result + v19);
          result = v17 + 16LL * v19;
          v25 = *(_QWORD *)result;
          if ( a1 == *(_QWORD *)result )
            break;
          result = v24;
          if ( v25 == -4096 )
            return result;
        }
        goto LABEL_17;
      }
    }
  }
  return result;
}
