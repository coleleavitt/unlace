__int64 __fastcall sub_47A0E0(_QWORD *a1, const char *a2, const char *a3)
{
  size_t v5; // rax
  size_t v6; // r15
  size_t v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // r14
  _BYTE *v10; // rsi
  __int64 v11; // r14
  unsigned __int64 v12; // r15
  size_t v13; // rax
  _BYTE *v14; // rsi
  size_t v15; // r9
  size_t v16; // r8
  size_t v17; // r10
  __int64 v18; // rbx
  _BYTE *v19; // rsi
  unsigned __int64 v20; // r12
  __int64 v21; // r14
  unsigned int v22; // ebp
  size_t v24; // rax
  _BYTE *v25; // [rsp+0h] [rbp-80h]
  size_t v26; // [rsp+0h] [rbp-80h]
  size_t v27; // [rsp+8h] [rbp-78h]
  size_t n; // [rsp+10h] [rbp-70h]
  char v29[8]; // [rsp+20h] [rbp-60h] BYREF
  void *dest; // [rsp+28h] [rbp-58h] BYREF
  __int128 v31; // [rsp+30h] [rbp-50h]
  unsigned __int64 v32; // [rsp+40h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v31 = 0;
  dest = nullptr;
  if ( a3 )
  {
    v5 = strlen(a3);
    v6 = v5 + 1;
    v7 = v5;
    dest = (void *)qvector_reserve(&dest, 0, v5 + 1, 1);
    *(_QWORD *)&v31 = v6;
    v8 = 2;
    *((_BYTE *)dest + v7) = 0;
    memmove(dest, a3, v7);
    v9 = v31;
    if ( (_QWORD)v31 )
    {
      v8 = v31 + 1;
      v9 = v31 - 1;
    }
    v10 = dest;
    if ( *((_QWORD *)&v31 + 1) < v8 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v8, 1);
      v10 = dest;
    }
    *(_QWORD *)&v31 = v8;
    v10[v9] = 47;
    *((_BYTE *)dest + v9 + 1) = 0;
    if ( !a2 )
    {
LABEL_11:
      v18 = v31;
      if ( !(_QWORD)v31 )
        goto LABEL_12;
      goto LABEL_17;
    }
    v12 = *((_QWORD *)&v31 + 1);
    v11 = v31;
    v25 = dest;
    v13 = strlen(a2);
    v14 = v25;
    v15 = v13;
    if ( v11 )
    {
      --v11;
      v16 = v13 + v11;
    }
    else
    {
      v16 = v13;
    }
    v17 = v16 + 1;
    if ( v12 >= v16 + 1 )
    {
      *(_QWORD *)&v31 = v16 + 1;
      v25[v16] = 0;
      memmove((char *)dest + v11, a2, v13);
      goto LABEL_11;
    }
  }
  else
  {
    if ( !a2 )
      goto LABEL_14;
    v11 = 0;
    v24 = strlen(a2);
    v14 = nullptr;
    v16 = v24;
    v17 = v24 + 1;
    v15 = v24;
  }
  n = v15;
  v27 = v16;
  v26 = v17;
  dest = (void *)qvector_reserve(&dest, v14, v17, 1);
  *(_QWORD *)&v31 = v26;
  *((_BYTE *)dest + v27) = 0;
  memmove((char *)dest + v11, a2, n);
  if ( a3 )
  {
    v18 = v31;
    if ( !(_QWORD)v31 )
    {
LABEL_12:
      v19 = dest;
      v20 = 5;
      v21 = 4;
      if ( *((_QWORD *)&v31 + 1) >= 5u )
      {
LABEL_13:
        *(_QWORD *)&v31 = v20;
        v19[v21] = 0;
        *(_DWORD *)((char *)dest + v18) = 1735815982;
        goto LABEL_14;
      }
LABEL_18:
      dest = (void *)qvector_reserve(&dest, v19, v20, 1);
      v19 = dest;
      goto LABEL_13;
    }
LABEL_17:
    v21 = v18 + 3;
    v20 = v18 + 4;
    v19 = dest;
    --v18;
    if ( *((_QWORD *)&v31 + 1) >= v20 )
      goto LABEL_13;
    goto LABEL_18;
  }
LABEL_14:
  sub_479BE0((QT::QIcon *)v29, a1, (__int64)&dest);
  v22 = sub_479FD0((__int64)a1, (QT::QIcon *)v29);
  QT::QIcon::~QIcon((QT::QIcon *)v29);
  if ( dest )
  {
    *(_QWORD *)&v31 = 0;
    qfree(dest, v29);
  }
  return v22;
}
