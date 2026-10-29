unsigned __int64 __fastcall sub_4CCAA0(QT::QWidget *this, __int64 a2)
{
  __int64 v2; // r13
  __int64 (__fastcall *v3)(__int64, __m128i *); // r14
  char v4; // r12
  int v6; // eax
  __m128i ptr; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 56);
  v3 = *(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v2 + 96LL);
  sub_4C7620(&ptr);
  v4 = v3(v2, &ptr);
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
  {
    free((void *)ptr.m128i_i64[0]);
    if ( !v4 )
      return v8 - __readfsqword(0x28u);
  }
  else if ( !v4 )
  {
    return v8 - __readfsqword(0x28u);
  }
  v6 = *(_DWORD *)(a2 + 48);
  *(_BYTE *)(a2 + 12) = 1;
  *(_DWORD *)(a2 + 44) = v6;
  sub_4C65B0(*((_QWORD *)this + 5));
  sub_4C6180(*((_QWORD **)this + 5), 0);
  sub_4C65E0(*((_QWORD *)this + 5), *((unsigned int *)this + 19));
  return QT::QWidget::raise(this);
}
