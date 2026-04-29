__int64 __fastcall sub_D8FD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rax
  __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rdx
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // r12
  int *v18; // rax
  int v19; // esi
  int v20; // edx
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rbp
  _QWORD v26[7]; // [rsp+0h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(a1 + 32);
  v26[3] = __readfsqword(0x28u);
  if ( (_DWORD)a2 )
  {
    v14 = *(_QWORD *)(v6 + 64);
    v15 = a2;
    if ( (unsigned int)a2 >= *(_DWORD *)(v14 + 64) )
      sub_D6750(a1, a2, v14, a4, a5);
    v16 = *(_QWORD *)(v14 + 528);
    v17 = *(_QWORD *)(v16 + 8LL * (unsigned int)a2);
    if ( (*(_DWORD *)(v17 + 24) & 0x600) != 0x200 )
      sub_A30D0(v17, 0, v16, a4, a5, a6);
    v18 = *(int **)(v17 + 56);
    v19 = *(_DWORD *)(a1 + 132);
    if ( v18 )
    {
      v20 = *v18;
      if ( *v18 != 4 )
      {
        if ( v20 == 67 )
        {
          if ( v18[17] != v18[9] )
            goto LABEL_13;
        }
        else if ( v20 != 10 )
        {
          goto LABEL_13;
        }
      }
      if ( *((_BYTE *)v18 + 32) == 4 && (unsigned int)(**((_DWORD **)v18 + 5) - 56) <= 1 && *((_BYTE *)v18 + 64) == 1 )
      {
        v23 = v18[17];
        v24 = v18[18];
        if ( v23 )
        {
          if ( v19 >= v24 && v23 + v24 - 1 >= v19 )
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * *(int *)(a1 + 124)) = *(_DWORD *)(a1 + 124) + 1;
            v19 = *(_DWORD *)(a1 + 132);
          }
        }
      }
    }
LABEL_13:
    if ( (unsigned __int8)sub_606E0(
                            (_QWORD *)(v17 + 280),
                            v19,
                            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 480) + 112LL) + 80LL)) )
    {
      v21 = *(_QWORD *)(v17 + 56);
      v22 = *(_QWORD *)(v21 + 24) + 1LL;
      if ( v22 < *(_QWORD *)(v17 + 40) )
        v22 = *(_QWORD *)(v17 + 40);
      return sub_D8310(a1, v17, v21, v22);
    }
    if ( !sub_605B0((_QWORD *)(v17 + 240), *(_DWORD *)(a1 + 132)) )
    {
      if ( !sub_605B0((_QWORD *)(v17 + 160), *(_DWORD *)(a1 + 132)) )
      {
        result = 3;
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 72LL) > v15 )
          return 0;
        return result;
      }
      result = 3;
      if ( (*(_BYTE *)(a1 + 120) & 6) == 0 )
        return result;
    }
    return 2;
  }
  v8 = *(_QWORD *)(v6 + 64);
  v9 = *(_DWORD *)(a1 + 132);
  v26[0] = 3;
  v26[1] = v9;
  v10 = (int)sub_1EBAC0(v8 + 432, v26, 1, 0);
  cleanup_argloc(v26);
  if ( (_DWORD)v10 == -1 )
  {
    *(_BYTE *)(a1 + 140) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 64LL) + 320LL) ^ 1;
    return 4;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 120) )
    {
      v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 64LL) + 432LL) + 104 * v10;
      if ( (get_tinfo_property(*(_QWORD *)(v25 + 80), 2) & 0xF) == 9 && *(int *)(v25 + 88) <= 7 )
        return 2;
    }
    v11 = *(_QWORD *)(a1 + 80);
    v12 = *(int *)(a1 + 124);
    *(_BYTE *)(a1 + 140) = 1;
    return *(_DWORD *)(v11 + 4 * v12) == -1;
  }
}
