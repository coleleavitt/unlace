__int64 __fastcall sub_FD0810(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int8 v8; // [rsp+Bh] [rbp-44Dh]

  v8 = sub_FD40E0(*(_QWORD *)(a1 + 32), a2, a3, a4);
  if ( !v8 )
    sub_FD4270(*(_QWORD *)(a1 + 32), a3, a4, a5);
  return v8;
}
