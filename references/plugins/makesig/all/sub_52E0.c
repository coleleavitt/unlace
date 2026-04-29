__int64 __fastcall sub_52E0(__int64 a1, __int64 a2)
{
  const char *v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rax
  size_t v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  _BYTE src[4104]; // [rsp+20h] [rbp-1048h] BYREF
  unsigned __int64 v15; // [rsp+1028h] [rbp-40h]

  v3 = s1;
  v15 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 8) )
    v3 = *(const char **)a1;
  v4 = qfopen(v3, "r");
  if ( !v4 )
    return 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_WORD *)(a1 + 56) = 32;
  while ( 1 )
  {
    v5 = qfread(v4, src, 4096);
    v6 = v5;
    if ( !v5 )
      break;
    v7 = *(_QWORD *)(a1 + 40);
    v8 = v5;
    if ( v7 )
    {
      --v7;
      v8 = v5 + v7;
    }
    v9 = *(_QWORD *)(a1 + 32);
    v10 = v8 + 1;
    if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)(v8 + 1) )
    {
      v11 = qvector_reserve(a1 + 32, v9, v10, 1);
      v10 = v8 + 1;
      *(_QWORD *)(a1 + 32) = v11;
      v9 = v11;
    }
    *(_QWORD *)(a1 + 40) = v10;
    *(_BYTE *)(v9 + v8) = 0;
    memmove((void *)(v7 + *(_QWORD *)(a1 + 32)), src, v6);
  }
  qfclose(v4);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 1, a1 + 24);
}
