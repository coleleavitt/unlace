/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C2A0
// Address: 0x000000000042C2A0

//----- (000000000042C2A0) ----------------------------------------------------
__int64 __fastcall sub_42C2A0(__int64 *a1, __int64 a2, __int64 a3)
{
  const char *v6; // x2
  __int64 *v7; // x3
  unsigned __int64 v8; // x3
  unsigned __int64 v9; // x23
  char *v11; // x0
  unsigned __int64 v12; // [xsp+30h] [xbp-40h] BYREF
  void *v13; // [xsp+38h] [xbp-38h] BYREF
  __int64 v14; // [xsp+40h] [xbp-30h]
  __int64 v15; // [xsp+48h] [xbp-28h]
  void *ptr; // [xsp+50h] [xbp-20h] BYREF
  __int64 v17; // [xsp+58h] [xbp-18h]
  __int64 v18; // [xsp+60h] [xbp-10h]
  __int64 v19; // [xsp+68h] [xbp-8h]

  v12 = *(_QWORD *)(a3 + 32);
  v13 = nullptr;
  v14 = 0;
  v15 = 0;
  v13 = sub_491288((__int64)&v13, nullptr, 2u, 1u);
  v14 = 2;
  strcpy((char *)v13, "?");
  if ( a3 && a1[22] > 0 && a1[24] )
    sub_42AA98(a1[20], (__int64)&v13, a1 + 22, *(_DWORD *)a3);
  v6 = (const char *)v13;
  ptr = nullptr;
  v17 = 0;
  v18 = 0;
  if ( !v14 )
    v6 = (const char *)&qword_4B2D48;
  sub_40CD68((__int64)&ptr, "Size of %s", v6);
  v7 = (__int64 *)ptr;
  if ( !v17 )
    v7 = &qword_4B2D48;
  sub_42A2D8(*(_QWORD *)(a1[20] + 472), &v12, 1u, (__int64)v7, *(_QWORD *)(a3 + 24), -1);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = v12;
  if ( v12 > v8 )
  {
    v11 = *(char **)a2;
    if ( v12 > *(_QWORD *)(a2 + 16) )
    {
      v11 = (char *)sub_491288(a2, *(void **)a2, v12, 1u);
      v8 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v11;
    }
    memset(&v11[v8], 0, v9 - v8);
    *(_QWORD *)(a2 + 8) = v9;
  }
  else if ( v12 < v8 )
  {
    *(_QWORD *)(a2 + 8) = v12;
  }
  sub_48C428(*(_QWORD *)(a1[20] + 472), *(_QWORD *)(a3 + 24) + *(_QWORD *)(a1[20] + 480), 0);
  sub_420C98(a1[20], *(void **)a2, v12, 0);
  if ( ptr )
  {
    v17 = 0;
    j__free(ptr);
  }
  if ( v13 )
  {
    v14 = 0;
    j__free(v13);
  }
  return v19 ^ _stack_chk_guard;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
