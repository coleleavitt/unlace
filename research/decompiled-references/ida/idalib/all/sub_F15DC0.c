__int64 __fastcall sub_F15DC0(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned __int64 v10; // rcx
  int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // ebp
  char v16; // r12
  __int64 v17; // rax
  int v18; // ebp
  int v19; // r12d
  unsigned __int64 v20; // rcx
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  void *v24; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v25; // [rsp+8h] [rbp-30h]

  sub_F15AA0((_QWORD *)a1, (_WORD *)a2);
  v3 = *(void **)(a2 + 16);
  v4 = *(unsigned int *)(a2 + 24);
  v5 = (unsigned __int64)(v4 + 63) >> 6;
  if ( v5 > 1 )
  {
    sub_2205610(&v24, v4, v5, v3);
  }
  else
  {
    v25 = v4;
    if ( (unsigned int)v4 > 0x40 )
      sub_2205470(&v24, v3, 0);
    else
      v24 = v3;
  }
  v6 = *(_QWORD *)(a1 + 8);
  sub_2205760(&v24, v6);
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
  v7 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a1 + 16) )
    v7 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
       | ((unsigned __int8)*(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v7) & 7;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(unsigned int *)(v8 + 12);
  v11 = *(unsigned __int8 *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v12 = *(unsigned int *)(v8 + 8);
  if ( v12 + 1 > v10 )
  {
    v6 = v8 + 16;
    sub_2237220(*(_QWORD *)(a1 + 8), v8 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(v8 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v8 + 4 * v12) = v11;
  ++*(_DWORD *)(v8 + 8);
  v13 = *v9;
  if ( *(_BYTE *)(*v9 + 16) != 10 )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v23 + 16) == 10 )
    {
      v13 = sub_F63050(*v9, v6, v23, v10);
      if ( v13 )
        goto LABEL_12;
      v23 = *(_QWORD *)(*(_QWORD *)(*v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    }
    v14 = *(_QWORD *)(a1 + 8);
    result = *(unsigned int *)(v14 + 8);
    v18 = (*(_WORD *)(v23 + 18) >> 3) & 0x1FF;
    v22 = result + 1;
    if ( result + 1 <= (unsigned __int64)*(unsigned int *)(v14 + 12) )
      goto LABEL_15;
LABEL_20:
    sub_2237220(v14, v14 + 16, v22, 4);
    result = *(unsigned int *)(v14 + 8);
    goto LABEL_15;
  }
LABEL_12:
  v14 = *(_QWORD *)(a1 + 8);
  v15 = *(_DWORD *)(v13 + 32);
  v16 = *(_BYTE *)(v13 + 32);
  v17 = *(unsigned int *)(v14 + 8);
  v18 = (v15 >> 1) & 0xFFFFFF;
  v19 = v16 & 1;
  if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(v14 + 12) )
  {
    sub_2237220(v14, v14 + 16, v17 + 1, 4);
    v17 = *(unsigned int *)(v14 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v14 + 4 * v17) = v19;
  v20 = *(unsigned int *)(v14 + 12);
  result = (unsigned int)(*(_DWORD *)(v14 + 8) + 1);
  v22 = result + 1;
  *(_DWORD *)(v14 + 8) = result;
  if ( result + 1 > v20 )
    goto LABEL_20;
LABEL_15:
  *(_DWORD *)(*(_QWORD *)v14 + 4 * result) = v18;
  ++*(_DWORD *)(v14 + 8);
  return result;
}
