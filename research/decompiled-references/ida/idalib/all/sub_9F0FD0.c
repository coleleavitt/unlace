__int64 __fastcall sub_9F0FD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  int v4; // eax
  __int64 v6; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL);
  v4 = sub_9EF070(a3, v3);
  if ( v4 == 1 || v4 == 3 )
  {
    v6 = sub_B8C330(v3);
    sub_9F0ED0(a1, v6, *(_QWORD *)(a2 + 16));
    return a1;
  }
  else
  {
    *(_BYTE *)(a1 + 272) = 0;
    return a1;
  }
}
