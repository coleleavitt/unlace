__int64 __fastcall dyld3::MachOLoaded::findClosestSymbol(
        dyld3::MachOLoaded *this,
        __int64 a2,
        const char **a3,
        unsigned __int64 *a4)
{
  __int64 v8; // x22
  unsigned __int64 v9; // x23
  int v10; // w24
  unsigned int v11; // w26
  int v12; // w25
  __int64 v13; // x22
  __int64 v14; // x27
  __int64 v15; // x11
  int *v16; // x8
  int *v17; // x10
  unsigned __int64 v18; // x11
  unsigned __int64 v19; // x13
  __int64 v20; // x11
  int *v21; // x10
  unsigned __int64 v22; // x11
  unsigned __int64 v23; // x13
  __int64 v24; // x10
  int *v25; // x9
  unsigned __int64 v26; // x10
  unsigned __int64 v27; // x12
  __int64 v28; // x9
  __int64 v29; // x10
  int *v30; // x9
  unsigned __int64 v31; // x10
  unsigned __int64 v32; // x12
  unsigned int v33; // w8
  __int64 v35; // [xsp+38h] [xbp-E8h] BYREF
  __int64 *v36; // [xsp+40h] [xbp-E0h]
  __int64 v37; // [xsp+48h] [xbp-D8h]
  int v38; // [xsp+50h] [xbp-D0h]
  _BYTE v39[24]; // [xsp+58h] [xbp-C8h] BYREF
  _DWORD *v40; // [xsp+70h] [xbp-B0h]
  unsigned int *v41; // [xsp+78h] [xbp-A8h]
  __int64 v42; // [xsp+A0h] [xbp-80h]
  __int64 v43; // [xsp+B0h] [xbp-70h]
  int v44; // [xsp+B8h] [xbp-68h]
  _BYTE v45[8]; // [xsp+C8h] [xbp-58h] BYREF

  Diagnostics::Diagnostics((Diagnostics *)v45);
  dyld3::MachOLoaded::getLinkEditPointers((__int64)this, (Diagnostics *)v45, (__int64)v39);
  v8 = 0;
  if ( (Diagnostics::hasError((Diagnostics *)v45) & 1) == 0 )
  {
    v8 = 0;
    if ( v40 )
    {
      if ( v41 )
      {
        v9 = a2 - v42;
        v35 = 0;
        v36 = &v35;
        v37 = 0x2000000000LL;
        v38 = 0;
        dyld3::MachOFile::forEachSection((int)this);
        v10 = v40[4];
        v11 = v40[5];
        v12 = v44;
        v13 = v42 + v43;
        v14 = v42 + v43 + (unsigned int)(v40[2] - v44);
        if ( (unsigned int)dyld3::MachOFile::is64(this) )
        {
          v15 = v41[5];
          if ( (_DWORD)v15 )
          {
            v16 = nullptr;
            v17 = (int *)(v14 + 16LL * v41[4]);
            v18 = (unsigned __int64)&v17[4 * v15];
            while ( 1 )
            {
              if ( (~*((_BYTE *)v17 + 4) & 0xE) == 0 )
              {
                v19 = *((_QWORD *)v17 + 1);
                if ( v16 )
                {
                  if ( v19 <= v9 && *((_QWORD *)v16 + 1) < v19 )
                  {
LABEL_13:
                    if ( *((_DWORD *)v36 + 6) == *((unsigned __int8 *)v17 + 5) )
                      v16 = v17;
                  }
                }
                else if ( v19 <= v9 )
                {
                  goto LABEL_13;
                }
              }
              v17 += 4;
              if ( (unsigned __int64)v17 >= v18 )
                goto LABEL_30;
            }
          }
          v16 = nullptr;
LABEL_30:
          v24 = v41[3];
          if ( (_DWORD)v24 )
          {
            v25 = (int *)(v14 + 16LL * v41[2]);
            v26 = (unsigned __int64)&v25[4 * v24];
            do
            {
              if ( (v25[1] & 0xEE) == 0xE )
              {
                v27 = *((_QWORD *)v25 + 1);
                if ( v16 )
                {
                  if ( v27 <= v9 && *((_QWORD *)v16 + 1) < v27 )
                  {
LABEL_38:
                    if ( *((_DWORD *)v36 + 6) == *((unsigned __int8 *)v25 + 5) )
                      v16 = v25;
                  }
                }
                else if ( v27 <= v9 )
                {
                  goto LABEL_38;
                }
              }
              v25 += 4;
            }
            while ( (unsigned __int64)v25 < v26 );
          }
          if ( v16 )
          {
            v28 = *((_QWORD *)v16 + 1);
LABEL_57:
            *a4 = v42 + v28;
            v33 = *v16;
            if ( v33 < v11 )
              *a3 = (const char *)(v13 + (unsigned int)(v10 - v12) + v33);
            v8 = 1;
            goto LABEL_61;
          }
          goto LABEL_60;
        }
        v20 = v41[5];
        if ( (_DWORD)v20 )
        {
          v16 = nullptr;
          v21 = (int *)(v14 + 12LL * v41[4]);
          v22 = (unsigned __int64)&v21[3 * v20];
          while ( 1 )
          {
            if ( (~*((_BYTE *)v21 + 4) & 0xE) == 0 )
            {
              v23 = (unsigned int)v21[2];
              if ( v16 )
              {
                if ( v9 >= v23 && v16[2] < (unsigned int)v23 )
                {
LABEL_25:
                  if ( *((_DWORD *)v36 + 6) == *((unsigned __int8 *)v21 + 5) )
                    v16 = v21;
                }
              }
              else if ( v9 >= v23 )
              {
                goto LABEL_25;
              }
            }
            v21 += 3;
            if ( (unsigned __int64)v21 >= v22 )
              goto LABEL_44;
          }
        }
        v16 = nullptr;
LABEL_44:
        v29 = v41[3];
        if ( !(_DWORD)v29 )
        {
LABEL_55:
          if ( v16 )
          {
            v28 = (unsigned int)v16[2];
            goto LABEL_57;
          }
LABEL_60:
          v8 = 0;
LABEL_61:
          _Block_object_dispose(&v35, 8);
          goto LABEL_62;
        }
        v30 = (int *)(v14 + 12LL * v41[2]);
        v31 = (unsigned __int64)&v30[3 * v29];
        while ( 1 )
        {
          if ( (v30[1] & 0xEE) == 0xE )
          {
            v32 = (unsigned int)v30[2];
            if ( v16 )
            {
              if ( v9 >= v32 && v16[2] < (unsigned int)v32 )
              {
LABEL_52:
                if ( *((_DWORD *)v36 + 6) == *((unsigned __int8 *)v30 + 5) )
                  v16 = v30;
              }
            }
            else if ( v9 >= v32 )
            {
              goto LABEL_52;
            }
          }
          v30 += 3;
          if ( (unsigned __int64)v30 >= v31 )
            goto LABEL_55;
        }
      }
    }
  }
LABEL_62:
  Diagnostics::~Diagnostics((Diagnostics *)v45);
  return v8;
}
