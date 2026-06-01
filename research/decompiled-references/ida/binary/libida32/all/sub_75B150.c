__int64 __fastcall sub_75B150(__int64 a1, const char *a2, _DWORD *a3)
{
  size_t v5; // rax
  size_t v6; // r12
  size_t v7; // rbx
  char *v8; // r14
  char *v9; // r12
  size_t v10; // r10
  char *v11; // rax
  char *v12; // rbx
  __int64 v13; // rdx
  char *v14; // rsi
  size_t v15; // r11
  char *v16; // rdi
  __int64 v17; // r9
  __int64 v18; // rsi
  size_t v19; // rdx
  size_t v20; // rax
  unsigned __int64 v21; // rcx
  char v22; // r12
  int v23; // eax
  char *v24; // rax
  __int64 v25; // rbx
  unsigned int v26; // edx
  void *v27; // r9
  char *v28; // rdx
  __int64 *v29; // rdi
  __int64 v30; // r8
  char *v31; // rsi
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbp
  __int64 v36; // rbx
  char v37; // r12
  char *v38; // rdx
  void *v39; // rdi
  unsigned __int8 v42; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v43; // [rsp+8h] [rbp-A0h]
  size_t v44; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v45; // [rsp+10h] [rbp-98h]
  size_t v46; // [rsp+10h] [rbp-98h]
  __int64 v47; // [rsp+18h] [rbp-90h]
  size_t v48; // [rsp+18h] [rbp-90h]
  __int64 v49; // [rsp+20h] [rbp-88h]
  size_t v50; // [rsp+28h] [rbp-80h]
  void *ptr; // [rsp+30h] [rbp-78h] BYREF
  __int128 v52; // [rsp+38h] [rbp-70h]
  char *s; // [rsp+50h] [rbp-58h] BYREF
  __int128 v54; // [rsp+58h] [rbp-50h]
  unsigned __int64 v55; // [rsp+68h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  if ( !a2 || !*a2 )
    return 5;
  ptr = nullptr;
  s = nullptr;
  v52 = 0;
  v54 = 0;
  v5 = strlen(a2);
  v6 = v5 + 1;
  v7 = v5;
  s = (char *)qvector_reserve(&s, 0, v5 + 1, 1);
  *(_QWORD *)&v54 = v6;
  memmove(s, a2, v7);
  s[v7] = 0;
  v8 = s;
  if ( (_QWORD)v54 )
  {
    v9 = &s[v54 - 1];
    if ( s < v9 )
    {
      do
      {
        v11 = strchr(v8, 47);
        v12 = v11;
        v10 = v9 - v8;
        if ( !v11 || (v10 = v11 - v8, v11 != v8) )
        {
          v13 = v52;
          v14 = (char *)ptr;
          if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)(v52 + 1) )
          {
            v44 = v10;
            ptr = (void *)qvector_reserve(&ptr, ptr, v52 + 1, 24);
            v13 = v52;
            v14 = (char *)ptr;
            v10 = v44;
          }
          v15 = v10;
          v16 = &v14[24 * v13];
          *(_OWORD *)(v16 + 8) = 0;
          *(_QWORD *)v16 = 0;
          *(_QWORD *)&v52 = v52 + 1;
          v17 = *((_QWORD *)v16 + 1);
          if ( v17 )
            v15 = --v17 + v10;
          v18 = *(_QWORD *)v16;
          v19 = v15 + 1;
          if ( v15 != -1 )
          {
            v50 = v15;
            v49 = v17;
            v48 = v10;
            v46 = v15 + 1;
            v34 = qvector_reserve(v16, v18, v19, 1);
            v15 = v50;
            v18 = v34;
            v17 = v49;
            v10 = v48;
            *(_QWORD *)v16 = v34;
            v19 = v46;
          }
          *((_QWORD *)v16 + 1) = v19;
          *(_BYTE *)(v18 + v15) = 0;
          memmove((void *)(*(_QWORD *)v16 + v17), v8, v10);
          if ( !v12 )
            break;
        }
        v8 = v12 + 1;
      }
      while ( v12 + 1 < v9 );
      v8 = s;
    }
  }
  if ( v8 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v8);
  }
  if ( (_QWORD)v52 )
  {
    v43 = v52;
    v20 = strlen(a2);
    v21 = v43;
    v22 = a2[v20 - 1];
    v23 = 0;
    if ( *a2 != 47 )
      v23 = *(_DWORD *)(a1 + 96);
    LODWORD(s) = v23;
    v24 = (char *)ptr;
    v25 = 0;
    v26 = 1;
    v27 = ptr;
    while ( 1 )
    {
      v29 = (__int64 *)&v24[24 * v25];
      v30 = v29[1];
      if ( !v30 )
        break;
      v31 = (char *)*v29;
      if ( *(_BYTE *)*v29 != 46 || v31[1] )
      {
        if ( *v31 != 46 || v31[1] != 46 || v31[2] )
        {
          if ( v22 == 47 || v25 + 1 < v21 )
          {
            v32 = v30 + 1;
            v33 = *v29;
            --v30;
            if ( v29[2] < v32 )
              goto LABEL_35;
            goto LABEL_37;
          }
LABEL_39:
          v28 = v31;
          goto LABEL_26;
        }
        LODWORD(s) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 176LL * (unsigned int)s + 160);
LABEL_28:
        if ( ++v25 >= v21 )
          goto LABEL_42;
      }
      else if ( ++v25 >= v21 )
      {
LABEL_42:
        if ( a3 )
          *a3 = (_DWORD)s;
        if ( v24 )
        {
          v35 = v52;
          if ( (_QWORD)v52 )
          {
            v36 = 0;
            v37 = v26;
            do
            {
              v38 = &v24[24 * v36];
              v39 = *(void **)v38;
              if ( *(_QWORD *)v38 )
              {
                *((_QWORD *)v38 + 1) = 0;
                qfree(v39);
                v24 = (char *)ptr;
              }
              ++v36;
              v27 = v24;
            }
            while ( v35 != v36 );
            LOBYTE(v26) = v37;
          }
          goto LABEL_51;
        }
        return v26;
      }
    }
    if ( v22 == 47 || v25 + 1 < v21 )
    {
      v31 = (char *)*v29;
      v32 = 2;
      v33 = *v29;
      if ( (unsigned __int64)v29[2] < 2 )
      {
LABEL_35:
        v47 = v30;
        v45 = v32;
        v33 = qvector_reserve(v29, v31, v32, 1);
        v30 = v47;
        v32 = v45;
        *v29 = v33;
      }
LABEL_37:
      v29[1] = v32;
      *(_BYTE *)(v33 + v30) = 47;
      *(_BYTE *)(*v29 + v30 + 1) = 0;
      if ( v29[1] )
      {
        v31 = (char *)*v29;
        goto LABEL_39;
      }
    }
    v28 = (char *)haystack;
LABEL_26:
    v26 = sub_75AA20((__int64 *)a1, (unsigned int)s, v28, (unsigned int *)&s);
    v24 = (char *)ptr;
    v27 = ptr;
    if ( (unsigned __int8)v26 > 1u )
      goto LABEL_42;
    v21 = v52;
    goto LABEL_28;
  }
  if ( a3 )
    *a3 = 0;
  v27 = ptr;
  v26 = 1;
  if ( ptr )
  {
LABEL_51:
    v42 = v26;
    *(_QWORD *)&v52 = 0;
    qfree(v27);
    return v42;
  }
  return v26;
}

