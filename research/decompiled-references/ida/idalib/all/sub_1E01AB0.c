_QWORD *__fastcall sub_1E01AB0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  _QWORD *v3; // rbp
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
    v2 = 0;
  v3 = sub_B9ACF0(*(_QWORD **)(*a1 + 248), a1[3], *(_DWORD *)(a2 + 24), v2, *(_QWORD *)(a2 + 48));
  *((_BYTE *)v3 + 29) = (8 * sub_B8C090((_BYTE *)a2)) | *((_BYTE *)v3 + 29) & 0xF7;
  sub_1DC20B0(*(_QWORD *)(*a1 + 11280), a2, (__int64)v3, v4);
  return v3;
}
