bool __fastcall sub_3FE8D0(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rax
  bool result; // al
  __int64 v4; // rdx

  v1 = (_QWORD *)a1[5];
  if ( v1 && *((_DWORD *)v1 - 1) == 1 )
    return *(_QWORD *)(a1[1] + 856LL) == *v1;
  v2 = a1[2];
  if ( v2 )
    return *(_QWORD *)(a1[1] + 864LL) == v2;
  v4 = a1[10];
  result = 0;
  if ( v4 )
    return *(_QWORD *)(a1[1] + 856LL) == *(_QWORD *)(v4 + 24);
  return result;
}

