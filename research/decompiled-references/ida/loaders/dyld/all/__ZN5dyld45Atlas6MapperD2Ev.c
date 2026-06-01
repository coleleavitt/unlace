void __fastcall dyld4::Atlas::Mapper::~Mapper(dyld4::Atlas::Mapper *this)
{
  __int64 v2; // x9
  __int64 v3; // x21
  __int64 v4; // x8
  int *v5; // x20
  __int64 v6; // x22
  int v7; // w9
  int *v8; // x10
  __int64 v9; // x11
  int v10; // w9
  __int64 v11; // x10
  __int64 v12; // x21
  int v13; // t1
  __int64 v14; // [xsp+0h] [xbp-40h] BYREF
  int *v15; // [xsp+8h] [xbp-38h]
  __int64 v16; // [xsp+10h] [xbp-30h]
  __int64 v17; // [xsp+18h] [xbp-28h]

  if ( *((_QWORD *)this + 4) )
    dyld4::Atlas::Mapper::~Mapper(this);
  v14 = *((_QWORD *)this + 5);
  v15 = nullptr;
  v16 = 0;
  v17 = 0;
  v3 = *((_QWORD *)this + 1);
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    v4 = 0;
    v5 = nullptr;
    v6 = v3 + 32 * v2;
    do
    {
      v7 = *(_DWORD *)(v3 + 24);
      if ( v7 != -1 )
      {
        v8 = v5;
        if ( v4 )
        {
          v9 = 4 * v4;
          v8 = v5;
          while ( *v8 != v7 )
          {
            ++v8;
            v9 -= 4;
            if ( !v9 )
              goto LABEL_11;
          }
        }
        if ( v8 == &v5[v4] )
        {
LABEL_11:
          lsl::Vector<int>::reserve(&v14, v4 + 1);
          v10 = *(_DWORD *)(v3 + 24);
          v5 = v15;
          v11 = v16;
          v4 = ++v16;
          v15[v11] = v10;
        }
      }
      v3 += 32;
    }
    while ( v3 != v6 );
    if ( v4 )
    {
      v12 = 4 * v4;
      do
      {
        v13 = *v5++;
        close(v13);
        v12 -= 4;
      }
      while ( v12 );
      v5 = v15;
    }
    if ( v5 )
      lsl::Vector<int>::resize(&v14, 0);
    v3 = *((_QWORD *)this + 1);
  }
  if ( v3 )
    lsl::Vector<dyld4::Atlas::Mapper::Mapping>::resize(this, 0);
}
