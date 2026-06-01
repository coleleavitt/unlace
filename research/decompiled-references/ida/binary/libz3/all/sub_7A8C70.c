__int64 __fastcall sub_7A8C70(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+8h] [rbp-30h] BYREF
  __int64 v5; // [rsp+10h] [rbp-28h] BYREF
  __int64 v6[4]; // [rsp+18h] [rbp-20h] BYREF

  if ( !sub_7E4F00(a1) )
    sub_7E67D0(a1, a2, 0);
  sub_7A87E0(a1, a2);
  if ( *(_QWORD *)(a1 + 368) )
  {
    v2 = *(_QWORD *)(a1 + 120);
    v6[0] = a2;
    v4 = v2;
    v5 = a1 + 112;
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *))(a1 + 376))(a1 + 352, &v4, &v5, v6);
  }
  return 1;
}

