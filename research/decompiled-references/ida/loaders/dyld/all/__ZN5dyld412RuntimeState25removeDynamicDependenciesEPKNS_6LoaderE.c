_QWORD *__fastcall dyld4::RuntimeState::removeDynamicDependencies(_QWORD *this, const dyld4::Loader *a2)
{
  _QWORD *v3; // x20
  __int64 v4; // x10
  __int64 v5; // x11
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 v9; // x12
  dyld3::MachOFile *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x9
  const char *v15; // x22
  __int64 v16; // x23
  const dyld4::Loader **v17; // x24
  const char *v18; // x1

  v3 = this;
  v4 = *(this + 79);
  v5 = *(this + 80);
  v6 = v4 + 16 * v5;
  v7 = v4;
  if ( v5 )
  {
    v7 = *(this + 79);
    while ( *(const dyld4::Loader **)v7 != a2 && *(_QWORD *)(v7 + 8) != (_QWORD)a2 )
    {
      v7 += 16;
      if ( v7 == v6 )
      {
        v7 = v4 + 16 * v5;
        goto LABEL_20;
      }
    }
  }
  v9 = v7 + 16;
  if ( v7 != v6 && v9 != v6 )
  {
    do
    {
      if ( *(const dyld4::Loader **)v9 != a2 && *(_QWORD *)(v9 + 8) != (_QWORD)a2 )
      {
        *(_OWORD *)v7 = *(_OWORD *)v9;
        v7 += 16;
      }
      v9 += 16;
    }
    while ( v9 != v6 );
    v4 = *(this + 79);
    v5 = *(this + 80);
  }
LABEL_20:
  *(this + 80) = v5 - ((v4 + 16 * v5 - v7) >> 4);
  if ( *(this + 38) )
  {
    v12 = (dyld3::MachOFile *)dyld4::Loader::analyzer(a2, (dyld4::RuntimeState *)this);
    if ( (dyld3::MachOFile::hasWeakDefs(v12) & 1) != 0
      || (this = (_QWORD *)dyld3::MachOFile::usesWeakDefs(v12), (_DWORD)this) )
    {
      this = (_QWORD *)dyld3::MachOFile::mappedSize(v12);
      v13 = v3[38];
      v14 = *(_QWORD *)(v13 + 72);
      if ( v14 )
      {
        v15 = (char *)this + (_QWORD)v12;
        v16 = 24 * v14;
        v17 = (const dyld4::Loader **)(*(_QWORD *)(v13 + 56) + 8LL);
        do
        {
          if ( *v17 == a2 )
            *v17 = nullptr;
          v18 = (const char *)*(v17 - 1);
          if ( v18 >= (const char *)v12 && v18 < v15 )
          {
            this = (_QWORD *)lsl::Allocator::strdup((lsl::Allocator *)v3[2], v18);
            *(v17 - 1) = (const dyld4::Loader *)this;
          }
          v17 += 3;
          v16 -= 24;
        }
        while ( v16 );
      }
    }
  }
  return this;
}
