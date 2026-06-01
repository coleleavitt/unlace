__int64 __fastcall sub_B7A70(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rax

  v2 = *(_QWORD **)(a1 + 192);
  if ( a2 < v2[1] )
  {
    v3 = (_QWORD *)(*v2 + 80 * a2);
    if ( v3 )
      sub_120E80(0, *v3, 0xFFFFFFFFLL, 1);
  }
  return -1;
}

