__int64 __fastcall sub_369AB0(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rax
  _DWORD *v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rsi
  unsigned __int8 v8; // al

  v3 = getseg(a1[2]);
  if ( !v3 )
    return 0;
  *(_DWORD *)(a2 + 8) = 1;
  v4 = (_DWORD *)v3;
  v5 = a1[18];
  if ( (_DWORD)v5 != *(_DWORD *)(v3 + 4) )
  {
    v8 = set_segm_end(a1[2], v5, a1[26]);
    *(_DWORD *)(a2 + 8) = v8;
    if ( !v8 )
      return 0;
  }
  v6 = a1[10];
  if ( *v4 == (_DWORD)v6 )
    return 0;
  *(_DWORD *)(a2 + 8) = (unsigned __int8)set_segm_start(a1[2], v6, a1[26]);
  return 0;
}

