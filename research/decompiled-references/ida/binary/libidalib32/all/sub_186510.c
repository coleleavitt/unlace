__int64 __fastcall sub_186510(TGroup *this, _DWORD *a2, __int64 a3, __int64 a4, __int16 a5)
{
  __int64 v5; // rbx
  __int64 v6; // r15

  v5 = operator new(0x60u);
  v6 = *((_QWORD *)this + 26) - 1LL;
  if ( word_250358 == -1 )
    word_250358 = sub_199DB0(96);
  TButton::TButton();
  *(_QWORD *)(v5 + 88) = v6;
  *(_QWORD *)v5 = &off_23BE60;
  *(_WORD *)(v5 + 50) = a5;
  TGroup::insert(this, (TView *)v5);
  *a2 += 3;
  return v5;
}

