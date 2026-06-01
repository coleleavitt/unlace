__int64 __fastcall sub_9D4C70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+0h] [rbp-10h] BYREF

  result = 1;
  if ( !*(_DWORD *)(a3 + 48) )
  {
    v5 = *(_QWORD *)(a3 + 24);
    v6 = *(unsigned int *)(a3 + 32);
    v7 = *(_QWORD *)(v5 + 32);
    if ( *(_DWORD *)(v7 + 16) != (_DWORD)v6 && (_DWORD)v6 )
      v7 = *(_QWORD *)(v5 + v6 + 32);
    result = 1;
    if ( *(_DWORD *)(v7 + 12) == -1 )
    {
      v8 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
      sub_A2E0C0(a1, &v8, 2292, 0);
      return 0;
    }
  }
  return result;
}

