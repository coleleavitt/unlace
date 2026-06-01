__int64 __fastcall sub_1297E0(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 v7; // r15
  int v9; // ebx
  __int128 v10; // rdi
  __int64 v11; // rax
  _DWORD *v12; // rcx
  __int64 v13; // rbx
  _DWORD *v14; // rax
  unsigned int v15; // ebx
  __int64 v17; // rdx
  unsigned __int8 *v18; // rbx
  __int64 v19; // rax
  unsigned int v20; // eax
  _DWORD *v21; // [rsp+8h] [rbp-58h] BYREF
  __int128 v22; // [rsp+10h] [rbp-50h]
  unsigned __int64 v23; // [rsp+20h] [rbp-40h]

  v7 = *a2;
  v23 = __readfsqword(0x28u);
  v21 = nullptr;
  v9 = *(_DWORD *)(v7 + 72);
  v22 = 0;
  v21 = (_DWORD *)qvector_reserve((__int64)&v21, 0, 1, 4);
  v21[(_QWORD)v22] = v9;
  *(_QWORD *)&v22 = v22 + 1;
  while ( 1 )
  {
    *((_QWORD *)&v10 + 1) = a4;
    *(_QWORD *)&v10 = v7;
    v11 = sub_129440(v10, (__int64)a3, 0);
    if ( v11 )
      break;
    if ( *(_DWORD *)(v7 + 72) == 1 || *(_DWORD *)(v7 + 352) != 1 )
      goto LABEL_10;
    v12 = &v21[v22];
    v13 = **(unsigned int **)(v7 + 344);
    if ( v21 != v12 )
    {
      v14 = v21;
      while ( (_DWORD)v13 != *v14 )
      {
        if ( v12 == ++v14 )
          goto LABEL_15;
      }
      if ( v12 != v14 )
      {
LABEL_10:
        *a2 = v7;
        *a3 = 0;
LABEL_11:
        v15 = 0;
        goto LABEL_12;
      }
    }
LABEL_15:
    if ( *((_QWORD *)&v22 + 1) < (unsigned __int64)(v22 + 1) )
    {
      v21 = (_DWORD *)qvector_reserve((__int64)&v21, (__int64)v21, v22 + 1, 4);
      v12 = &v21[v22];
    }
    *v12 = v13;
    *(_QWORD *)&v22 = v22 + 1;
    if ( (unsigned int)v13 >= *(_DWORD *)(a1 + 64) )
    {
      if ( !under_debugger )
        sub_383060(52719);
      BUG();
    }
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v13);
    *a3 = 0;
  }
  *a2 = v7;
  v17 = *a3;
  *a3 = v11;
  if ( v17 != v11 )
    goto LABEL_11;
  v18 = (unsigned __int8 *)(v17 + 64);
  v19 = sub_339CA0();
  LOBYTE(v20) = sub_1255D0(v18, v19, a4, 0);
  v15 = v20;
LABEL_12:
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree((__int64)v21);
  }
  return v15;
}
