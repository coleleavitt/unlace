__int64 __fastcall sub_592C86(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  _DWORD s[4]; // [rsp+10h] [rbp-640h] BYREF
  greg_t v6; // [rsp+20h] [rbp-630h]
  int v7; // [rsp+90h] [rbp-5C0h]
  ucontext_t v8; // [rsp+98h] [rbp-5B8h] BYREF
  __int64 v9; // [rsp+440h] [rbp-210h] BYREF
  int v10; // [rsp+648h] [rbp-8h] BYREF

  if ( (unsigned __int8)sub_59364C(a1) != 1
    && (unsigned __int8)sub_593278(a1 + 32) != 1
    && (unsigned __int8)sub_5932B2(a1 + 32) != 1 )
  {
    sub_595F5E(a1 + 32);
  }
  else if ( (unsigned __int8)sub_593278(a1 + 32) )
  {
    v2 = sub_59328E(a1 + 32);
    lseek(v2, 0, 0);
    v3 = sub_59328E(a1 + 32);
    v10 = ftruncate(v3, 0);
    sub_593BD4(&v10);
  }
  sub_591594(4, 1u, 0, 0);
  if ( getcontext(&v8) )
    return 0;
  memcpy(&v9, v8.uc_mcontext.fpregs, 0x200u);
  v7 = sub_5918D3();
  memset(s, 0, 0x80u);
  s[0] = -1;
  v6 = v8.uc_mcontext.gregs[16];
  return sub_592500(a1, (__int64)s);
}
