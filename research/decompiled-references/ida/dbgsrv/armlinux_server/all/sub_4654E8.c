/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4654E8
// Address: 0x00000000004654E8

//----- (00000000004654E8) ----------------------------------------------------
__int64 __fastcall sub_4654E8(__int64 a1, __int64 a2, unsigned int a3, char *a4, char *a5)
{
  __int64 v10; // x0
  _BYTE *v11; // x0
  void *v12; // x0
  __int64 v13; // x3
  unsigned __int64 v14; // x2
  _BYTE *v15; // x0
  void *v16; // x0
  void *ptr; // [xsp+50h] [xbp-40h] BYREF
  __int64 v19; // [xsp+58h] [xbp-38h]
  unsigned __int64 v20; // [xsp+60h] [xbp-30h]
  _BYTE v21[10]; // [xsp+68h] [xbp-28h] BYREF
  _BYTE v22[6]; // [xsp+72h] [xbp-1Eh] BYREF
  _BYTE v23[10]; // [xsp+78h] [xbp-18h] BYREF
  _BYTE v24[14]; // [xsp+82h] [xbp-Eh] BYREF

  if ( a3 == 1 )
  {
    v10 = a1 - 192;
    if ( !a1 )
      v10 = 0;
    a4 = (char *)(*(int (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 440) + 408LL))(*(_QWORD *)(v10 + 440));
  }
  sub_479010(56, (__int64 *)&ptr);
  v11 = sub_48E4D8(v21, (unsigned __int64)v22, a2 + 1);
  if ( v11 != v21 )
    sub_4630F0((__int64)&ptr, v21, v11 - v21);
  sub_4631C0((__int64)&ptr, a3);
  v12 = ptr;
  v13 = v19;
  v14 = v19 + 1;
  if ( a4 == a5 )
  {
    if ( v14 > v20 )
      ptr = sub_491288((__int64)&ptr, ptr, v14, 1u);
    *((_BYTE *)ptr + v19++) = 1;
    sub_4632A0((__int64)&ptr, a4);
  }
  else
  {
    if ( v14 > v20 )
    {
      v12 = sub_491288((__int64)&ptr, ptr, v14, 1u);
      v13 = v19;
      ptr = v12;
    }
    *((_BYTE *)v12 + v13) = 0;
    ++v19;
    v15 = sub_48E4D8(v23, (unsigned __int64)v24, (__int64)(a4 + 1));
    if ( v15 != v23 )
      sub_4630F0((__int64)&ptr, v23, v15 - v23);
  }
  v16 = (void *)(*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)a1 + 16LL))(a1, 56, &ptr);
  j__free(v16);
  if ( ptr )
  {
    v19 = 0;
    j__free(ptr);
  }
  return *(_QWORD *)&v24[6] ^ _stack_chk_guard;
}
