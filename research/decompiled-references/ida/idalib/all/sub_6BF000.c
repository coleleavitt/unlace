__int64 __fastcall sub_6BF000(__int64 a1, __int64 a2, int a3, __int64 *a4, int a5, int a6)
{
  __int64 v7; // rax
  unsigned __int64 v9; // r13
  __int64 flags; // r13
  char v11; // r12
  char v12; // r12
  __int64 v13; // rdx
  int v14; // eax
  _BYTE v15[12]; // [rsp+0h] [rbp-158h] BYREF
  __m128i v16; // [rsp+10h] [rbp-148h] BYREF
  int v17; // [rsp+20h] [rbp-138h]
  int v18; // [rsp+28h] [rbp-130h]
  int v19; // [rsp+30h] [rbp-128h]
  void *v20; // [rsp+38h] [rbp-120h]
  __int64 v21; // [rsp+40h] [rbp-118h]
  int v22; // [rsp+48h] [rbp-110h]
  int v23; // [rsp+50h] [rbp-108h]
  void *v24; // [rsp+58h] [rbp-100h]
  __int64 v25; // [rsp+60h] [rbp-F8h]
  int v26; // [rsp+68h] [rbp-F0h]
  int v27; // [rsp+70h] [rbp-E8h]
  int v28; // [rsp+78h] [rbp-E0h]
  int v29; // [rsp+80h] [rbp-D8h]
  int v30; // [rsp+88h] [rbp-D0h]
  __int64 v31; // [rsp+90h] [rbp-C8h]
  unsigned __int64 v32; // [rsp+128h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  if ( !*(_QWORD *)a1 )
    return 1;
  v7 = *(_QWORD *)a1 & 0xFLL;
  if ( v7 == 10 )
  {
    if ( !(unsigned __int8)create_strlit(
                             a2,
                             a3,
                             *(_DWORD *)(a1 + 8),
                             (int)a4,
                             a5,
                             a6,
                             *(int *)v15,
                             *(int *)&v15[8],
                             v16.m128i_i32[0],
                             v16.m128i_i32[2],
                             v17,
                             v18,
                             v19,
                             v20,
                             v21,
                             v22,
                             v23,
                             v24,
                             v25,
                             v26,
                             v27,
                             v28,
                             v29,
                             v30,
                             v31) )
      return 0;
    goto LABEL_8;
  }
  if ( v7 == 12 )
  {
    if ( !(unsigned __int8)create_data(a2) )
      return 0;
LABEL_8:
    if ( (*(_BYTE *)(a1 + 1) & 8) != 0 )
      set_lzero(a2, 0);
    flags = get_flags_ex(a2, 0);
    v11 = *(_BYTE *)(a1 + 1) & 1;
    if ( v11 != (unsigned __int8)is_invsign(a2, flags, 0) )
      toggle_sign(a2, 0);
    v12 = (*(_BYTE *)(a1 + 1) & 2) != 0;
    if ( v12 != (unsigned __int8)is_bnot(a2, flags, 0) )
      toggle_bnot(a2, 0);
    v13 = *(_QWORD *)a1 & 0x400LL;
    if ( (*(_QWORD *)a1 & 0x1000LL) != 0 )
    {
      *(_QWORD *)v15 = *(_QWORD *)(a1 + 40);
      *(_DWORD *)&v15[8] = *(_DWORD *)(a1 + 48);
      if ( v13 )
        v14 = *(_DWORD *)v15 | 2;
      else
        v14 = *(_DWORD *)v15 & 0xFFFFFFFD;
    }
    else
    {
      if ( !v13 )
        return 1;
      *(_QWORD *)&v15[4] = 0xFFFFFFFF00000000LL;
      v14 = 3;
    }
    *(_DWORD *)v15 = v14;
    set_array_parameters(a2, v15);
    return 1;
  }
  v9 = sub_6BEC10((__int64 *)a1, (__int64)a4);
  if ( !(unsigned __int8)set_op_type(a2, v9, 0) )
    return 0;
  if ( !(unsigned __int8)sub_6BEA30(a1, (__int64)&v16, a4) || (unsigned __int8)set_opinfo(a2, 0, v9, &v16, 0) )
    goto LABEL_8;
  return 0;
}
