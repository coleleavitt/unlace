__int64 __fastcall sub_8DB0(__int64 a1, char *a2, char a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v6; // rdi
  __int64 v7; // r8
  unsigned int v8; // ebp
  unsigned __int16 *v9; // rdx
  unsigned int v10; // r10d
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  char *v14; // r11
  _BYTE *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r12
  _BYTE v20[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v21; // [rsp+408h] [rbp-30h]

  v3 = *((_QWORD *)a2 + 2);
  v4 = *((_QWORD *)a2 + 3);
  v21 = __readfsqword(0x28u);
  v6 = v3 + 4;
  if ( v4 < v3 + 4 )
    goto LABEL_30;
  v7 = (__int64)a2;
  a2 = (char *)(v3 + 8);
  if ( v4 < v3 + 8 )
  {
    *(_QWORD *)(v7 + 16) = v6;
    goto LABEL_30;
  }
  *(_QWORD *)(v7 + 16) = a2;
  if ( a3 )
  {
    if ( v4 < v3 + 12 )
      goto LABEL_30;
    v8 = *(_DWORD *)(v3 + 8);
    *(_QWORD *)(v7 + 16) = v3 + 12;
    v9 = (unsigned __int16 *)(v3 + 16);
    if ( v4 < v3 + 16 )
      goto LABEL_30;
    v10 = *(_DWORD *)(v3 + 12);
  }
  else
  {
    if ( v4 < v3 + 10 )
      goto LABEL_30;
    v8 = *(unsigned __int16 *)(v3 + 8);
    *(_QWORD *)(v7 + 16) = v3 + 10;
    v9 = (unsigned __int16 *)(v3 + 12);
    if ( v4 < v3 + 12 )
      goto LABEL_30;
    v10 = *(unsigned __int16 *)(v3 + 10);
  }
  *(_QWORD *)(v7 + 16) = v9;
  if ( v4 < (unsigned __int64)(v9 + 1) )
    goto LABEL_30;
  a2 = (char *)v9 + 3;
  v11 = *v9;
  if ( v4 < (unsigned __int64)v9 + 3 )
  {
    *(_QWORD *)(v7 + 16) = v9 + 1;
    goto LABEL_30;
  }
  *(_QWORD *)(v7 + 16) = a2;
  v12 = *((unsigned __int8 *)v9 + 2);
  v13 = (unsigned int)(v4 - (_DWORD)a2);
  if ( v13 > v12 )
    v13 = v12;
  v14 = &a2[v13];
  if ( v4 < (unsigned __int64)&a2[v13] || v14 < a2 )
LABEL_30:
    sub_3660(v6, a2);
  v15 = v20;
  if ( (unsigned int)v13 >= 8 )
  {
    qmemcpy(v20, a2, 8 * (v13 >> 3));
    a2 += 8 * (v13 >> 3);
    v15 = &v20[8 * (v13 >> 3)];
    v4 = 0;
  }
  v16 = 0;
  if ( (v13 & 4) != 0 )
  {
    *(_DWORD *)v15 = *(_DWORD *)a2;
    v16 = 4;
  }
  if ( (v13 & 2) != 0 )
  {
    v4 = *(unsigned __int16 *)&a2[v16];
    *(_WORD *)&v15[v16] = v4;
    v16 += 2;
  }
  if ( (v13 & 1) != 0 )
  {
    v4 = (unsigned __int8)a2[v16];
    v15[v16] = v4;
  }
  v20[v13] = 0;
  *(_QWORD *)(v7 + 16) = v14;
  v17 = sub_81F0(a1, (unsigned __int16)v11, v10, v4, v7, v11);
  v18 = v17;
  if ( v17 != -1 )
  {
    set_name(v17, v20, 1281);
    sub_49D0(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (v8 + v18), (__int64)"end of block");
  }
  return v18;
}
