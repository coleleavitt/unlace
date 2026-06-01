/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024810
// Address: 0x0000000100024810

//----- (0000000100024810) ----------------------------------------------------
__int64 __fastcall sub_100024810(__int64 a1, __int64 a2)
{
  char *v2; // r15
  char *v3; // rax
  char *v4; // r14
  size_t v5; // r12
  void *v6; // rdi
  char *v7; // rdi
  __int128 v9; // [rsp+0h] [rbp-50h] BYREF
  __int64 v10; // [rsp+10h] [rbp-40h]

  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(char **)(a1 + 8);
  else
    v2 = (char *)_s1;
  v3 = strchr(v2, 61);
  if ( v3 )
  {
    v4 = v3;
    v9 = 0;
    v10 = 0;
    v5 = v3 - v2;
    if ( v3 == v2
      || (v5 != -1
        ? (void *)(v6 = qvector_reserve((__int64)&v9, nullptr, v5 + 1, 1u), *(_QWORD *)&v9 = v6)
        : (v6 = nullptr),
          *((_QWORD *)&v9 + 1) = v5 + 1,
          memmove(v6, v2, v5),
          *(_BYTE *)(v9 + v5) = 0,
          !*((_QWORD *)&v9 + 1)) )
    {
      v7 = (char *)_s1;
    }
    else
    {
      v7 = (char *)v9;
    }
    *(_QWORD *)(a2 + 8) = (unsigned __int8)qsetenv(v7, v4 + 1);
    if ( (_QWORD)v9 )
    {
      *((_QWORD *)&v9 + 1) = 0;
      qfree((void *)v9);
    }
  }
  return 0;
}
