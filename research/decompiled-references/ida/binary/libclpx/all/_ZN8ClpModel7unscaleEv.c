__int64 __fastcall ClpModel::unscale(ClpModel *this)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rax
  int v5; // edx

  v1 = *((_QWORD *)this + 28);
  if ( v1 )
  {
    v2 = 0;
    v3 = 0;
    if ( *((int *)this + 26) > 0 )
    {
      while ( 1 )
      {
        ++v3;
        *(_QWORD *)(v1 + v2) = *(_QWORD *)(*((_QWORD *)this + 30) + v2);
        v2 += 8;
        if ( *((_DWORD *)this + 26) <= v3 )
          break;
        v1 = *((_QWORD *)this + 28);
      }
    }
    if ( *((int *)this + 27) > 0 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        ++v5;
        *(_QWORD *)(*((_QWORD *)this + 29) + v4) = *(_QWORD *)(*((_QWORD *)this + 31) + v4);
        v4 += 8;
      }
      while ( *((_DWORD *)this + 27) > v5 );
    }
    ClpModel::gutsOfScaling(this);
  }
  *((_DWORD *)this + 64) = 0;
  ClpModel::setRowScale(this, nullptr);
  return ClpModel::setColumnScale(this, nullptr);
}

