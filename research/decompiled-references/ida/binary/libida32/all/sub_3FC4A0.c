__int64 __fastcall sub_3FC4A0(__int64 a1, __int64 a2, unsigned int a3, int a4, unsigned int *a5, _DWORD *a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // eax

  v6 = *(_QWORD *)(a2 + 72);
  v7 = a2 + 64;
  if ( !v6 )
    goto LABEL_15;
  v10 = v7;
  do
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v6 + 32);
      if ( a3 < v11 || v11 >= a3 && *(_DWORD *)a1 < *(_DWORD *)(v6 + 36) )
        break;
      v6 = *(_QWORD *)(v6 + 24);
      if ( !v6 )
        goto LABEL_8;
    }
    v10 = v6;
    v6 = *(_QWORD *)(v6 + 16);
  }
  while ( v6 );
LABEL_8:
  if ( v7 == v10 || (v12 = *(_DWORD *)(v10 + 32), v12 >= a3 + a4) )
  {
LABEL_15:
    *(_DWORD *)a1 = -1;
    return 0;
  }
  else
  {
    if ( a5 )
      *a5 = v12;
    if ( a6 )
      *a6 += a3 - v12;
    *(_DWORD *)a1 = *(_DWORD *)(v10 + 36);
    *(_BYTE *)(a1 + 4) = *(_BYTE *)(v10 + 40);
    return 1;
  }
}

