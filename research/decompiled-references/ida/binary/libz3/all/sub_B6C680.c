signed int *__fastcall sub_B6C680(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rdx
  unsigned int *v3; // rax
  int v4; // ebp
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  int v7; // r12d
  int v8; // eax
  int v10; // [rsp+8h] [rbp-30h] BYREF
  int v11; // [rsp+Ch] [rbp-2Ch]

  v2 = *(_QWORD *)(a1 + 8832);
  v3 = *((unsigned int **)a2 + 4);
  v4 = 2 * *(_DWORD *)(v2 + 4LL * *a2);
  if ( !*((_WORD *)v3 + 2)
    && (v5 = *(_DWORD **)(*((_QWORD *)v3 + 2) + 24LL)) != nullptr
    && !*v5
    && v5[1] == 8
    && v3[6] == 1 )
  {
    v8 = sub_B645B0(a1, *((unsigned int **)v3 + 4));
    v7 = v8 ^ 1;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 104);
    if ( v3 == *(unsigned int **)(v6 + 856) )
    {
      v7 = dword_1C7ED6C;
      v8 = dword_1C7ED6C ^ 1;
    }
    else if ( v3 == *(unsigned int **)(v6 + 864) )
    {
      v7 = dword_1C7ED68;
      v8 = dword_1C7ED68 ^ 1;
    }
    else
    {
      v7 = 2 * *(_DWORD *)(v2 + 4LL * *v3);
      v8 = v7 ^ 1;
    }
  }
  v11 = v8;
  v10 = v4 ^ 1;
  sub_B6BA00(a1, (unsigned int *)&v10);
  v10 = v4;
  v11 = v7;
  return sub_B6BA00(a1, (unsigned int *)&v10);
}

