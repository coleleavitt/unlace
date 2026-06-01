__int64 __fastcall sub_16A770(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  char ShiftState; // al
  int v4; // r9d
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rdi
  struct _Unwind_Exception *v8; // rbx
  _QWORD v9[15]; // [rsp+0h] [rbp-78h] BYREF

  v9[11] = __readfsqword(0x28u);
  v1 = sub_109550(a1);
  if ( v1 )
  {
    v2 = v1;
    ShiftState = getShiftState();
    sub_169320((__int64)v9, v2, 10, *(_DWORD *)(v2 + 920) | (2 * ((ShiftState & 3) != 0)), -32768, v4);
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL);
    if ( v5 == sub_F4350 )
    {
      if ( *(_BYTE *)(v2 + 992) )
      {
        if ( !*(_QWORD *)(v2 + 480) )
        {
          v8 = (struct _Unwind_Exception *)sub_158B30(v9);
          sub_169C90((__int64)v9);
          _Unwind_Resume(v8);
        }
        v6 = 0;
        if ( *(_DWORD *)(v2 + 472) == 1 )
          v6 = *(_QWORD *)(v2 + 856);
      }
      else
      {
        v6 = 0;
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 160LL))(v6, 1);
    }
    else
    {
      v5(v2);
    }
    sub_169C90((__int64)v9);
  }
  return 1;
}

