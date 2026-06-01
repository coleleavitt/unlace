unsigned __int64 __fastcall sub_4AF5F0(__m128i *this)
{
  int v1; // ecx
  __m128i v2; // rax
  void *ptr[2]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+10h] [rbp+10h]
  __m128i vars20; // [rsp+20h] [rbp+20h] BYREF
  __m128i vars30; // [rsp+30h] [rbp+30h] BYREF
  __m128i vars40; // [rsp+40h] [rbp+40h]
  unsigned __int64 vars58; // [rsp+58h] [rbp+58h]

  vars58 = __readfsqword(0x28u);
  vars10 = 0;
  v1 = *((_DWORD *)this + 20);
  vars40 = _mm_loadu_si128(this + 4);
  vars30 = vars40;
  vars20 = vars40;
  *(_OWORD *)ptr = 0;
  v2.m128i_i64[0] = sub_4AF930(&vars20, this, ptr, v1 & 1);
  vars30 = v2;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( !vars30.m128i_i32[0] )
      return vars58 - __readfsqword(0x28u);
LABEL_6:
    sub_4AF280((QT::QAbstractButton *)this, vars30.m128i_i32);
    return vars58 - __readfsqword(0x28u);
  }
  if ( vars30.m128i_i32[0] )
    goto LABEL_6;
  return vars58 - __readfsqword(0x28u);
}
