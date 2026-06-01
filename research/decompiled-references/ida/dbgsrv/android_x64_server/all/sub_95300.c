/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95300
// Address: 0x0000000000095300

//----- (0000000000095300) ----------------------------------------------------
unsigned __int64 __fastcall sub_95300(__int64 a1, __int64 a2, signed int a3, __int64 a4)
{
  _BYTE *v6; // rax
  const char *v7; // rax
  const char *v8; // rbx
  size_t v9; // rax
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+18h] [rbp-40h]
  int v14; // [rsp+20h] [rbp-38h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v6 = pack_dd(&v11, (unsigned __int64)&v11 + 5, a3);
  sub_56350(a2, &v11, v6 - (_BYTE *)&v11);
  if ( a3 <= 0 )
  {
    if ( *(_QWORD *)(a4 + 8) )
      v7 = *(const char **)a4;
    else
      v7 = s1;
    v8 = &byte_EB522;
    if ( v7 )
      v8 = v7;
    v9 = strlen(v8);
    sub_56350(a2, v8, v9 + 1);
  }
  else
  {
    v11 = 0x800000028LL;
    *(_OWORD *)ptr = 0;
    v13 = 0;
    v14 = -1;
    (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 440) + 552LL))(*(_QWORD *)(a1 + 440), &v11);
    sub_A6EF0(a2, (__int64)&v11);
    if ( *(_BYTE *)(a1 + 184) )
      sub_390A0((int)"RPC: append_start_or_attach idaregs.nregs %zu\n", *(_QWORD *)(*(_QWORD *)(a1 + 440) + 552LL));
    j_serialize_dynamic_register_set(a2, *(_QWORD *)(a1 + 440) + 544LL);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v13 = 0;
    }
  }
  return __readfsqword(0x28u);
}
// A6FA0: using guessed type __int64 __fastcall j_serialize_dynamic_register_set(_QWORD, _QWORD);
