__int64 *__fastcall sub_226DCE0(__int64 *a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v6; // eax

  v6 = *((_DWORD *)a1 + 2);
  if ( v6 == 1 || v6 != 2 && (a2 = (unsigned int)a2, off_2CCA880(*a1)) )
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, a2, a3, a4);
  return a1;
}
