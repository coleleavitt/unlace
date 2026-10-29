__int64 __fastcall sub_851720(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r12
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  unsigned int v5; // eax

  v2 = sub_7E4F00(a1, a2);
  if ( !v2 )
    v2 = sub_7E67D0(a1, (__int64)a2, 0);
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 528LL);
  if ( v3 == sub_8513C0 )
  {
    if ( !sub_7E5030(a1, v2) )
    {
      v5 = sub_7E69A0(a1, v2);
      sub_13D7950(*(_QWORD *)(a1 + 80) + 1592LL, v2, v5, *(unsigned int *)(a1 + 12));
    }
    return 1;
  }
  else
  {
    v3(a1, v2);
    return 1;
  }
}

