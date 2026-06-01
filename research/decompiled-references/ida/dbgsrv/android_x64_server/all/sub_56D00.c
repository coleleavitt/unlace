/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56D00
// Address: 0x0000000000056D00

//----- (0000000000056D00) ----------------------------------------------------
char __fastcall sub_56D00(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // r15
  int v6; // edx
  __int64 v7; // r12
  _QWORD *v8; // rcx
  __int64 v9; // rsi
  char *v10; // rax
  _QWORD v12[5]; // [rsp+0h] [rbp-A8h] BYREF
  void *ptr[2]; // [rsp+28h] [rbp-80h]
  __int128 v14; // [rsp+38h] [rbp-70h]
  __int64 v15; // [rsp+48h] [rbp-60h]
  unsigned __int64 v16; // [rsp+50h] [rbp-58h] BYREF
  _OWORD *v17; // [rsp+58h] [rbp-50h] BYREF
  __int128 v18; // [rsp+60h] [rbp-48h]
  unsigned __int64 v19; // [rsp+78h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v3 = a3[2];
  if ( !v3 )
    return 0;
  v5 = *a3;
  v6 = 1;
  if ( *(_DWORD *)(a1 + 400) )
    v6 = *(_DWORD *)(a1 + 400);
  v7 = v6;
  v16 = v3 / v6;
  sub_56C10(*(_QWORD *)(a1 + 472), &v16, v6, (__int64)"Dynamic info size", v5, 0xFFFFFFFFFFFFFFFFLL);
  if ( !v16 )
    return 0;
  v12[0] = &off_147178;
  v12[1] = a1;
  v12[2] = v5;
  v12[3] = v16;
  v12[4] = v7;
  v14 = 0;
  *(_OWORD *)ptr = 0;
  v15 = 0;
  do
  {
    if ( !sub_56EE0((__int64)v12, &v17) )
      break;
    v8 = v17;
    v18 = *v17;
    v9 = *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)(a2 + 16) >= (unsigned __int64)(v9 + 1) )
    {
      v10 = *(char **)a2;
    }
    else
    {
      v10 = (char *)qvector_reserve(a2, *(char **)a2, v9 + 1, 0x10u);
      *(_QWORD *)a2 = v10;
      v9 = *(_QWORD *)(a2 + 8);
      v8 = v17;
    }
    *(_OWORD *)&v10[16 * v9] = v18;
    ++*(_QWORD *)(a2 + 8);
  }
  while ( *v8 );
  v12[0] = &off_147178;
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    *(_QWORD *)&v14 = 0;
  }
  return 1;
}
// 147178: using guessed type __int64 (__fastcall *off_147178)();
