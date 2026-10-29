/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000249F0
// Address: 0x00000001000249F0

//----- (00000001000249F0) ----------------------------------------------------
__int64 __fastcall sub_1000249F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  unsigned __int64 v4; // r14
  bool v5; // cf
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int128 v8; // xmm0
  bool v9; // cc
  unsigned __int64 v10; // rax
  signed __int64 v11; // r14
  __int64 v12; // r15
  void *v13; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  void *__dst[4]; // [rsp+0h] [rbp-50h] BYREF

  v2 = a1[2];
  v3 = a1[5];
  v4 = 0;
  v5 = v2 == 0;
  v6 = v2 - 1;
  if ( !v5 )
    v4 = v6;
  v7 = a1[9];
  if ( v3 >= 0 )
  {
    if ( v7 >= 0 )
      goto LABEL_5;
    goto LABEL_17;
  }
  v15 = v4 + v3 + 1;
  v3 = 0;
  if ( v15 > 0 )
    v3 = v15;
  if ( v3 >= v4 )
    v3 = v4;
  if ( v7 < 0 )
  {
LABEL_17:
    v16 = v4 + v7 + 1;
    v7 = 0;
    if ( v16 > 0 )
      v7 = v16;
    if ( v7 >= v4 )
      v7 = v4;
  }
LABEL_5:
  v8 = 0;
  memset(__dst, 0, 24);
  v9 = v7 <= v3;
  v10 = v7 - v3;
  if ( v9 || (v11 = v4 - v3, v11 <= 0) )
  {
    v13 = nullptr;
  }
  else
  {
    if ( v10 < v11 )
      v11 = v10;
    v12 = a1[1];
    __dst[0] = qvector_reserve((__int64)__dst, nullptr, v11 + 1, 1u);
    __dst[1] = (void *)(v11 + 1);
    *((_BYTE *)__dst[0] + v11) = 0;
    memmove(__dst[0], (const void *)(v3 + v12), v11);
    v13 = __dst[0];
    v8 = *(_OWORD *)&__dst[1];
  }
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = v13;
  *(_OWORD *)(a2 + 16) = v8;
  return 0;
}
