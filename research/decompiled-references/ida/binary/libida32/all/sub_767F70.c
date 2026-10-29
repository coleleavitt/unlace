__int64 __fastcall sub_767F70(__int64 a1)
{
  char *v1; // rsi
  __int64 result; // rax
  __int64 v3; // rax

  sub_3573A0((char **)(a1 + 40));
  sub_761900((_QWORD *)a1, "%s.%s");
  sub_761B40(a1);
  v1 = *(char **)(a1 + 40);
  if ( *(_QWORD *)(a1 + 56) <= 4u )
  {
    v3 = qvector_reserve(a1 + 40, v1, 5, 1);
    *(_QWORD *)(a1 + 40) = v3;
    v1 = (char *)v3;
  }
  *(_QWORD *)(a1 + 48) = 5;
  *(_DWORD *)v1 = 1936287860;
  *(_BYTE *)(*(_QWORD *)(a1 + 40) + 4LL) = 0;
  sub_761900((_QWORD *)a1, v1);
  result = sub_767230(a1, 0, 0);
  if ( !(_DWORD)result )
    return sub_763140(a1);
  return result;
}

