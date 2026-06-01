__int64 __fastcall sub_369E80(__int64 a1, __int64 a2)
{
  __int64 qword; // rbp

  qword = get_qword(*(unsigned int *)(a1 + 8));
  free_idcv(a2);
  *(_BYTE *)a2 = 9;
  *(_QWORD *)(a2 + 8) = qword;
  return 0;
}

