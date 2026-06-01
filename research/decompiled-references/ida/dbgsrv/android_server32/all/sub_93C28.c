/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93C28
// Address: 0x00093C28

//----- (00093C28) --------------------------------------------------------
_DWORD *__fastcall sub_93C28(int a1)
{
  __int64 v2; // kr00_8
  _BYTE *v3; // r4
  int v4; // r0
  int v5; // r0
  _DWORD *v6; // r5
  int v7; // r0
  __int64 v8; // r0
  unsigned int v9; // r0
  __int64 v10; // kr08_8
  __int64 v11; // r2
  _DWORD *v13; // r0
  _DWORD *v14; // r8
  __int64 v15; // r0
  _DWORD *v16; // [sp+0h] [bp-20h] BYREF

  v2 = *(_QWORD *)a1;
  if ( (_DWORD)v2 == HIDWORD(v2) || *(_BYTE *)v2 != 83 )
    return nullptr;
  v3 = (_BYTE *)(v2 + 1);
  *(_DWORD *)a1 = v2 + 1;
  if ( HIDWORD(v2) == (_DWORD)v2 + 1 )
    v4 = 0;
  else
    v4 = (unsigned __int8)*v3;
  if ( !islower(v4) )
  {
    if ( v3 == (_BYTE *)HIDWORD(v2) || *v3 != 95 )
    {
      v6 = nullptr;
      v16 = nullptr;
      if ( sub_93A64((unsigned __int8 **)a1, (unsigned int *)&v16) )
        return v6;
      v9 = (unsigned int)v16 + 1;
      v16 = (_DWORD *)((char *)v16 + 1);
      v10 = *(_QWORD *)a1;
      if ( (_DWORD)v10 != HIDWORD(v10) && *(_BYTE *)v10 == 95 )
      {
        v11 = *(_QWORD *)(a1 + 148);
        *(_DWORD *)a1 = v10 + 1;
        if ( v9 < (HIDWORD(v11) - (int)v11) >> 2 )
          return *(_DWORD **)(v11 + 4 * v9);
      }
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 148);
      *(_DWORD *)a1 = v2 + 2;
      if ( (_DWORD)v8 != HIDWORD(v8) )
        return *(_DWORD **)v8;
    }
    return nullptr;
  }
  if ( (_BYTE *)HIDWORD(v2) == v3 )
    return nullptr;
  v5 = (unsigned __int8)*v3;
  v6 = nullptr;
  switch ( *v3 )
  {
    case 'a':
      *(_DWORD *)a1 = v2 + 2;
      v7 = 0;
      goto LABEL_28;
    case 'b':
      *(_DWORD *)a1 = v2 + 2;
      v7 = 1;
      goto LABEL_28;
    case 'c':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
      return v6;
    case 'd':
      *(_DWORD *)a1 = v2 + 2;
      v7 = 5;
      goto LABEL_28;
    case 'i':
      *(_DWORD *)a1 = v2 + 2;
      v7 = 3;
      goto LABEL_28;
    default:
      if ( v5 == 111 )
      {
        *(_DWORD *)a1 = v2 + 2;
        v7 = 4;
      }
      else
      {
        if ( v5 != 115 )
          return v6;
        *(_DWORD *)a1 = v2 + 2;
        v7 = 2;
      }
LABEL_28:
      v16 = (_DWORD *)v7;
      v6 = sub_97FF8(a1, (int *)&v16);
      v13 = sub_943E8((_DWORD *)a1, v6);
      v16 = v13;
      if ( v13 != v6 )
      {
        v14 = v13;
        LODWORD(v15) = a1 + 148;
        HIDWORD(v15) = &v16;
        sub_938C4(v15);
        v6 = v14;
      }
      break;
  }
  return v6;
}
