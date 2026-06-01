__int64 __fastcall sub_15C1990(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  char v8; // cl
  __int64 v9; // rax
  char v10; // dl
  int v11; // ecx
  __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 *v15; // rcx
  unsigned __int64 v16; // r8
  __int64 v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // rsi
  __int64 *v20; // r13
  _QWORD *v21; // r9
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rbp
  __int64 *v25; // rbp
  __int64 v26; // rdi
  __int64 result; // rax
  __int64 v28[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = *(_QWORD *)(a3 + 40);
  v28[0] = v5;
  if ( (v5 & 7) == 0 )
  {
    v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    v7 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v5 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
LABEL_8:
      v12 = *(_QWORD *)(v7 + 8);
      goto LABEL_9;
    }
    v8 = *(_BYTE *)(v6 + 4);
    if ( (v8 & 0x10) == 0 )
    {
      if ( (v8 & 1) != 0 )
      {
        *(_BYTE *)(v6 + 4) = v8 | 4;
        v7 = v5 & 0xFFFFFFFFFFFFFFF8LL;
      }
      goto LABEL_8;
    }
    (*(void (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 120LL)
                                                                       + 24LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 120LL),
      v5 & 0xFFFFFFFFFFFFFFF8LL,
      v7);
    v9 = v28[0];
    v10 = *(_BYTE *)(v6 + 4);
    v11 = v28[0] & 7;
    if ( (v10 & 1) != 0 )
      *(_BYTE *)(v6 + 4) = v10 | 4;
    if ( !v11 )
    {
      v7 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      goto LABEL_8;
    }
  }
  v12 = sub_B85750(v28);
LABEL_9:
  if ( !v12 )
    return sub_15C17C0(a1, a3);
  if ( (v12 & 1) == 0 )
  {
    if ( !a2 )
    {
      sub_15C14A0(a1, v12);
      sub_15C17C0(a1, a3);
      return sub_15C17C0(a1, v12);
    }
    return sub_15C17C0(a1, a3);
  }
  v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
  v14 = *(unsigned int *)(v13 + 8);
  v15 = *(__int64 **)v13;
  v16 = *(unsigned int *)(v13 + 12);
  v17 = 8 * v14;
  v18 = *(_DWORD *)(v13 + 8);
  LODWORD(v19) = v18;
  v20 = *(__int64 **)v13;
  v21 = (_QWORD *)(*(_QWORD *)v13 + 8 * v14);
  v22 = v14 + 1;
  if ( (a2 & 1) != 0 )
  {
    v23 = (a2 & 0xFFFFFFFFFFFFFFFELL) + 8;
    if ( (_QWORD *)v23 != v21 )
    {
      v24 = v23 - (_QWORD)v15;
      if ( v22 > v16 )
      {
        sub_2237220(v13, v13 + 16, v22, 8);
        v15 = *(__int64 **)v13;
        v18 = *(_DWORD *)(v13 + 8);
      }
      v25 = (__int64 *)((char *)v15 + v24);
      v26 = v18;
      v15[v26] = v15[v26 - 1];
      if ( v25 != (__int64 *)(*(_QWORD *)v13 + v26 * 8 - 8) )
      {
        memmove((char *)v25 + *(_QWORD *)v13 - *(_QWORD *)v13 + 8, v25, *(_QWORD *)v13 + v26 * 8 - 8 - (_QWORD)v25);
        v18 = *(_DWORD *)(v13 + 8);
      }
      result = v18 + 1;
      *(_DWORD *)(v13 + 8) = result;
      *v25 = a3;
      return result;
    }
    goto LABEL_30;
  }
  if ( !v17 )
  {
LABEL_30:
    if ( v22 > v16 )
    {
      sub_2237220(v13, v13 + 16, v22, 8);
      v15 = *(__int64 **)v13;
    }
    result = *(unsigned int *)(v13 + 8);
    v15[result] = a3;
    ++*(_DWORD *)(v13 + 8);
    return result;
  }
  if ( v22 > v16 )
  {
    sub_2237220(v13, v13 + 16, v22, 8);
    v20 = *(__int64 **)v13;
    v19 = *(unsigned int *)(v13 + 8);
    v17 = 8 * v19;
    v21 = (_QWORD *)(*(_QWORD *)v13 + 8 * v19);
  }
  *v21 = v20[(unsigned __int64)v17 / 8 - 1];
  result = *(_QWORD *)v13;
  if ( (__int64 *)(*(_QWORD *)v13 + v17 - 8) != v20 )
  {
    result = (__int64)memmove((char *)v20 + result - *(_QWORD *)v13 + 8, v20, *(_QWORD *)v13 + v17 - 8 - (_QWORD)v20);
    LODWORD(v19) = *(_DWORD *)(v13 + 8);
  }
  *(_DWORD *)(v13 + 8) = v19 + 1;
  *v20 = a3;
  return result;
}
