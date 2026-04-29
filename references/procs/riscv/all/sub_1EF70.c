__int64 __fastcall sub_1EF70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  char v7; // r13
  unsigned int v8; // r12d
  int v9; // eax
  __int64 v11; // rax
  __int64 module_data; // rax
  __int64 v14; // r13
  __int64 v15; // [rsp+0h] [rbp-78h] BYREF
  __int64 v16; // [rsp+8h] [rbp-70h]
  __int64 v17; // [rsp+10h] [rbp-68h]
  int v18; // [rsp+18h] [rbp-60h]
  __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  __m128i si128; // [rsp+28h] [rbp-50h]
  __int64 v21; // [rsp+38h] [rbp-40h]
  __int64 v22; // [rsp+40h] [rbp-38h]
  unsigned __int64 v23; // [rsp+48h] [rbp-30h]

  v7 = a5;
  v8 = a4;
  v9 = *(_DWORD *)(a1 + 24);
  v23 = __readfsqword(0x28u);
  v18 = v9;
  if ( (*(_BYTE *)(a6 + 4) & 1) != 0 )
  {
    v11 = *(_QWORD *)(a6 + 8);
  }
  else
  {
    v11 = 0;
    if ( *(_QWORD *)(a6 + 16) != -1 )
      v11 = 16 * sel2para();
  }
  v16 = v11;
  v15 = *(_QWORD *)(a6 + 24) + v11;
  v17 = *(_QWORD *)(a6 + 32);
  if ( v7 )
  {
    module_data = get_module_data(
                    (unsigned int)dword_35604,
                    a2,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    v15,
                    v16,
                    v17,
                    v18,
                    v19,
                    si128.m128i_i64[0],
                    si128.m128i_i64[1],
                    v21,
                    v22);
    v19 = 0;
    v14 = module_data;
    v21 = 0;
    v22 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2B130);
    get_fixup(&v19, a2 + 4);
    if ( *(_WORD *)(v14 + 446) == (_WORD)v19 || *(_WORD *)(v14 + 444) == (_WORD)v19 )
      handle_fixups_in_macro(&v15, a2, (unsigned __int16)v19, 2);
  }
  op_offset_ex(a2, v8, &v15);
  return 1;
}
