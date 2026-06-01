__int64 __fastcall sub_A91B90(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // r8d
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r9
  __int64 *i; // rax
  __int64 v15; // rdx
  __int64 v17; // rax
  __int64 *v18[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = sub_A914A0((__int64)a1, a3);
  v5 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 48LL))(a1, a2, a3);
  v6 = *(__int64 **)v4;
  v7 = v5;
  v8 = *(unsigned int *)(v4 + 8);
  v9 = *(_DWORD *)(v7 + 12);
  v10 = v8 - 1;
  v8 *= 8;
  v11 = (__int64 *)(*(_QWORD *)v4 + v8);
  v12 = 8LL * (v9 & v10);
  v13 = (__int64 *)(*(_QWORD *)v4 + v12);
  if ( v12 != v8 )
  {
    for ( i = (__int64 *)(*(_QWORD *)v4 + v12); v11 != i; ++i )
    {
      v15 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v15 + 12) == v9 && v7 == v15 )
          return v7;
      }
      else if ( !v15 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v13 != v6; ++v6 )
  {
    v17 = *v6;
    if ( (unsigned __int64)*v6 > 1 )
    {
      if ( *(_DWORD *)(v17 + 12) == v9 && v7 == v17 )
        return v7;
    }
    else if ( !v17 )
    {
      break;
    }
  }
LABEL_8:
  ++*(_DWORD *)(v7 + 8);
  v18[0] = (__int64 *)v7;
  sub_A74DF0(a1 + 7, v18);
  v18[0] = (__int64 *)v7;
  sub_4A3CA0(v4, v18);
  return v7;
}

