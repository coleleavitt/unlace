__int64 __fastcall sub_1EE2910(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdi
  size_t v11; // rax
  char *v12; // [rsp+0h] [rbp-30h] BYREF

  if ( !a2 )
    return 0;
  v3 = a1[540];
  if ( v3 == a1[541] )
  {
    v11 = j__strlen("no identifier table in AST file");
    sub_1EAD680((__int64)a1, "no identifier table in AST file", v11);
    return 0;
  }
  else
  {
    v4 = *(_QWORD *)(a1[20] + 8LL * (unsigned int)(HIDWORD(a2) - 1));
    v5 = (unsigned int)(*(_DWORD *)(v4 + 1688) + a2);
    result = *(_QWORD *)(v3 + 8 * v5);
    if ( !result )
    {
      v12 = (char *)(*(_QWORD *)(v4 + 1696) + *(unsigned int *)(*(_QWORD *)(v4 + 1680) + 4LL * (unsigned int)a2));
      v7 = sub_1EA91E0(&v12);
      v8 = sub_6F3470(a1[17] + 552LL, v12, (unsigned int)(v7 - 1));
      *(_QWORD *)(a1[540] + 8 * v5) = v8;
      v9 = sub_145C8F0(a1[17]);
      if ( (*(_BYTE *)(v8 + 4) & 1) == 0 )
        sub_1EA8800((__int64)a1, (unsigned int *)v8, v9 != 0);
      v10 = a1[8];
      if ( v10 )
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, a2, v8);
      return *(_QWORD *)(a1[540] + 8 * v5);
    }
  }
  return result;
}
