__int64 __fastcall sub_2094510(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 (*v8)(); // rax
  int v10; // eax

  v2 = *(_DWORD *)(a1 + 56);
  if ( !v2 )
    return 0;
  v3 = *(_QWORD *)(a1 + 48);
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v3 + 8LL * v5);
      v8 = *(__int64 (**)())(*(_QWORD *)v7 + 24LL);
      if ( v8 != sub_200E130 )
        break;
      if ( ++v5 >= v2 )
        return v6;
    }
    ++v5;
    v10 = ((__int64 (__fastcall *)(__int64, __int64))v8)(v7, a2);
    v2 = *(_DWORD *)(a1 + 56);
    v6 |= v10;
    if ( v2 <= v5 )
      break;
    v3 = *(_QWORD *)(a1 + 48);
  }
  return v6;
}
