/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C698
// Address: 0x000000000042C698

//----- (000000000042C698) ----------------------------------------------------
__int64 __fastcall sub_42C698(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // w1
  const char *v7; // x2
  __int64 *v8; // x3
  unsigned __int64 v9; // x3
  unsigned __int64 v10; // x23
  char *v12; // x0
  unsigned __int64 v13; // [xsp+30h] [xbp-40h] BYREF
  void *v14; // [xsp+38h] [xbp-38h] BYREF
  __int64 v15; // [xsp+40h] [xbp-30h]
  __int64 v16; // [xsp+48h] [xbp-28h]
  void *ptr; // [xsp+50h] [xbp-20h] BYREF
  __int64 v18; // [xsp+58h] [xbp-18h]
  __int64 v19; // [xsp+68h] [xbp-8h]

  if ( !*(_BYTE *)(a1 + 72) )
    sub_4068E0();
  v6 = *(_DWORD *)a3;
  v13 = *(_QWORD *)(a3 + 32);
  v14 = nullptr;
  v15 = 0;
  v16 = 0;
  sub_42C1B8(a1, v6, &ptr);
  v7 = (const char *)ptr;
  if ( !v18 )
    v7 = (const char *)&qword_4B2D48;
  sub_40CD68((__int64)&v14, "Size of %s", v7);
  if ( ptr )
  {
    v18 = 0;
    j__free(ptr);
  }
  v8 = (__int64 *)v14;
  if ( !v15 )
    v8 = &qword_4B2D48;
  sub_42A2D8(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 472LL), &v13, 1u, (__int64)v8, *(_QWORD *)(a3 + 8), -1);
  v9 = *(_QWORD *)(a2 + 8);
  v10 = v13;
  if ( v13 > v9 )
  {
    v12 = *(char **)a2;
    if ( v13 > *(_QWORD *)(a2 + 16) )
    {
      v12 = (char *)sub_491288(a2, *(void **)a2, v13, 1u);
      v9 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v12;
    }
    memset(&v12[v9], 0, v10 - v9);
    *(_QWORD *)(a2 + 8) = v10;
  }
  else if ( v13 < v9 )
  {
    *(_QWORD *)(a2 + 8) = v13;
  }
  sub_48C428(
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 472LL),
    *(_QWORD *)(a3 + 8) + *(_QWORD *)(*(_QWORD *)(a1 + 64) + 480LL),
    0);
  sub_420C98(*(_QWORD *)(a1 + 64), *(void **)a2, v13, 0);
  if ( v14 )
  {
    v15 = 0;
    j__free(v14);
  }
  return v19 ^ _stack_chk_guard;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
