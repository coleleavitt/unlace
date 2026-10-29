/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42D4C0
// Address: 0x000000000042D4C0

//----- (000000000042D4C0) ----------------------------------------------------
__int64 __fastcall sub_42D4C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  size_t v4; // rax
  size_t v5; // r12
  unsigned __int64 v7; // rcx
  char *v8; // r8
  char v9; // si
  __int64 v10; // rsi
  size_t v11; // r13
  void *v12; // rax
  char vars0; // [rsp+0h] [rbp+0h] BYREF
  char vars1; // [rsp+1h] [rbp+1h] BYREF
  unsigned __int64 vars408; // [rsp+408h] [rbp+408h]

  v2 = *(_QWORD *)(a1 + 40);
  vars408 = __readfsqword(0x28u);
  vars0 = 0;
  if ( (unsigned int)(v2 - 2) <= 0x1E )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( !v7 )
      goto LABEL_14;
    v8 = &vars0;
    while ( 1 )
    {
      v9 = v7 % (int)v2 + 48;
      if ( v7 % (int)v2 >= 0xA )
        v9 = v7 % (int)v2 + 55;
      *v8++ = v9;
      if ( v7 < (int)v2 )
        break;
      v7 /= (unsigned __int64)(int)v2;
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
    sub_482080(&vars0, v10);
  }
  v4 = strlen(&vars0);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  v5 = v4;
  *(_OWORD *)(a2 + 16) = 0;
  if ( v4 )
  {
    v11 = v4 + 1;
    v12 = sub_481540(a2 + 8, nullptr, v4 + 1, 1u);
    *(_QWORD *)(a2 + 8) = v12;
    *(_QWORD *)(a2 + 16) = v11;
    memmove(v12, &vars0, v5);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v5) = 0;
  }
  return 0;
}
