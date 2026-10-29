__int64 __fastcall sub_4EA370(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rbx
  __int64 v4; // rbp
  __int64 (__fastcall *v5)(void (__fastcall ***)(_QWORD)); // rdx

  v3 = (void *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, a3);
  v4 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v3 + 128LL))(v3, a2);
  v5 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v3 + 16LL);
  if ( v5 == sub_4C9C10 )
  {
    (**(void (__fastcall ***)(void *))v3)(v3);
    sub_186B220(v3);
  }
  else
  {
    v5((void (__fastcall ***)(_QWORD))v3);
  }
  return v4;
}

