__int64 __fastcall enc_chooser_t__::vfunc_11(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // ebp
  __int64 v11; // rbx
  __int64 encoding_name; // rax
  unsigned int encoding_bpu_by_name; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  char v21; // [rsp+0h] [rbp-18h]

  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 4 * a2);
  if ( v10 )
  {
    v11 = a2;
    if ( (unsigned __int8)del_encoding(v10) )
      return v11;
    encoding_name = get_encoding_name(v10);
    encoding_bpu_by_name = get_encoding_bpu_by_name(encoding_name);
    if ( v10 == (unsigned int)get_default_encoding_idx(encoding_bpu_by_name) )
      sub_169630(
        (int)"Cannot delete encoding used as %d-bit default encoding",
        8 * encoding_bpu_by_name,
        v15,
        v16,
        v17,
        v18,
        a3,
        a4,
        a5,
        a6,
        v19,
        v20,
        a9,
        a10,
        v21);
  }
  return -1;
}
