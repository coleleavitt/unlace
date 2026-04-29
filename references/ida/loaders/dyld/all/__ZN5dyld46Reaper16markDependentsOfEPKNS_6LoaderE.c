__int64 __fastcall dyld4::Reaper::markDependentsOf(dyld4::Reaper *this, const dyld4::Loader *a2)
{
  __int64 result; // x0
  int v5; // w21
  __int64 v6; // x22
  _QWORD *v7; // x8
  __int64 v8; // x9
  _BYTE *v9; // x8
  __int64 v10; // x9
  __int64 v11; // x9
  __int64 v12; // x8
  __int64 v13; // x9
  _QWORD *v14; // x11
  __int64 v15; // x13
  _BYTE *v16; // x11
  __int64 v17; // x13

  result = dyld4::Loader::dependentCount(a2);
  if ( (_DWORD)result )
  {
    v5 = result;
    v6 = 0;
    do
    {
      result = dyld4::Loader::dependent(a2, *(_QWORD *)this, v6, 0);
      v7 = *((_QWORD **)this + 1);
      v8 = v7[2];
      if ( v8 )
      {
        v9 = (_BYTE *)(*v7 + 8LL);
        v10 = 16 * v8;
        while ( *v9 || *((_QWORD *)v9 - 1) != result )
        {
          v9 += 16;
          v10 -= 16;
          if ( !v10 )
            goto LABEL_10;
        }
        *v9 = 1;
      }
LABEL_10:
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (_DWORD)v6 != v5 );
  }
  v11 = *(_QWORD *)(*(_QWORD *)this + 640LL);
  if ( v11 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)this + 632LL);
    v13 = v12 + 16 * v11;
    do
    {
      if ( *(const dyld4::Loader **)v12 == a2 )
      {
        v14 = *((_QWORD **)this + 1);
        v15 = v14[2];
        if ( v15 )
        {
          v16 = (_BYTE *)(*v14 + 8LL);
          v17 = 16 * v15;
          while ( *((_QWORD *)v16 - 1) != *(_QWORD *)(v12 + 8) )
          {
            v16 += 16;
            v17 -= 16;
            if ( !v17 )
              goto LABEL_14;
          }
          *v16 = 1;
        }
      }
LABEL_14:
      v12 += 16;
    }
    while ( v12 != v13 );
  }
  return result;
}
