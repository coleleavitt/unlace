unsigned __int64 __fastcall sub_9950(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r8
  unsigned __int16 *v6; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int16 *v9; // rax
  int v10; // ebp
  unsigned __int16 v11; // r9
  unsigned __int64 v12; // rax
  char *v13; // r10
  char *v14; // rdi
  __int64 v15; // rcx
  char v17[1024]; // [rsp+0h] [rbp-838h] BYREF
  char v18[1032]; // [rsp+400h] [rbp-438h] BYREF
  unsigned __int64 v19; // [rsp+808h] [rbp-30h]

  v4 = a1;
  v6 = *(unsigned __int16 **)(a3 + 16);
  v19 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a3 + 24);
  if ( a4 )
  {
    v9 = v6 + 2;
    if ( v8 < (unsigned __int64)(v6 + 2) )
      goto LABEL_26;
    v10 = *(_DWORD *)v6;
    *(_QWORD *)(a3 + 16) = v9;
    if ( *(_DWORD *)(a1 + 132) != 11 )
      goto LABEL_4;
  }
  else
  {
    v9 = v6 + 1;
    if ( v8 < (unsigned __int64)(v6 + 1) )
      goto LABEL_26;
    v10 = *v6;
    *(_QWORD *)(a3 + 16) = v9;
    if ( *(_DWORD *)(a1 + 132) != 11 )
      goto LABEL_4;
  }
  v9 += 2;
  if ( v8 < (unsigned __int64)v9 )
    goto LABEL_26;
  *(_QWORD *)(a3 + 16) = v9;
LABEL_4:
  a1 = (unsigned __int64)(v9 + 1);
  if ( v8 < (unsigned __int64)(v9 + 1) )
    goto LABEL_26;
  v11 = *v9;
  *(_QWORD *)(a3 + 16) = a1;
  if ( *(_DWORD *)(v4 + 132) != 11 )
  {
    a1 = (unsigned __int64)(v9 + 2);
    if ( v8 < (unsigned __int64)(v9 + 2) )
      goto LABEL_26;
    *(_QWORD *)(a3 + 16) = a1;
  }
  v6 = (unsigned __int16 *)(a1 + 1);
  if ( v8 < a1 + 1 )
    goto LABEL_26;
  *(_QWORD *)(a3 + 16) = v6;
  a1 = *(unsigned __int8 *)a1;
  v12 = (unsigned int)(v8 - (_DWORD)v6);
  if ( v12 > a1 )
    v12 = a1;
  v13 = (char *)v6 + v12;
  if ( __CFADD__(v12, v6) || v8 < (unsigned __int64)v13 )
LABEL_26:
    sub_3660(a1, v6);
  v14 = v17;
  if ( (unsigned int)v12 >= 8 )
  {
    qmemcpy(v17, v6, 8 * (v12 >> 3));
    v6 += 4 * (v12 >> 3);
    v14 = &v17[8 * (v12 >> 3)];
  }
  v15 = 0;
  if ( (v12 & 4) != 0 )
  {
    *(_DWORD *)v14 = *(_DWORD *)v6;
    v15 = 2;
  }
  if ( (v12 & 2) != 0 )
  {
    *(_WORD *)&v14[v15 * 2] = v6[v15];
    ++v15;
  }
  if ( (v12 & 1) != 0 )
    v14[v15 * 2] = v6[v15];
  *(_QWORD *)(a3 + 16) = v13;
  v17[v12] = 0;
  sub_4ED0(*(_DWORD *)(*(_QWORD *)(v4 + 8) + 4LL), v11, (__int64)v18, v15 * 2, v4);
  sub_49D0(a2, (__int64)"%s = %s+0x%X", v17, v18, v10);
  return v19 - __readfsqword(0x28u);
}
