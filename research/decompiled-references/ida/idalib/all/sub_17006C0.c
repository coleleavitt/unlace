__int64 *__fastcall sub_17006C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // r8
  __int64 *v6; // rdi
  __int64 *v7; // rdx
  __int64 *result; // rax
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 *v11; // rcx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  if ( !*(_BYTE *)(a1 + 44) )
    goto LABEL_10;
  v4 = *(__int64 **)(a1 + 24);
  v5 = *(unsigned int *)(a1 + 36);
  v6 = &v4[v5];
  if ( v4 != v6 )
  {
    v7 = *(__int64 **)(a1 + 24);
    if ( v3 == *v4 )
      goto LABEL_9;
    do
    {
      if ( v6 == ++v7 )
        break;
    }
    while ( v3 != *v7 );
  }
  if ( (unsigned int)v5 < *(_DWORD *)(a1 + 32) )
  {
    *(_DWORD *)(a1 + 36) = v5 + 1;
    *v6 = v3;
    v4 = *(__int64 **)(a1 + 24);
    v7 = &v4[v5];
  }
  else
  {
LABEL_10:
    v9 = sub_2236760(a1 + 24, v3);
    v4 = *(__int64 **)(a1 + 24);
    v7 = (__int64 *)v9;
    if ( !*(_BYTE *)(a1 + 44) )
    {
      result = &v4[*(unsigned int *)(a1 + 32)];
      goto LABEL_12;
    }
  }
LABEL_9:
  result = &v4[*(unsigned int *)(a1 + 36)];
LABEL_12:
  if ( result != v7 && (unsigned __int64)*v7 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v10 = v7 + 1;
    do
    {
      v11 = v10;
      if ( result == v10 )
        break;
      ++v10;
    }
    while ( (unsigned __int64)*v11 >= 0xFFFFFFFFFFFFFFFELL );
  }
  return result;
}
