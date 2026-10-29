__int64 __fastcall sub_1EE6840(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 result; // rax
  unsigned int *v6; // rax
  __int64 v7; // rdi
  size_t v8; // rax

  if ( !a2 )
    return 0;
  v3 = a1[543];
  if ( v3 == a1[544] )
  {
    v8 = j__strlen("no macro table in AST file");
    sub_1EAD680((__int64)a1, "no macro table in AST file", v8);
    return 0;
  }
  else
  {
    v4 = a2 - 1;
    result = *(_QWORD *)(v3 + 8 * v4);
    if ( !result )
    {
      v6 = sub_1EAEBA0((__int64)(a1 + 549), a2);
      result = sub_1EE6180(
                 (__int64)a1,
                 *((_QWORD *)v6 + 1),
                 *(_QWORD *)(*((_QWORD *)v6 + 1) + 2088LL)
               + *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 2096LL)
                                 + 4LL * (a2 - 1 - *(_DWORD *)(*((_QWORD *)v6 + 1) + 2104LL))));
      *(_QWORD *)(a1[543] + 8 * v4) = result;
      v7 = a1[8];
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 32LL))(v7, a2, result);
        return *(_QWORD *)(a1[543] + 8 * v4);
      }
    }
  }
  return result;
}
