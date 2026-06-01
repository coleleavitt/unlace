__int64 __fastcall sub_146A990(__int64 a1)
{
  unsigned __int16 v2; // dx
  __int64 *v3; // rdi
  unsigned int v5; // ecx
  __int64 v6; // rax

  v2 = *(_WORD *)(a1 + 88);
  if ( *(_WORD *)(a1 + 32) == 22 )
  {
    *(_WORD *)(a1 + 88) = v2 + 1;
    goto LABEL_3;
  }
  if ( v2 )
  {
    v5 = *(_DWORD *)(a1 + 2792);
    if ( !v5 )
    {
LABEL_12:
      *(_WORD *)(a1 + 88) = v2 - 1;
      goto LABEL_3;
    }
    v6 = *(_QWORD *)(a1 + 2784) + 24LL * v5 - 24;
    while ( 1 )
    {
      if ( *(_WORD *)(v6 + 14) == v2 )
      {
        if ( *(_DWORD *)(v6 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_7;
      }
      else if ( *(_WORD *)(v6 + 14) < v2 )
      {
        goto LABEL_7;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v6 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v6 + 18) )
        goto LABEL_12;
LABEL_7:
      --v5;
      v6 -= 24;
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
