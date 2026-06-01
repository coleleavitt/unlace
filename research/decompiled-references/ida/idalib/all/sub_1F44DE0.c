__int64 __fastcall sub_1F44DE0(__int64 *a1, __int64 a2)
{
  __int64 v4; // r12
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  _DWORD *v14; // r12
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // rdi
  bool v19; // zf
  unsigned __int64 v20; // rbx
  int v21; // edx
  unsigned __int64 v22; // rbx

  sub_1F43F90(a1, a2);
  v4 = a1[2];
  v5 = 0;
  v6 = *(unsigned int *)(v4 + 24);
  if ( (_DWORD)v6 != *(_DWORD *)(v4 + 40) )
  {
    v7 = *(_QWORD *)(v4 + 16);
    v8 = *(_QWORD *)(v4 + 8);
    *(_DWORD *)(v4 + 24) = v6 + 1;
    v5 = sub_1EDFDD0(v8, v7, *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v6));
  }
  *(_QWORD *)(a2 + 40) = sub_1EAD760(*(_QWORD *)(v4 + 8), v5);
  v9 = a1[2];
  v10 = *(unsigned int *)(v9 + 24);
  *(_DWORD *)(v9 + 24) = v10 + 1;
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFFBLL
                       | (4LL * (*(_QWORD *)(*(_QWORD *)(v9 + 32) + 8 * v10) != 0));
  result = a1[2];
  v12 = *(_QWORD *)(result + 32);
  v13 = *(_QWORD *)(v12 + 8LL * *(unsigned int *)(result + 40) - 8);
  if ( (_DWORD)v13 )
  {
    v14 = (_DWORD *)(a2 + 56);
    v15 = a2 + 4LL * (unsigned int)(v13 - 1) + 60;
    while ( 1 )
    {
      v16 = *(unsigned int *)(result + 24);
      v17 = *(_QWORD *)(result + 16);
      v18 = *(_QWORD *)(result + 8);
      v19 = *(_QWORD *)(v17 + 856) == 0;
      v20 = *(_QWORD *)(v12 + 8 * v16);
      *(_DWORD *)(result + 24) = v16 + 1;
      if ( !v19 )
      {
        sub_1EDF870(v18, v17);
        result = a1[2];
      }
      v21 = __ROR4__(v20, 1);
      v22 = HIDWORD(v20);
      if ( v22 )
        v17 = *(_QWORD *)(*(_QWORD *)(v17 + 3320) + 8LL * (unsigned int)(v22 - 1));
      if ( v21 )
      {
        *v14++ = v21 + *(_DWORD *)(v17 + 1648) - 2;
        if ( v14 == (_DWORD *)v15 )
          break;
      }
      else
      {
        *v14++ = 0;
        if ( (_DWORD *)v15 == v14 )
          break;
      }
      v12 = *(_QWORD *)(result + 32);
    }
  }
  ++*(_DWORD *)(result + 24);
  return result;
}
