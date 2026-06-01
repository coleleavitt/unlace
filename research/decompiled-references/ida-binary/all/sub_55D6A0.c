__int64 __fastcall sub_55D6A0(__int64 a1, unsigned __int64 *a2, _WORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  unsigned int v8; // edx
  __int64 v9; // r9
  __int64 v11; // rax
  unsigned __int64 *v12; // rcx
  int v13; // r11d
  int v14; // r12d
  __int16 v15; // ax
  unsigned __int64 v16; // rcx

  result = *(unsigned int *)(a1 + 16);
  v8 = result - 1;
  if ( *(_BYTE *)(a1 + 44) )
  {
    if ( (_DWORD)result == 1 )
      return result;
    v8 = result - 2;
  }
  else if ( !(_DWORD)result )
  {
    return result;
  }
  v9 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v11 = v9 + 32LL * v8;
    v12 = *(unsigned __int64 **)v11;
    v13 = *(_DWORD *)(v11 + 8);
    if ( v8 )
    {
      v14 = *(_DWORD *)(v11 + 24);
      v15 = 0;
      if ( *(_WORD *)(**(_QWORD **)(v9 + 32LL * (v8 - 1)) + 66LL) )
        v15 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 128LL)
                       + 2LL
                       * (*(unsigned __int16 *)(**(_QWORD **)(v9 + 32LL * (v8 - 1)) + 66LL)
                        * (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 36LL)
                        + v14));
      *a3 = v15;
    }
    v16 = *v12;
    if ( (v16 & 1) == 0 )
      break;
    result = (v16 >> 1) & 1;
    if ( (v16 & 2) != 0 )
      goto LABEL_14;
LABEL_6:
    if ( *a3 )
      goto LABEL_14;
    if ( v8-- == 0 )
      return result;
  }
  result = *(_BYTE *)(v16 + 44) & 1;
  if ( !(_BYTE)result )
    goto LABEL_6;
LABEL_14:
  *a2 = v16;
  *a4 = v13;
  return result;
}
