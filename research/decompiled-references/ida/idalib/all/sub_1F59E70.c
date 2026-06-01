__int64 __fastcall sub_1F59E70(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  _DWORD *v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rdi
  bool v18; // zf
  unsigned __int64 v19; // rbx
  int v20; // eax
  unsigned __int64 v21; // rbx
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // [rsp+0h] [rbp-48h]
  int v28; // [rsp+8h] [rbp-40h]

  sub_1F58FC0(a1, a2);
  v4 = *(_QWORD *)(*a1 + 32);
  v5 = *(_DWORD *)(*a1 + 24);
  v6 = *(_QWORD *)(v4 + 8LL * v5);
  v27 = *(_QWORD *)(v4 + 8LL * (v5 + 1));
  v7 = *(_QWORD *)(v4 + 8LL * (v5 + 2));
  v8 = v5 + 4;
  v9 = *(_QWORD *)(v4 + 8LL * (v5 + 3));
  *(_DWORD *)(*a1 + 24) = v8;
  v28 = v7;
  *(_BYTE *)(a2 + 2) = (8 * (v9 & 7)) | *(_BYTE *)(a2 + 2) & 0xC7;
  v10 = *a1;
  v11 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v10 + 24) = v11 + 1;
  *(_BYTE *)(a2 + 3) = (2 * (*(_QWORD *)(*(_QWORD *)(v10 + 32) + 8 * v11) & 1)) | *(_BYTE *)(a2 + 3) & 0xFD;
  if ( (_DWORD)v6 )
  {
    v12 = (_DWORD *)(a2 + 20);
    v13 = a2 + 4LL * (unsigned int)(v6 - 1) + 24;
    do
    {
      while ( 1 )
      {
        v14 = *a1;
        v15 = *(unsigned int *)(*a1 + 24);
        v16 = *(_QWORD *)(*a1 + 16);
        v17 = *(_QWORD *)(*a1 + 8);
        v18 = *(_QWORD *)(v16 + 856) == 0;
        *(_DWORD *)(v14 + 24) = v15 + 1;
        v19 = *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8 * v15);
        if ( !v18 )
          sub_1EDF870(v17, v16);
        v20 = __ROR4__(v19, 1);
        v21 = HIDWORD(v19);
        if ( v21 )
          v16 = *(_QWORD *)(*(_QWORD *)(v16 + 3320) + 8LL * (unsigned int)(v21 - 1));
        if ( !v20 )
          break;
        *v12++ = v20 + *(_DWORD *)(v16 + 1648) - 2;
        if ( v12 == (_DWORD *)v13 )
          goto LABEL_9;
      }
      *v12++ = 0;
    }
    while ( (_DWORD *)v13 != v12 );
  }
LABEL_9:
  result = 4LL * *(unsigned int *)(a2 + 4);
  if ( (_DWORD)v27 * v28 )
  {
    v23 = a2 + result + 20;
    v24 = (unsigned int)(v27 * v28 - 1) + a2 + result + 21;
    do
    {
      v25 = *a1;
      ++v23;
      v26 = *(unsigned int *)(*a1 + 24);
      *(_DWORD *)(v25 + 24) = v26 + 1;
      result = *(_QWORD *)(*(_QWORD *)(v25 + 32) + 8 * v26);
      *(_BYTE *)(v23 - 1) = result;
    }
    while ( v23 != v24 );
  }
  return result;
}
