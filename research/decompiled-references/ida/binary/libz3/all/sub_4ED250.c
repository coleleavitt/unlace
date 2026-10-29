__int64 __fastcall sub_4ED250(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rax
  _QWORD v11[6]; // [rsp+8h] [rbp-30h] BYREF

  v8 = *(_QWORD *)(a1 + 8);
  if ( *(_WORD *)(a2 + 4) == 1 )
  {
    *a5 = *(_DWORD *)(a2 + 16);
    v10 = sub_15D1F10(a2);
    *a3 = sub_4ED1A0(v8, v10) - 1;
    *a4 = 0;
    return 1;
  }
  result = sub_1674350(v8 + 48, a2, a4, a3, v11);
  if ( (_BYTE)result )
  {
    result = 0;
    if ( *(_WORD *)(v11[0] + 4LL) == 1 )
    {
      *a5 = *(_DWORD *)(v11[0] + 16LL);
      return 1;
    }
  }
  return result;
}

