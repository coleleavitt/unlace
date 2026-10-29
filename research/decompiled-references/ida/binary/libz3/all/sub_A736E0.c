__int64 __fastcall sub_A736E0(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v4; // r13
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // eax

  v4 = *(_QWORD **)(a1 + 64);
  v5 = sub_B39350(a2, *(unsigned int *)(*v4 + 8LL));
  if ( v5 != -1 )
  {
    v8 = v5;
    if ( (unsigned __int8)sub_FFAE60(v4[63]) )
    {
      v9 = sub_FF9FB0(v4[63], v8);
      v6 = sub_FFBF50(v4[63], v9, a3);
      if ( (_BYTE)v6 )
      {
        if ( !(unsigned __int8)sub_A72E00(*a2) )
          return v6;
        if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
        {
          LOBYTE(v6) = *(_DWORD *)(a3 + 16) == 1;
          return v6;
        }
      }
    }
  }
  return 0;
}

