void __fastcall sub_2095740(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rax

  if ( dword_2CFD4D8 > 1 )
  {
    v2 = *(__int64 **)(a1 + 240);
    v3 = &v2[*(unsigned int *)(a1 + 248)];
    while ( v3 != v2 )
    {
      v4 = *v2++;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 120LL))(v4, 0);
    }
    v5 = *(__int64 **)(a1 + 32);
    v6 = &v5[*(unsigned int *)(a1 + 40)];
    while ( v6 != v5 )
    {
      v7 = *v5++;
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 120LL))(v8, 1);
    }
  }
}
