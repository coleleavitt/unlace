__int64 __fastcall sub_103780(__int64 a1, _WORD *a2)
{
  __int16 v3; // bx

  if ( *a2 == 16 && (v3 = a2[4], getShiftState(), *(_BYTE *)(a1 + 1232)) && *(_DWORD *)(a1 + 1224) != -1 && v3 == 283 )
    return sub_FF640((__int64 *)a1);
  else
    return sub_152F50((TView *)a1);
}

