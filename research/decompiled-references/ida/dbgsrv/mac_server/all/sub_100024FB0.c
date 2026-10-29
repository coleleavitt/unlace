/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024FB0
// Address: 0x0000000100024FB0

//----- (0000000100024FB0) ----------------------------------------------------
__int64 __fastcall sub_100024FB0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  char v9; // r9
  bool v10; // cf
  char v11; // dl
  char v12; // r8
  char *v13; // rsi
  size_t v14; // rax
  size_t v15; // r14
  size_t v16; // r15
  void *v17; // rdi
  char __s; // [rsp+0h] [rbp-430h] BYREF
  char v20; // [rsp+1h] [rbp-42Fh] BYREF

  __s = 0;
  v3 = *(_QWORD *)(a1 + 40);
  if ( (unsigned int)(v3 - 2) <= 0x1E )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( !v4 )
      goto LABEL_12;
    v5 = (unsigned int)v3;
    v6 = 0;
    do
    {
      if ( HIDWORD(v4) )
      {
        v7 = v4 / v5;
        v8 = v4 % v5;
      }
      else
      {
        v8 = (unsigned int)v4 % (unsigned int)v5;
        v7 = (unsigned int)v4 / (unsigned int)v5;
      }
      v9 = v8 | 0x30;
      v10 = v8 < 0xA;
      v11 = v8 + 55;
      v12 = v9;
      if ( !v10 )
        v12 = v11;
      *(&__s + v6++) = v12;
      v10 = v4 < v5;
      v4 = v7;
    }
    while ( !v10 );
    if ( v6 )
    {
      v13 = &__s + v6;
    }
    else
    {
LABEL_12:
      v13 = &v20;
      __s = 48;
    }
    *v13 = 0;
    memrev(&__s, v13 - &__s);
  }
  v14 = strlen(&__s);
  *(_BYTE *)a2 = 7;
  *(_OWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( v14 )
  {
    v15 = v14;
    v16 = v14 + 1;
    if ( v14 == -1 )
    {
      v17 = nullptr;
    }
    else
    {
      v17 = qvector_reserve(a2 + 8, nullptr, v14 + 1, 1u);
      *(_QWORD *)(a2 + 8) = v17;
    }
    *(_QWORD *)(a2 + 16) = v16;
    memmove(v17, &__s, v15);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v15) = 0;
  }
  return 0;
}
