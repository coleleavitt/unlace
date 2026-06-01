__int64 __fastcall sub_CAE5E0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // [rsp+0h] [rbp-10h] BYREF

  if ( *(_BYTE *)(a1 + 40) )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, 0);
    v2 = *(_QWORD *)(a1 + 8);
    v3 = *(unsigned int *)(a1 + 36);
    v5 = 0;
    return sub_CFF770(v2, v3, &v5);
  }
  return result;
}
