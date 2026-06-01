__int64 __fastcall sub_DA4610(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+0h] [rbp-10h] BYREF

  result = 1;
  if ( !*(_DWORD *)(a3 + 24) )
  {
    v4 = *(_QWORD *)(a3 + 32);
    v5 = *(unsigned int *)(a3 + 40);
    v6 = *(_QWORD *)(v4 + 32);
    if ( *(_DWORD *)(v6 + 24) != (_DWORD)v5 && (_DWORD)v5 )
      v6 = *(_QWORD *)(v4 + v5 + 32);
    result = 1;
    if ( *(_DWORD *)(v6 + 20) == -1 )
    {
      v7 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
      sub_E0FE60(a1, &v7, 2494, 0);
      return 0;
    }
  }
  return result;
}

