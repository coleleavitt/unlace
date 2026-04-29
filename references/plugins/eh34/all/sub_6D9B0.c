__int64 __fastcall sub_6D9B0(__int64 a1)
{
  int segm_qty; // r12d
  unsigned int i; // ebx
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __m128i v7; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 8;
  *(_QWORD *)(a1 + 32) = a1 + 8;
  *(_QWORD *)(a1 + 40) = 0;
  segm_qty = get_segm_qty();
  if ( segm_qty > 0 )
  {
    for ( i = 0; i != segm_qty; ++i )
    {
      v7 = _mm_loadu_si128((const __m128i *)getnseg(i));
      sub_6D840((_QWORD *)a1, &v7, v3, v4, v5);
    }
  }
  return a1;
}
