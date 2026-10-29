__int64 __fastcall sub_15C460(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rdi

  v2 = (_BYTE *)(a1 + 136);
  *((_QWORD *)v2 - 15) = 0;
  *((_QWORD *)v2 - 14) = -1;
  *((_QWORD *)v2 - 13) = 0;
  *((_QWORD *)v2 - 8) = 0;
  *((_QWORD *)v2 - 5) = a2;
  *((_QWORD *)v2 - 4) = 0;
  *(_OWORD *)(v2 - 136) = 0;
  *((_OWORD *)v2 - 6) = 0;
  *((_OWORD *)v2 - 5) = 0;
  *(_OWORD *)(v2 - 56) = 0;
  *(_OWORD *)(v2 - 24) = 0;
  return sub_15C3F0(v2);
}

