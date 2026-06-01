unsigned __int64 __fastcall sub_19560(__int64 *a1, _QWORD *a2, unsigned __int64 a3, int a4, int a5, int a6)
{
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rdx
  _QWORD *v10; // r13
  const char *v11; // r8
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // r8
  size_t v15; // r10
  __int64 v16; // r11
  _BYTE *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  _BYTE *v21; // rsi
  const char *v22; // rsi
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __int64 v28; // r14
  __int64 v29; // r15
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rdi
  __int64 v32; // rcx
  size_t v33; // r8
  size_t v34; // rbx
  _BYTE *v35; // rsi
  size_t v36; // rdx
  __int64 v37; // rbx
  unsigned __int64 v38; // r15
  _BYTE *v39; // rsi
  const char *v40; // rsi
  __int64 v41; // [rsp+0h] [rbp-498h]
  size_t v42; // [rsp+8h] [rbp-490h]
  __int64 v43; // [rsp+8h] [rbp-490h]
  size_t v44; // [rsp+8h] [rbp-490h]
  __int64 v45; // [rsp+10h] [rbp-488h]
  __int64 v46; // [rsp+18h] [rbp-480h]
  void *ptr; // [rsp+30h] [rbp-468h] BYREF
  __int128 v49; // [rsp+38h] [rbp-460h]
  _QWORD src[129]; // [rsp+50h] [rbp-448h] BYREF
  unsigned __int64 v51; // [rsp+458h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  if ( a3 >= a1[1] )
  {
    if ( !byte_1671A1 )
      sub_96F80(2755);
    BUG();
  }
  v7 = 0;
  v8 = a2[1];
  ptr = nullptr;
  v9 = *a1;
  v49 = 0;
  v10 = (_QWORD *)(v9 + 24 * a3);
  if ( !v8 )
    goto LABEL_22;
  while ( 1 )
  {
    v11 = haystack;
    v12 = *v10 + 24 * v7;
    if ( *(_QWORD *)(v12 + 8) )
      v11 = *(const char **)v12;
    v13 = sub_9A810((unsigned int)src, 1024, (unsigned int)"%-*s", *(_DWORD *)(*a2 + 4 * v7), (_DWORD)v11, a6, v41);
    v14 = v49;
    v15 = v13;
    v16 = v13;
    if ( (_QWORD)v49 )
    {
      v14 = v49 - 1;
      v16 = v13 + v49 - 1;
    }
    v17 = ptr;
    v18 = v16 + 1;
    if ( *((_QWORD *)&v49 + 1) < (unsigned __int64)(v16 + 1) )
    {
      v46 = v16;
      v45 = v14;
      v42 = v13;
      v41 = v16 + 1;
      ptr = (void *)sub_96080(&ptr, ptr, v18, 1);
      v16 = v46;
      v17 = ptr;
      v14 = v45;
      v15 = v42;
      v18 = v41;
    }
    *(_QWORD *)&v49 = v18;
    ++v7;
    v17[v16] = 0;
    memmove((char *)ptr + v14, src, v15);
    if ( v8 == v7 )
      break;
    v19 = v49;
    v20 = 2;
    if ( (_QWORD)v49 )
    {
      v20 = v49 + 1;
      v19 = v49 - 1;
    }
    v21 = ptr;
    if ( *((_QWORD *)&v49 + 1) < v20 )
    {
      v43 = v19;
      v41 = v20;
      ptr = (void *)sub_96080(&ptr, ptr, v20, 1);
      v19 = v43;
      v21 = ptr;
      v20 = v41;
    }
    *(_QWORD *)&v49 = v20;
    v21[v19] = 32;
    *((_BYTE *)ptr + v19 + 1) = 0;
  }
  if ( (_QWORD)v49 )
    LODWORD(v22) = (_DWORD)ptr;
  else
LABEL_22:
    v22 = haystack;
  sub_708D0((unsigned int)"%s\n", (_DWORD)v22, v9, a4, a5, a6);
  if ( a1[4] && !a3 )
  {
    *(_QWORD *)&v49 = 0;
    v28 = 0;
    v29 = 0;
    if ( !v8 )
      goto LABEL_50;
    while ( 1 )
    {
      v30 = *(int *)(*a2 + 4 * v28);
      if ( v30 > 0x3FF )
        v30 = 1023;
      if ( *(_DWORD *)(*a2 + 4 * v28) )
      {
        v31 = src;
        if ( (unsigned int)v30 >= 8 )
        {
          v32 = (unsigned int)v30 >> 3;
          memset(src, 0x2Du, 8 * v32);
          v31 = &src[v32];
        }
        if ( (v30 & 4) != 0 )
        {
          *(_DWORD *)v31 = 757935405;
          v31 = (_QWORD *)((char *)v31 + 4);
        }
        if ( (v30 & 2) != 0 )
        {
          v31 = (_QWORD *)((char *)v31 + 2);
          *((_WORD *)v31 - 1) = 11565;
        }
        if ( (v30 & 1) != 0 )
          *(_BYTE *)v31 = 45;
        v33 = v30;
      }
      else
      {
        v33 = 0;
      }
      v34 = v33;
      if ( v29 )
        v34 = --v29 + v33;
      v35 = ptr;
      v36 = v34 + 1;
      if ( *((_QWORD *)&v49 + 1) < v34 + 1 )
      {
        v44 = v33;
        ptr = (void *)sub_96080(&ptr, ptr, v36, 1);
        v33 = v44;
        v35 = ptr;
        v36 = v34 + 1;
      }
      *(_QWORD *)&v49 = v36;
      ++v28;
      v35[v34] = 0;
      memmove((char *)ptr + v29, src, v33);
      v37 = v49;
      if ( v8 == v28 )
        break;
      v38 = 2;
      if ( (_QWORD)v49 )
      {
        v38 = v49 + 1;
        v37 = v49 - 1;
      }
      v39 = ptr;
      if ( *((_QWORD *)&v49 + 1) < v38 )
      {
        ptr = (void *)sub_96080(&ptr, ptr, v38, 1);
        v39 = ptr;
      }
      *(_QWORD *)&v49 = v38;
      v39[v37] = 32;
      *((_BYTE *)ptr + v37 + 1) = 0;
      v29 = v49;
    }
    if ( (_QWORD)v49 )
      LODWORD(v40) = (_DWORD)ptr;
    else
LABEL_50:
      v40 = haystack;
    sub_708D0((unsigned int)"%s\n", (_DWORD)v40, v23, v24, v25, v26);
  }
  if ( ptr )
  {
    *(_QWORD *)&v49 = 0;
    j__free(ptr);
  }
  return v51 - __readfsqword(0x28u);
}

