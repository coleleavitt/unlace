/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E150
// Address: 0x000000000003E150

//----- (000000000003E150) ----------------------------------------------------
__int64 __fastcall sub_3E150(unsigned __int64 a1, __int64 a2, char a3, double a4, double a5)
{
  __int64 result; // rax
  FILE *v7; // rdi
  __int128 v9; // xmm0
  __int64 v10; // rdi
  char *v11; // r12
  __int64 v12; // r14
  const char **v13; // rbp
  const char *v14; // r15
  const char *v15; // rsi
  char *v16; // rbp
  bool v17; // zf
  char *v18; // rax
  signed __int64 v19; // rax
  char *v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  char *v23; // r15
  __int64 v24; // rbp
  char *v25; // rsi
  __int64 v26; // rax
  int v27; // eax
  int v28; // ecx
  __int64 v29; // r15
  char *v30; // rbp
  unsigned __int64 v31; // r14
  const void *v32; // r12
  char *v33; // rax
  const char *v34; // rdx
  const char *v35; // rdx
  int v36; // eax
  unsigned __int64 v37; // rcx
  char *v38; // rbx
  void *v39; // r14
  unsigned __int64 v40; // r15
  __int64 i; // rbp
  void *v42; // rdi
  char *v43; // [rsp+8h] [rbp-D0h]
  const char **v44; // [rsp+8h] [rbp-D0h]
  int v45; // [rsp+14h] [rbp-C4h]
  __int64 v46; // [rsp+18h] [rbp-C0h]
  __int64 *v47; // [rsp+18h] [rbp-C0h]
  __int64 v48; // [rsp+20h] [rbp-B8h]
  char v49; // [rsp+20h] [rbp-B8h]
  void *ptr[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+40h] [rbp-98h]
  unsigned __int64 v53; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v54; // [rsp+58h] [rbp-80h]
  char v55[16]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int8 v56; // [rsp+80h] [rbp-58h]
  char *s1[2]; // [rsp+88h] [rbp-50h] BYREF
  __int64 v58; // [rsp+98h] [rbp-40h]
  unsigned __int64 v59; // [rsp+A0h] [rbp-38h]

  v59 = __readfsqword(0x28u);
  result = 4294967291LL;
  if ( *(_BYTE *)(a1 + 1149) )
    return result;
  v7 = *(FILE **)(a1 + 1216);
  if ( !v7 )
    return result;
  if ( a3 )
  {
    sub_3AAD0(a1, 0, 1);
    v7 = *(FILE **)(a1 + 1216);
  }
  rewind(v7);
  *(_QWORD *)&v9 = 0;
  *(_OWORD *)s1 = 0;
  v58 = 0;
  *(_OWORD *)ptr = 0;
  v52 = 0;
  v45 = 1;
  while ( 1 )
  {
    v10 = a1;
    if ( !(unsigned __int8)sub_3DDC0(a1, (__int64)&v53) )
      break;
    if ( v53 < v54 )
    {
      if ( *(_QWORD *)(a1 + 1240) <= 1u && s1[1] >= (_BYTE *)&dword_0 + 2 )
      {
        v43 = s1[1];
        v46 = a2;
        v11 = (char *)ptr[0];
        v12 = 24 * (__int64)ptr[1];
        v13 = (const char **)ptr[0];
        if ( 24 * (__int64)ptr[1] )
        {
          v14 = s1[0];
          v48 = 24 * (__int64)ptr[1];
          v13 = (const char **)ptr[0];
          while ( 1 )
          {
            v15 = ::s1;
            if ( v13[1] )
              v15 = *v13;
            v10 = (__int64)v14;
            if ( !strcmp(v14, v15) )
              break;
            v13 += 3;
            v12 -= 24;
            if ( !v12 )
            {
              a2 = v46;
              v16 = v43;
              goto LABEL_20;
            }
          }
          v12 = v48;
        }
        v17 = v13 == (const char **)&v11[v12];
        a2 = v46;
        v16 = v43;
        if ( v17 )
        {
          v14 = s1[0];
LABEL_20:
          v10 = (__int64)v14;
          v18 = strstr(v14, "ld-");
          if ( v18 )
          {
            v19 = v18 - v14;
            if ( v19 != -1 )
            {
              if ( !v19 )
                goto LABEL_26;
              v17 = ((unsigned __int64)v16 | (v19 - 1)) == 0;
              v20 = (char *)&v14[v19 - 1];
              if ( v17 )
                v20 = byte_155771;
              if ( *v20 == 47 )
              {
LABEL_26:
                v10 = (__int64)ptr;
                sub_47F30((__int64)ptr, (__int64)s1);
              }
            }
          }
        }
      }
      v21 = *(_QWORD *)(a2 + 8);
      if ( !v21 )
      {
        v22 = 0;
        goto LABEL_34;
      }
      v10 = 1;
      v22 = 0;
      do
      {
        if ( *(_QWORD *)(*(_QWORD *)a2 + 80 * v22) == v53 )
          break;
        v22 = (int)v10;
        v10 = (unsigned int)(v10 + 1);
      }
      while ( v21 > v22 );
      if ( v21 == v22 )
      {
LABEL_34:
        if ( *(_QWORD *)(a2 + 16) >= v22 + 1 )
        {
          v23 = *(char **)a2;
        }
        else
        {
          v10 = a2;
          v23 = (char *)qvector_reserve(a2, *(char **)a2, v22 + 1, 0x50u);
          *(_QWORD *)a2 = v23;
          v22 = *(_QWORD *)(a2 + 8);
        }
        v24 = 80 * v22;
        *(_OWORD *)&v23[v24 + 58] = 0;
        *(_OWORD *)&v23[v24 + 48] = 0;
        *(_OWORD *)&v23[v24 + 32] = 0;
        *(_OWORD *)&v23[v24 + 16] = 0;
        *(_OWORD *)&v23[v24] = 0;
        ++*(_QWORD *)(a2 + 8);
        v25 = &v23[80 * v22 + 16];
        *(_QWORD *)&v23[v24] = v53;
        *(_QWORD *)&v23[v24 + 8] = v54;
        v9 = *(_OWORD *)v25;
        v26 = *(_QWORD *)&v23[80 * v22 + 32];
        *(char **)&v23[v24 + 16] = s1[0];
        *(char **)&v23[v24 + 24] = s1[1];
        *(_QWORD *)&v23[v24 + 32] = v58;
        *(_OWORD *)s1 = v9;
        v58 = v26;
        sub_392C0(v10, (__int64)v25);
        v27 = v56;
        v23[v24 + 72] = v56;
        v28 = v45;
        if ( v45 < v27 )
          v28 = v27;
        v45 = v28;
        if ( __strchr_chk(v55, 114, 8) )
          v23[v24 + 73] |= 4u;
        if ( __strchr_chk(v55, 119, 8) )
          v23[v24 + 73] |= 2u;
        if ( __strchr_chk(v55, 120, 8) )
          v23[v24 + 73] |= 1u;
      }
    }
  }
  if ( !ptr[1] )
    goto LABEL_62;
  v47 = (__int64 *)a2;
  v44 = (const char **)(a1 + 1232);
  v29 = -1232;
  v30 = nullptr;
  v49 = 0;
  while ( 2 )
  {
    if ( a1 - (unsigned __int64)ptr[0] == v29 )
    {
LABEL_52:
      v34 = ::s1;
      if ( *(_QWORD *)(a1 + 1240) )
        v34 = *v44;
    }
    else
    {
      v31 = *(_QWORD *)((char *)ptr[0] + v29 + 1240);
      if ( v31 >= 2 )
      {
        v32 = *(const void **)((char *)ptr[0] + v29 + 1232);
        v33 = *(char **)(a1 + 1232);
        if ( *(_QWORD *)(a1 + 1248) < v31 )
        {
          v33 = (char *)qvector_reserve((__int64)v44, *(char **)(a1 + 1232), v31, 1u);
          *v44 = v33;
        }
        *(_QWORD *)(a1 + 1240) = v31;
        memmove(v33, v32, v31 - 1);
        *(_BYTE *)(*(_QWORD *)(a1 + 1232) + v31 - 1) = 0;
        goto LABEL_52;
      }
      *(_QWORD *)(a1 + 1240) = 0;
      v34 = ::s1;
    }
    sub_9FDA0(a1, "trying potential interpreter %s\n", v34);
    if ( (unsigned __int8)sub_42BE0(a1, v47) )
    {
      v35 = ::s1;
      if ( *(_QWORD *)(a1 + 1240) )
        v35 = *v44;
      sub_391F0(a1, "Found a valid interpeter in %s, will report shared library events!\n", v35);
      v49 = 1;
      sub_3E870(a1, v47, *(double *)&v9, a5);
    }
    ++v30;
    v29 += 24;
    if ( v30 < ptr[1] )
      continue;
    break;
  }
  a2 = (__int64)v47;
  if ( (v49 & 1) == 0 )
    *(_QWORD *)(a1 + 1240) = 0;
LABEL_62:
  if ( *(_QWORD *)(a2 + 8) )
  {
    v36 = 1;
    v37 = 0;
    do
    {
      *(_BYTE *)(*(_QWORD *)a2 + 80 * v37 + 72) = v45;
      v37 = v36++;
    }
    while ( *(_QWORD *)(a2 + 8) > v37 );
  }
  if ( a3 )
    sub_402C0(a1, 0, 1);
  v38 = (char *)ptr[0];
  if ( ptr[0] )
  {
    v39 = ptr[1];
    if ( ptr[1] )
    {
      v40 = 1;
      for ( i = 0; ; i += 24 )
      {
        v42 = *(void **)&v38[i];
        if ( v42 )
        {
          *(_QWORD *)&v38[i + 8] = 0;
          qfree(v42);
          *(_QWORD *)&v38[i] = 0;
          *(_QWORD *)&v38[i + 16] = 0;
        }
        if ( v40 >= (unsigned __int64)v39 )
          break;
        v38 = (char *)ptr[0];
        ++v40;
      }
      v38 = (char *)ptr[0];
    }
    ptr[1] = nullptr;
    qfree(v38);
    ptr[0] = nullptr;
    v52 = 0;
  }
  if ( s1[0] )
  {
    s1[1] = nullptr;
    qfree(s1[0]);
    s1[0] = nullptr;
    v58 = 0;
  }
  return 1;
}
// 3E2E0: conditional instruction was optimized away because rbp.8>=2u
// 0: using guessed type int dword_0;
// 33BA0: using guessed type __int64 __strchr_chk(const char *, ...);
