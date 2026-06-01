__int64 __fastcall sub_1534210(__int64 a1, __int64 a2, char a3)
{
  __int16 v4; // dx
  __int64 v5; // rbx
  __int16 v6; // ax
  unsigned int v7; // ebp
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int16 v13; // ax
  __int16 v14; // ax
  __int64 v15; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rax

  if ( (a3 & 4) == 0 )
    goto LABEL_15;
  v4 = *(_WORD *)(a1 + 32);
  v5 = 0;
  v6 = v4;
  while ( v6 == 63 )
  {
    v7 = v5 + 1;
    if ( (_DWORD)v5 == -1 )
    {
      v6 = v4;
      v5 = v7;
    }
    else
    {
      if ( v4 == 1 )
        goto LABEL_15;
      v8 = *(_QWORD *)(a1 + 8);
      v9 = *(_QWORD *)(v8 + 2944) + v5;
      if ( v9 >= *(unsigned int *)(v8 + 2912) )
      {
        v5 = v7;
        v17 = sub_14180A0(v8, v7);
        v4 = *(_WORD *)(a1 + 32);
        v6 = *(_WORD *)(v17 + 16);
      }
      else
      {
        v10 = 3 * v9;
        v5 = v7;
        v6 = *(_WORD *)(*(_QWORD *)(v8 + 2904) + 8 * v10 + 16);
      }
    }
  }
  if ( !(_DWORD)v5 )
  {
    if ( v4 == 25 )
      goto LABEL_20;
LABEL_15:
    v15 = *(_QWORD *)(a1 + 96);
    return sub_1C36190(v15, a2, 1);
  }
  if ( v4 == 1 )
    goto LABEL_15;
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_QWORD *)(v11 + 2944) + (unsigned int)(v5 - 1);
  v13 = v12 >= *(unsigned int *)(v11 + 2912)
      ? *(_WORD *)(sub_14180A0(v11, v5) + 16)
      : *(_WORD *)(*(_QWORD *)(v11 + 2904) + 24 * v12 + 16);
  if ( v13 != 25 )
    goto LABEL_15;
  v14 = *(_WORD *)(a1 + 32);
  if ( (_DWORD)v5 == -1 )
    goto LABEL_22;
  if ( v14 == 1 )
    goto LABEL_15;
LABEL_20:
  v18 = *(_QWORD *)(a1 + 8);
  v19 = *(_QWORD *)(v18 + 2944) + (unsigned int)v5;
  if ( v19 >= *(unsigned int *)(v18 + 2912) )
    v14 = *(_WORD *)(sub_14180A0(v18, (int)v5 + 1) + 16);
  else
    v14 = *(_WORD *)(*(_QWORD *)(v18 + 2904) + 24 * v19 + 16);
LABEL_22:
  v15 = *(_QWORD *)(a1 + 96);
  if ( v14 != 23 )
    return sub_1C36190(v15, a2, 1);
  v20 = sub_190AD40(v15, a2, 1);
  return sub_1C36190(*(_QWORD *)(a1 + 96), v20, 0);
}
