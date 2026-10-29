__int64 __fastcall sub_2013F00(__int64 a1, __int16 a2, int a3, int a4, int a5, int a6)
{
  unsigned int v6; // ebp
  __int64 v7; // rax
  bool v8; // zf
  __int64 v10; // [rsp-8h] [rbp-48h]
  _QWORD v11[6]; // [rsp+10h] [rbp-30h] BYREF

  v11[0] = 0;
  v6 = sub_2213890((int)a1 + 152, a1, a3, a4, a5, a6, (__int64)v11);
  if ( !(_BYTE)v6 )
  {
    v7 = v11[0];
    v8 = *(_QWORD *)(a1 + 176) == 0;
    *(_WORD *)(a1 + 12) = a2;
    *(_QWORD *)(a1 + 120) = v7;
    if ( v8 )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, _QWORD *, __int64))(a1 + 184))(a1 + 160, v11, v10);
  }
  return v6;
}
