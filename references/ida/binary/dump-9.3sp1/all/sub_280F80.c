__int64 __fastcall sub_280F80(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r12
  int v7; // eax
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // edx
  int v13; // esi
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r12
  _QWORD v19[7]; // [rsp+0h] [rbp-38h] BYREF

  v19[1] = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 16) )
    return 0;
  v3 = *a2;
  if ( a1 )
  {
    if ( a1 == v3 )
      v3 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(v3 + 24) == 81 )
    {
      v12 = *(_DWORD *)(a3 + 16);
      if ( **(_DWORD **)(v3 + 40) == v12 )
      {
        v13 = *(_DWORD *)(v3 + 28);
        if ( v13 != -1 )
          sub_27FF50(*(_QWORD *)(a3 + 8), v13, v12);
        v14 = *(_QWORD *)v3;
        **(_QWORD **)(v3 + 8) = *(_QWORD *)v3;
        *(_QWORD *)(v14 + 8) = *(_QWORD *)(v3 + 8);
        sub_255050(v3 + 16);
        v15 = v3;
        v3 = v14;
        qfree(v15);
        --*(_QWORD *)(a1 + 16);
        ++*(_DWORD *)(a3 + 20);
      }
    }
    *a2 = v3;
  }
  if ( a1 == v3 )
  {
    if ( *(_QWORD *)v3 == v3 )
      return 0;
    v3 = *(_QWORD *)(v3 + 8);
    *a2 = v3;
    v7 = *(_DWORD *)(v3 + 24);
    if ( v7 != 73 )
      goto LABEL_9;
LABEL_17:
    v9 = *(_QWORD *)(v3 + 40);
    v10 = *(_QWORD *)(v9 + 64);
    if ( *(_DWORD *)(v10 + 8) == 71 )
    {
      v19[0] = *(_QWORD *)(v10 + 24);
      result = sub_280F80(v19[0], v19, a3);
      if ( result )
        return result;
      v9 = *(_QWORD *)(v3 + 40);
    }
    v11 = *(_QWORD *)(v9 + 72);
    if ( v11 && *(_DWORD *)(v11 + 8) == 71 )
      return sub_280F80(*(_QWORD *)(v11 + 24), v19, a3);
    return 0;
  }
  v7 = *(_DWORD *)(v3 + 24);
  if ( v7 == 73 )
    goto LABEL_17;
LABEL_9:
  if ( v7 != 83 )
  {
    if ( v7 == 71 )
      return sub_280F80(*(_QWORD *)(v3 + 40), v19, a3);
    return 0;
  }
  v19[0] = *(_QWORD *)(v3 + 40);
  result = sub_280F80(v19[0], v19, a3);
  if ( !result )
  {
    v16 = *(_QWORD *)(v3 + 40);
    v17 = *(_QWORD *)(v16 + 24);
    v18 = v17 + 48LL * *(_QWORD *)(v16 + 32);
    if ( v17 != v18 )
    {
      while ( 1 )
      {
        v19[0] = v17;
        result = sub_280F80(v17, v19, a3);
        if ( result )
          break;
        v17 += 48;
        if ( v18 == v17 )
          return 0;
      }
      return result;
    }
    return 0;
  }
  return result;
}
