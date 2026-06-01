Diagnostics *__fastcall dyld3::MachOFile::forEachChainedFixupTarget(
        Diagnostics *this,
        unsigned int *a2,
        __int64 a3,
        __int64 a4)
{
  Diagnostics *v4; // x19
  __int64 v5; // x8
  unsigned int v6; // w9
  __int64 v8; // x10
  const char *v9; // x1
  char *v11; // x22
  unsigned int v12; // w23
  unsigned int v13; // w9
  __int64 v14; // x24
  char *v15; // x26
  unsigned __int64 v16; // x8
  __int64 v17; // x1
  unsigned __int64 v18; // x24
  _QWORD *v19; // x26
  unsigned __int64 v20; // x8
  __int64 v21; // x1
  unsigned __int64 v22; // x24
  int *v23; // x26
  unsigned __int64 v24; // x8
  __int64 v25; // x1
  char v26; // [xsp+Fh] [xbp-51h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v4 = this;
  v5 = a2[2];
  v6 = *(_DWORD *)(a3 + 12);
  if ( (unsigned int)v5 <= v6 )
  {
    v8 = a2[3];
    if ( v6 >= (unsigned int)v8 )
    {
      v26 = 0;
      v11 = (char *)a2 + v8;
      v12 = v6 - v8;
      v13 = a2[5];
      switch ( v13 )
      {
        case 3u:
          if ( !a2[4] )
            return this;
          v18 = 0;
          v19 = (_QWORD *)((char *)a2 + v5 + 8);
          while ( 1 )
          {
            v20 = *(v19 - 1);
            if ( v12 < HIDWORD(v20) )
              break;
            if ( (unsigned __int16)*(v19 - 1) <= 0xFFF0u )
              v21 = (unsigned __int16)*(v19 - 1);
            else
              v21 = (unsigned int)(__int16)v20;
            this = (Diagnostics *)(*(__int64 (__fastcall **)(__int64, __int64, char *, _QWORD, unsigned __int64, char *))(a4 + 16))(
                                    a4,
                                    v21,
                                    &v11[HIDWORD(v20)],
                                    *v19,
                                    (v20 >> 16) & 1,
                                    &v26);
            if ( !v26 )
            {
              ++v18;
              v19 += 2;
              if ( v18 < a2[4] )
                continue;
            }
            return this;
          }
          break;
        case 2u:
          if ( !a2[4] )
            return this;
          v22 = 0;
          v23 = (int *)((char *)a2 + v5 + 4);
          while ( 1 )
          {
            v24 = (unsigned int)*(v23 - 1);
            if ( (unsigned int)*(v23 - 1) >> 9 > v12 )
              break;
            if ( (unsigned __int8)*(v23 - 1) <= 0xF0u )
              v25 = (unsigned __int8)*(v23 - 1);
            else
              v25 = (unsigned int)(char)v24;
            this = (Diagnostics *)(*(__int64 (__fastcall **)(__int64, __int64, char *, _QWORD, _QWORD, char *))(a4 + 16))(
                                    a4,
                                    v25,
                                    &v11[v24 >> 9],
                                    *v23,
                                    ((unsigned int)v24 >> 8) & 1,
                                    &v26);
            if ( !v26 )
            {
              ++v22;
              v23 += 2;
              if ( v22 < a2[4] )
                continue;
            }
            return this;
          }
          break;
        case 1u:
          if ( !a2[4] )
            return this;
          v14 = 0;
          v15 = (char *)a2 + v5;
          while ( 1 )
          {
            v16 = *(unsigned int *)&v15[4 * v14];
            if ( *(_DWORD *)&v15[4 * v14] >> 9 > v12 )
              break;
            if ( (unsigned __int8)*(_DWORD *)&v15[4 * v14] <= 0xF0u )
              v17 = (unsigned __int8)*(_DWORD *)&v15[4 * v14];
            else
              v17 = (unsigned int)(char)v16;
            this = (Diagnostics *)(*(__int64 (__fastcall **)(__int64, __int64, char *, _QWORD, _QWORD, char *))(a4 + 16))(
                                    a4,
                                    v17,
                                    &v11[v16 >> 9],
                                    0,
                                    ((unsigned int)v16 >> 8) & 1,
                                    &v26);
            if ( !v26 && ++v14 < (unsigned __int64)a2[4] )
              continue;
            return this;
          }
          break;
        default:
          v9 = "unknown imports format";
          goto LABEL_4;
      }
      return (Diagnostics *)Diagnostics::error(v4, "malformed import table, string overflow");
    }
  }
  v9 = "malformed import table";
LABEL_4:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (Diagnostics *)Diagnostics::error(this, v9);
}
