__int64 __fastcall sub_812E0(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  int v6; // eax
  __int16 v8; // ax
  char v9; // bp
  unsigned __int16 v11; // ax
  unsigned __int8 v12; // dl
  __int64 v13; // rax
  int v14; // edx
  signed int v15; // edx
  unsigned __int16 v16; // ax
  bool v17; // dl
  char v18; // bp
  __int16 v19; // dx
  __int64 v20; // rax
  __int64 v21; // rax
  __int16 v22; // dx
  __int16 v23; // bp
  __int16 v24; // dx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // ecx
  int v28; // edi
  __int64 v29; // rax
  __int64 v30; // r13

  v6 = *a3;
  if ( *a3 >= 0 && ((_WORD)v6 == 161 || (unsigned __int16)v6 == 13) )
  {
    v13 = sub_2FB20(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 24), a4, 0);
    if ( v13 )
    {
      v14 = *a3;
      *(_QWORD *)(a2 + 32) = v13;
      *(_DWORD *)a2 = v14;
      return 1;
    }
  }
  v8 = sub_81190(a4);
  v9 = v8;
  if ( v8 != -1 )
  {
    if ( (v8 & 0x18) != 0 )
      return 0;
    v11 = *(_WORD *)(a4 + 46);
    if ( (unsigned __int16)(v11 - 129) > 0x20u && v11 > 0xFu )
      return 0;
    if ( *(_BYTE *)(a4 + 81) != 4 )
      return 0;
    v12 = *(_BYTE *)(a4 + 85);
    if ( v12 > 2u && v12 != 7 )
      return 0;
    if ( v11 == *(_WORD *)(a4 + 86) && (*(_BYTE *)(a4 + 28) & 0xA0) != 0 )
      return 0;
    if ( (v9 & 1) != 0 )
    {
      *(_QWORD *)(a2 + 8) = a4 + 80;
      *(_QWORD *)(a2 + 16) = a4 + 40;
      return 1;
    }
    if ( (*(_BYTE *)(a4 + 34) & 4) == 0 && (getinf(3) & 0x1006) != 0x1002 || *(_BYTE *)(a4 + 45) == 7 )
    {
      v25 = a4 + 40;
      LOBYTE(v23) = v9 & 2;
      goto LABEL_42;
    }
    v23 = v9 & 2;
    if ( !v23 )
    {
      v24 = *(_WORD *)(a4 + 46);
      *(_BYTE *)(a1 + 113) = 1;
      v25 = a1 + 112;
      *(_BYTE *)(a1 + 117) = 7;
      *(_WORD *)(a1 + 118) = v24;
LABEL_42:
      *(_QWORD *)(a2 + 8) = v25;
      *(_QWORD *)(a2 + 16) = a4 + 80;
      *(_BYTE *)(a2 + 24) = (v23 & 2) != 0;
      return 1;
    }
    return 0;
  }
  if ( (unsigned int)sub_25C10(*(_WORD *)(a4 + 24)) == 1 )
  {
    v15 = *a3;
    v16 = *(_WORD *)(a4 + 24);
    if ( *a3 < 0 || v16 != 42 )
    {
      if ( v16 == 251 )
      {
        v17 = 0;
        v18 = 0;
      }
      else if ( v16 > 0xFBu )
      {
        if ( v16 == 255 )
        {
          v17 = 0;
          v18 = 1;
        }
        else
        {
          v17 = 1;
          v18 = 2;
          if ( v16 != 505 )
            return 0;
        }
      }
      else
      {
        switch ( v16 )
        {
          case 0xDEu:
            v17 = 1;
            v18 = 0;
            break;
          case 0xE2u:
            v17 = 1;
            v18 = 1;
            break;
          case 0x17u:
            if ( *(_BYTE *)(a4 + 81) != 1 )
              return 0;
            v17 = (*(_WORD *)(a4 + 86) == 161 || *(_WORD *)(a4 + 86) == 13) && v15 < 0;
            if ( v17 )
              return 0;
            v18 = -1;
            break;
          default:
            return 0;
        }
      }
      *(_BYTE *)(a2 + 24) = v17;
      if ( ((*(_BYTE *)(a4 + 34) & 4) != 0 || (getinf(3) & 0x1006) == 0x1002) && *(_BYTE *)(a4 + 45) != 7 )
      {
        if ( *(_BYTE *)(a2 + 24) )
          return 0;
        v19 = *(_WORD *)(a4 + 46);
        *(_BYTE *)(a1 + 113) = 1;
        v20 = a1 + 112;
        *(_BYTE *)(a1 + 117) = 7;
        *(_WORD *)(a1 + 118) = v19;
      }
      else
      {
        v20 = a4 + 40;
      }
      *(_QWORD *)(a2 + 8) = v20;
      v21 = a4 + 80;
      if ( v18 != -1 )
      {
        v22 = *(_WORD *)(a4 + 86);
        *(_BYTE *)(a1 + 153) = 1;
        v21 = a1 + 152;
        *(_BYTE *)(a1 + 157) = v18;
        *(_WORD *)(a1 + 158) = v22;
      }
      *(_QWORD *)(a2 + 16) = v21;
      return 1;
    }
    if ( (v15 & 0xFFF0) == 0 )
    {
      v26 = *(_QWORD *)(a4 + 64);
      if ( _bittest((const int *)&v26, v15) )
      {
        if ( (unsigned __int16)v15 != 13 )
        {
          if ( (_WORD)v15 )
          {
            v27 = 0;
            v28 = 0;
            do
            {
              if ( v27 <= 15 )
                v28 += 4 * (((unsigned int)*(_QWORD *)(a4 + 64) >> v27) & 1);
              ++v27;
            }
            while ( (unsigned __int16)v15 != v27 );
          }
          else
          {
            v28 = 0;
          }
          v29 = a1 + 112;
          *(_BYTE *)(a1 + 113) = 1;
          v30 = a1 + 152;
          *(_WORD *)(v30 - 34) = v15;
          *(_BYTE *)(v30 - 35) = 2;
          *(_QWORD *)(a2 + 8) = v29;
          *(_BYTE *)(v30 + 1) = 4;
          *(_WORD *)(v30 + 6) = 13;
          *(_QWORD *)(v30 + 16) = v28;
          *(_BYTE *)(v30 + 5) = 2;
          *(_QWORD *)(a2 + 16) = v30;
          return 1;
        }
      }
    }
    return 0;
  }
  if ( under_debugger )
    BUG();
  interr(10497);
  return sub_816B0();
}
