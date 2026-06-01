__int64 __fastcall sub_BA8020(__int64 a1)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // rdi
  __int64 v5; // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v2 == (char *)sub_BA6130 )
  {
    if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
    {
      v5 = sub_B8C330(a1);
      *(_QWORD *)(a1 + 112) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 18360) + 40LL))(
                                *(_QWORD *)(v5 + 18360),
                                *(_QWORD *)(a1 + 112) >> 1);
    }
    v3 = *(_QWORD *)(a1 + 112);
  }
  else
  {
    v3 = v2();
  }
  if ( v3 )
    return sub_EEC140(v3);
  else
    return *(unsigned int *)(a1 + 108);
}
