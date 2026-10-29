/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A280
// Address: 0x000000000042A280

//----- (000000000042A280) ----------------------------------------------------
unsigned __int64 __fastcall sub_42A280(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned int v5; // edx
  const char *v7; // rdx
  const char *v8; // rcx
  signed __int64 v9; // r13
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  char *v13; // rsi
  char *v14; // rax
  unsigned __int64 v15; // [rsp+8h] [rbp-70h] BYREF
  void *v16; // [rsp+10h] [rbp-68h] BYREF
  __int128 v17; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h]
  unsigned __int64 v20; // [rsp+48h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 72) )
    sub_423700();
  v3 = *(_QWORD *)(a3 + 32);
  v5 = *(_DWORD *)a3;
  v16 = nullptr;
  v15 = v3;
  v17 = 0;
  sub_429DF0((__int64)&ptr, a1, v5);
  v7 = s1;
  if ( v19 )
    v7 = (const char *)ptr;
  sub_4172B0((__int64)&v16, "Size of %s", v7);
  if ( ptr )
  {
    v19 = 0;
    j__free(ptr);
  }
  v8 = s1;
  if ( (_QWORD)v17 )
    v8 = (const char *)v16;
  sub_428780(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 472LL), &v15, 1u, (__int64)v8, *(_QWORD *)(a3 + 8), -1);
  v9 = v15;
  v10 = *(_QWORD *)(a2 + 8);
  if ( v10 < v15 )
  {
    v13 = *(char **)a2;
    if ( *(_QWORD *)(a2 + 16) < v15 )
    {
      v14 = (char *)sub_481540(a2, v13, v15, 1u);
      *(_QWORD *)a2 = v14;
      v10 = *(_QWORD *)(a2 + 8);
      v13 = v14;
    }
    memset(&v13[v10], 0, v9 - v10);
    *(_QWORD *)(a2 + 8) = v9;
  }
  else if ( v15 != v10 )
  {
    *(_QWORD *)(a2 + 8) = v15;
  }
  sub_47F740(
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 472LL),
    *(_QWORD *)(a3 + 8) + *(_QWORD *)(*(_QWORD *)(a1 + 64) + 480LL),
    0);
  sub_424D70(*(_QWORD *)(a1 + 64), *(_BYTE **)a2, v9, 0, v11);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    j__free(v16);
  }
  return v20 - __readfsqword(0x28u);
}
// 42A394: variable 'v11' is possibly undefined
