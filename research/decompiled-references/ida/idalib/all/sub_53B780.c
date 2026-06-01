__int64 __fastcall sub_53B780(__int64 *a1, unsigned __int64 *a2, unsigned __int8 *a3, _QWORD *a4)
{
  _QWORD *v4; // r8
  __int64 v5; // rax
  __int64 result; // rax
  _QWORD *v7; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int8 *v8; // [rsp+8h] [rbp-10h] BYREF

  v4 = a4;
  v5 = *a1;
  *((_BYTE *)a1 + 132) = 1;
  v8 = a3;
  if ( a4 )
    v4 = &v7;
  v7 = a4;
  result = sub_53B270(*(__int64 **)(v5 + 1672), a2, 0, &v8, (__int64)v4, 0, nullptr);
  if ( !(_BYTE)result )
  {
    if ( !under_debugger )
      interr(980);
    BUG();
  }
  *((_BYTE *)a1 + 132) = 0;
  return result;
}
