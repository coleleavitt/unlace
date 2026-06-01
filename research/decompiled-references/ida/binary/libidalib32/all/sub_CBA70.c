__int64 __fastcall sub_CBA70(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // edx
  __int16 v6; // ax
  struct _Unwind_Exception *v7; // rbp
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a2 + 12);
  if ( v3 == 6 )
  {
    if ( !dbg )
    {
      if ( !under_debugger )
      {
        v7 = (struct _Unwind_Exception *)interr();
        sub_109250(v2);
        _Unwind_Resume(v7);
      }
      BUG();
    }
    sub_1091C0(v8);
    v6 = sub_BAEE0(dbg);
    sub_C0810(v6);
    sub_109250(v8);
    return 1;
  }
  v4 = 0;
  if ( v3 == 7 )
  {
    sub_CB8E0();
    return 1;
  }
  return v4;
}

