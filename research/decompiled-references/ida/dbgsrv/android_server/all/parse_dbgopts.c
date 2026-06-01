/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: parse_dbgopts
// Address: 0x00000000000AE460

//----- (00000000000AE460) ----------------------------------------------------
char *__fastcall parse_dbgopts(__int64 a1, char *a2)
{
  char *result; // x0
  _BYTE *v4; // x0
  pthread_mutex_t *v5; // x24
  _BYTE *v6; // x21
  char *v7; // x0
  int v8; // t1
  const char *v9; // x22
  __int64 v10; // x0
  const char *v11; // x21
  int v12; // w8
  char *v13; // x23
  pthread_mutex_t *v14; // x21
  int v15; // w20
  unsigned __int64 v16; // x25
  unsigned __int64 v17; // x0
  char *v18; // x0
  int v19; // w25
  int v20; // w24
  char v21; // w28
  __int64 v22; // x0
  unsigned __int64 v23; // x27
  size_t v24; // x26
  void *v25; // x0
  size_t v26; // x0
  unsigned __int64 v27; // x27
  size_t v28; // x26
  int v29; // w25
  int v30; // w24
  char v31; // w20
  void **v32; // x28
  void *v33; // x0
  size_t v34; // x0
  unsigned __int64 v35; // x26
  size_t v36; // x22
  void **v37; // x27
  void *v38; // x0
  size_t v39; // x0
  unsigned __int64 v40; // x23
  size_t v41; // x22
  void **v42; // x26
  void *v43; // x0
  int v44; // [xsp+8h] [xbp-478h]
  char *endptr; // [xsp+10h] [xbp-470h] BYREF
  pthread_mutex_t src[25]; // [xsp+18h] [xbp-468h] BYREF
  __int64 v47; // [xsp+418h] [xbp-68h]

  result = nullptr;
  v47 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a1 && a2 )
  {
    qstrncpy(src, a2, 1024);
    endptr = (char *)src;
    v4 = (_BYTE *)__strchr_chk((const char *)src, 64, 1024);
    if ( v4 )
    {
      *v4 = 0;
      v5 = (pthread_mutex_t *)(v4 + 1);
      endptr = v4 + 1;
      v6 = v4;
      if ( v4[1] == 91 )
      {
        result = strchr(v4 + 1, 93);
        if ( !result )
          return result;
        v6[1] = 0;
        *result = 0;
        v5 = (pthread_mutex_t *)(result + 1);
        endptr = result + 1;
        v8 = (unsigned __int8)result[2];
        v7 = result + 2;
        v9 = v6 + 2;
        if ( v8 != 58 || !v7 )
          goto LABEL_18;
      }
      else
      {
        v7 = strchr(v4 + 1, 58);
        v9 = (const char *)v5;
        if ( !v7 )
          goto LABEL_18;
      }
      v14 = (pthread_mutex_t *)(v7 + 1);
      if ( (v7[1] & 0x80000000) == 0 && (unsigned int)(unsigned __int8)v7[1] - 48 <= 9 )
      {
        *v7 = 0;
        endptr = v7 + 1;
        v15 = atoi(v7 + 1);
        v5 = v14;
LABEL_19:
        v16 = __strchr_chk((const char *)src, 123, 1024);
        v17 = __strchr_chk((const char *)src, 58, 1024);
        v13 = (char *)v17;
        v11 = nullptr;
        if ( v16 && (v16 <= v17 || v17 == 0) )
        {
          *(_BYTE *)v16 = 0;
          v11 = (const char *)(v16 + 1);
          if ( !v17 )
            v13 = (char *)&v11[strlen((const char *)(v16 + 1))];
          if ( *(v13 - 1) != 125 )
            return nullptr;
          *(v13 - 1) = 0;
          v13 = strchr(v13, 58);
        }
        if ( v13 )
          *v13++ = 0;
        if ( v15 )
        {
LABEL_32:
          v18 = strchr((const char *)v5, 43);
          if ( !v18 || v18[1] < 0 )
            goto LABEL_41;
          if ( (unsigned int)(unsigned __int8)v18[1] - 48 <= 9 )
          {
            *v18 = 0;
            v19 = strtoul(v18 + 1, &endptr, 10);
            if ( v19 != -1 )
            {
              if ( *endptr == 44 )
              {
                ++endptr;
                v20 = strtoul(endptr, &endptr, 10);
                if ( v20 != -1 && !*endptr )
                  goto LABEL_39;
              }
              else
              {
                v20 = -1;
                if ( !*endptr )
                {
LABEL_39:
                  v21 = 1;
                  goto LABEL_43;
                }
              }
            }
            return nullptr;
          }
          if ( v18[1] )
          {
LABEL_41:
            v21 = 0;
            v20 = -1;
          }
          else
          {
            v20 = -1;
            v21 = 1;
            *v18 = 0;
          }
          v19 = -1;
LABEL_43:
          v22 = __strlen_chk(src, 1024);
          if ( v22 )
          {
            v23 = v22 + 1;
            v24 = v22;
            if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v22 + 1) )
            {
              v25 = *(void **)a1;
            }
            else
            {
              v25 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v23, 1u);
              *(_QWORD *)a1 = v25;
            }
            *(_QWORD *)(a1 + 8) = v23;
            memmove(v25, src, v24);
            *(_BYTE *)(*(_QWORD *)a1 + v24) = 0;
            if ( !v9 )
              goto LABEL_53;
          }
          else
          {
            *(_QWORD *)(a1 + 8) = 0;
            if ( !v9 )
              goto LABEL_53;
          }
          v26 = strlen(v9);
          if ( v26 )
          {
            v27 = v26 + 1;
            v28 = v26;
            v44 = v19;
            v29 = v20;
            v30 = v15;
            v31 = v21;
            v32 = (void **)(a1 + 48);
            if ( *(_QWORD *)(a1 + 64) >= v26 + 1 )
            {
              v33 = *v32;
            }
            else
            {
              v33 = qvector_reserve((pthread_mutex_t *)(a1 + 48), *v32, v27, 1u);
              *v32 = v33;
            }
            *(_QWORD *)(a1 + 56) = v27;
            memmove(v33, v9, v28);
            v21 = v31;
            v15 = v30;
            v20 = v29;
            v19 = v44;
            *(_BYTE *)(*(_QWORD *)(a1 + 48) + v28) = 0;
            if ( !v13 )
              goto LABEL_60;
            goto LABEL_57;
          }
LABEL_53:
          *(_QWORD *)(a1 + 56) = 0;
          if ( !v13 )
            goto LABEL_60;
LABEL_57:
          v34 = strlen(v13);
          if ( v34 )
          {
            v35 = v34 + 1;
            v36 = v34;
            v37 = (void **)(a1 + 72);
            if ( *(_QWORD *)(a1 + 88) >= v34 + 1 )
            {
              v38 = *v37;
            }
            else
            {
              v38 = qvector_reserve((pthread_mutex_t *)(a1 + 72), *v37, v35, 1u);
              *v37 = v38;
            }
            *(_QWORD *)(a1 + 80) = v35;
            memmove(v38, v13, v36);
            *(_BYTE *)(*(_QWORD *)(a1 + 72) + v36) = 0;
            if ( !v11 )
              goto LABEL_67;
LABEL_64:
            v39 = strlen(v11);
            if ( v39 )
            {
              v40 = v39 + 1;
              v41 = v39;
              v42 = (void **)(a1 + 24);
              if ( *(_QWORD *)(a1 + 40) >= v39 + 1 )
              {
                v43 = *v42;
              }
              else
              {
                v43 = qvector_reserve((pthread_mutex_t *)(a1 + 24), *v42, v40, 1u);
                *v42 = v43;
              }
              *(_QWORD *)(a1 + 32) = v40;
              memmove(v43, v11, v41);
              *(_BYTE *)(*(_QWORD *)(a1 + 24) + v41) = 0;
              goto LABEL_70;
            }
LABEL_67:
            *(_QWORD *)(a1 + 32) = 0;
LABEL_70:
            *(_DWORD *)(a1 + 96) = v15;
            *(_DWORD *)(a1 + 100) = v19;
            *(_DWORD *)(a1 + 104) = v20;
            *(_BYTE *)(a1 + 108) = v21;
            return (_BYTE *)(&dword_0 + 1);
          }
LABEL_60:
          *(_QWORD *)(a1 + 80) = 0;
          if ( !v11 )
            goto LABEL_67;
          goto LABEL_64;
        }
        goto LABEL_31;
      }
LABEL_18:
      v15 = 0;
      goto LABEL_19;
    }
    v5 = src;
    v10 = __strchr_chk((const char *)src, 123, 1024);
    v11 = (const char *)v10;
    if ( !v10 )
    {
      v9 = nullptr;
      v13 = nullptr;
      goto LABEL_31;
    }
    *(_BYTE *)v10 = 0;
    v11 = (const char *)(v10 + 1);
    result = strchr((const char *)(v10 + 1), 125);
    endptr = result;
    if ( !result )
      return result;
    v5 = (pthread_mutex_t *)(result + 1);
    endptr = result + 1;
    v12 = (unsigned __int8)result[1];
    v9 = nullptr;
    *result = 0;
    if ( !v12 )
    {
      v13 = nullptr;
      goto LABEL_31;
    }
    result = nullptr;
    v13 = nullptr;
    if ( v12 == 43 )
    {
LABEL_31:
      v15 = 23946;
      goto LABEL_32;
    }
  }
  return result;
}
// 0: using guessed type int dword_0;
// 36CE0: using guessed type __int64 __strchr_chk(const char *, ...);
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
