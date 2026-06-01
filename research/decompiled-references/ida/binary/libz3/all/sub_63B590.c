__int64 __fastcall sub_63B590(__int64 a1, __int64 a2)
{
  __int64 *v3; // rcx
  __int64 v4; // r10
  __int64 v5; // rax
  int v6; // r8d
  unsigned int v7; // edx
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __int64 *v10; // r9
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rbx
  __int64 *v19; // r13
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rsi

  v3 = *(__int64 **)(a1 + 32);
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
  v5 = *(unsigned int *)(a1 + 40);
  v6 = *(_DWORD *)(v4 + 12);
  v7 = v5 - 1;
  v5 *= 16;
  v8 = (__int64 *)((char *)v3 + v5);
  v9 = 16LL * (v6 & v7);
  v10 = &v3[(unsigned __int64)v9 / 8];
  if ( v9 == v5 )
  {
LABEL_9:
    while ( v10 != v3 )
    {
      v13 = *v3;
      if ( (unsigned __int64)*v3 > 1 )
      {
        if ( *(_DWORD *)(v13 + 12) == v6 && v4 == v13 )
        {
          v11 = v3;
          goto LABEL_18;
        }
      }
      else if ( !v13 )
      {
        break;
      }
      v3 += 2;
    }
LABEL_29:
    BUG();
  }
  v11 = &v3[(unsigned __int64)v9 / 8];
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *v11;
      if ( (unsigned __int64)*v11 > 1 )
        break;
      if ( !v12 )
        goto LABEL_29;
      v11 += 2;
      if ( v8 == v11 )
        goto LABEL_9;
    }
    if ( *(_DWORD *)(v12 + 12) == v6 && v4 == v12 )
      break;
    v11 += 2;
    if ( v8 == v11 )
      goto LABEL_9;
  }
LABEL_18:
  result = v11[1];
  v15 = *(_QWORD *)result;
  if ( *(_QWORD *)result )
  {
    result = *(unsigned int *)(v15 - 4);
    while ( (_DWORD)result )
    {
      result = (unsigned int)(result - 1);
      v16 = (__int64 *)(v15 + 8 * result);
      if ( *v16 == a2 )
      {
        result = *(_QWORD *)(v15 + 8LL * (unsigned int)(*(_DWORD *)(v15 - 4) - 1));
        *v16 = result;
        --*(_DWORD *)(v15 - 4);
        break;
      }
    }
  }
  v17 = *(_QWORD *)(a1 + 24);
  if ( v17 )
  {
    result = *(unsigned int *)(v17 - 4);
    while ( (_DWORD)result )
    {
      v18 = (__int64 *)(v17 + 8LL * (unsigned int)(result - 1));
      result = (unsigned int)(result - 1);
      if ( a2 == *v18 )
      {
        v19 = *(__int64 **)(a1 + 16);
        v20 = *(_QWORD *)(v17 + 8LL * (unsigned int)(*(_DWORD *)(v17 - 4) - 1));
        sub_62A000((__int64)v19, v20);
        sub_62A410(v19, *v18);
        v21 = *(_QWORD *)(a1 + 24);
        v22 = *(__int64 **)(a1 + 16);
        *v18 = v20;
        v23 = (unsigned int)(*(_DWORD *)(v21 - 4) - 1);
        v24 = *(_QWORD *)(v21 + 8 * v23);
        *(_DWORD *)(v21 - 4) = v23;
        return sub_62A410(v22, v24);
      }
    }
  }
  return result;
}

