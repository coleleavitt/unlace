_QWORD *__fastcall dyld4::Reaper::markDirectlyDlopenedImagesAsUsed(_QWORD *this)
{
  __int64 v1; // x9
  _QWORD *v2; // x8
  _QWORD *v3; // x9
  _QWORD *v4; // x11
  __int64 v5; // x13
  _BYTE *v6; // x11
  __int64 v7; // x13

  v1 = *(_QWORD *)(*this + 744LL);
  if ( v1 )
  {
    v2 = *(_QWORD **)(*this + 736LL);
    v3 = &v2[2 * v1];
    do
    {
      if ( v2[1] )
      {
        v4 = (_QWORD *)*(this + 1);
        v5 = v4[2];
        if ( v5 )
        {
          v6 = (_BYTE *)(*v4 + 8LL);
          v7 = 16 * v5;
          while ( *((_QWORD *)v6 - 1) != *v2 )
          {
            v6 += 16;
            v7 -= 16;
            if ( !v7 )
              goto LABEL_10;
          }
          *v6 = 1;
        }
      }
LABEL_10:
      v2 += 2;
    }
    while ( v2 != v3 );
  }
  return this;
}
