unsigned __int64 __fastcall sub_A7AC20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax

  v6 = *(_QWORD *)(a2 + 48);
  if ( v6 )
    return v6 & 0xFFFFFFFFFFFFFFF0LL;
  else
    return sub_A7AA70(a1, a2, a3, a4, a5, a6);
}
