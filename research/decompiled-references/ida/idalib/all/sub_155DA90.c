__int64 __fastcall sub_155DA90(__int64 a1)
{
  int *v1; // rbp
  unsigned __int16 v3; // cx
  __int64 *v4; // rdi
  unsigned int v6; // edx
  __int64 v7; // rax
  __int16 v8[13]; // [rsp+Eh] [rbp-1Ah] BYREF

  v1 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 32) == 22 )
  {
    ++*(_WORD *)(a1 + 88);
    goto LABEL_3;
  }
  v3 = *(_WORD *)(a1 + 88);
  if ( v3 )
  {
    v6 = *(_DWORD *)(a1 + 2792);
    if ( !v6 )
    {
LABEL_12:
      *(_WORD *)(a1 + 88) = v3 - 1;
      goto LABEL_3;
    }
    v7 = *(_QWORD *)(a1 + 2784) + 24LL * v6 - 24;
    while ( 1 )
    {
      if ( v3 == *(_WORD *)(v7 + 14) )
      {
        if ( *(_DWORD *)(v7 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_7;
      }
      else if ( v3 > *(_WORD *)(v7 + 14) )
      {
        goto LABEL_7;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v7 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v7 + 18) )
        goto LABEL_12;
LABEL_7:
      --v6;
      v7 -= 24;
      *(_DWORD *)(a1 + 2792) = v6;
      if ( !v6 )
        goto LABEL_12;
    }
  }
LABEL_3:
  v4 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v4, v1);
  v8[0] = 23;
  return (unsigned int)((unsigned __int8)sub_15680D0(a1, v8, 1, 1) == 0) + 2;
}
