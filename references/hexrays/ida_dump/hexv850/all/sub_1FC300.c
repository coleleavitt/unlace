__int64 __fastcall sub_1FC300(__int64 ***a1, __int64 a2, __int64 *a3)
{
  int v4; // eax
  __int64 **v5; // rbp
  __int64 *v7; // r14
  __int64 v8; // r8
  int v9; // r9d
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // rbx

  v4 = *(_DWORD *)(a2 + 44);
  v5 = *a1;
  if ( v4 != -1 && v4 != *((_DWORD *)v5 + 4) )
    return 1;
  v7 = *v5;
  if ( !(unsigned __int8)sub_5FDA0(a3, *v5) || !(unsigned __int8)sub_312680(v7 + 2, a3 + 2) )
    return 1;
  v10 = *(_DWORD **)a2;
  v11 = *((unsigned int *)v5[1] + 23);
  v12 = *(_QWORD *)a2 + 4LL * *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v12 )
  {
    while ( (_DWORD)v11 != *v10 )
    {
      if ( (_DWORD *)v12 == ++v10 )
        return 0;
    }
    if ( (_DWORD *)v12 != v10 )
    {
      v13 = *v5;
      sub_5FBC0(*v5, a3, v12, v11, v8, v9);
      sub_3123A0(v13 + 2, a3 + 2);
    }
  }
  return 0;
}
