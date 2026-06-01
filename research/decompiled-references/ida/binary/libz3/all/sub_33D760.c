__int64 __fastcall sub_33D760(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbp
  __int16 v4; // ax

  v2 = *(_DWORD **)(a1 + 920);
  if ( v2 )
  {
    if ( v2[4]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v2)(v2);
      sub_186B220(v2);
    }
  }
  *(_QWORD *)(a1 + 920) = 0;
  v4 = *(_WORD *)(a2 + 4);
  if ( v4 )
  {
    if ( v4 != 2 )
      return sub_8E3610(a1 + 880);
LABEL_8:
    *(_DWORD *)(a1 + 596) = 2;
    return sub_8E3610(a1 + 880);
  }
  if ( (*(_BYTE *)(a2 + 30) & 2) != 0 )
    goto LABEL_8;
  return sub_8E3610(a1 + 880);
}

