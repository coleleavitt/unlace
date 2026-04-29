void __fastcall sub_80130(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi

  *a1 = off_C9528;
  v1 = a1[2];
  if ( v1 )
  {
    v2 = a1[3];
    if ( v2 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(v1 + 88) + 480LL))(*(_QWORD *)(v1 + 160), v2, 8);
  }
  operator delete(a1, 0x20u);
}
