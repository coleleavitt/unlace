/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000D380
// Address: 0x000000014000D380

//----- (000000014000D380) ----------------------------------------------------
__int64 __fastcall sub_14000D380(__int64 a1, __int64 a2)
{
  void *v4; // rdi
  void *v5; // rcx
  _QWORD *v6; // rsi
  __int64 *v7; // rdi
  __int64 *v8; // r8
  _BOOL8 v9; // rdx
  __int64 *v10; // r10
  unsigned __int64 v11; // r9
  __int64 *v12; // rax
  _QWORD *v13; // rax
  __int128 v15; // [rsp+20h] [rbp-98h] BYREF
  __int128 v16; // [rsp+30h] [rbp-88h]
  _QWORD v17[4]; // [rsp+48h] [rbp-70h] BYREF
  void *Block[2]; // [rsp+68h] [rbp-50h]
  void *v19; // [rsp+78h] [rbp-40h]
  __int128 v20; // [rsp+80h] [rbp-38h]
  __int128 v21; // [rsp+90h] [rbp-28h]
  __int64 v22; // [rsp+A0h] [rbp-18h]

  v17[0] = *(_QWORD *)(a2 + 8);
  v17[1] = *(_QWORD *)a2;
  v17[2] = v17[0];
  v17[3] = *(_QWORD *)(a2 + 16);
  *(_OWORD *)Block = 0;
  v19 = nullptr;
  v4 = *(void **)(a2 + 32);
  if ( v4 )
  {
    Block[0] = sub_14005AAA0(*(_QWORD *)(a2 + 32));
    v19 = v4;
    memcpy(Block[0], *(const void **)(a2 + 24), (size_t)v4);
    Block[1] = v4;
  }
  v20 = *(_OWORD *)(a2 + 48);
  v21 = *(_OWORD *)(a2 + 64);
  v22 = *(_QWORD *)(a2 + 80);
  sub_140009E20((_QWORD *)(a1 + 944), (__int64)&v15, (__int64)v17);
  v5 = Block[0];
  if ( Block[0] )
    j_free(Block[0]);
  v6 = (_QWORD *)(a1 + 1008);
  v7 = (__int64 *)*v6;
  v8 = *(__int64 **)(*v6 + 8LL);
  v9 = 0;
  v10 = (__int64 *)*v6;
  if ( !*((_BYTE *)v8 + 25) )
  {
    v11 = *(_QWORD *)(a2 + 8);
    v12 = *(__int64 **)(*v6 + 8LL);
    do
    {
      v8 = v12;
      v5 = (void *)v12[4];
      if ( (unsigned __int64)v5 >= v11 )
        v10 = v12;
      else
        v12 += 2;
      v9 = (unsigned __int64)v5 >= v11;
      v12 = (__int64 *)*v12;
    }
    while ( !*((_BYTE *)v12 + 25) );
  }
  *(_QWORD *)&v16 = v8;
  DWORD2(v16) = v9;
  if ( *((_BYTE *)v10 + 25) || *(_QWORD *)(a2 + 8) < (unsigned __int64)v10[4] )
  {
    if ( v6[1] == 0x666666666666666LL )
      unknown_libname_1(v5, v9);
    v15 = (unsigned __int64)v6;
    v13 = operator new(0x28u);
    v13[4] = *(_QWORD *)(a2 + 8);
    *v13 = v7;
    v13[1] = v7;
    v13[2] = v7;
    *((_WORD *)v13 + 12) = 0;
    v15 = v16;
    sub_140003FC0(v6, (__int64)&v15, (__int64)v13);
  }
  return *(_QWORD *)(a2 + 16);
}
// 14000D51E: variable 'v5' is possibly undefined
// 140004240: using guessed type void __fastcall __noreturn unknown_libname_1(_QWORD, _QWORD);
