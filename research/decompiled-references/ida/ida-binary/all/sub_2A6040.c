__int64 __fastcall interactive_graph_t__::vfunc_22(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  char v17; // [rsp+0h] [rbp-38h]
  _QWORD v18[5]; // [rsp+10h] [rbp-28h] BYREF

  v18[3] = __readfsqword(0x28u);
  switch ( *(_DWORD *)(a1 + 36) )
  {
    case 2:
      sub_29F280(a1, *(double *)a2.m128_u64, (__m128i)a3);
      goto LABEL_4;
    case 3:
      return sub_2A35E0(a1, *(_QWORD *)(a1 + 40), *(_DWORD *)(a1 + 48), *(double *)a2.m128_u64);
    case 4:
      sub_29F3B0(a1, *(_QWORD *)(a1 + 40), *(_DWORD *)(a1 + 48), *(double *)a2.m128_u64, (__m128i)a3);
      goto LABEL_4;
    case 5:
      v10 = (*(__int64 (**)(void))(*(_QWORD *)a1 + 128LL))();
      if ( (_BYTE)v10 )
        goto LABEL_4;
      v18[0] = drawable_graph_t::clear_layout_info;
      sub_298EA0(a1, v18, 1, *(double *)a2.m128_u64);
      *(_DWORD *)(a1 + 36) = 0;
      *(_BYTE *)(a1 + 32) = 0;
      sub_169700((int)"not yet\n", (__int64)v18, v11, v12, v13, v14, a2, a3, a4, a5, v15, v16, a8, a9, v17);
      break;
    case 6:
      return sub_2A4750(a1, *(_QWORD *)(a1 + 40), *(double *)a2.m128_u64);
    default:
      sub_2A5AB0(a1, *(double *)a2.m128_u64);
LABEL_4:
      v10 = 1;
      break;
  }
  return v10;
}
