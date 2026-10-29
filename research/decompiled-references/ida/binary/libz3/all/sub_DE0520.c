__int64 __fastcall sub_DE0520(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // r14
  __int64 v5; // r15
  __int64 *v6; // rbx
  __int64 *v7; // rbp
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 48);
  if ( !v3 )
    return 1;
  v5 = v3 + 8LL * *(unsigned int *)(v3 - 4);
  if ( v5 == v3 )
    return 1;
  while ( 1 )
  {
    v6 = *(__int64 **)(*(_QWORD *)v3 + 40LL);
    if ( v6 )
    {
      v7 = &v6[*((unsigned int *)v6 - 1)];
      if ( v6 != v7 )
        break;
    }
LABEL_9:
    v3 += 8;
    if ( v5 == v3 )
      return 1;
  }
  while ( 1 )
  {
    result = sub_DDF7E0(*v6, a2, a3);
    if ( !(_BYTE)result )
      return result;
    if ( v7 == ++v6 )
      goto LABEL_9;
  }
}

