/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002B270
// Address: 0x000000010002B270

//----- (000000010002B270) ----------------------------------------------------
__int64 __fastcall sub_10002B270(__int64 a1, const char *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  size_t v4; // rax
  size_t v5; // r15
  size_t v6; // r12
  void *v7; // rdi
  __int128 v9; // [rsp+0h] [rbp-50h] BYREF
  __int64 v10; // [rsp+10h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v9 = 0;
  v10 = 0;
  if ( a2 )
  {
    v3 = a1;
    v4 = strlen(a2);
    v5 = v4;
    v6 = v4 + 1;
    if ( v4 == -1 )
    {
      v7 = nullptr;
    }
    else
    {
      v7 = qvector_reserve((__int64)&v9, nullptr, v4 + 1, 1u);
      *(_QWORD *)&v9 = v7;
    }
    *((_QWORD *)&v9 + 1) = v6;
    memmove(v7, a2, v5);
    *(_BYTE *)(v9 + v5) = 0;
    a1 = v3;
  }
  sub_100015270((void **)a1, (char *)&v9);
  if ( (_QWORD)v9 )
  {
    *((_QWORD *)&v9 + 1) = 0;
    qfree((void *)v9);
  }
  return v2;
}
