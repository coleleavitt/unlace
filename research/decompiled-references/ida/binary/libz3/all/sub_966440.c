__int64 __fastcall sub_966440(__int64 a1, unsigned int *a2)
{
  __int64 v3; // r13
  unsigned int *v4; // rbp
  unsigned int v5; // r14d
  _DWORD *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // r12
  unsigned int v12; // ebp
  unsigned int v13; // ebp

  v3 = *(_QWORD *)(a1 + 24);
  if ( a2 )
    ++a2[2];
  if ( *((_WORD *)a2 + 2) )
  {
    v4 = a2;
    v5 = 0;
  }
  else
  {
    v4 = a2;
    v5 = 0;
    v6 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
    if ( v6 && !*v6 && v6[1] == 8 )
    {
      v5 = a2[6];
      if ( v5 == 1 )
        v4 = *((unsigned int **)a2 + 4);
      else
        v5 = 0;
    }
  }
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(v7 + 8656);
  if ( !v8 || (v9 = *v4, (unsigned int)v9 >= *(_DWORD *)(v8 - 4)) || !*(_QWORD *)(v8 + 8 * v9) )
  {
    sub_B6F780(v7);
    v7 = *(_QWORD *)(a1 + 16);
  }
  v10 = sub_B645B0(v7, v4);
  v11 = *(_QWORD *)(a1 + 16);
  v12 = v10;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v11 + 7488) + 48LL))(
    *(_QWORD *)(v11 + 7488),
    *(_QWORD *)(*(_QWORD *)(v11 + 8840) + 8LL * (v10 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 7488) + 64LL))(*(_QWORD *)(v11 + 7488));
  v13 = v5 ^ v12;
  if ( a2[2]-- == 1 )
    sub_15D7BC0(v3, a2);
  return v13;
}

