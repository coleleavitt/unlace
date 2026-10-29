__int64 __fastcall mach_o::SymbolTable::forEachGlobalSymbol(dyld3::MachOFile ***a1, __int64 a2, __int64 a3)
{
  __int64 result; // x0
  dyld3::MachOFile *v6; // x9
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
  char v22; // [xsp+Fh] [xbp-51h]

  result = dyld3::MachOFile::is64(**a1);
  v6 = (*a1)[3];
  if ( *((_BYTE *)v6 + 220) )
  {
    v7 = result;
    v8 = *((unsigned __int8 *)v6 + 156);
    if ( *((_BYTE *)v6 + 156) )
    {
      v8 = *((_DWORD *)v6 + 37);
      v9 = (unsigned int *)((char *)v6 + 152);
    }
    else
    {
      v9 = (unsigned int *)((char *)v6 + 216);
    }
    v10 = *v9;
    v11 = *((_DWORD *)v6 + 60);
    v12 = *((_QWORD *)v6 + 29);
    v13 = *((_QWORD *)v6 + 25);
    v22 = 0;
    if ( (_DWORD)v10 )
    {
      v14 = 1;
      v15 = v8;
      while ( 1 )
      {
        v16 = (unsigned int)(v15 + v14 - 1);
        if ( v7 )
        {
          v17 = *(unsigned int *)(v13 + 16 * v16);
          if ( (unsigned int)v17 > v11 )
            goto LABEL_15;
          v18 = v13 + 16 * v16;
          if ( (*(_BYTE *)(v18 + 4) & 0xEF) != 0xF )
            goto LABEL_15;
          v19 = v12 + v17;
          v20 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v21 = *(unsigned int *)(v13 + 12 * v16);
          if ( (unsigned int)v21 > v11 || (*(_BYTE *)(v13 + 12 * v16 + 4) & 0xEF) != 0xF )
            goto LABEL_15;
          v19 = v12 + v21;
          v20 = *(unsigned int *)(v13 + 12 * v16 + 8);
        }
        result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a3 + 16))(a3, v19, v20);
LABEL_15:
        if ( v14 < v10 )
        {
          ++v14;
          if ( (v22 & 1) == 0 )
            continue;
        }
        return result;
      }
    }
  }
  return result;
}
