__int64 __fastcall dyld4::RuntimeState::incDlRefCount(__int64 this, const dyld4::Loader *a2)
{
  __int64 v3; // x20
  __int64 v4; // x8
  _QWORD *v5; // x9
  __int64 v6; // x10
  __int64 v7; // x8
  __int64 v8; // x9
  _QWORD *v9; // x8

  if ( (*((_WORD *)a2 + 2) & 0x20) == 0 )
  {
    v3 = this;
    v4 = *(_QWORD *)(this + 744);
    if ( v4 )
    {
      v5 = (_QWORD *)(*(_QWORD *)(this + 736) + 8LL);
      v6 = 16 * v4;
      while ( (const dyld4::Loader *)*(v5 - 1) != a2 )
      {
        v5 += 2;
        v6 -= 16;
        if ( !v6 )
          goto LABEL_6;
      }
      ++*v5;
    }
    else
    {
LABEL_6:
      this = lsl::Vector<dyld4::RuntimeState::DlopenCount>::reserve(this + 728, v4 + 1);
      v7 = *(_QWORD *)(v3 + 736);
      v8 = *(_QWORD *)(v3 + 744);
      *(_QWORD *)(v3 + 744) = v8 + 1;
      v9 = (_QWORD *)(v7 + 16 * v8);
      *v9 = a2;
      v9[1] = 1;
    }
  }
  return this;
}
