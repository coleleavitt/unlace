__int64 __fastcall sub_864CA0(__int64 a1, unsigned int a2, unsigned int *a3, _DWORD *a4, _DWORD *a5, __int64 a6)
{
  unsigned int v6; // r13d
  _WORD *v8; // r14
  int v9; // r15d
  unsigned __int16 v11; // cx
  int v12; // eax

  v6 = 0;
  v8 = *(_WORD **)(a6 + 72);
  if ( !*(_WORD *)(a6 + 208) )
    goto LABEL_5;
  while ( 1 )
  {
    v9 = sub_89AB60(a1, v8 + 1, a2);
    if ( !v9 && !*((_BYTE *)v8 + a2 + 2) )
      break;
    ++v6;
    v8 = (_WORD *)((char *)v8 + *(unsigned __int16 *)(a6 + 210));
    if ( v6 >= *(unsigned __int16 *)(a6 + 208) )
      goto LABEL_5;
  }
  if ( v6 < *(unsigned __int16 *)(a6 + 208) )
  {
    *a3 = v6;
    do
    {
      ++v9;
      v11 = __ROL2__(*v8, 8);
      v12 = 1 << v11;
      if ( v11 >= 0x20u )
        v12 = 1;
      *(_DWORD *)(a6 + 276) |= v12;
      if ( *(_DWORD *)(a6 + 272) < (unsigned int)v11 )
        *(_DWORD *)(a6 + 272) = v11;
      if ( v9 + v6 >= *(unsigned __int16 *)(a6 + 208) )
        break;
      v8 = (_WORD *)((char *)v8 + *(unsigned __int16 *)(a6 + 210));
      if ( (unsigned int)sub_89AB60(a1, v8 + 1, a2) )
        break;
    }
    while ( !*((_BYTE *)v8 + a2 + 2) );
    *a4 = v9;
    return 1;
  }
  else
  {
LABEL_5:
    *a5 = 153;
    *(_QWORD *)(a6 + 168) = a1 - *(_QWORD *)(a6 + 56);
    return 0;
  }
}
