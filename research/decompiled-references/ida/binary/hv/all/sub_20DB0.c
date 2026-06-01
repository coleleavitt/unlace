__int64 __fastcall sub_20DB0(__int64 a1, const char *a2)
{
  _BYTE *v3; // r13
  __int64 v4; // rbx
  size_t v5; // rax
  size_t v6; // rbp
  size_t v7; // rbx
  void *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r12
  unsigned __int64 v11; // rbp
  __m128i si128; // xmm0
  const char **v13; // rbp
  char *v14; // rax
  const char *v15; // r12
  __int64 v16; // rbx
  size_t v17; // rax
  size_t v18; // r15
  size_t v19; // r8
  _BYTE *v20; // rsi
  size_t v21; // rdx
  __int64 v22; // rbx
  unsigned __int64 v23; // r12
  _BYTE *v24; // rsi
  int v25; // ebp
  unsigned int v26; // eax
  char *v27; // rdi
  unsigned int v28; // r14d
  const char **v29; // r15
  const char **v30; // rbx
  const char *v31; // rdx
  unsigned int v32; // eax
  const char *v33; // rdx
  __int64 v34; // rbp
  __int64 v35; // rbx
  char *v36; // rdx
  char *v37; // rax
  void *v38; // rdi
  const char *v40; // rsi
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  size_t v45; // [rsp+8h] [rbp-90h]
  unsigned int v46; // [rsp+8h] [rbp-90h]
  size_t v47; // [rsp+10h] [rbp-88h]
  void *v48; // [rsp+20h] [rbp-78h] BYREF
  __int128 v49; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v51; // [rsp+48h] [rbp-50h]
  unsigned __int64 v52; // [rsp+58h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 32) )
  {
    v3 = a2;
    v4 = 1;
    while ( strcmp(a2, (const char *)qword_1611F8[v4]) )
    {
      if ( ++v4 == 7 )
      {
        ptr = nullptr;
        v51 = 0;
        if ( a2 )
        {
          v5 = strlen(a2);
          v6 = v5 + 1;
          v7 = v5;
          v8 = (void *)sub_96080(&ptr, 0, v5 + 1, 1);
          *(_QWORD *)&v51 = v6;
          ptr = v8;
          memmove(v8, a2, v7);
          *((_BYTE *)ptr + v7) = 0;
          v3 = ptr;
          v9 = v51 - 1;
          v10 = v51 + 36;
          v11 = v51 + 37;
          if ( !(_QWORD)v51 )
          {
            v9 = 0;
            v11 = 38;
            v10 = 37;
          }
          if ( *((_QWORD *)&v51 + 1) >= v11 )
            goto LABEL_9;
        }
        else
        {
          v9 = 0;
          v11 = 38;
          v10 = 37;
        }
        ptr = (void *)sub_96080(&ptr, v3, v11, 1);
        v3 = ptr;
LABEL_9:
        *(_QWORD *)&v51 = v11;
        si128 = _mm_load_si128((const __m128i *)&xmmword_1301A0);
        v13 = (const char **)off_161200;
        v3[v10] = 0;
        v14 = (char *)ptr + v9;
        *(__m128i *)v14 = si128;
        *((__m128i *)v14 + 1) = _mm_load_si128((const __m128i *)&xmmword_1301B0);
        *(_QWORD *)(v14 + 29) = 0x3A666F20656E6F20LL;
        do
        {
          v22 = v51;
          v23 = 2;
          if ( (_QWORD)v51 )
          {
            v23 = v51 + 1;
            v22 = v51 - 1;
          }
          v24 = ptr;
          if ( *((_QWORD *)&v51 + 1) < v23 )
          {
            ptr = (void *)sub_96080(&ptr, ptr, v23, 1);
            v24 = ptr;
          }
          *(_QWORD *)&v51 = v23;
          v24[v22] = 32;
          *((_BYTE *)ptr + v22 + 1) = 0;
          v15 = *v13;
          if ( *v13 )
          {
            v16 = v51;
            v17 = strlen(*v13);
            v18 = v17;
            v19 = v17;
            if ( v16 )
            {
              --v16;
              v19 = v17 + v16;
            }
            v20 = ptr;
            v21 = v19 + 1;
            if ( *((_QWORD *)&v51 + 1) < v19 + 1 )
            {
              v47 = v19;
              v45 = v19 + 1;
              ptr = (void *)sub_96080(&ptr, ptr, v21, 1);
              v19 = v47;
              v20 = ptr;
              v21 = v45;
            }
            *(_QWORD *)&v51 = v21;
            v20[v19] = 0;
            memmove((char *)ptr + v16, v15, v18);
          }
          ++v13;
        }
        while ( v13 != (const char **)algn_161230 );
        v40 = haystack;
        if ( (_QWORD)v51 )
          v40 = (const char *)ptr;
        sub_8F890(0, v40);
        if ( ptr )
        {
          *(_QWORD *)&v51 = 0;
          j__free(ptr);
        }
        return 33;
      }
    }
    v25 = 0;
    v48 = nullptr;
    v49 = 0;
    v26 = sub_20740((__int64 *)a1, (__int64 *)&v48);
    v27 = (char *)v48;
    v28 = v26;
    if ( !v26 )
    {
      v29 = (const char **)((char *)v48 + 24 * v49);
      if ( v29 != v48 )
      {
        v46 = v4;
        v30 = (const char **)v48;
        do
        {
          while ( 1 )
          {
            v31 = haystack;
            if ( v30[1] )
              v31 = *v30;
            v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const char *, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24)
                                                                                                  + 416LL))(
                    *(_QWORD *)(a1 + 24),
                    *(_QWORD *)(a1 + 32),
                    v31,
                    v46,
                    0,
                    0);
            if ( v32 )
              break;
            v30 += 3;
            if ( v29 == v30 )
              goto LABEL_33;
          }
          ptr = nullptr;
          v51 = 0;
          sub_65C40(&ptr, v32, 0);
          v33 = haystack;
          if ( (_QWORD)v51 )
            v33 = (const char *)ptr;
          sub_19CE0(a1, (__int64)"%s\n", v33);
          if ( ptr )
          {
            *(_QWORD *)&v51 = 0;
            j__free(ptr);
          }
          v30 += 3;
          ++v25;
        }
        while ( v29 != v30 );
LABEL_33:
        if ( v25 )
          sub_19CE0(a1, (__int64)"\n");
        v27 = (char *)v48;
      }
    }
    if ( v27 )
    {
      v34 = v49;
      if ( (_QWORD)v49 )
      {
        v35 = 0;
        v36 = v27;
        do
        {
          v37 = &v36[24 * v35];
          v38 = *(void **)v37;
          if ( *(_QWORD *)v37 )
          {
            *((_QWORD *)v37 + 1) = 0;
            j__free(v38);
            v36 = (char *)v48;
          }
          ++v35;
        }
        while ( v34 != v35 );
        v27 = v36;
      }
      *(_QWORD *)&v49 = 0;
      j__free(v27);
    }
  }
  else
  {
    v28 = 12;
    sub_8F890(0, 0);
    sub_708D0(
      (unsigned int)"please specify a valid site with -s or with the VAULT_SITE envvar\n",
      0,
      v41,
      v42,
      v43,
      v44);
  }
  return v28;
}

