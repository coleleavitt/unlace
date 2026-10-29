__int64 __fastcall sub_103A10(__int64 a1, _WORD *a2)
{
  __int16 v3; // bx

  if ( *a2 == 16 && (v3 = a2[4], getShiftState(), *(_BYTE *)(a1 + 1248)) && *(_QWORD *)(a1 + 1232) != -1 && v3 == 283 )
    return sub_FF850((__int64 *)a1);
  else
    return sub_153750((TView *)a1);
}

