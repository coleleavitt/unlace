__int64 __fastcall sub_79C160(unsigned int *a1, __int64 a2, void **a3, int a4)
{
  void *v6; // rdi
  unsigned int v9; // esi
  __int64 v10; // rdi

  v9 = *a1;
  v10 = *(_QWORD *)(a2 + 1544);
  if ( v9 == -1 )
    return -1;
  *(_WORD *)(v10 + 45) = 6;
  *(_DWORD *)(v10 + 48) = _byteswap_ulong(v9);
  *(_BYTE *)(v10 + 52) = a4;
  if ( (unsigned __int64)sub_723E90(*(_QWORD *)v10, (unsigned __int16 *)(v10 + 45)) < 2 )
    return sub_78D550(v10, a4, v9, (__int64)a3, 0, 0, 1);
  if ( a3 )
  {
    v6 = *a3;
    if ( *a3 )
    {
      a3[1] = nullptr;
      qfree(v6);
      *a3 = nullptr;
      a3[2] = nullptr;
    }
  }
  return 0;
}

