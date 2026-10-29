__int64 __fastcall sub_EEE2B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 *v5; // r12
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r13

  v2 = *(unsigned int *)(a1 + 8);
  v3 = (unsigned int)(8 * v2 + 40);
  v4 = v3 + 16 * v2;
  v5 = (__int64 *)(a1 + v3);
  v6 = (__int64 *)(a1 + v4);
  if ( v6 == v5 )
    return 0;
  while ( 1 )
  {
    v7 = (*v5 >> 1) & 3;
    if ( v7 == 2 || v7 == 1 )
    {
      v8 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFF8LL) + 32LL))(*v5 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v8 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) )
        break;
    }
    v5 += 2;
    if ( v6 == v5 )
      return 0;
  }
  return 1;
}
