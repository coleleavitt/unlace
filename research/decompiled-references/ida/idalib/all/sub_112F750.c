__int64 __fastcall sub_112F750(_DWORD *a1, __int64 a2, __int64 a3)
{
  size_t v4; // rax
  __int64 v5; // rbx
  void *v7[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+10h] [rbp-68h] BYREF
  void **v9; // [rsp+20h] [rbp-58h] BYREF
  __int16 v10; // [rsp+40h] [rbp-38h]

  if ( (unsigned __int8)sub_21B7850(a2, 3292, 3261, a1[15] == 20) )
  {
    v4 = j__strlen("runtime");
    (*(void (__fastcall **)(void **, _DWORD *, __int64, char *, size_t, __int64, __int64))(*(_QWORD *)a1 + 304LL))(
      v7,
      a1,
      a2,
      "runtime",
      v4,
      1,
      1);
    v9 = v7;
    v10 = 260;
    v5 = sub_10DA6C0(a2, (__int64)&v9);
    if ( v7[0] != &v8 )
      operator delete(v7[0]);
    return sub_10DC5D0(a3, v5);
  }
  else
  {
    sub_10DC5D0(a3, (__int64)"-lflang_rt.runtime");
    return sub_11C3610(a1, a2, a3);
  }
}
