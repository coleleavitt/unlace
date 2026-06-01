__int64 __fastcall sub_8E3150(_QWORD *a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  __int64 result; // rax

  v2 = *(__int64 (**)(void))(*a1 + 32LL);
  if ( (char *)v2 != (char *)sub_8E30E0 )
    return v2();
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, a1[1]);
  if ( (_BYTE)result )
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, a1[2]);
    if ( (_BYTE)result )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, a1[3]);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, a1[4]);
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, a1[5]);
    }
  }
  return result;
}

