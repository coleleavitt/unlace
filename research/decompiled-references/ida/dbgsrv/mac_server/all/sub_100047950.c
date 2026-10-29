/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100047950
// Address: 0x0000000100047950

//----- (0000000100047950) ----------------------------------------------------
char __fastcall sub_100047950(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  char *v5; // r15
  const char *v6; // r15
  char result; // al
  int v8; // ecx
  char *i; // rcx
  int v10; // edx
  __int64 v11; // rdi
  int v12; // edx
  _BYTE *v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r13
  bool v17; // cf
  __int64 v18; // rax
  _BYTE *v19; // rax
  __int64 v20; // r13
  _BYTE *v21; // rax
  int v22; // eax
  const char *v23; // rsi
  int v24; // eax
  _BYTE *v25; // rax
  unsigned __int64 v26; // rcx
  bool v27; // zf
  char *v28; // rax
  int v29; // edx
  __int16 v30; // si
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // rax
  _BYTE *v34; // rax
  const void *v35; // r14
  size_t v36; // rax
  size_t v37; // r12
  size_t v38; // r13
  char v39; // r15
  __int64 v40; // r13
  _BYTE *v41; // rax
  void *v42; // rdi
  unsigned __int8 *v43; // rcx
  int v44; // [rsp+0h] [rbp-460h]
  char v45; // [rsp+Fh] [rbp-451h]
  __int128 v46; // [rsp+10h] [rbp-450h] BYREF
  unsigned __int64 v47; // [rsp+20h] [rbp-440h]
  char v48[4]; // [rsp+30h] [rbp-430h] BYREF
  int v49; // [rsp+34h] [rbp-42Ch]
  __int16 v50; // [rsp+38h] [rbp-428h]
  char v51; // [rsp+3Ah] [rbp-426h]
  __int64 v52; // [rsp+3Bh] [rbp-425h]
  int v53; // [rsp+44h] [rbp-41Ch]

  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
  {
    if ( **(_BYTE **)a2 != 95 )
    {
LABEL_13:
      if ( *(_BYTE *)(a1 + 84) != 1 )
        return 0;
      if ( v4 )
      {
        v6 = *(const char **)a2;
        if ( !strcmp(*(const char **)a2, "defined") )
        {
          result = 1;
LABEL_19:
          for ( i = *(char **)(a1 + 8); ; *(_QWORD *)(a1 + 8) = i )
          {
            v10 = (unsigned __int8)*i++;
            if ( (unsigned int)(v10 - 9) >= 5 && v10 != 32 )
              break;
          }
          *(_QWORD *)(a1 + 8) = i;
          v11 = (unsigned __int8)*(i - 1);
          if ( v11 == 40 )
          {
            do
            {
              do
              {
                *(_QWORD *)(a1 + 8) = ++i;
                v12 = (unsigned __int8)*(i - 1);
              }
              while ( (unsigned int)(v12 - 9) < 5 );
            }
            while ( v12 == 32 );
          }
          else if ( ((v11 & 0x80u) != 0LL || (_DefaultRuneLocale.__runetype[v11] & 0x100) == 0)
                 && v11 != 36
                 && (_DWORD)v11 != 95 )
          {
            return 0;
          }
          if ( !result )
          {
            v22 = (unsigned __int8)*(i - 1);
            if ( v22 == 60 )
            {
              v45 = 62;
            }
            else
            {
              if ( v22 != 34 )
                return 0;
              v45 = 34;
            }
            v46 = 0;
            v47 = 0;
            v44 = v11;
            while ( *i && *i != 41 )
            {
              *(_QWORD *)(a1 + 8) = i + 1;
              v39 = *i;
              v40 = *((_QWORD *)&v46 + 1) - 1LL;
              if ( !*((_QWORD *)&v46 + 1) )
                v40 = 0;
              v41 = (_BYTE *)v46;
              if ( v47 < v40 + 2 )
              {
                v41 = qvector_reserve((__int64)&v46, (void *)v46, v40 + 2, 1u);
                *(_QWORD *)&v46 = v41;
              }
              *((_QWORD *)&v46 + 1) = v40 + 2;
              v41[v40] = v39;
              *(_BYTE *)(v46 + v40 + 1) = 0;
              i = *(char **)(a1 + 8);
              LODWORD(v11) = v44;
            }
            if ( (_DWORD)v11 == 40 && (*(_QWORD *)(a1 + 8) = i + 1, *i == 41) && *((_QWORD *)&v46 + 1) >= 2u )
            {
              v42 = (void *)v46;
              if ( *(_BYTE *)(v46 + *((_QWORD *)&v46 + 1) - 2) == v45 )
              {
                sub_100048070((__int64)&v46, 1);
                if ( *((_QWORD *)&v46 + 1) )
                  v43 = (unsigned __int8 *)v46;
                else
                  v43 = (unsigned __int8 *)_s1;
                *(_QWORD *)(a2 + 32) = sub_1000480E0(a1, v48, 1024, v43, v45, 0) != nullptr;
                sub_100006E30((void **)&v46);
                goto LABEL_97;
              }
            }
            else
            {
              v42 = (void *)v46;
              if ( !(_QWORD)v46 )
                return 0;
            }
            *((_QWORD *)&v46 + 1) = 0;
            qfree(v42);
            return 0;
          }
          *(_QWORD *)(a2 + 8) = 0;
          if ( *(_QWORD *)(a2 + 16) <= 0x3FFu )
            *(_QWORD *)a2 = qvector_reserve(a2, *(void **)a2, 0x400u, 1u);
          v13 = (_BYTE *)(*(_QWORD *)(a1 + 8) - 1LL);
          *(_QWORD *)(a1 + 8) = v13;
          v14 = (char)*v13;
          if ( v14 >= 0 && (_DefaultRuneLocale.__runetype[v14] & 0x500) != 0
            || (unsigned __int8)v14 == 95
            || (unsigned __int8)v14 == 36 )
          {
            v15 = *(_QWORD *)(a2 + 8);
            v16 = 0;
            v17 = v15 == 0;
            v18 = v15 - 1;
            if ( !v17 )
              v16 = v18;
            v19 = *(_BYTE **)a2;
            if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v16 + 2) )
            {
              v19 = qvector_reserve(a2, *(void **)a2, v16 + 2, 1u);
              *(_QWORD *)a2 = v19;
            }
            *(_QWORD *)(a2 + 8) = v16 + 2;
            v19[v16] = v14;
            while ( 1 )
            {
              *(_BYTE *)(*(_QWORD *)a2 + v16 + 1) = 0;
              v13 = (_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL);
              *(_QWORD *)(a1 + 8) = v13;
              v14 = (char)*v13;
              if ( (v14 < 0 || (_DefaultRuneLocale.__runetype[v14] & 0x500) == 0)
                && (unsigned __int8)v14 != 95
                && (unsigned __int8)v14 != 36 )
              {
                break;
              }
              v20 = *(_QWORD *)(a2 + 8);
              v17 = v20 == 0;
              v16 = v20 - 1;
              if ( v17 )
                v16 = 0;
              v21 = *(_BYTE **)a2;
              if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v16 + 2) )
              {
                v21 = qvector_reserve(a2, *(void **)a2, v16 + 2, 1u);
                *(_QWORD *)a2 = v21;
              }
              *(_QWORD *)(a2 + 8) = v16 + 2;
              v21[v16] = v14;
            }
          }
          if ( (_DWORD)v11 != 40 )
            goto LABEL_109;
          while ( 1 )
          {
            ++v13;
            if ( (unsigned int)(unsigned __int8)v14 - 9 >= 5 && (unsigned __int8)v14 != 32 )
              break;
            *(_QWORD *)(a1 + 8) = v13;
            LOBYTE(v14) = *v13;
          }
          *(_QWORD *)(a1 + 8) = v13;
          if ( *(v13 - 1) == 41 )
          {
LABEL_109:
            if ( *(_QWORD *)(a2 + 8) )
              v23 = *(const char **)a2;
            else
              v23 = _s1;
            *(_QWORD *)(a2 + 32) = sub_100045D60(a1, v23) != nullptr;
            goto LABEL_97;
          }
          return 0;
        }
      }
      else
      {
        v6 = _s1;
      }
      v8 = strcmp(v6, "__has_include");
      result = 0;
      if ( v8 )
        return result;
      goto LABEL_19;
    }
  }
  else if ( (_BYTE)dword_1000AC1CC != 95 )
  {
    goto LABEL_13;
  }
  v5 = *(char **)a2;
  if ( *(_BYTE *)(*(_QWORD *)a2 + 1LL) != 95 )
    goto LABEL_13;
  if ( !v4 )
  {
    v5 = (char *)_s1;
    goto LABEL_12;
  }
  if ( strcmp(*(const char **)a2, "__LINE__") )
  {
    if ( !strcmp(v5, "__FILE__") )
    {
      v35 = *(const void **)(a1 + 280);
      if ( v35 && (v36 = strlen((const char *)v35)) != 0 )
      {
        v37 = v36;
        v38 = v36 + 1;
        if ( *(_QWORD *)(a2 + 16) < v36 + 1 )
        {
          v5 = (char *)qvector_reserve(a2, v5, v36 + 1, 1u);
          *(_QWORD *)a2 = v5;
        }
        *(_QWORD *)(a2 + 8) = v38;
        memmove(v5, v35, v37);
        *(_BYTE *)(*(_QWORD *)a2 + v37) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 8) = 0;
      }
      goto LABEL_99;
    }
    if ( !strcmp(v5, "__DATE__") )
    {
LABEL_63:
      v24 = time(nullptr);
      qctime(v48, 0x28u, v24);
      v25 = *(_BYTE **)a2;
      v26 = *(_QWORD *)(a2 + 16);
      v27 = *(_BYTE *)(*(_QWORD *)a2 + 2LL) == 68;
      *(_QWORD *)(a2 + 8) = 0;
      if ( v27 )
      {
        if ( v26 <= 7 )
        {
          v25 = qvector_reserve(a2, v25, 8u, 1u);
          *(_QWORD *)a2 = v25;
        }
        *(_QWORD *)(a2 + 8) = 8;
        v25[7] = 0;
        v28 = *(char **)a2;
        v29 = v49;
        v30 = v50;
        v28[6] = v51;
        *((_WORD *)v28 + 2) = v30;
        *(_DWORD *)v28 = v29;
        v31 = *(_QWORD *)(a2 + 8);
        v32 = 0;
        v17 = v31 == 0;
        v33 = v31 - 1;
        if ( !v17 )
          v32 = v33;
        v34 = *(_BYTE **)a2;
        if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v32 + 5) )
        {
          v34 = qvector_reserve(a2, *(void **)a2, v32 + 5, 1u);
          *(_QWORD *)a2 = v34;
        }
        *(_QWORD *)(a2 + 8) = v32 + 5;
        v34[v32 + 4] = 0;
        *(_DWORD *)(*(_QWORD *)a2 + v32) = v53;
      }
      else
      {
        if ( v26 <= 8 )
        {
          v25 = qvector_reserve(a2, v25, 9u, 1u);
          *(_QWORD *)a2 = v25;
        }
        *(_QWORD *)(a2 + 8) = 9;
        v25[8] = 0;
        **(_QWORD **)a2 = v52;
      }
LABEL_99:
      *(_WORD *)(a2 + 24) = 4;
      *(_BYTE *)(a2 + 40) = 0;
      return 1;
    }
LABEL_12:
    if ( strcmp(v5, "__TIME__") )
      goto LABEL_13;
    goto LABEL_63;
  }
  *(_QWORD *)(a2 + 32) = *(int *)(a1 + 288);
LABEL_97:
  *(_WORD *)(a2 + 24) = 3;
  return 1;
}
// 1000AC1CC: using guessed type int dword_1000AC1CC;
