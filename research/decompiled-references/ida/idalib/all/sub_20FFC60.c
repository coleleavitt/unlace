__int64 __fastcall sub_20FFC60(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  _DWORD *v6; // rdx
  __int64 result; // rax
  unsigned __int64 v8; // rsi
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rdi

  v2 = *(_QWORD *)(a1 + 288);
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 280);
  v5 = 0xAAAAAAAAAAAAAAABLL * ((v2 - v4) >> 4);
  if ( a2 >= v5 )
  {
    v8 = a2 + 1;
    if ( v8 > v5 )
    {
      sub_20FF1F0((void **)(a1 + 280), v8 - v5);
      v4 = *(_QWORD *)(a1 + 280);
    }
    else if ( v8 < v5 )
    {
      v10 = v4 + 48 * v8;
      if ( v2 != v10 )
      {
        v11 = v4 + 48 * v8;
        do
        {
          v12 = *(unsigned int *)(v11 + 40);
          v13 = *(_QWORD *)(v11 + 24);
          v11 += 48;
          operator delete(v13, 16 * v12, 4);
        }
        while ( v2 != v11 );
        *(_QWORD *)(a1 + 288) = v10;
        v4 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  v6 = (_DWORD *)(48 * v3 + v4);
  result = 0;
  if ( !*v6 )
  {
    *v6 = -1;
    return 1;
  }
  return result;
}
