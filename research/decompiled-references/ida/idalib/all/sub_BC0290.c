__int64 __fastcall sub_BC0290(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  _BOOL4 v7; // r13d
  __int64 v8; // rax
  int v9; // r12d
  __int64 *v10; // r15
  __int64 v11; // r13
  __int64 result; // rax
  __int64 v13; // r12
  char v14; // al
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  _BOOL4 v25; // ebp
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rbp
  unsigned __int64 v33; // rcx
  _BOOL4 v34; // ebp
  __int64 v35; // [rsp+8h] [rbp-40h]

  if ( (*(_BYTE *)(a1 + 23) & 0x40) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 8LL * (*(_DWORD *)(a1 + 20) & 0x1FFFFFFF) + 24);
    v5 = *(unsigned int *)(a2 + 8);
    v6 = v5 + 1;
    v7 = v4 != 0;
    if ( v5 + 1 <= (unsigned __int64)*(unsigned int *)(a2 + 12) )
      goto LABEL_3;
  }
  else
  {
    v5 = *(unsigned int *)(a2 + 8);
    v4 = 0;
    v7 = 0;
    v6 = v5 + 1;
    if ( v5 + 1 <= (unsigned __int64)*(unsigned int *)(a2 + 12) )
      goto LABEL_3;
  }
  sub_2237220(a2, a2 + 16, v6, 4);
  v5 = *(unsigned int *)(a2 + 8);
LABEL_3:
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v5) = v7;
  v8 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v8;
  if ( v4 )
  {
    sub_F1A490(v4, a2, a3, 1, 0);
    v8 = *(unsigned int *)(a2 + 8);
  }
  v9 = *(_DWORD *)(a1 + 20) & 0x1FFFFFFF;
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, v8 + 1, 4);
    v8 = *(unsigned int *)(a2 + 8);
  }
  v10 = (__int64 *)(a1 + 24);
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v8) = v9;
  ++*(_DWORD *)(a2 + 8);
  v11 = a1 + 8LL * (*(_DWORD *)(a1 + 20) & 0x1FFFFFFF) + 24;
  result = a2 + 16;
  v35 = a2 + 16;
  if ( v11 != a1 + 24 )
  {
    do
    {
      v13 = *v10;
      v14 = *(_BYTE *)(*v10 + 28) & 0x7F;
      if ( v14 == 47 )
      {
        v15 = *(unsigned int *)(a2 + 8);
        if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          sub_2237220(a2, v35, v15 + 1, 4);
          v15 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v15) = 0;
        v16 = *(unsigned int *)(a2 + 12);
        v17 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v17;
        v18 = *(unsigned __int8 *)(v13 + 80);
        if ( v17 + 1 > v16 )
        {
          sub_2237220(a2, v35, v17 + 1, 4);
          v17 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v17) = v18;
        v19 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v19;
        v20 = *(_QWORD *)&byte_8[*(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFFFF0LL];
        v21 = v20 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v20 | (unsigned __int8)*(_QWORD *)(v13 + 48)) & 7;
        if ( v19 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          sub_2237220(a2, v35, v19 + 1, 4);
          v19 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v19) = v21;
        v22 = HIDWORD(v21);
        v23 = *(unsigned int *)(a2 + 12);
        v24 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v24;
        if ( v24 + 1 > v23 )
        {
          sub_2237220(a2, v35, v24 + 1, 4);
          v24 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v24) = v22;
        v25 = 0;
        ++*(_DWORD *)(a2 + 8);
        v26 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFFFF0LL));
        if ( v26 && *(_BYTE *)(v26 + 16) == 16 )
          v25 = *(_QWORD *)(v26 + 32) != 0;
        v27 = *(unsigned int *)(a2 + 8);
        if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          sub_2237220(a2, v35, v27 + 1, 4);
          v27 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v27) = v25;
        ++*(_DWORD *)(a2 + 8);
        result = sub_F57E80(*(_QWORD *)(*(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFFFF0LL));
        if ( !result )
          goto LABEL_27;
        if ( *(_BYTE *)(result + 16) != 16 )
          goto LABEL_27;
        if ( !*(_QWORD *)(result + 32) )
          goto LABEL_27;
        result = 16LL * *(unsigned int *)(v13 + 84);
        v28 = *(_QWORD *)(v13 + result + 88);
        if ( !v28 )
          goto LABEL_27;
      }
      else
      {
        if ( v14 != 67 )
        {
          sub_9B7040(a2, 2);
          sub_9B7040(a2, (*(_BYTE *)(v13 + 80) & 2) != 0);
          result = sub_BC0290(*(_QWORD *)(v13 + 56), a2, a3);
          goto LABEL_27;
        }
        v29 = *(unsigned int *)(a2 + 8);
        if ( v29 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          sub_2237220(a2, v35, v29 + 1, 4);
          v29 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v29) = 1;
        v30 = *(unsigned int *)(a2 + 12);
        v31 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v31;
        v32 = (*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 48) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) >> 47)
            & 1LL;
        if ( v31 + 1 > v30 )
        {
          sub_2237220(a2, v35, v31 + 1, 4);
          v31 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v31) = v32;
        v33 = *(unsigned int *)(a2 + 12);
        result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = result;
        v34 = (*(_BYTE *)(v13 + 60) & 2) != 0;
        if ( result + 1 > v33 )
        {
          sub_2237220(a2, v35, result + 1, 4);
          result = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * result) = v34;
        ++*(_DWORD *)(a2 + 8);
        if ( (*(_BYTE *)(v13 + 60) & 4) == 0 || v13 == -80 )
          goto LABEL_27;
        v28 = *(_QWORD *)(v13 + 80);
      }
      result = sub_F1A490(v28, a2, a3, 1, 0);
LABEL_27:
      ++v10;
    }
    while ( (__int64 *)v11 != v10 );
  }
  return result;
}
