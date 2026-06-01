__int64 __fastcall sub_A30480(__int64 a1)
{
  unsigned int *v2; // rbx
  unsigned int *v3; // r13
  unsigned int v4; // r15d
  __int64 v5; // r12
  __int64 result; // rax
  unsigned int *v7; // rdi
  size_t v8; // rdx
  int v9; // [rsp+8h] [rbp-40h] BYREF
  int v10[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v2 = *(unsigned int **)(a1 + 864);
  if ( v2 )
  {
    v3 = &v2[*(v2 - 1)];
    if ( v3 == v2 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        v5 = *(_QWORD *)(a1 + 568) + 24LL * *v2;
        if ( *(_DWORD *)(v5 + 12) != -1 && *(_DWORD *)(v5 + 8) < *(_DWORD *)(*(_QWORD *)(a1 + 336) + 28LL) )
          break;
        if ( v3 == ++v2 )
          goto LABEL_14;
      }
      sub_99BFF0((_QWORD *)a1, (__int64 *)v5, &v9, v10);
      if ( v9 >= 0 )
      {
        sub_A281D0((_QWORD *)a1, (__int64 *)v5, v9, 1);
      }
      else if ( v9 == -1 )
      {
        sub_A28420((_QWORD *)a1, (__int64 *)v5, 1);
      }
      if ( v10[0] >= 0 )
      {
        sub_A281D0((_QWORD *)a1, (__int64 *)v5, v10[0], 0);
      }
      else if ( v10[0] == -1 )
      {
        sub_A28420((_QWORD *)a1, (__int64 *)v5, 0);
      }
      ++v2;
      sub_A2FD50(a1, v4);
    }
    while ( v3 != v2 );
LABEL_14:
    v2 = *(unsigned int **)(a1 + 864);
    if ( v2 )
LABEL_15:
      *(v2 - 1) = 0;
  }
  result = (unsigned int)(*(_DWORD *)(a1 + 872) + 1);
  *(_DWORD *)(a1 + 872) = result;
  if ( (_DWORD)result == -1 )
  {
    v7 = *(unsigned int **)(a1 + 880);
    if ( v7 )
    {
      v8 = 4LL * *(v7 - 1);
      if ( v8 )
        result = (__int64)memset(v7, 0, v8);
    }
    *(_DWORD *)(a1 + 872) = 0;
  }
  return result;
}

