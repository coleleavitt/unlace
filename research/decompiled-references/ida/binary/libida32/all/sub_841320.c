__int64 __fastcall sub_841320(__int64 a1, unsigned int a2, unsigned int *a3, _DWORD *a4, _DWORD *a5, __int64 a6)
{
  unsigned int v6; // r13d
  unsigned __int16 *v8; // r14
  int v9; // r15d
  __int64 v11; // rcx
  int v12; // eax

  v6 = 0;
  v8 = *(unsigned __int16 **)(a6 + 72);
  if ( !*(_WORD *)(a6 + 208) )
    goto LABEL_5;
  while ( 1 )
  {
    v9 = sub_8771E0(a1, v8 + 1, a2, a4);
    if ( !v9 && !*((_BYTE *)v8 + a2 + 2) )
      break;
    ++v6;
    v8 = (unsigned __int16 *)((char *)v8 + *(unsigned __int16 *)(a6 + 210));
    if ( v6 >= *(unsigned __int16 *)(a6 + 208) )
      goto LABEL_5;
  }
  if ( v6 < *(unsigned __int16 *)(a6 + 208) )
  {
    *a3 = v6;
    do
    {
      v11 = *v8;
      ++v9;
      LOWORD(v11) = __ROL2__(v11, 8);
      v12 = 1 << v11;
      if ( (unsigned __int16)v11 >= 0x20u )
        v12 = 1;
      *(_DWORD *)(a6 + 276) |= v12;
      if ( *(_DWORD *)(a6 + 272) < (unsigned int)(unsigned __int16)v11 )
        *(_DWORD *)(a6 + 272) = (unsigned __int16)v11;
      if ( v9 + v6 >= *(unsigned __int16 *)(a6 + 208) )
        break;
      v8 = (unsigned __int16 *)((char *)v8 + *(unsigned __int16 *)(a6 + 210));
      if ( (unsigned int)sub_8771E0(a1, v8 + 1, a2, v11) )
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

