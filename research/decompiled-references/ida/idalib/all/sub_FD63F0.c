void __fastcall sub_FD63F0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  if ( *(_QWORD *)a1 != a1 + 16 )
    operator delete(*(void **)a1);
}
