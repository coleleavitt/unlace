__int64 __fastcall sub_470F90(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r14

  v2 = *(unsigned int *)(a2 + 24);
  if ( (_DWORD)v2 )
  {
    v4 = (unsigned int)(v2 - 1);
    v5 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v5 + 848) == sub_15D1F10(*(_QWORD *)(a2 + 8 * v4 + 32)) )
    {
      v7 = (__int64 *)(a2 + 32);
      v8 = a2 + 32 + 8 * v2;
    }
    else
    {
      v6 = 8 * v4;
      v7 = (__int64 *)(a2 + 32);
      v8 = a2 + 32 + v6;
      if ( !v6 )
        return sub_4478F0(*(_QWORD *)(a1 + 16), a2, 1u);
    }
    do
    {
      v9 = *(_QWORD *)(a1 + 16);
      v10 = *v7;
      if ( (unsigned __int8)sub_15D37A0(*(_QWORD *)(v9 + 16) + 80LL, *v7) && !(unsigned __int8)sub_4478E0(v9, v10) )
        sub_470CB0(a1, v10);
      ++v7;
    }
    while ( (__int64 *)v8 != v7 );
  }
  return sub_4478F0(*(_QWORD *)(a1 + 16), a2, 1u);
}

