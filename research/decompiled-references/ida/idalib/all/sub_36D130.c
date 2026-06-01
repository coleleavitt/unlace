__int64 __fastcall sub_36D130(__int64 a1, __int64 a2)
{
  __int64 nsec_stamp; // rbp

  nsec_stamp = get_nsec_stamp();
  free_idcv(a2);
  *(_BYTE *)a2 = 9;
  *(_QWORD *)(a2 + 8) = nsec_stamp;
  return 0;
}
