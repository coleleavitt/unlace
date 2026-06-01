__int64 __fastcall sub_38A520(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  if ( a2 == -1 )
    sub_365330();
  (*(void (**)(_QWORD, _QWORD, const char *, ...))(*(_QWORD *)*a5 + 32LL))(
    *a5,
    a5[1],
    "%08a: %02llX %02llX\n",
    (unsigned int)a2,
    a3,
    a4);
  return 0;
}

