unsigned __int64 __fastcall sub_8F80(__int64 a1, __int64 a2, char a3)
{
  bool v4; // zf
  unsigned int *v6; // rsi
  unsigned __int64 v7; // rcx
  _WORD *v8; // rax
  unsigned int v9; // ebx
  unsigned __int8 *v10; // rdx
  unsigned __int16 v11; // r11
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  char *v14; // r10
  _BYTE *v15; // rdi
  __int64 v16; // rdx
  __int64 v18; // rax
  _BYTE v19[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v20; // [rsp+408h] [rbp-20h]

  v4 = *(_DWORD *)(a1 + 132) == 11;
  v20 = __readfsqword(0x28u);
  v6 = *(unsigned int **)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 24);
  if ( v4 )
  {
    if ( v7 < (unsigned __int64)++v6 )
      goto LABEL_30;
    *(_QWORD *)(a2 + 16) = v6;
  }
  if ( a3 )
  {
    v8 = v6 + 1;
    if ( v7 < (unsigned __int64)(v6 + 1) )
      goto LABEL_30;
    v9 = *v6;
  }
  else
  {
    v8 = (_WORD *)v6 + 1;
    if ( v7 < (unsigned __int64)v6 + 2 )
      goto LABEL_30;
    v9 = *(unsigned __int16 *)v6;
  }
  v10 = (unsigned __int8 *)(v8 + 1);
  *(_QWORD *)(a2 + 16) = v8;
  if ( v7 < (unsigned __int64)(v8 + 1) )
    goto LABEL_30;
  v11 = *v8;
  *(_QWORD *)(a2 + 16) = v10;
  if ( *(_DWORD *)(a1 + 132) != 11 )
  {
    v10 = (unsigned __int8 *)(v8 + 2);
    if ( v7 < (unsigned __int64)(v8 + 2) )
      goto LABEL_30;
    *(_QWORD *)(a2 + 16) = v10;
  }
  v6 = (unsigned int *)(v10 + 1);
  if ( v7 < (unsigned __int64)(v10 + 1) )
    goto LABEL_30;
  *(_QWORD *)(a2 + 16) = v6;
  v12 = *v10;
  v13 = (unsigned int)(v7 - (_DWORD)v6);
  if ( v13 > v12 )
    v13 = v12;
  v14 = (char *)v6 + v13;
  if ( __CFADD__(v13, v6) || v7 < (unsigned __int64)v14 )
LABEL_30:
    sub_3660(a1, v6);
  v15 = v19;
  if ( (unsigned int)v13 >= 8 )
  {
    qmemcpy(v19, v6, 8 * (v13 >> 3));
    v6 += 2 * (v13 >> 3);
    v15 = &v19[8 * (v13 >> 3)];
    v7 = 0;
  }
  v16 = 0;
  if ( (v13 & 4) != 0 )
  {
    *(_DWORD *)v15 = *v6;
    v16 = 4;
  }
  if ( (v13 & 2) != 0 )
  {
    v7 = *(unsigned __int16 *)((char *)v6 + v16);
    *(_WORD *)&v15[v16] = v7;
    v16 += 2;
  }
  if ( (v13 & 1) != 0 )
  {
    v7 = *((unsigned __int8 *)v6 + v16);
    v15[v16] = v7;
  }
  v19[v13] = 0;
  *(_QWORD *)(a2 + 16) = v14;
  if ( v11 )
  {
    v18 = sub_81F0(a1, v11, v9, v7, a2, a1);
    if ( v18 != -1 )
      set_name(v18, v19, 1281);
  }
  return v20 - __readfsqword(0x28u);
}
