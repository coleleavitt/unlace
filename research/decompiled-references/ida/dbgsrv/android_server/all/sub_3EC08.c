/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3EC08
// Address: 0x000000000003EC08

//----- (000000000003EC08) ----------------------------------------------------
__int64 __fastcall sub_3EC08(unsigned __int64 a1, __int64 a2, char a3)
{
  FILE *v5; // x0
  int v7; // w29
  __int64 v8; // x0
  unsigned __int64 v9; // x20
  __int64 align; // x23
  __int64 v11; // x24
  const char *v12; // x25
  __int64 v13; // x28
  _QWORD *v14; // x26
  const char *v15; // x1
  const char *v16; // x26
  __int64 v17; // x8
  __int64 v18; // x8
  bool v19; // zf
  char *v20; // x8
  unsigned __int64 v21; // x8
  __int64 v22; // x20
  int v23; // w11
  __int64 v25; // x25
  __int64 v26; // x8
  __int64 v27; // x10
  __int128 v28; // q0
  __int64 v29; // x20
  unsigned __int64 v30; // x28
  char v31; // w24
  const char **v32; // x22
  unsigned __int64 v33; // x26
  const void *v34; // x27
  void *v35; // x1
  const char *v36; // x2
  const char *v37; // x2
  unsigned __int64 v38; // x10
  int v39; // w8
  char *v40; // x0
  unsigned __int64 v41; // x19
  __int64 v42; // x20
  unsigned __int64 v43; // x21
  void *v44; // x8
  char *v45; // x22
  pthread_mutex_t ptr; // [xsp+20h] [xbp-D0h] BYREF
  char v48[16]; // [xsp+58h] [xbp-98h] BYREF
  unsigned __int8 v49; // [xsp+68h] [xbp-88h]
  char *s1[2]; // [xsp+70h] [xbp-80h] BYREF
  __int64 v51; // [xsp+80h] [xbp-70h]
  __int64 v52; // [xsp+88h] [xbp-68h]

  v52 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_BYTE *)(a1 + 1853) )
    return 4294967291LL;
  v5 = *(FILE **)(a1 + 1920);
  if ( !v5 )
    return 4294967291LL;
  if ( (a3 & 1) != 0 )
  {
    sub_3B6B4(a1, 0, 1);
    v5 = *(FILE **)(a1 + 1920);
  }
  rewind(v5);
  v7 = 1;
  s1[0] = nullptr;
  s1[1] = nullptr;
  v51 = 0;
  memset(&ptr, 0, 24);
  while ( 1 )
  {
    v8 = sub_3E8A0(a1, (__int64)&ptr.__list);
    if ( (v8 & 1) == 0 )
      break;
    if ( ptr.__list.__prev < ptr.__list.__next )
    {
      if ( *(_QWORD *)(a1 + 1944) <= 1u )
      {
        v9 = (unsigned __int64)s1[1];
        if ( s1[1] >= (_BYTE *)&dword_0 + 2 )
        {
          align = ptr.__align;
          v11 = 24 * *(&ptr.__align + 1);
          if ( 24 * *(&ptr.__align + 1) )
          {
            v12 = s1[0];
            v13 = 24 * *(&ptr.__align + 1);
            v14 = (_QWORD *)ptr.__align;
            while ( 1 )
            {
              v15 = v14[1] ? (const char *)*v14 : &byte_F154B;
              v8 = strcmp(v12, v15);
              if ( !(_DWORD)v8 )
                break;
              v13 -= 24;
              v14 += 3;
              if ( !v13 )
                goto LABEL_22;
            }
          }
          else
          {
            v14 = (_QWORD *)ptr.__align;
          }
          if ( v14 == (_QWORD *)(align + v11) )
          {
            v12 = s1[0];
LABEL_22:
            if ( v9 )
              v16 = v12;
            else
              v16 = &byte_F154B;
            v8 = (__int64)strstr(v16, "ld-");
            if ( v8 )
            {
              v17 = v8 - (_QWORD)v16;
              if ( v8 - (_QWORD)v16 != -1 )
              {
                if ( !v17 )
                  goto LABEL_31;
                v18 = v17 - 1;
                v19 = (v18 | v9) == 0;
                v20 = (char *)&v12[v18];
                if ( v19 )
                  v20 = &byte_166A39;
                if ( *v20 == 47 )
LABEL_31:
                  v8 = (__int64)sub_46FA4(&ptr, (__int64)s1);
              }
            }
          }
        }
      }
      v21 = *(_QWORD *)(a2 + 8);
      if ( !v21 )
      {
        v22 = 0;
        goto LABEL_39;
      }
      v22 = 0;
      v23 = 1;
      do
      {
        if ( *(struct __pthread_internal_list **)(*(_QWORD *)a2 + 80 * v22) == ptr.__list.__prev )
          break;
        v22 = v23;
      }
      while ( v21 > v23++ );
      if ( v21 == v22 )
      {
LABEL_39:
        if ( *(_QWORD *)(a2 + 16) >= (unsigned __int64)(v22 + 1) )
        {
          v25 = *(_QWORD *)a2;
        }
        else
        {
          v8 = (__int64)qvector_reserve((pthread_mutex_t *)a2, *(void **)a2, v22 + 1, 0x50u);
          v22 = *(_QWORD *)(a2 + 8);
          v25 = v8;
          *(_QWORD *)a2 = v8;
        }
        v26 = v25 + 80 * v22;
        *(_WORD *)(v26 + 72) = 0;
        *(_QWORD *)(v26 + 64) = 0;
        *(_OWORD *)(v26 + 32) = 0u;
        *(_OWORD *)(v26 + 48) = 0u;
        *(_OWORD *)v26 = 0u;
        *(_OWORD *)(v26 + 16) = 0u;
        ++*(_QWORD *)(a2 + 8);
        v27 = *(_QWORD *)(v26 + 32);
        *(_OWORD *)v26 = *(_OWORD *)(&ptr.__align + 3);
        v28 = *(_OWORD *)(v26 + 16);
        *(char **)(v26 + 16) = s1[0];
        *(char **)(v26 + 24) = s1[1];
        *(_QWORD *)(v26 + 32) = v51;
        *(_OWORD *)s1 = v28;
        v51 = v27;
        sub_3A178(v8, v26 + 16);
        if ( v7 < v49 )
          v7 = v49;
        *(_BYTE *)(v25 + 80 * v22 + 72) = v49;
        if ( __strchr_chk(v48, 114, 8) )
          *(_BYTE *)(v25 + 80 * v22 + 73) |= 4u;
        if ( __strchr_chk(v48, 119, 8) )
          *(_BYTE *)(v25 + 80 * v22 + 73) |= 2u;
        if ( __strchr_chk(v48, 120, 8) )
          *(_BYTE *)(v25 + 80 * v22 + 73) |= 1u;
      }
    }
  }
  if ( !*(&ptr.__align + 1) )
    goto LABEL_69;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = (const char **)(a1 + 1936);
  while ( 2 )
  {
    if ( a1 - ptr.__align + 1936 == v29 )
    {
LABEL_57:
      if ( !*(_QWORD *)(a1 + 1944) )
        goto LABEL_60;
      v36 = *v32;
    }
    else
    {
      v33 = *(_QWORD *)(ptr.__align + v29 + 8);
      if ( v33 >= 2 )
      {
        v34 = *(const void **)(ptr.__align + v29);
        v35 = *(void **)(a1 + 1936);
        if ( *(_QWORD *)(a1 + 1952) < v33 )
        {
          v35 = qvector_reserve((pthread_mutex_t *)(a1 + 1936), v35, *(_QWORD *)(ptr.__align + v29 + 8), 1u);
          *v32 = (const char *)v35;
        }
        *(_QWORD *)(a1 + 1944) = v33;
        memmove(v35, v34, v33 - 1);
        *(_BYTE *)(*(_QWORD *)(a1 + 1936) + v33 - 1) = 0;
        goto LABEL_57;
      }
      *(_QWORD *)(a1 + 1944) = 0;
LABEL_60:
      v36 = &byte_F154B;
    }
    sub_99D18(a1, "trying potential interpreter %s\n", v36);
    if ( (sub_42A74(a1, (__int64 *)a2) & 1) != 0 )
    {
      if ( *(_QWORD *)(a1 + 1944) )
        v37 = *v32;
      else
        v37 = &byte_F154B;
      sub_3A0D8(a1, "Found a valid interpeter in %s, will report shared library events!\n", v37);
      sub_3F200(a1, (__int64 *)a2);
      v31 = 1;
    }
    ++v30;
    v29 += 24;
    if ( v30 < *(&ptr.__align + 1) )
      continue;
    break;
  }
  if ( (v31 & 1) == 0 )
    *(_QWORD *)(a1 + 1944) = 0;
LABEL_69:
  if ( *(_QWORD *)(a2 + 8) )
  {
    v38 = 0;
    v39 = 1;
    do
    {
      *(_BYTE *)(*(_QWORD *)a2 + 80 * v38 + 72) = v7;
      v38 = v39++;
    }
    while ( *(_QWORD *)(a2 + 8) > v38 );
  }
  if ( (a3 & 1) != 0 )
    sub_409C0(a1, 0, 1);
  v40 = (char *)ptr.__align;
  if ( ptr.__align )
  {
    v41 = *(&ptr.__align + 1);
    if ( *(&ptr.__align + 1) )
    {
      v42 = 0;
      v43 = 1;
      v44 = *(void **)ptr.__align;
      if ( !*(_QWORD *)ptr.__align )
        goto LABEL_79;
      while ( 1 )
      {
        v45 = &v40[v42];
        *(_QWORD *)&v40[v42 + 8] = 0;
        qfree(v44);
        *(_QWORD *)v45 = 0;
        *((_QWORD *)v45 + 2) = 0;
        if ( v43 >= v41 )
          break;
        while ( 1 )
        {
          v40 = (char *)ptr.__align;
          ++v43;
          v42 += 24;
          v44 = *(void **)(ptr.__align + v42);
          if ( v44 )
            break;
LABEL_79:
          if ( v43 >= v41 )
            goto LABEL_80;
        }
      }
LABEL_80:
      v40 = (char *)ptr.__align;
    }
    *(&ptr.__align + 1) = 0;
    qfree(v40);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  if ( s1[0] )
  {
    s1[1] = nullptr;
    qfree(s1[0]);
    s1[0] = nullptr;
    v51 = 0;
  }
  return 1;
}
// 0: using guessed type int dword_0;
// 36CE0: using guessed type __int64 __strchr_chk(const char *, ...);
// F154B: using guessed type char byte_F154B;
// 166A39: using guessed type char byte_166A39;
