__int64 __fastcall sub_6545A0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  result = *(_QWORD *)(a1 + 2992);
  if ( !result )
  {
    sub_654200(a1, 0);
    (*(void (__fastcall **)(_QWORD *))(**(_QWORD **)(a1 + 2976) + 16LL))(v6);
    result = v6[0];
    v6[0] = *(_QWORD *)(a1 + 2992);
    v3 = v6[0];
    *(_QWORD *)(a1 + 2992) = result;
    if ( v3 )
    {
      v4 = v6[1];
      if ( (*(_DWORD *)(v3 + 8))-- == 1 )
      {
        sub_15D7BC0(v4, v3);
        return *(_QWORD *)(a1 + 2992);
      }
    }
  }
  return result;
}

