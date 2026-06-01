__int64 __fastcall sub_634400(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 *v5; // rcx
  int v6; // edi
  unsigned int v7; // edx
  char *v8; // rsi
  __int64 v9; // rdx
  __int64 *v10; // r8
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // [rsp+8h] [rbp-20h] BYREF
  __int64 *v14; // [rsp+18h] [rbp-10h] BYREF

  v4 = *(unsigned int *)(a1 + 32);
  v5 = *(__int64 **)(a1 + 24);
  v6 = *(_DWORD *)(a2 + 12);
  v13 = a2;
  v7 = v4 - 1;
  v4 *= 8;
  v8 = (char *)v5 + v4;
  v9 = 8LL * (v6 & v7);
  v10 = &v5[(unsigned __int64)v9 / 8];
  if ( v9 != v4 )
  {
    for ( result = (__int64)&v5[(unsigned __int64)v9 / 8]; v8 != (char *)result; result += 8 )
    {
      v12 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v12 + 12) == v6 && v12 == a2 )
          return result;
      }
      else if ( !v12 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v10 != v5; ++v5 )
  {
    result = *v5;
    if ( (unsigned __int64)*v5 > 1 )
    {
      if ( *(_DWORD *)(result + 12) == v6 && result == a2 )
        return result;
    }
    else if ( !result )
    {
      break;
    }
  }
LABEL_8:
  v14 = (__int64 *)a2;
  sub_4A3CA0(a1 + 24, &v14);
  return sub_62BD60((_QWORD *)(a1 + 48), &v13);
}

