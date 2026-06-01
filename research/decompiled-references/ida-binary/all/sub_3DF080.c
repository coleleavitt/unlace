__int64 __fastcall sub_3DF080(_QWORD *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // r8
  _QWORD *v10; // rdi
  _QWORD *i; // rdx

  result = (__int64)a1;
  if ( *(int *)a3 < 0 || *(int *)(a3 + 4) < 0 || !*(_QWORD *)(a3 + 16) )
  {
    *a1 = -1;
    a1[1] = 0;
    a1[2] = 0;
    return result;
  }
  v5 = *(_QWORD *)(a3 + 8);
  v6 = *(_QWORD *)(a2 + 32);
  if ( v6 == v5 )
  {
    if ( under_debugger )
      goto LABEL_19;
    interr(40271, a2, v6, v5, a4);
LABEL_17:
    if ( !under_debugger )
    {
      interr(40272, a2, v8, v7, a4);
      return sub_3DF180();
    }
LABEL_19:
    BUG();
  }
  v7 = *(_QWORD *)(v5 + 40);
  if ( v6 == v7 )
  {
    *a1 = -1;
    a1[1] = 0;
    a1[2] = 0;
    return result;
  }
  v8 = *(_QWORD *)(v7 + 40);
  if ( !v8 )
    goto LABEL_17;
  v9 = *(_QWORD **)(v8 + 16);
  v10 = &v9[*(_QWORD *)(v8 + 24)];
  for ( i = v9; v10 != i; ++i )
  {
    if ( v7 == *i )
      break;
  }
  *(_DWORD *)(result + 4) = 0;
  *(_QWORD *)(result + 8) = v7;
  *(_DWORD *)result = i - v9;
  *(_QWORD *)(result + 16) = a2;
  return result;
}
