__int64 __fastcall sub_14789E0(__int64 a1)
{
  unsigned __int16 v2; // cx
  __int64 *v3; // rdi
  unsigned int v5; // edx
  unsigned __int16 v6; // si
  __int64 v7; // rax

  v2 = *(_WORD *)(a1 + 90);
  if ( *(_WORD *)(a1 + 32) == 20 )
  {
    *(_WORD *)(a1 + 90) = v2 + 1;
    goto LABEL_3;
  }
  if ( v2 )
  {
    v5 = *(_DWORD *)(a1 + 2792);
    if ( !v5 )
    {
LABEL_12:
      *(_WORD *)(a1 + 90) = v2 - 1;
      goto LABEL_3;
    }
    v6 = *(_WORD *)(a1 + 88);
    v7 = *(_QWORD *)(a1 + 2784) + 24LL * v5 - 24;
    while ( 1 )
    {
      if ( v6 == *(_WORD *)(v7 + 14) )
      {
        if ( *(_DWORD *)(v7 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_7;
      }
      else if ( v6 > *(_WORD *)(v7 + 14) )
      {
        goto LABEL_7;
      }
      if ( *(_WORD *)(v7 + 16) >= v2 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v7 + 18) )
        goto LABEL_12;
LABEL_7:
      --v5;
      v7 -= 24;
      *(_DWORD *)(a1 + 2792) = v5;
      if ( !v5 )
        goto LABEL_12;
    }
  }
LABEL_3:
  v3 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v3, (int *)(a1 + 16));
  return *(unsigned int *)(a1 + 40);
}
