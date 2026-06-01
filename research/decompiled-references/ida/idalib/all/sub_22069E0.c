__int64 __fastcall sub_22069E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r12

  if ( !(((unsigned __int64)*(unsigned int *)(a1 + 8) + 63) >> 6) )
    return 0;
  v6 = *(_QWORD **)a1;
  v7 = 0;
  v8 = (unsigned int)(((unsigned __int64)*(unsigned int *)(a1 + 8) + 63) >> 6) - 1;
  v9 = *(_QWORD *)a1 + 8LL;
  v10 = v9 + 8LL * (unsigned int)v8;
  while ( 1 )
  {
    v7 += __popcountdi2(*v6, a2, v8, a4, a5, a6);
    v6 = (_QWORD *)v9;
    if ( v10 == v9 )
      break;
    v9 += 8;
  }
  return v7;
}
