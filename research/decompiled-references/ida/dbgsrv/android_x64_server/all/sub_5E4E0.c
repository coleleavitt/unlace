/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E4E0
// Address: 0x000000000005E4E0

//----- (000000000005E4E0) ----------------------------------------------------
__int64 __fastcall sub_5E4E0(__int64 a1, const char *a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  char *v10; // rdi
  __int128 v12; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+10h] [rbp-38h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v13 = *(_QWORD *)(a3 + 16);
  v12 = *(_OWORD *)a3;
  v4 = qvsnprintf(nullptr, 0, a2, a3);
  if ( v4 )
  {
    v5 = v4;
    v6 = *(_QWORD *)(a1 + 8);
    v7 = v6 - 1;
    if ( !v6 )
      v7 = 0;
    v8 = v5 + v7 + 1;
    v9 = v5 + 1;
    if ( *(_QWORD *)(a1 + 16) >= v8 )
    {
      v10 = *(char **)a1;
    }
    else
    {
      v10 = (char *)qvector_reserve(a1, *(char **)a1, v8, 1u);
      *(_QWORD *)a1 = v10;
    }
    *(_QWORD *)(a1 + 8) = v8;
    qvsnprintf(&v10[v7], v9, a2, (__int64)&v12);
  }
  return a1;
}
