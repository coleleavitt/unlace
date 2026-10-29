unsigned __int64 __fastcall sub_169420(__int64 a1, __int64 a2, int a3, char a4)
{
  int v6; // r9d
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rdi
  struct _Unwind_Exception *v10; // rbx
  _BYTE v11[88]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v12; // [rsp+58h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  sub_15D710((__int64 *)(a1 + 272), a2, a3, a4);
  if ( !a4 )
  {
    sub_168960((__int64)v11, a1, 10, 32, -32768, v6);
    v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 232LL);
    if ( v8 == sub_F33A0 )
    {
      if ( *(_BYTE *)(a1 + 984) )
      {
        if ( !*(_QWORD *)(a1 + 480) )
        {
          v10 = (struct _Unwind_Exception *)sub_1582F0(v11);
          sub_1692D0((__int64)v11);
          _Unwind_Resume(v10);
        }
        v9 = 0;
        if ( *(_DWORD *)(a1 + 472) == 1 )
          v9 = *(_QWORD *)(a1 + 848);
      }
      else
      {
        v9 = 0;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 144LL))(v9, 0);
    }
    else
    {
      v8(a1);
    }
    sub_1692D0((__int64)v11);
  }
  return v12 - __readfsqword(0x28u);
}

