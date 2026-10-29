__int64 __fastcall sub_8E8CA0(__int64 a1, int a2)
{
  __int64 result; // rax
  int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rdi

  result = *(_QWORD *)(a1 + 8920);
  if ( result )
  {
    v4 = *(_DWORD *)(result - 4);
    if ( a2 == v4 )
    {
LABEL_5:
      *(_DWORD *)(result - 4) = a2;
      goto LABEL_6;
    }
  }
  else
  {
    if ( !a2 )
      goto LABEL_6;
    v4 = 0;
  }
  do
  {
    v5 = *(unsigned int *)(result + 4LL * (unsigned int)--v4);
    *(_BYTE *)(*(_QWORD *)(a1 + 8848) + v5) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 8848) + ((unsigned int)v5 ^ 1)) = 0;
    v6 = *(_QWORD *)(a1 + 8952);
    *(_QWORD *)(*(_QWORD *)(a1 + 8872) + 16LL * ((unsigned int)v5 >> 1)) = qword_1C7EC50;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
    result = *(_QWORD *)(a1 + 8920);
  }
  while ( a2 != v4 );
  if ( result )
    goto LABEL_5;
LABEL_6:
  *(_DWORD *)(a1 + 8936) = a2;
  return result;
}

