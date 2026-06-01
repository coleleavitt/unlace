__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  _QWORD *v3; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  unsigned __int64 v9; // r15
  __int64 v10; // rbx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  __int64 v17; // r13
  const char *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // eax
  int v22; // r8d
  int v23; // r9d
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  size_t v28; // rbx
  __int64 v29; // rcx
  _BYTE *v30; // rdi
  char *v31; // rdx
  char *v32; // rax
  __int64 v33; // rbx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // [rsp+0h] [rbp-5B8h]
  char v37; // [rsp+2Fh] [rbp-589h] BYREF
  void *v38; // [rsp+30h] [rbp-588h] BYREF
  __int128 v39; // [rsp+38h] [rbp-580h]
  void *v40; // [rsp+50h] [rbp-568h] BYREF
  __int128 v41; // [rsp+58h] [rbp-560h]
  void *ptr; // [rsp+70h] [rbp-548h] BYREF
  __int128 v43; // [rsp+78h] [rbp-540h]
  __int128 v44; // [rsp+88h] [rbp-530h]
  __int64 v45; // [rsp+98h] [rbp-520h]
  __int128 v46; // [rsp+A0h] [rbp-518h]
  __int64 v47; // [rsp+B0h] [rbp-508h] BYREF
  __int128 v48; // [rsp+B8h] [rbp-500h]
  __int64 v49; // [rsp+C8h] [rbp-4F0h]
  __int128 v50; // [rsp+D0h] [rbp-4E8h]
  _QWORD *v51; // [rsp+E0h] [rbp-4D8h] BYREF
  __int128 v52; // [rsp+E8h] [rbp-4D0h]
  __int64 (__fastcall *v53)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [rsp+F8h] [rbp-4C0h]
  char v54; // [rsp+100h] [rbp-4B8h]
  __int64 v55; // [rsp+110h] [rbp-4A8h] BYREF
  __int128 v56; // [rsp+118h] [rbp-4A0h]
  _BYTE v57[40]; // [rsp+128h] [rbp-490h] BYREF
  __int64 v58; // [rsp+150h] [rbp-468h] BYREF
  __int128 v59; // [rsp+158h] [rbp-460h]
  char v60; // [rsp+168h] [rbp-450h]
  char s[1032]; // [rsp+170h] [rbp-448h] BYREF
  unsigned __int64 v62; // [rsp+578h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  v47 = 0;
  v53 = sub_50B0;
  v49 = 0;
  v51 = nullptr;
  v54 = 1;
  v48 = 0;
  v50 = 0;
  v52 = 0;
  v3 = (_QWORD *)sub_11430(&v51, 0, 1473, 1);
  v51 = v3;
  *(_QWORD *)&v52 = 1473;
  *v3 = 0x6220686374697753LL;
  v3[183] = 0xA2E656D69746E75LL;
  qmemcpy(
    (void *)((unsigned __int64)(v3 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)((char *)&qword_149C0 - ((char *)v3 - ((unsigned __int64)(v3 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
    8LL * (((unsigned int)v3 - (((_DWORD)v3 + 8) & 0xFFFFFFF8) + 1472) >> 3));
  *((_BYTE *)v51 + 1472) = 0;
  sub_EA70(&v47, &qword_1BB60, 5);
  sub_F0F0(&v47, a1, a2, 0);
  v38 = nullptr;
  v39 = 0;
  if ( (unsigned __int64)xmmword_1C328 <= 1 )
  {
    v56 = 0;
    v55 = 0;
    memset(v57, 0, 24);
    sub_E570(&v37, &v55);
    v9 = v56;
    if ( !(_QWORD)v56 )
      sub_6030(120, (char)"No suitable Python installations were found\n");
    v40 = nullptr;
    v41 = 0;
    if ( BYTE2(dword_1C340) )
    {
      v10 = v55;
    }
    else
    {
      sub_50B0((unsigned int)"The following Python installations were found:\n", (unsigned int)&v55, v5, v6, v7, v8);
      v16 = dword_1C318;
      v17 = 0;
      do
      {
        v18 = "<unavailable path>";
        v19 = v55 + 96 * v17;
        dword_1C318 = v16 + 1;
        if ( *(_QWORD *)(v19 + 72) )
        {
          v20 = *(_QWORD *)(v19 + 64);
          v18 = s1;
          if ( *(_QWORD *)(v20 + 8) )
            v18 = *(const char **)v20;
        }
        v21 = sub_73E0(v19, &v40);
        sub_50B0((unsigned int)"#%zu: %s (%s)\n", v17++, v21, (_DWORD)v18, v22, v23);
        v16 = --dword_1C318;
      }
      while ( v17 != v9 );
      while ( 1 )
      {
        sub_50B0((unsigned int)"Please pick a number between 0 and %zu (default: 0)\n", v9 - 1, v24, v25, v26, v27);
        sub_11250(s, 1024, stdin);
        ptr = nullptr;
        v43 = 0;
        v28 = strlen(s);
        ptr = (void *)sub_11430(&ptr, 0, v28 + 1, 1);
        *(_QWORD *)&v43 = v28 + 1;
        memmove(ptr, s, v28);
        *((_BYTE *)ptr + v28) = 0;
        v29 = v43;
        if ( (unsigned __int64)v43 <= 1 )
          break;
        v30 = ptr;
        v31 = (char *)ptr + v43 - 1;
        v32 = (char *)ptr;
        if ( ptr < v31 )
        {
          while ( *(v31 - 1) == 10 )
          {
            if ( --v31 == ptr )
              goto LABEL_39;
          }
        }
        v33 = v31 - (_BYTE *)ptr;
        if ( v31 == ptr )
        {
LABEL_39:
          if ( !ptr )
            goto LABEL_37;
          *(_QWORD *)&v43 = 0;
          j__free(ptr);
          ptr = nullptr;
          *((_QWORD *)&v43 + 1) = 0;
          if ( (unsigned __int64)v43 <= 1 )
            goto LABEL_37;
        }
        else
        {
          v34 = v33 + 1;
          if ( (unsigned __int64)v43 < v33 + 1 )
          {
            if ( *((_QWORD *)&v43 + 1) < v34 )
            {
              v32 = (char *)sub_11430(&ptr, ptr, v33 + 1, 1);
              v29 = v43;
              v34 = v33 + 1;
              ptr = v32;
            }
            v36 = v34;
            memset(&v32[v29], 0, v34 - v29);
            v30 = ptr;
            *(_QWORD *)&v43 = v36;
          }
          else if ( (_QWORD)v43 != v33 + 1 )
          {
            *(_QWORD *)&v43 = v33 + 1;
          }
          v30[v33] = 0;
          if ( (unsigned __int64)v43 <= 1 )
            break;
        }
        if ( !ptr )
          goto LABEL_37;
        v35 = strtoll((const char *)ptr, nullptr, 10);
        if ( ptr )
        {
          *(_QWORD *)&v43 = 0;
          j__free(ptr);
        }
        if ( v35 < v9 )
          goto LABEL_38;
      }
      if ( ptr )
      {
        *(_QWORD *)&v43 = 0;
        j__free(ptr);
      }
LABEL_37:
      v35 = 0;
LABEL_38:
      v10 = v55 + 96 * v35;
    }
    v11 = sub_73E0(v10, &v40);
    sub_50B0((unsigned int)"Applying version %s\n", v11, v12, v13, v14, v15);
    if ( !(unsigned __int8)sub_C650(&v37, v10, &v38) )
      sub_6030(121, (char)"Apply failed: %s\n");
    if ( v40 )
    {
      *(_QWORD *)&v41 = 0;
      j__free(v40);
    }
    sub_6E00(v57);
    sub_7160(&v55);
  }
  else
  {
    ptr = nullptr;
    v43 = 0u;
    v45 = 0;
    v55 = 0;
    v56 = 0u;
    v58 = 0;
    v60 = 0;
    v44 = 0;
    v46 = 0;
    memset(v57, 0, sizeof(v57));
    v59 = 0;
    if ( !(unsigned __int8)sub_77A0(&v37, &v55, qword_1C320, &v38) )
      sub_6030(110, (char)"Cannot determine python library version for \"%s\": %s\n");
    if ( !(unsigned __int8)sub_C650(&v37, &v55, &v38) )
    {
      v40 = nullptr;
      v41 = 0;
      sub_7440(&v55, &v40);
      sub_6030(110, (char)"Applying \"%s\" (extracted from path \"%s\") failed: %s\n");
    }
    sub_6E00(&v58);
    sub_60F0(&v55);
    sub_60F0(&ptr);
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    j__free(v38);
  }
  sub_6DB0(&v47);
  return 0;
}

