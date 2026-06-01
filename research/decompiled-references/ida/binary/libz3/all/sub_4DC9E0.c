void __fastcall sub_4DC9E0(__int64 a1, _QWORD *a2, double a3)
{
  std::ostream *v3; // rax
  void *v4; // rdi
  std::ostream *v5; // rax
  void *v6; // [rsp+0h] [rbp-48h] BYREF
  __int64 v7; // [rsp+8h] [rbp-40h]
  _QWORD v8[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( (unsigned int)sub_180B130(a1) > 1 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v3 = (std::ostream *)sub_180B150(a1, a2);
      v6 = v8;
      v7 = 0;
      LOBYTE(v8[0]) = 0;
      sub_4DA7A0(a1, a2, v3, (__int64)&v6);
      v4 = v6;
      if ( v6 != v8 )
      {
        a2 = (_QWORD *)(v8[0] + 1LL);
        operator delete(v6, v8[0] + 1LL);
      }
      sub_186A500(v4, a2);
    }
    else
    {
      v5 = (std::ostream *)sub_180B150(a1, a2);
      v6 = v8;
      v7 = 0;
      LOBYTE(v8[0]) = 0;
      sub_4DA7A0(a1, a2, v5, (__int64)&v6);
      if ( v6 != v8 )
        operator delete(v6, v8[0] + 1LL);
    }
  }
}

