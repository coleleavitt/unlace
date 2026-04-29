__int64 __fastcall sub_3398A0(unsigned __int64 a1, _QWORD *a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // r15
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r14
  int v15; // ebx
  _DWORD *v16; // rax
  unsigned int v17; // ebx
  __int64 v19; // rax
  char *v20; // r13
  char *v21; // r8
  unsigned __int64 v22; // rsi
  signed __int64 v23; // r9
  __int64 v24; // rax
  unsigned int *i; // rbx
  bool v26; // dl
  int v27; // eax
  __int64 v28; // rdx
  _DWORD *v29; // rax
  _DWORD *v30; // rdx
  char *v31; // rax
  _QWORD *v32; // [rsp+0h] [rbp-90h]
  signed __int64 v33; // [rsp+8h] [rbp-88h]
  void *src; // [rsp+18h] [rbp-78h] BYREF
  __int128 v35; // [rsp+20h] [rbp-70h]
  _DWORD *v36; // [rsp+38h] [rbp-58h] BYREF
  __int128 v37; // [rsp+40h] [rbp-50h]
  unsigned __int64 v38; // [rsp+50h] [rbp-40h]

  v32 = (_QWORD *)a1;
  v38 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a3 + 64);
  v35 = 0;
  src = nullptr;
  v36 = nullptr;
  v37 = 0;
  if ( !v3 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8LL * (unsigned int)(v3 - 1));
  if ( *(_DWORD *)(v5 + 76) != 1 )
    return 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = *(_DWORD *)(v5 + 72);
    if ( v7 < v9 + 1 )
    {
      a1 = (unsigned __int64)&v36;
      v36 = (_DWORD *)qvector_reserve((__int64)&v36, v8, v9 + 1, 4);
      v8 = (__int64)v36;
      v9 = v37;
    }
    *(_DWORD *)(v8 + 4 * v9) = v10;
    v11 = *(_QWORD *)(v5 + 352);
    v12 = v35;
    v13 = v37 + 1;
    *(_QWORD *)&v37 = v37 + 1;
    if ( (int)v11 > 0 )
    {
      v14 = 0;
      while ( 1 )
      {
        v15 = *(_DWORD *)(*(_QWORD *)(v5 + 344) + 4 * v14);
        v16 = v36;
        v13 = (__int64)&v36[v13];
        if ( v36 != (_DWORD *)v13 )
        {
          while ( v15 != *v16 )
          {
            if ( (_DWORD *)v13 == ++v16 )
              goto LABEL_17;
          }
          if ( (_DWORD *)v13 != v16 )
            break;
        }
LABEL_17:
        a1 = (unsigned __int64)src;
        v13 = 4 * v12;
        v19 = (4 * v12) >> 2;
        v20 = (char *)src;
        while ( v19 > 0 )
        {
          while ( 1 )
          {
            v21 = &v20[4 * (v19 >> 1)];
            if ( v15 <= *(_DWORD *)v21 )
              break;
            v20 = v21 + 4;
            v19 = v19 - 1 - (v19 >> 1);
            if ( v19 <= 0 )
              goto LABEL_21;
          }
          v19 >>= 1;
        }
LABEL_21:
        if ( (char *)src + 4 * v12 != v20 && *(_DWORD *)v20 == v15 )
          break;
        v22 = v12 + 1;
        v23 = v20 - (_BYTE *)src;
        if ( *((_QWORD *)&v35 + 1) < v22 )
        {
          v33 = v20 - (_BYTE *)src;
          v31 = (char *)qvector_reserve((__int64)&src, (__int64)src, v22, 4);
          v23 = v33;
          src = v31;
          v20 = &v31[v33];
          v13 = 4 * v35;
        }
        a1 = (unsigned __int64)(v20 + 4);
        ++v14;
        memmove(v20 + 4, v20, v13 - v23);
        *(_DWORD *)v20 = v15;
        v11 = *(_QWORD *)(v5 + 352);
        v12 = v35 + 1;
        *(_QWORD *)&v35 = v35 + 1;
        if ( (int)v11 <= (int)v14 )
          goto LABEL_26;
LABEL_14:
        v13 = v37;
      }
      if ( (int)v11 <= (int)++v14 )
        goto LABEL_26;
      goto LABEL_14;
    }
LABEL_26:
    if ( !v12 )
      break;
    v24 = *((unsigned int *)src + v12 - 1);
    if ( (unsigned int)v24 >= *(_DWORD *)(a3 + 64) )
      sub_3392E0(a1, v12, v13);
    v5 = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8 * v24);
    *(_QWORD *)&v35 = v12 - 1;
    for ( i = *(unsigned int **)(v5 + 56); i; i = *((unsigned int **)i + 2) )
    {
      if ( *((char *)i + 4) >= 0 )
      {
        a1 = *i;
        if ( (_DWORD)a1 != 61 )
        {
          v26 = sub_11E8A0(a1);
          v27 = *i;
          if ( v26 )
          {
            if ( v27 != 4 && (v27 != 67 || i[9] != i[17])
              || *((_BYTE *)i + 32) != 5
              || *((_BYTE *)i + 64) != 1
              || (v28 = *(_QWORD *)(a3 + 920), v29 = *(_DWORD **)(v28 + 8),
                                               v30 = &v29[*(_QWORD *)(v28 + 16)],
                                               v29 == v30) )
            {
LABEL_33:
              *v32 = v5;
              *a2 = i;
              v17 = 1;
              goto LABEL_34;
            }
            while ( i[18] != *v29 )
            {
              if ( v30 == ++v29 )
                goto LABEL_33;
            }
          }
          else if ( v27 == 1 )
          {
            goto LABEL_33;
          }
        }
      }
    }
    v7 = *((_QWORD *)&v37 + 1);
    v9 = v37;
    v8 = (__int64)v36;
  }
  v17 = 0;
LABEL_34:
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree((__int64)v36);
  }
  if ( src )
  {
    *(_QWORD *)&v35 = 0;
    qfree((__int64)src);
  }
  return v17;
}
