__int64 __fastcall sub_371B80(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  size_t v4; // rax
  size_t v5; // r12
  unsigned int v7; // ecx
  char *v8; // rdi
  int v9; // esi
  __int64 v10; // rsi
  size_t v11; // r13
  void *v12; // rax
  char vars0; // [rsp+0h] [rbp+0h] BYREF
  char vars1; // [rsp+1h] [rbp+1h] BYREF
  unsigned __int64 vars408; // [rsp+408h] [rbp+408h]

  v2 = *(_DWORD *)(a1 + 40);
  vars408 = __readfsqword(0x28u);
  vars0 = 0;
  if ( v2 - 2 <= 0x1E )
  {
    v7 = *(_DWORD *)(a1 + 8);
    if ( !v7 )
      goto LABEL_14;
    v8 = &vars0;
    while ( 1 )
    {
      v9 = v7 % v2 + 48;
      if ( v7 % v2 >= 0xA )
        LOBYTE(v9) = v7 % v2 + 55;
      *v8++ = v9;
      if ( v7 < v2 )
        break;
      v7 /= v2;
    }
    if ( v8 == &vars0 )
    {
LABEL_14:
      vars0 = 48;
      v10 = 1;
      v8 = &vars1;
    }
    else
    {
      v10 = v8 - &vars0;
    }
    *v8 = 0;
    memrev(&vars0, v10);
  }
  v4 = strlen(&vars0);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  v5 = v4;
  *(_OWORD *)(a2 + 16) = 0;
  if ( v4 )
  {
    v11 = v4 + 1;
    v12 = (void *)qvector_reserve(a2 + 8, 0, v4 + 1, 1);
    *(_QWORD *)(a2 + 8) = v12;
    *(_QWORD *)(a2 + 16) = v11;
    memmove(v12, &vars0, v5);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v5) = 0;
  }
  return 0;
}

