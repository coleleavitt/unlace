unsigned __int64 __fastcall sub_3DFE50(__int64 a1, __int64 a2, int a3, char a4)
{
  _BYTE *v7; // rax
  int v8; // r8d
  int v9; // r9d
  size_t v10; // rax
  size_t v11; // r13
  _BYTE *v12; // rsi
  size_t v13; // rbp
  unsigned __int64 v14; // rax
  size_t v15; // r15
  unsigned __int64 v16; // r14
  size_t v17; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  char v21[19]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v22[5]; // [rsp+13h] [rbp-45h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v7 = tag_on(v21, (unsigned __int64)v22, 40);
  qsnprintf((_DWORD)v7, v22 - v7, (unsigned int)"%08a", a3, v8, v9);
  v10 = strlen(v21);
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_BYTE **)a2;
  v13 = v10;
  v14 = *(_QWORD *)(a2 + 16);
  if ( a4 )
  {
    if ( v11 )
    {
      v15 = --v11 + v13;
      v16 = v11 + v13 + 1;
      if ( v14 >= v16 )
      {
        *(_QWORD *)(a2 + 8) = v16;
        v12[v15] = 0;
        if ( !v11 )
        {
LABEL_5:
          memmove(*(void **)a2, v21, v13);
          return v23 - __readfsqword(0x28u);
        }
LABEL_14:
        memmove((void *)(*(_QWORD *)a2 + v13), *(const void **)a2, v11);
        memmove(*(void **)a2, v21, v13);
        return v23 - __readfsqword(0x28u);
      }
    }
    else
    {
      v16 = v13 + 1;
      v15 = v13;
      if ( v14 >= v13 + 1 )
      {
        *(_QWORD *)(a2 + 8) = v16;
        v12[v13] = 0;
        memmove(*(void **)a2, v21, v13);
        return v23 - __readfsqword(0x28u);
      }
    }
    v20 = qvector_reserve(a2, v12, v16, 1);
    *(_QWORD *)(a2 + 8) = v16;
    *(_QWORD *)a2 = v20;
    *(_BYTE *)(v20 + v15) = 0;
    if ( !v11 )
      goto LABEL_5;
    goto LABEL_14;
  }
  v17 = v13;
  if ( v11 )
    v17 = --v11 + v13;
  if ( v14 < v17 + 1 )
  {
    v19 = qvector_reserve(a2, v12, v17 + 1, 1);
    *(_QWORD *)a2 = v19;
    v12 = (_BYTE *)v19;
  }
  *(_QWORD *)(a2 + 8) = v17 + 1;
  v12[v17] = 0;
  memmove((void *)(v11 + *(_QWORD *)a2), v21, v13);
  return v23 - __readfsqword(0x28u);
}
