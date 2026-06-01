unsigned __int64 __fastcall sub_19198A0(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        unsigned int a5,
        __m128 a6,
        __m128 a7)
{
  unsigned int v9; // r13d
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 *v15; // rbx

  v9 = a4;
  v11 = sub_1918B10(a1, a2, a3, a4, 0, 1, a6, a7, 0, 0, 0) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v11 )
    return sub_18F40B0((__int64)a1, v9, a2, a3, *(double *)a6.m128_u64);
  v14 = a1[29];
  v15 = (__int64 *)v11;
  if ( (*(_BYTE *)(v14 + 47) & 0x20) != 0 )
  {
    if ( (unsigned int)sub_FEAA90(v14) > 0x77 || !sub_F580C0(*v15) )
    {
      v14 = a1[29];
      if ( (*(_BYTE *)(v14 + 1) & 8) != 0 )
        goto LABEL_4;
LABEL_7:
      v12 = *(unsigned __int8 *)(*v15 + 16);
      if ( (unsigned int)(v12 - 57) > 1 )
      {
        v12 = *(unsigned __int8 *)(sub_18BBF30(*v15, (__int64)a2, v12, v13) + 16);
        if ( (_BYTE)v12 == 58 )
          goto LABEL_9;
      }
      else if ( (_BYTE)v12 == 58 )
      {
LABEL_9:
        v14 = a1[29];
        goto LABEL_4;
      }
      return sub_18D4020((__int64)a1, v9, a2, a3, *(double *)a6.m128_u64);
    }
    return sub_18F40B0((__int64)a1, v9, a2, a3, *(double *)a6.m128_u64);
  }
  if ( (*(_BYTE *)(v14 + 1) & 8) == 0 )
    goto LABEL_7;
LABEL_4:
  if ( (*(_BYTE *)(v14 + 89) & 1) == 0 || *(_WORD *)(v14 + 204) <= 0x7E4u )
    return sub_18C2B90((__int64)a1, *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8), v12, v13);
  sub_18F40B0((__int64)a1, v9, a2, a3, *(double *)a6.m128_u64);
  sub_19FD4D0(a1[85], *a2 & 0xFFFFFFFFFFFFFFFELL, *a3 & 0xFFFFFFFFFFFFFFFELL, a5);
  return 0;
}
