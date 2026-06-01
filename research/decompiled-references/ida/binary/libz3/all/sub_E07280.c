__int64 __fastcall sub_E07280(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  _QWORD *v4; // r12
  _QWORD *i; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 result; // rax
  unsigned int v13; // edx

  v3 = a1 + 16;
  v4 = *(_QWORD **)sub_15F6BE0(a1 + 16, a2);
  if ( v4 )
  {
    for ( i = &v4[*((unsigned int *)v4 - 1)]; i != v4; ++v4 )
    {
      v6 = *v4;
      sub_E06850(*(_QWORD *)(a1 + 8), *v4 + 16LL, *v4);
      v7 = sub_15FCA80(v3, v6);
      sub_E06850(*(_QWORD *)(a1 + 8), v7 + 16, v7);
      a2 = v6;
      v8 = *(__int64 **)sub_15FB1F0(v3, v6);
      if ( v8 )
      {
        v9 = &v8[*((unsigned int *)v8 - 1)];
        while ( v9 != v8 )
        {
          v10 = *v8++;
          a2 = v10 + 16;
          sub_E06850(*(_QWORD *)(a1 + 8), v10 + 16, v10);
        }
      }
    }
  }
  v11 = *(_QWORD *)(a1 + 8);
  result = *(_QWORD *)(v11 + 848);
  if ( result )
  {
    result = *(unsigned int *)(result - 4);
    if ( (_DWORD)result )
    {
      if ( !*(_BYTE *)(v11 + 257) )
      {
        if ( !*(_QWORD *)(v11 + 312) )
        {
          sub_DFBCB0(*(_QWORD *)(a1 + 8));
          v11 = *(_QWORD *)(a1 + 8);
        }
        if ( a3 )
          ++*(_DWORD *)(a3 + 16);
        result = *(_QWORD *)(v11 + 744);
        if ( !result || (v13 = *(_DWORD *)(result - 4), v13 == *(_DWORD *)(result - 8)) )
        {
          sub_E0F880(v11 + 744, a2);
          result = *(_QWORD *)(v11 + 744);
          v13 = *(_DWORD *)(result - 4);
        }
        *(_QWORD *)(result + 8LL * v13) = a3;
        *(_DWORD *)(result - 4) = v13 + 1;
      }
    }
  }
  return result;
}

