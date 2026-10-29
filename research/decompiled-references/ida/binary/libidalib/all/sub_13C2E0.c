__int64 __fastcall sub_13C2E0(__int64 a1)
{
  __int64 v1; // rax
  char v3; // [rsp+4h] [rbp-14h]

  v1 = sub_15D8D0(a1 + 440);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 40) + 112LL))(*(_QWORD *)(v1 + 40));
  if ( get_place_class() )
    return v3 & 1;
  else
    return 0;
}

