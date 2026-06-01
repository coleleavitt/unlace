__int64 __fastcall sub_7A23E0(__int64 a1, __int64 a2)
{
  __int64 (*v2)(); // rax
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rax

  v2 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
  if ( v2 == sub_6A41B0 )
    v3 = sub_777E10(a2);
  else
    v3 = ((__int64 (__fastcall *)(__int64))v2)(a2);
  result = 0;
  if ( v3 != **(_QWORD **)a1 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( !*(_BYTE *)(v5 + 20) )
      goto LABEL_11;
    v6 = *(__int64 **)v5;
    v7 = *(unsigned int *)(v5 + 12);
    v8 = (__int64 *)(*(_QWORD *)v5 + 8 * v7);
    if ( *(__int64 **)v5 != v8 )
    {
      while ( v3 != *v6 )
      {
        if ( v8 == ++v6 )
          goto LABEL_10;
      }
      return 1;
    }
LABEL_10:
    if ( (unsigned int)v7 < *(_DWORD *)(v5 + 8) )
    {
      *(_DWORD *)(v5 + 12) = v7 + 1;
      *v8 = v3;
    }
    else
    {
LABEL_11:
      sub_25D5540(v5, v3);
    }
    return 1;
  }
  return result;
}

