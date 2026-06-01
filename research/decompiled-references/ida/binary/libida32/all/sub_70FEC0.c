__int64 __fastcall sub_70FEC0(__int64 **a1, void **a2, __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rbp
  void *v5; // r12
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, void *); // rax
  void *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  _DWORD *v14; // rbx

  v3 = *a1;
  v4 = *a3;
  v5 = *a2;
  v6 = **a1;
  if ( !v6
    || ((v7 = **(__int64 (__fastcall ***)(__int64, void *))v6, v8 = *a2, v7 != sub_70F9B0)
      ? (v9 = ((__int64 (__fastcall *)(__int64, void *, __int64))v7)(v6, v8, v4))
      : (v9 = qfwrite(*(FILE **)(v6 + 8), v8)),
        v4 == v9) )
  {
    v14 = (_DWORD *)v3[1];
    if ( v14 )
      *v14 = calc_crc32((unsigned int)*v14, v5, v4);
    return 1;
  }
  else
  {
    v12 = v3[2];
    if ( *(_QWORD *)(v12 + 8) <= 1u )
    {
      qstrerror(0xFFFFFFFFLL, v8, v10, v11);
      sub_3573A0((char **)v12);
    }
    return 0;
  }
}

