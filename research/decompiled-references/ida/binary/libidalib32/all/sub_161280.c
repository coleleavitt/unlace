__int64 __fastcall sub_161280(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rdx

  v6 = *a2;
  if ( *(int *)(a1 + 900) <= 740 )
    return (*(__int64 (__fastcall **)(__int64 *, __int64))(v6 + 40))(a2, a3);
  else
    return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v6 + 160))(a2, a3, *(_QWORD *)(a1 + 752));
}

