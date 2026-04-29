__int64 __fastcall sub_384DC0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v4; // eax
  __int64 v6; // r12
  unsigned int v7; // ebx

  v4 = sub_3BB350();
  if ( v4 && (v6 = *a3, v7 = v4, (int)get_tinfo_size(0, *a2, 0) >= v6) )
    return v7;
  else
    return 0;
}
