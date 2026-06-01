/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002B060
// Address: 0x000000010002B060

//----- (000000010002B060) ----------------------------------------------------
__int64 __fastcall sub_10002B060(_QWORD *a1)
{
  __int64 v2; // r13
  const char *v3; // r12
  __int64 v4; // r15
  _DWORD *v5; // r14
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // r15
  size_t v9; // rax
  size_t v10; // r12
  size_t v11; // r13
  void *v12; // rdi
  __int64 v14; // [rsp+8h] [rbp-38h]
  const char *__src; // [rsp+10h] [rbp-30h]

  v2 = a1[44];
  if ( a1[6] )
    v3 = (const char *)a1[5];
  else
    v3 = _s1;
  v14 = *(_QWORD *)(a1[43] + 8 * v2 - 8);
  v4 = a1[43];
  v5 = operator new(0x20u);
  v5[6] = 0;
  *v5 = 5;
  v6 = operator new(0x18u);
  v7 = v4;
  v8 = v6;
  *(_OWORD *)v6 = 0;
  v6[2] = 0;
  if ( v3 )
  {
    __src = v3;
    v9 = strlen(v3);
    v10 = v9;
    v11 = v9 + 1;
    if ( v9 == -1 )
    {
      v12 = nullptr;
    }
    else
    {
      v12 = qvector_reserve((__int64)v8, nullptr, v9 + 1, 1u);
      *v8 = v12;
    }
    v8[1] = v11;
    memmove(v12, __src, v10);
    *(_BYTE *)(*v8 + v10) = 0;
    v7 = a1[43];
    v2 = a1[44];
  }
  *((_QWORD *)v5 + 1) = v8;
  *((_QWORD *)v5 + 2) = v14;
  *(_QWORD *)(v7 + 8 * v2 - 8) = v5;
  return 0;
}
