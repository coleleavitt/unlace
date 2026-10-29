__int64 __fastcall sub_7A8D00(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v5; // [rsp+8h] [rbp-30h] BYREF
  __int64 v6; // [rsp+10h] [rbp-28h] BYREF
  __int64 v7[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = a1 - 48;
  if ( !sub_7E4F00(a1 - 48) )
    sub_7E67D0(v2, a2, 0);
  sub_7A87E0(v2, a2);
  if ( *(_QWORD *)(a1 + 320) )
  {
    v3 = *(_QWORD *)(a1 + 72);
    v7[0] = a2;
    v5 = v3;
    v6 = a1 + 64;
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *))(a1 + 328))(a1 + 304, &v5, &v6, v7);
  }
  return 1;
}

