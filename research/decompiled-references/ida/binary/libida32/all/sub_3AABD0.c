__int64 __fastcall sub_3AABD0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r12
  _QWORD *v3; // rbx

  if ( !a2 )
    return 0xFFFFFFFFLL;
  v2 = *(_QWORD **)(qword_2CA1698 + 1384);
  v3 = sub_3AAB40(a2);
  if ( v3 == (_QWORD *)(*v2 + 8LL * v2[1]) || (unsigned int)compare_bpt_locs(*v3 + 32LL, a2 + 32) )
    return 0xFFFFFFFFLL;
  else
    return ((__int64)v3 - *v2) >> 3;
}

