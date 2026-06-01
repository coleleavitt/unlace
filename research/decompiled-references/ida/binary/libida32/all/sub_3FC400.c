__int64 __fastcall sub_3FC400(__int64 a1, __int64 a2, unsigned int a3, int a4, unsigned int *a5, _DWORD *a6)
{
  __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // eax

  v6 = *(_QWORD *)(a2 + 72);
  if ( v6 )
  {
    v8 = a2 + 64;
    v11 = a2 + 64;
    do
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v6 + 16);
        v13 = *(_QWORD *)(v6 + 24);
        if ( *(_DWORD *)(v6 + 32) < a3 )
          break;
        v11 = v6;
        v6 = *(_QWORD *)(v6 + 16);
        if ( !v12 )
          goto LABEL_6;
      }
      v6 = *(_QWORD *)(v6 + 24);
    }
    while ( v13 );
LABEL_6:
    if ( v8 == v11 || (v14 = *(_DWORD *)(v11 + 32), v14 >= a3 + a4) )
    {
      *(_DWORD *)a1 = -1;
      return 0;
    }
    else
    {
      if ( a5 )
        *a5 = v14;
      if ( a6 )
        *a6 += a3 - v14;
      *(_DWORD *)a1 = *(_DWORD *)(v11 + 36);
      *(_BYTE *)(a1 + 4) = *(_BYTE *)(v11 + 40);
      return 1;
    }
  }
  else
  {
    *(_DWORD *)a1 = -1;
    return 0;
  }
}

