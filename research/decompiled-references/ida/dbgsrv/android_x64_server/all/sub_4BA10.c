/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4BA10
// Address: 0x000000000004BA10

//----- (000000000004BA10) ----------------------------------------------------
__int64 __fastcall sub_4BA10(__int64 a1, const char *a2, __int64 a3)
{
  char *v5; // rdi
  int v6; // eax
  unsigned __int64 v7; // r15
  char *v8; // rdi
  __int128 v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h]
  unsigned __int64 v12; // [rsp+20h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a3 + 16);
  v10 = *(_OWORD *)a3;
  v5 = *(char **)a1;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v5);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  v6 = qvsnprintf(nullptr, 0, a2, a3);
  if ( v6 )
  {
    v7 = v6 + 1LL;
    if ( *(_QWORD *)(a1 + 16) >= v7 )
    {
      v8 = *(char **)a1;
    }
    else
    {
      v8 = (char *)qvector_reserve(a1, *(char **)a1, v6 + 1LL, 1u);
      *(_QWORD *)a1 = v8;
    }
    *(_QWORD *)(a1 + 8) = v7;
    qvsnprintf(v8, v7, a2, (__int64)&v10);
  }
  return a1;
}
