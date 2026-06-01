__int64 __fastcall sub_851650(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  unsigned int v6; // eax

  v2 = a1 - 48;
  v3 = sub_7E4F00(a1 - 48, a2);
  if ( !v3 )
    v3 = sub_7E67D0(v2, (__int64)a2, 0);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 48) + 528LL);
  if ( v4 == sub_8513C0 )
  {
    if ( !sub_7E5030(v2, v3) )
    {
      v6 = sub_7E69A0(v2, v3);
      sub_13D7950(*(_QWORD *)(a1 + 32) + 1592LL, v3, v6, *(unsigned int *)(a1 - 36));
    }
    return 1;
  }
  else
  {
    v4(v2, v3);
    return 1;
  }
}

