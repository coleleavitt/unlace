__int64 __fastcall sub_813420(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v5; // rdi
  unsigned int v6; // esi
  int *v7; // rbx
  unsigned int v8; // ecx

  v2 = a2;
  v5 = *(_QWORD *)(a1[75] + 8LL * a2);
  if ( v5 && (v6 = *(_DWORD *)(v5 - 4), v7 = (int *)(a1[76] + 4 * v2), v6) )
  {
    v8 = *v7;
    while ( *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * *(unsigned int *)(v5 + 4LL * (v8 % v6))) )
    {
      if ( *v7 + v6 == ++v8 )
        goto LABEL_7;
    }
    *v7 = v8 % v6;
    return 0;
  }
  else
  {
LABEL_7:
    sub_812250((__int64)a1, a2);
    return 1;
  }
}

