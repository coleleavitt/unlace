void __fastcall __noreturn sub_5C47F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5)
{
  __int64 v5; // r8

  v5 = a5 & 0x6000;
  if ( !(_DWORD)v5 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1480LL) + 396LL) != 1 )
      sub_395C70((int)&unk_22B285A, a3, a3, a4, v5);
    sub_395C70((int)&unk_22B285A, a3, a3, a4, v5);
  }
  sub_395C70((int)&unk_22B285A, a3, a3, a4, v5);
}

