__int64 __fastcall dyld3::MachOLoaded::forEachGlobalSymbol(dyld3::MachOFile *a1, Diagnostics *a2, __int64 a3)
{
  __int64 result; // x0
  int v7; // w20
  int v8; // w8
  unsigned int *v9; // x10
  unsigned __int64 v10; // x21
  unsigned int v11; // w22
  __int64 v12; // x23
  __int64 v13; // x24
  unsigned __int64 v14; // x26
  int v15; // w28
  __int64 v16; // x8
  __int64 v17; // x9
  __int64 v18; // x8
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x9
  _BYTE v22[24]; // [xsp+10h] [xbp-C0h] BYREF
  _DWORD *v23; // [xsp+28h] [xbp-A8h]
  __int64 v24; // [xsp+30h] [xbp-A0h]
  __int64 v25; // [xsp+58h] [xbp-78h]
  __int64 v26; // [xsp+68h] [xbp-68h]
  int v27; // [xsp+70h] [xbp-60h]

  dyld3::MachOLoaded::getLinkEditPointers((__int64)a1, a2, (__int64)v22);
  result = Diagnostics::hasError(a2);
  if ( (result & 1) == 0 )
  {
    result = dyld3::MachOFile::is64(a1);
    if ( v23 )
    {
      v7 = result;
      if ( v24 )
      {
        v8 = *(_DWORD *)(v24 + 16);
        v9 = (unsigned int *)(v24 + 20);
      }
      else
      {
        v8 = 0;
        v9 = v23 + 3;
      }
      v10 = *v9;
      v11 = v23[5];
      if ( (_DWORD)v10 )
      {
        v12 = v25 + v26 + (unsigned int)(v23[4] - v27);
        v13 = v25 + v26 + (unsigned int)(v23[2] - v27);
        v14 = 1;
        v15 = v8;
        while ( 1 )
        {
          v16 = (unsigned int)(v15 + v14 - 1);
          if ( v7 )
          {
            v17 = *(unsigned int *)(v13 + 16 * v16);
            if ( (unsigned int)v17 <= v11 )
            {
              v18 = v13 + 16 * v16;
              if ( (*(_BYTE *)(v18 + 4) & 0xEF) == 0xF )
              {
                v19 = v12 + v17;
                v20 = *(_QWORD *)(v18 + 8);
LABEL_15:
                result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a3 + 16))(a3, v19, v20);
              }
            }
          }
          else
          {
            v21 = *(unsigned int *)(v13 + 12 * v16);
            if ( (unsigned int)v21 <= v11 && (*(_BYTE *)(v13 + 12 * v16 + 4) & 0xEF) == 0xF )
            {
              v19 = v12 + v21;
              v20 = *(unsigned int *)(v13 + 12 * v16 + 8);
              goto LABEL_15;
            }
          }
          if ( v14 >= v10 )
            return result;
          ++v14;
        }
      }
    }
  }
  return result;
}
