__int64 __fastcall sub_63B710(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rcx
  __int64 v5; // r11
  __int64 v6; // rax
  int v7; // r9d
  unsigned int v8; // edx
  __int64 *v9; // r8
  __int64 v10; // rdx
  __int64 *v11; // r10
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rbx
  __int64 *v20; // r12

  v4 = *(__int64 **)(a1 + 32);
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
  v6 = *(unsigned int *)(a1 + 40);
  v7 = *(_DWORD *)(v5 + 12);
  v8 = v6 - 1;
  v6 *= 16;
  v9 = (__int64 *)((char *)v4 + v6);
  v10 = 16LL * (v7 & v8);
  v11 = &v4[(unsigned __int64)v10 / 8];
  if ( v10 == v6 )
  {
LABEL_9:
    while ( v11 != v4 )
    {
      v14 = *v4;
      if ( (unsigned __int64)*v4 > 1 )
      {
        if ( *(_DWORD *)(v14 + 12) == v7 && v5 == v14 )
        {
          v12 = v4;
          goto LABEL_18;
        }
      }
      else if ( !v14 )
      {
        break;
      }
      v4 += 2;
    }
LABEL_29:
    BUG();
  }
  v12 = &v4[(unsigned __int64)v10 / 8];
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = *v12;
      if ( (unsigned __int64)*v12 > 1 )
        break;
      if ( !v13 )
        goto LABEL_29;
      v12 += 2;
      if ( v9 == v12 )
        goto LABEL_9;
    }
    if ( *(_DWORD *)(v13 + 12) == v7 && v5 == v13 )
      break;
    v12 += 2;
    if ( v9 == v12 )
      goto LABEL_9;
  }
LABEL_18:
  result = v12[1];
  v16 = *(_QWORD *)result;
  if ( *(_QWORD *)result )
  {
    result = *(unsigned int *)(v16 - 4);
    while ( (_DWORD)result )
    {
      result = (unsigned int)(result - 1);
      v17 = (__int64 *)(v16 + 8 * result);
      if ( *v17 == a2 )
      {
        *v17 = a3;
        break;
      }
    }
  }
  v18 = *(_QWORD *)(a1 + 24);
  if ( v18 )
  {
    result = *(unsigned int *)(v18 - 4);
    while ( (_DWORD)result )
    {
      v19 = (__int64 *)(v18 + 8LL * (unsigned int)(result - 1));
      result = (unsigned int)(result - 1);
      if ( a2 == *v19 )
      {
        v20 = *(__int64 **)(a1 + 16);
        sub_62A000((__int64)v20, a3);
        result = sub_62A410(v20, *v19);
        *v19 = a3;
        return result;
      }
    }
  }
  return result;
}

