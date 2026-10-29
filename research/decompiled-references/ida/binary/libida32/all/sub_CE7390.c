__int64 __fastcall sub_CE7390(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  _BYTE v4[9]; // [rsp+1h] [rbp-9h] BYREF

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = a1 + 384;
  *(_QWORD *)(v3 + 856) = *a2;
  return sub_CE7290(v3, (__int64 (__fastcall *)(__int64, __int64))sub_CCCA80, (__int64)v4);
}

