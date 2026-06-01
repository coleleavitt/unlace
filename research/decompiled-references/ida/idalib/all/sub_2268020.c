char *__fastcall sub_2268020(__int64 a1, char *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  char *result; // rax
  __int64 v8; // rdx
  char *v9; // rbp

  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  LODWORD(v5) = *(_DWORD *)(a1 + 8);
  v6 = v3 + 1;
  result = (char *)(*(_QWORD *)a1 + 16 * v3);
  if ( v6 > *(unsigned int *)(a1 + 12) )
  {
    if ( v4 > (unsigned __int64)a2 || result <= a2 )
    {
      sub_2267EB0(a1, v6);
      v5 = *(unsigned int *)(a1 + 8);
      result = (char *)(*(_QWORD *)a1 + 16 * v5);
    }
    else
    {
      v9 = &a2[-v4];
      sub_2267EB0(a1, v6);
      v5 = *(unsigned int *)(a1 + 8);
      a2 = &v9[*(_QWORD *)a1];
      result = (char *)(*(_QWORD *)a1 + 16 * v5);
    }
  }
  *(_QWORD *)result = *(_QWORD *)a2;
  v8 = *((_QWORD *)a2 + 1);
  *((_QWORD *)result + 1) = v8;
  if ( !v8 )
    goto LABEL_5;
  if ( &_pthread_key_create )
  {
    _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
    LODWORD(v5) = *(_DWORD *)(a1 + 8);
LABEL_5:
    *(_DWORD *)(a1 + 8) = v5 + 1;
    return result;
  }
  ++*(_DWORD *)(v8 + 8);
  ++*(_DWORD *)(a1 + 8);
  return result;
}
