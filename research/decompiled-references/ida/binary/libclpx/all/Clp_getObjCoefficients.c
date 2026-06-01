__int64 __fastcall Clp_getObjCoefficients(__int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  _BYTE v3[16]; // [rsp+0h] [rbp-10h] BYREF

  v1 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 160LL);
  if ( v1 )
    return (**v1)(v1, 0, 0, v3, 0, 2);
  else
    return 0;
}

