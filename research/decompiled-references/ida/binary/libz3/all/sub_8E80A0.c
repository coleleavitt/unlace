__int64 __fastcall sub_8E80A0(_QWORD *a1, unsigned int *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  _DWORD *v4; // rcx

  if ( a2 == *(unsigned int **)(a1[13] + 864LL) )
    return 0xFFFFFFFFLL;
  v2 = a1[1104];
  v3 = a1[1106];
  if ( !*((_WORD *)a2 + 2)
    && (v4 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) != nullptr
    && !*v4
    && v4[1] == 8
    && a2[6] == 1 )
  {
    return (unsigned int)-*(char *)(v3 + (unsigned int)(2 * *(_DWORD *)(v2 + 4LL * **((unsigned int **)a2 + 4))));
  }
  else
  {
    return (unsigned int)*(char *)(v3 + (unsigned int)(2 * *(_DWORD *)(v2 + 4LL * *a2)));
  }
}

