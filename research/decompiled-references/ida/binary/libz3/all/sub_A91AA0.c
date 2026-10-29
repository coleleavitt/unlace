__int64 *__fastcall sub_A91AA0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // edi
  __int64 **v7; // rcx
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 **v13; // r8
  __int64 *result; // rax
  __int64 v15; // rdx
  __int64 *v16[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = sub_15D1F10(a2);
  v5 = sub_A914A0(a1, v4);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = *(__int64 ***)v5;
  v8 = v5;
  v9 = *(unsigned int *)(v5 + 8);
  v10 = v9 - 1;
  v9 *= 8;
  v11 = (__int64 *)((char *)v7 + v9);
  v12 = 8LL * (v6 & v10);
  v13 = &v7[(unsigned __int64)v12 / 8];
  if ( v12 != v9 )
  {
    for ( result = (__int64 *)&v7[(unsigned __int64)v12 / 8]; v11 != result; ++result )
    {
      v15 = *result;
      if ( (unsigned __int64)*result > 1 )
      {
        if ( *(_DWORD *)(v15 + 12) == v6 && v15 == a2 )
          return result;
      }
      else if ( !v15 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v13 != v7; ++v7 )
  {
    result = *v7;
    if ( (unsigned __int64)*v7 > 1 )
    {
      if ( *((_DWORD *)result + 3) == v6 && result == (__int64 *)a2 )
        return result;
    }
    else if ( !result )
    {
      break;
    }
  }
LABEL_8:
  ++*(_DWORD *)(a2 + 8);
  v16[0] = (__int64 *)a2;
  sub_A74DF0((_QWORD *)(a1 + 56), v16);
  v16[0] = (__int64 *)a2;
  return sub_4A3CA0(v8, v16);
}

