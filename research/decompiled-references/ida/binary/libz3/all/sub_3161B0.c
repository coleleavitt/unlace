__int64 __fastcall sub_3161B0(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v3; // r12d
  _QWORD *v5; // r13
  __int64 v6; // rdi

  v1 = *(_QWORD *)(a1 + 24);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 192LL))(v1);
  v3 = sub_E60CB0(*(std::ios_base **)(a1 + 24), 0, 0);
  if ( (unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) )
  {
    if ( v3 == 1 )
    {
      v5 = *(_QWORD **)(a1 + 24);
      (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 32LL))(v5, a1 + 40);
      if ( *(_QWORD *)(a1 + 40) )
      {
        v6 = v5[7];
        if ( v6 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, a1 + 40);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 64LL))(*(_QWORD *)(a1 + 24), a1 + 48);
      sub_1360B80(*(_QWORD *)(a1 + 40) + 128LL, 1);
      sub_315E80(a1);
    }
  }
  else
  {
    v3 = 0;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 200LL))(v1, 1);
  return v3;
}

