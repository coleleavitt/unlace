__int64 __fastcall sub_4F90B0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned int v6; // edx
  unsigned int v7; // r8d
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // edx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a1 + 8;
  if ( !v2 )
    return v3;
  v4 = *a2;
  v5 = a1 + 8;
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v2 + 32);
      if ( v8 < v4 )
      {
LABEL_9:
        v2 = *(_QWORD *)(v2 + 24);
        goto LABEL_10;
      }
      if ( v4 >= v8 )
        break;
LABEL_7:
      v5 = v2;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v2 )
        goto LABEL_11;
    }
    v6 = *(_DWORD *)(v2 + 40);
    v7 = *((_DWORD *)a2 + 2);
    if ( v6 != (_DWORD)&stru_10000 )
    {
      if ( v7 != (_DWORD)&stru_10000 && v6 < v7 )
        goto LABEL_9;
      goto LABEL_7;
    }
    if ( v7 == (_DWORD)&stru_10000 )
      goto LABEL_7;
    v2 = *(_QWORD *)(v2 + 24);
LABEL_10:
    ;
  }
  while ( v2 );
LABEL_11:
  if ( v3 == v5 )
    return v5;
  v9 = *(_QWORD *)(v5 + 32);
  if ( v4 < v9 )
    return v3;
  if ( v9 >= v4 )
  {
    v10 = *((_DWORD *)a2 + 2);
    v11 = *(_DWORD *)(v5 + 40);
    if ( (v10 == (_DWORD)&stru_10000 || v10 < v11) && v11 != (_DWORD)&stru_10000 )
      return v3;
  }
  return v5;
}
