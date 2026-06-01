void __fastcall sub_E73AB0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdi

  *a1 = &off_2B4BA30;
  v2 = a1[7];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *((unsigned int *)a1 + 8);
  v4 = a1[2];
  *a1 = &off_2B4B990;
  operator delete(v4, 16 * v3, 8);
  operator delete(a1, 0x40u);
}
