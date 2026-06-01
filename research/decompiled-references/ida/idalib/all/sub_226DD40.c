char __fastcall sub_226DD40(__int64 *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 2);
  if ( v1 == 1 || v1 != 2 && (LOBYTE(v1) = off_2CCA880(*a1), (_BYTE)v1) )
    LOBYTE(v1) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a1 + 32LL))(*a1);
  return v1;
}
