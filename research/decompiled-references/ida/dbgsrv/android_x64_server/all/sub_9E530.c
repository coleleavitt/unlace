/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9E530
// Address: 0x000000000009E530

//----- (000000000009E530) ----------------------------------------------------
__int64 __fastcall sub_9E530(__int64 a1, __int64 a2)
{
  size_t v3; // rbx
  void *v4; // r15
  void *v5; // rdi
  size_t v6; // rcx
  void *v8; // [rsp+8h] [rbp-40h]
  size_t v9; // [rsp+10h] [rbp-38h]
  size_t v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+20h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v4 = qalloc_or_throw(*(_QWORD *)(a2 + 8));
    memcpy(v4, *(const void **)a2, v3);
  }
  else
  {
    v4 = nullptr;
  }
  v8 = v4;
  v9 = v3;
  v10 = v3;
  v5 = *(void **)a1;
  v6 = v3;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v5);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
    v4 = v8;
    v6 = v9;
    v3 = v10;
  }
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 16) = v3;
  return a1;
}
