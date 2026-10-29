_QWORD *__fastcall google_breakpad::PageAllocator::GetNPages(google_breakpad::PageAllocator *this, __int64 a2)
{
  _QWORD *v3; // [rsp+18h] [rbp-8h]

  v3 = (_QWORD *)sub_1A56AC(0, a2 * *(_QWORD *)this, 3, 34, -1, 0);
  if ( v3 == (_QWORD *)-1LL )
    return nullptr;
  *v3 = *((_QWORD *)this + 1);
  v3[1] = a2;
  *((_QWORD *)this + 1) = v3;
  *((_QWORD *)this + 4) += a2;
  return v3;
}

