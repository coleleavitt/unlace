unsigned __int64 __fastcall sub_21831C0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r8
  __int64 *v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rdx

  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 8 * (a2 % v6));
  if ( v7 )
  {
    v8 = (__int64 *)*v7;
    if ( a2 == *(_DWORD *)(*v7 + 8) )
    {
LABEL_9:
      a6 = *((unsigned int *)v8 + 3);
      v9 = 1;
      return (v9 << 32) | a6 & 0xFFFFFF00FFFFFFFFLL;
    }
    while ( 1 )
    {
      v8 = (__int64 *)*v8;
      if ( !v8 || a2 % v6 != *((unsigned int *)v8 + 2) % v6 )
        break;
      if ( a2 == *((_DWORD *)v8 + 2) )
        goto LABEL_9;
    }
  }
  v9 = 0;
  return (v9 << 32) | a6 & 0xFFFFFF00FFFFFFFFLL;
}
