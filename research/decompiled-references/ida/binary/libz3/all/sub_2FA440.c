__int64 __fastcall sub_2FA440(__int64 a1, __int64 a2)
{
  _Unwind_Exception_Class v2; // rax
  _DWORD *v3; // r13
  _Unwind_Exception v6; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD **)(a1 + 624);
  v6.exception_cleanup = nullptr;
  v6.exception_class = v2;
  if ( v3 )
  {
    if ( v3[2]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v3)(v3);
      sub_186B220(v3);
    }
  }
  *(_QWORD *)(a1 + 624) = 0;
  sub_2FA220(a1, (__int64)&v6);
  sub_2F3A10(a1, &v6, a2);
  sub_2F6C20(a1, (__int64)&v6);
  return sub_2334C0((__int64 *)&v6);
}

