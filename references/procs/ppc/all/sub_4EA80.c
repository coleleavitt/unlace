unsigned __int64 __fastcall sub_4EA80(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // r13
  char *v5; // rbp
  __int64 v6; // rdx
  size_t v7; // rdx
  char v8; // r13
  char *v9; // rax
  char v10; // bp
  char *v12; // rax
  signed __int64 v13; // rdx
  signed __int64 v14; // rdx
  size_t v15; // rax
  const char *v16; // r8
  size_t v17; // r13
  bool v18; // zf
  char *v19; // rdx
  const char *v20; // rsi
  char *v21; // rdi
  void *v22; // rdx
  int v23; // eax
  unsigned __int64 v24; // r15
  __int64 v25; // rbp
  char *v26; // r13
  char *v27; // rsi
  __int64 v28; // rbp
  char *v29; // rdi
  unsigned __int64 v30; // r12
  __int64 v31; // r13
  unsigned __int64 v32; // rdx
  char *v33; // rsi
  char *v34; // r13
  unsigned int v35; // eax
  unsigned int v36; // ecx
  __int64 v37; // rsi
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  char *v40; // rax
  const char *srca; // [rsp+0h] [rbp-78h]
  char *src; // [rsp+0h] [rbp-78h]
  void *srcb; // [rsp+0h] [rbp-78h]
  __int64 v44; // [rsp+8h] [rbp-70h]
  const char *v45; // [rsp+8h] [rbp-70h]
  __int128 v46; // [rsp+10h] [rbp-68h] BYREF
  char *s1; // [rsp+20h] [rbp-58h] BYREF
  __int128 v48; // [rsp+28h] [rbp-50h]
  unsigned __int64 v49; // [rsp+38h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v48 = 0;
  s1 = nullptr;
  get_abi_name(&s1);
  v4 = v48;
  if ( (unsigned __int64)v48 > 1 )
  {
    v5 = s1;
    if ( (unsigned __int64)(v48 - 1) > 3 && !strncmp(s1, "eabi", 4u) )
    {
      v6 = v4 + 5;
      if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(v4 + 5) )
      {
        s1 = (char *)qvector_reserve(&s1, v5, v6, 1);
        v6 = v4 + 5;
        v5 = s1;
      }
      *(_QWORD *)&v48 = v6;
      v7 = v4 - 1;
      v5[v4 + 4] = 0;
      v8 = 1;
      memmove(s1 + 5, s1, v7);
      v9 = s1;
      *(_DWORD *)s1 = 1987279219;
      v9[4] = 45;
      v5 = s1;
      if ( !(_QWORD)v48 )
        goto LABEL_7;
    }
    else
    {
      v8 = 0;
    }
    v12 = strstr(v5, "hard-float");
    if ( v12 )
    {
      v13 = v12 - v5;
      if ( v12 - v5 != -1 )
      {
        if ( v13 )
        {
          v14 = v13 + 4;
          if ( *(v12 - 1) == 45 )
          {
            v5[v14] = 95;
            v8 = 1;
            v5 = s1;
          }
        }
        else
        {
          v8 = 1;
          v5[4] = 95;
          v5 = s1;
        }
      }
    }
    goto LABEL_7;
  }
  v23 = getinf(5);
  if ( v23 <= 11 )
  {
    if ( v23 > 9 )
    {
      if ( (unsigned __int8)getinf_flag(3, 32) && (*(_DWORD *)(a1 + 460) & 0xF) == 2 )
      {
        v24 = 5;
        v25 = 4;
        v26 = "xbox";
      }
      else
      {
        v24 = 4;
        v25 = 3;
        v26 = "aix";
      }
      goto LABEL_32;
    }
    goto LABEL_57;
  }
  v24 = 4;
  v25 = 3;
  v26 = "osx";
  if ( v23 != 25 )
  {
LABEL_57:
    v38 = getinf(5);
    if ( (unsigned int)v38 > 0xD || (v39 = -8293, _bittest64(&v39, v38)) )
    {
      v24 = 5;
      v25 = 4;
      v26 = "sysv";
    }
    else
    {
      v24 = 10;
      v25 = 9;
      v26 = "sysv-eabi";
    }
  }
LABEL_32:
  v27 = s1;
  if ( *((_QWORD *)&v48 + 1) < v24 )
  {
    s1 = (char *)qvector_reserve(&s1, s1, v24, 1);
    v27 = s1;
  }
  *(_QWORD *)&v48 = v24;
  if ( (unsigned int)v25 >= 8 )
  {
    v32 = (unsigned __int64)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)v27 = *(_QWORD *)v26;
    *(_QWORD *)&v27[v25 - 8] = *(_QWORD *)&v26[v25 - 8];
    v33 = &v27[-v32];
    v34 = (char *)(v26 - v33);
    if ( (((_DWORD)v25 + (_DWORD)v33) & 0xFFFFFFF8) >= 8 )
    {
      v35 = (v25 + (_DWORD)v33) & 0xFFFFFFF8;
      v36 = 0;
      do
      {
        v37 = v36;
        v36 += 8;
        *(_QWORD *)(v32 + v37) = *(_QWORD *)&v34[v37];
      }
      while ( v36 < v35 );
    }
  }
  else if ( (v25 & 4) != 0 )
  {
    *(_DWORD *)v27 = *(_DWORD *)v26;
    *(_DWORD *)&v27[(unsigned int)v25 - 4] = *(_DWORD *)&v26[(unsigned int)v25 - 4];
  }
  else
  {
    *v27 = *v26;
    if ( (v25 & 2) != 0 )
      *(_WORD *)&v27[v25 - 2] = *(_WORD *)&v26[v25 - 2];
  }
  v8 = 1;
  s1[v25] = 0;
  v5 = s1;
LABEL_7:
  sub_4E2F0(a1 + 256, v5);
  v10 = *(_BYTE *)(a1 + 304);
  if ( v10 )
  {
    if ( *(_QWORD *)(a1 + 280) && (srca = *(const char **)(a1 + 280), v15 = strlen(srca), v16 = srca, (v17 = v15) != 0) )
    {
      v21 = s1;
      v22 = (void *)(v15 + 1);
      if ( *((_QWORD *)&v48 + 1) < v15 + 1 )
      {
        srcb = (void *)(v15 + 1);
        v45 = v16;
        s1 = (char *)qvector_reserve(&s1, s1, v22, 1);
        v16 = v45;
        v21 = s1;
        v22 = srcb;
      }
      *(_QWORD *)&v48 = v22;
      memmove(v21, v16, v17);
      s1[v17] = 0;
      if ( *(_DWORD *)(a1 + 288) != 3 )
        goto LABEL_27;
    }
    else
    {
      v18 = *(_DWORD *)(a1 + 288) == 3;
      v19 = (char *)::s1;
      v20 = byte_9 + 3;
      *(_QWORD *)&v48 = 0;
      if ( !v18 )
      {
LABEL_22:
        v46 = 0;
        set_compiler(&v46, v20, v19);
        if ( s1 )
        {
          *(_QWORD *)&v48 = 0;
          qfree(s1, v20);
        }
        return v49 - __readfsqword(0x28u);
      }
    }
    v8 = v10;
    if ( !(unsigned __int8)getinf_flag(67, 32) )
    {
LABEL_27:
      v19 = (char *)::s1;
      if ( (_QWORD)v48 )
        v19 = s1;
      v20 = (const char *)(*(_BYTE *)(a1 + 304) == 0 ? 4 : 12);
      goto LABEL_22;
    }
  }
  else if ( *(_DWORD *)(a1 + 288) != 3 || !(unsigned __int8)getinf_flag(67, 32) )
  {
    goto LABEL_9;
  }
  v28 = v48;
  v29 = s1;
  if ( !(_QWORD)v48 )
  {
    v30 = 12;
    v31 = 11;
LABEL_48:
    if ( *((_QWORD *)&v48 + 1) < v30 )
    {
      s1 = (char *)qvector_reserve(&s1, v29, v30, 1);
      v29 = s1;
    }
    *(_QWORD *)&v48 = v30;
    v29[v31] = 0;
    qmemcpy(&s1[v28], "-hard_float", 11);
    goto LABEL_27;
  }
  src = s1;
  v44 = v48 - 1;
  v40 = strstr(s1, "hard_float");
  v29 = src;
  if ( !v40 || v40 - src == -1 )
  {
    v31 = v28 + 10;
    v30 = v28 + 11;
    v28 = v44;
    goto LABEL_48;
  }
LABEL_9:
  if ( v8 )
    goto LABEL_27;
  sub_4E8A0(a1 + 256, a2);
  if ( s1 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(s1, (const char *)a2);
  }
  return v49 - __readfsqword(0x28u);
}
