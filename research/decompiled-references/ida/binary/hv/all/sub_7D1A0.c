__int64 __fastcall sub_7D1A0(__int64 **a1, void **a2, __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rbp
  void *v5; // r12
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, void *); // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  _DWORD *v11; // rbx

  v3 = *a1;
  v4 = *a3;
  v5 = *a2;
  v6 = **a1;
  if ( !v6
    || ((v7 = **(__int64 (__fastcall ***)(__int64, void *))v6, v7 != sub_7CD20)
      ? (v8 = ((__int64 (__fastcall *)(__int64, void *, __int64))v7)(v6, *a2, v4))
      : (v8 = sub_958B0(*(FILE **)(v6 + 8), *a2)),
        v4 == v8) )
  {
    v11 = (_DWORD *)v3[1];
    if ( v11 )
      *v11 = sub_8E7C0((unsigned int)*v11, v5, v4);
    return 1;
  }
  else
  {
    v9 = v3[2];
    if ( *(_QWORD *)(v9 + 8) <= 1u )
    {
      sub_978C0(0xFFFFFFFFLL);
      sub_17D80((char **)v9);
    }
    return 0;
  }
}

