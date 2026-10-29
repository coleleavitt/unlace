unsigned __int64 __fastcall sub_4677E0(__int64 a1)
{
  __int64 v2; // rax
  const char *v3; // rdx
  __int64 v4; // rdi
  char *v5; // r8
  char *v6; // r12
  char *v7; // r14
  unsigned __int64 v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // r9
  size_t v14; // r10
  unsigned __int64 v15; // r9
  size_t v16; // r10
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 v19; // rbp
  char *v20; // rbx
  void *v21; // rdi
  void *v22; // rdi
  const void *v24; // r11
  void *v25; // rax
  const void *v26; // r11
  void *v27; // rax
  unsigned __int64 v28; // [rsp+0h] [rbp-88h]
  unsigned __int64 v29; // [rsp+0h] [rbp-88h]
  unsigned __int64 v30; // [rsp+0h] [rbp-88h]
  unsigned __int64 v31; // [rsp+0h] [rbp-88h]
  size_t v32; // [rsp+10h] [rbp-78h]
  size_t v33; // [rsp+10h] [rbp-78h]
  const void *v34; // [rsp+18h] [rbp-70h]
  const void *v35; // [rsp+18h] [rbp-70h]
  unsigned __int64 v36; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 *v37; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v39; // [rsp+38h] [rbp-50h]
  unsigned __int64 v40; // [rsp+48h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v2 = switch_dbctx(*(int *)(a1 + 8));
  v3 = haystack;
  ptr = nullptr;
  v4 = *(_QWORD *)(v2 + 1672);
  v39 = 0;
  if ( *(_QWORD *)(a1 + 96) )
    v3 = *(const char **)(a1 + 88);
  sub_3B1450(v4, (__int64 *)&ptr, (__int64)v3);
  v5 = (char *)ptr;
  v6 = (char *)ptr + 56 * v39;
  if ( v6 != ptr )
  {
    v7 = (char *)ptr;
    do
    {
      v8 = *(unsigned int *)v7;
      v9 = *(_QWORD **)(a1 + 56);
      v10 = (_QWORD *)(a1 + 48);
      v36 = v8;
      if ( !v9 )
        goto LABEL_12;
      do
      {
        while ( 1 )
        {
          v11 = v9[2];
          v12 = v9[3];
          if ( v9[4] < v8 )
            break;
          v10 = v9;
          v9 = (_QWORD *)v9[2];
          if ( !v11 )
            goto LABEL_10;
        }
        v9 = (_QWORD *)v9[3];
      }
      while ( v12 );
LABEL_10:
      if ( (_QWORD *)(a1 + 48) == v10 || v8 < v10[4] )
      {
LABEL_12:
        v37 = &v36;
        v10 = sub_463690((_QWORD *)(a1 + 40), v10, &v37);
      }
      *((_DWORD *)v10 + 10) = *(_DWORD *)v7;
      *((_DWORD *)v10 + 11) = *((_DWORD *)v7 + 1);
      if ( v10 + 6 != (_QWORD *)(v7 + 8) )
      {
        v13 = *((_QWORD *)v7 + 2);
        if ( v13 && (v14 = v13 - 1, v13 != 1) )
        {
          v26 = *((const void **)v7 + 1);
          v27 = (void *)v10[6];
          if ( v10[8] < v13 )
          {
            v34 = *((const void **)v7 + 1);
            v32 = v13 - 1;
            v30 = *((_QWORD *)v7 + 2);
            v27 = (void *)qvector_reserve(v10 + 6, v10[6], v30, 1);
            v26 = v34;
            v14 = v32;
            v10[6] = v27;
            v13 = v30;
          }
          v10[7] = v13;
          v29 = v13;
          memmove(v27, v26, v14);
          *(_BYTE *)(v10[6] + v29 - 1) = 0;
        }
        else
        {
          v10[7] = 0;
        }
      }
      if ( v10 + 9 != (_QWORD *)(v7 + 32) )
      {
        v15 = *((_QWORD *)v7 + 5);
        if ( v15 && (v16 = v15 - 1, v15 != 1) )
        {
          v24 = *((const void **)v7 + 4);
          v25 = (void *)v10[9];
          if ( v10[11] < v15 )
          {
            v35 = *((const void **)v7 + 4);
            v33 = v15 - 1;
            v31 = *((_QWORD *)v7 + 5);
            v25 = (void *)qvector_reserve(v10 + 9, v10[9], v31, 1);
            v24 = v35;
            v16 = v33;
            v10[9] = v25;
            v15 = v31;
          }
          v10[10] = v15;
          v28 = v15;
          memmove(v25, v24, v16);
          *(_BYTE *)(v10[9] + v28 - 1) = 0;
        }
        else
        {
          v10[10] = 0;
        }
      }
      v7 += 56;
    }
    while ( v6 != v7 );
    v5 = (char *)ptr;
  }
  if ( v5 )
  {
    v17 = v39;
    if ( (_QWORD)v39 )
    {
      v18 = 0;
      v19 = 0;
      do
      {
        v20 = &v5[v18];
        v21 = *(void **)&v5[v18 + 32];
        if ( v21 )
        {
          *((_QWORD *)v20 + 5) = 0;
          qfree(v21);
        }
        v22 = *((void **)v20 + 1);
        if ( v22 )
        {
          *((_QWORD *)v20 + 2) = 0;
          qfree(v22);
        }
        ++v19;
        v5 = (char *)ptr;
        v18 += 56;
      }
      while ( v17 != v19 );
    }
    *(_QWORD *)&v39 = 0;
    qfree(v5);
  }
  return v40 - __readfsqword(0x28u);
}
