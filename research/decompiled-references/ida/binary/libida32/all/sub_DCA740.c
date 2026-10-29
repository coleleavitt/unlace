__int64 __fastcall sub_DCA740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  char *v15; // rcx

  result = *(unsigned int *)(a2 + 24);
  v8 = *(_QWORD *)a2;
  v9 = *(_QWORD *)(a2 + 32);
  if ( (_DWORD)result
    || (result = sub_CDA220(a2), !*(_BYTE *)(result + 60))
    || (result = *(unsigned int *)(a2 + 40), v10 = v9 + result + 72, result != v8) )
  {
    v10 = v9 + v8 + 40;
  }
  v11 = ((unsigned __int64)*(unsigned int *)(v10 + 8) + 63) >> 6;
  if ( v11 != 1 )
  {
    v12 = *(_QWORD **)a1;
    v13 = 8 * v11;
    v14 = *(_QWORD *)(*(_QWORD *)a1 + 128LL);
    v12[26] += v13;
    v15 = (char *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v12[17] >= (unsigned __int64)&v15[v13] && v14 )
      v12[16] = &v15[v13];
    else
      v15 = (char *)sub_962430((__int64)(v12 + 16), v13, v13, 3, a5, a6);
    result = (__int64)memcpy(v15, *(const void **)v10, 8 * (((unsigned __int64)*(unsigned int *)(v10 + 8) + 63) >> 6));
    *(_QWORD *)v10 = result;
  }
  return result;
}

