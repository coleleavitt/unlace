__int64 __fastcall sub_3283F0(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 suspop; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  int v17; // ebp
  __int64 v18; // rbx
  char v20; // [rsp+0h] [rbp-28h]
  int v21; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  v21 = -1;
  v9 = BYTE2(xmmword_8BCDC0);
  v8 = sub_326FD0();
  BYTE1(v9) |= 8u;
  suspop = find_suspop(v8, v9, &v21);
  if ( suspop == -1 )
  {
    sub_28A960(1072, v9, v11, v12, v13, v14, a1, a2, a3, a4, v15, v16, a7, a8, v20);
    return 0;
  }
  else
  {
    v17 = v21;
    v18 = suspop;
    sub_28A960(1071, suspop, v11, v12, v13, v14, a1, a2, a3, a4, v15, v16, a7, a8, v20);
    return (unsigned __int8)sub_192AA0(0, v18, v17, 1u);
  }
}
