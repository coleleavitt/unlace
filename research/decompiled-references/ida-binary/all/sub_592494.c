__int64 __fastcall sub_592494(_QWORD *a1, unsigned int a2)
{
  ucontext_t ucp; // [rsp+10h] [rbp-430h] BYREF
  _DWORD v4[32]; // [rsp+3C0h] [rbp-80h] BYREF

  memset(v4, 0, sizeof(v4));
  v4[2] = 0;
  v4[4] = getpid();
  getcontext(&ucp);
  return sub_5922D0(a1, a2, v4, &ucp);
}
