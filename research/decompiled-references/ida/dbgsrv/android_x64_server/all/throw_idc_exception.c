/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: throw_idc_exception
// Address: 0x000000000005F2C0

//----- (000000000005F2C0) ----------------------------------------------------
__int64 __fastcall throw_idc_exception(__int64 a1, const char *a2, double a3, __m128 a4)
{
  __int64 idc_class; // rax
  size_t v5; // rdx
  unsigned int v6; // ebx
  char v8[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h] BYREF
  __int64 v10; // [rsp+18h] [rbp-20h]
  unsigned __int64 v11; // [rsp+20h] [rbp-18h]

  v11 = __readfsqword(0x28u);
  idc_class = find_idc_class("exception");
  idcv_object(a1, idc_class, a3, a4);
  v8[0] = 2;
  v9 = 0;
  v10 = 0;
  free_idcv(v8, 0.0, a4);
  if ( a2 )
    v5 = strlen(a2);
  else
    v5 = 0;
  v8[0] = 7;
  sub_4ABC0((__int64)&v9, a2, v5);
  set_idcv_attr(a1, "description", v8, 0, 0.0, a4);
  v6 = set_qerrno(0x5Au);
  free_idcv(v8, 0.0, a4);
  return v6;
}
