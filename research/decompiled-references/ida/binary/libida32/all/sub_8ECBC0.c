__int64 __fastcall sub_8ECBC0(__int64 a1)
{
  void (__fastcall *v1)(_QWORD); // rax
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 3656) )
  {
    v1 = *(void (__fastcall **)(_QWORD))(a1 + 880);
    if ( v1 )
      v1(*(_QWORD *)(a1 + 888));
    else
      free(*(void **)(a1 + 3656));
  }
  result = sub_8ECAE0(*(_QWORD **)(a1 + 3688));
  *(_QWORD *)(a1 + 3688) = 0;
  *(_OWORD *)(a1 + 3656) = 0;
  *(_OWORD *)(a1 + 3672) = 0;
  *(_OWORD *)(a1 + 3704) = 0;
  *(_QWORD *)(a1 + 3720) = 0;
  *(_QWORD *)(a1 + 3696) = 0;
  return result;
}

