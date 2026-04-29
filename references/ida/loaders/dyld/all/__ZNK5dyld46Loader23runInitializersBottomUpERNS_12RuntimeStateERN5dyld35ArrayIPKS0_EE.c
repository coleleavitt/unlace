__int64 __fastcall dyld4::Loader::runInitializersBottomUp(dyld4::Loader *a1, dyld4::RuntimeState *a2, __int64 a3)
{
  __int64 result; // x0
  int v7; // w0
  int v8; // w22
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x9
  _QWORD *v12; // x8
  __int64 v13; // x9
  __int64 v14; // [xsp+0h] [xbp-40h] BYREF
  char v15; // [xsp+Fh] [xbp-31h] BYREF

  result = dyld4::Loader::beginInitializers(a1, a2);
  if ( (result & 1) == 0 )
  {
    v7 = dyld4::Loader::dependentCount(a1);
    if ( v7 )
    {
      v8 = v7;
      v9 = 0;
      do
      {
        v15 = 0;
        v14 = 0;
        v10 = dyld4::Loader::dependent(a1, a2, v9, &v15);
        v14 = v10;
        if ( v10 )
        {
          if ( v15 == 3 )
          {
            v11 = *(_QWORD *)(a3 + 16);
            if ( v11 )
            {
              v12 = *(_QWORD **)a3;
              v13 = 8 * v11;
              while ( *v12 != v10 )
              {
                ++v12;
                v13 -= 8;
                if ( !v13 )
                  goto LABEL_10;
              }
            }
            else
            {
LABEL_10:
              dyld3::Array<dyld4::Loader const*>::push_back(a3, &v14);
            }
          }
          else
          {
            dyld4::Loader::runInitializersBottomUp(v10);
          }
        }
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (_DWORD)v9 != v8 );
    }
    dyld4::RuntimeState::notifyObjCInit(a2, a1);
    return dyld4::Loader::runInitializers(a1, a2);
  }
  return result;
}
