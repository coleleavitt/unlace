__int64 __fastcall sub_215E820(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 (*v7)(void); // rax

  v2 = a1[12];
  if ( !v2 && !a1[13] )
    goto LABEL_9;
  v3 = a1[6];
  if ( v3 )
  {
    if ( *(_WORD *)(v3 + 2) == 0xFFFF )
      goto LABEL_9;
    v4 = *(_DWORD *)(v3 + 12);
  }
  else
  {
    v4 = *(_DWORD *)(a1[7] + 52LL);
  }
  v5 = *(unsigned int *)(a2 + 4);
  if ( v4 > (unsigned int)v5 )
  {
    if ( v2 )
      return v2 + 18 * v5;
    else
      return a1[13] + 20 * v5;
  }
LABEL_9:
  v7 = *(__int64 (**)(void))(*a1 + 56LL);
  if ( (char *)v7 == (char *)sub_215DFC0 )
    return a1[14];
  else
    return v7();
}
