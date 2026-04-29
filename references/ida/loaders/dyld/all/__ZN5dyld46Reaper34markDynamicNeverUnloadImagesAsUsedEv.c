__int64 **__fastcall dyld4::Reaper::markDynamicNeverUnloadImagesAsUsed(__int64 **this)
{
  __int64 v1; // x9
  _QWORD *v2; // x8
  _QWORD *v3; // x9
  __int64 *v4; // x10
  __int64 v5; // x11
  __int64 v6; // x10
  _BYTE *v7; // x11
  __int64 v8; // x16
  _BYTE *v9; // x15

  v1 = (*this)[97];
  if ( v1 )
  {
    v2 = (_QWORD *)(*this)[96];
    v3 = &v2[v1];
    v4 = *(this + 1);
    v5 = *v4;
    v6 = v4[2];
    v7 = (_BYTE *)(v5 + 8);
    do
    {
      if ( v6 )
      {
        v8 = 16 * v6;
        v9 = v7;
        while ( *((_QWORD *)v9 - 1) != *v2 )
        {
          v9 += 16;
          v8 -= 16;
          if ( !v8 )
            goto LABEL_9;
        }
        *v9 = 1;
      }
LABEL_9:
      ++v2;
    }
    while ( v2 != v3 );
  }
  return this;
}
