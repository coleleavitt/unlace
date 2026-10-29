__int64 *__fastcall sub_1F5CAA0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // edx
  int v16; // r9d
  __int64 *result; // rax
  __int64 v18; // rbx
  char *v19; // r13

  sub_1F58FC0(a1, a2);
  v4 = *(unsigned int *)(*a1 + 24);
  v5 = *(_QWORD *)(*a1 + 32);
  v6 = *(_QWORD *)(v5 + 8 * v4);
  v7 = (unsigned int)(*(_DWORD *)(*a1 + 24) + 1);
  *(_DWORD *)(*a1 + 24) = v4 + 2;
  v8 = v6;
  *(_BYTE *)(a2 + 19) = ((*(_QWORD *)(v5 + 8 * v7) & 1) << 6) | *(_BYTE *)(a2 + 19) & 0xBF;
  v9 = *a1;
  v10 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v9 + 24) = v10 + 1;
  *(_DWORD *)(a2 + 16) = ((*(_QWORD *)(*(_QWORD *)(v9 + 32) + 8 * v10) & 0x7FFF) << 15)
                       | *(_DWORD *)(a2 + 16) & 0xC0007FFF;
  *(_DWORD *)(a2 + 4) = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 20) = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 24) = sub_1EE7490(*a1);
  if ( (_DWORD)v6 == -1 )
  {
    v11 = *a1;
    result = (__int64 *)(8LL * (((*(_BYTE *)(a2 + 19) & 0x40) != 0) + (*(_WORD *)(a2 + 16) & 0x7FFFu)) + 32);
LABEL_6:
    v18 = 0;
    v19 = (char *)result + a2;
    while ( 1 )
    {
      result = sub_1F19370(v11);
      *(_QWORD *)&v19[8 * v18++] = result;
      if ( v8 <= (unsigned int)v18 )
        break;
      v11 = *a1;
    }
    return result;
  }
  v11 = *a1;
  v12 = a2 + 32;
  v13 = *(_QWORD *)(*a1 + 8);
  v14 = *(unsigned int *)(v13 + 13072);
  v15 = v14 - 1;
  v16 = v14 - 1 - v6;
  while ( 1 )
  {
    v12 += 8;
    *(_QWORD *)(v12 - 8) = *(_QWORD *)(*(_QWORD *)(v13 + 13064) + 8 * v14 - 8);
    v14 = v15;
    if ( v16 == v15 )
      break;
    --v15;
  }
  *(_DWORD *)(v13 + 13072) = v16;
  result = (__int64 *)(8LL * (((*(_BYTE *)(a2 + 19) & 0x40) != 0) + (*(_WORD *)(a2 + 16) & 0x7FFFu)) + 32);
  if ( (_DWORD)v6 )
    goto LABEL_6;
  return result;
}
