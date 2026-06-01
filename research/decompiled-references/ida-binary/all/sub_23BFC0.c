__int64 __fastcall sub_23BFC0(__int64 a1, _QWORD *a2, int a3)
{
  unsigned int v3; // r13d
  char v4; // r12
  __int64 v6; // rax

  if ( !a2 )
    return 0xFFFFFFFFLL;
  v3 = *((_DWORD *)a2 + 9);
  if ( *a2
    && (v4 = *((_BYTE *)a2 + 40), v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2), v6 != -1) )
  {
    return sub_23BF20(a1, v6, v4, v3, a3);
  }
  else
  {
    return v3;
  }
}
