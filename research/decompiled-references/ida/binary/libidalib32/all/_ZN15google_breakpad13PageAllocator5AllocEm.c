__int64 __fastcall google_breakpad::PageAllocator::Alloc(google_breakpad::PageAllocator *this, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx
  __int64 NPages; // [rsp+18h] [rbp-18h]
  unsigned __int64 v5; // [rsp+20h] [rbp-10h]
  __int64 v6; // [rsp+28h] [rbp-8h]

  if ( !a2 )
    return 0;
  if ( *((_QWORD *)this + 2) && a2 <= *(_QWORD *)this - *((_QWORD *)this + 3) )
  {
    v6 = *((_QWORD *)this + 2) + *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) += a2;
    if ( *((_QWORD *)this + 3) == *(_QWORD *)this )
    {
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 2) = 0;
    }
    return v6;
  }
  else
  {
    v5 = (*(_QWORD *)this + a2 + 15) / *(_QWORD *)this;
    NPages = google_breakpad::PageAllocator::GetNPages(this, v5);
    if ( NPages )
    {
      *((_QWORD *)this + 3) = (*(_QWORD *)this + a2 - v5 * *(_QWORD *)this + 16) % *(_QWORD *)this;
      if ( *((_QWORD *)this + 3) )
        v3 = NPages + *(_QWORD *)this * (v5 - 1);
      else
        v3 = 0;
      *((_QWORD *)this + 2) = v3;
      return NPages + 16;
    }
    else
    {
      return 0;
    }
  }
}

