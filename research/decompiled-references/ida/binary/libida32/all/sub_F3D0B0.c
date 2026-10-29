unsigned __int64 __fastcall sub_F3D0B0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 result; // rax
  __int64 *v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi

  v7 = a2[294];
  v8 = 8LL * *(_QWORD *)(a1 + 8);
  a2[304] += v8;
  result = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[295] >= v8 + result && v7 )
    a2[294] = v8 + result;
  else
    result = sub_962430((__int64)(a2 + 294), v8, v8, 3, v8, a6);
  v10 = *(__int64 **)a1;
  v11 = *(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 != v11 )
  {
    v12 = result;
    do
    {
      v13 = *v10++;
      v12 += 8LL;
      *(_QWORD *)(v12 - 8) = v13;
    }
    while ( (__int64 *)v11 != v10 );
  }
  return result;
}

