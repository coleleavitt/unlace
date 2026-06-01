__int64 __fastcall sub_13C1340(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax

  v4 = sub_13FC270(a2 + 632, a3);
  if ( v4 )
  {
    sub_13C0EE0(a1, a2, *a3, a3[1], (_BYTE *)(v4 + 32), *(_QWORD *)v4, *(_BYTE **)(a2 + 304), *(_QWORD *)(a2 + 312));
    return a1;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = a1 + 16;
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
}
