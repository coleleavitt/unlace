/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: openM
// Address: 0x00000000000BAFE8

//----- (00000000000BAFE8) ----------------------------------------------------
FILE *__fastcall openM(const char *a1)
{
  FILE *result; // x0
  const char *v3; // x0
  __int64 v4; // x30
  const char *v5; // x0
  const char *v6; // x19
  const char *v7; // x0
  __int64 v8; // x30
  const char *v9; // x1
  const char *v10; // x22
  signed __int64 v11; // x2
  signed __int64 v12; // x23
  pthread_mutex_t *v13; // x0
  pthread_mutex_t *v14; // x21
  __int64 v15; // x3
  __int64 v16; // x20
  FILE *v17; // x0
  int v18; // w1
  FILE *v19; // x19
  signed __int64 v20; // x0
  size_t v21; // x22
  unsigned __int64 v22; // x8
  char *align; // x0
  __int64 v24; // x0
  unsigned __int64 v25; // x21
  size_t v26; // x22
  void *v27; // x0
  unsigned int v28; // w21
  const char *v29; // x0
  const char *v30; // x21
  size_t v31; // x0
  unsigned __int64 v32; // x23
  const char *v33; // x1
  const char *v34; // x0
  char v35[4]; // [xsp+4h] [xbp-6Ch] BYREF
  __int64 v36; // [xsp+8h] [xbp-68h]
  const char *v37; // [xsp+40h] [xbp-30h]
  __int64 v38; // [xsp+48h] [xbp-28h]
  const char *v39; // [xsp+50h] [xbp-20h]
  __int64 v40; // [xsp+58h] [xbp-18h]
  int8x16x2_t v41; // 0:q0.32

  result = sub_BAD80(a1, "rb+e", 1);
  if ( !result )
  {
    set_qerrno(1u);
    v3 = (const char *)qerrstr(0xFFFFFFFFLL);
    sub_3B1DC("Cannot open file '%s' for modification: %s", a1, v3);
    v39 = a1;
    v40 = v4;
    v6 = v5;
    result = sub_BAD80(v5, "wte", 1);
    if ( !result )
    {
      set_qerrno(1u);
      v7 = (const char *)qerrstr(0xFFFFFFFFLL);
      sub_3B1DC("Cannot open file '%s' for modification: %s", v6, v7);
      v37 = v6;
      v38 = v8;
      v10 = v9;
      v12 = v11;
      v14 = v13;
      v16 = v15;
      v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
      v17 = sub_BAD80(v9, "rbe", 8);
      if ( !v17 )
      {
        set_qerrno(1u);
        v34 = (const char *)qerrstr(0xFFFFFFFFLL);
        sub_3B1DC("Can't open for read file '%s': %s", v10, v34);
      }
      v19 = v17;
      v20 = qfsize(v17, v18, v41);
      if ( v20 < 1 || (v21 = v20, v20 > v12) )
      {
        if ( v16 )
        {
          v24 = __strlen_chk("wrong file size", 16);
          if ( v24 )
          {
            v25 = v24 + 1;
            v26 = v24;
            if ( *(_QWORD *)(v16 + 16) >= (unsigned __int64)(v24 + 1) )
            {
              v27 = *(void **)v16;
            }
            else
            {
              v27 = qvector_reserve((pthread_mutex_t *)v16, *(void **)v16, v25, 1u);
              *(_QWORD *)v16 = v27;
            }
            *(_QWORD *)(v16 + 8) = v25;
            v33 = "wrong file size";
            goto LABEL_30;
          }
LABEL_25:
          v28 = 0;
          *(_QWORD *)(v16 + 8) = 0;
          goto LABEL_31;
        }
      }
      else
      {
        v22 = *(&v14->__align + 1);
        if ( v22 >= v20 )
        {
          if ( v22 != v20 )
          {
            v35[0] = 0;
            sub_5BBF4(v14, v20, v35);
          }
        }
        else
        {
          if ( *(&v14->__align + 2) >= (unsigned __int64)v20 )
          {
            align = (char *)v14->__align;
          }
          else
          {
            align = (char *)qvector_reserve(v14, (void *)v14->__align, v20, 1u);
            v22 = *(&v14->__align + 1);
            v14->__align = (__int64)align;
          }
          memset(&align[v22], 0, v21 - v22);
          *(&v14->__align + 1) = v21;
        }
        if ( qfread(v19, (void *)v14->__align, v21) == v21 )
        {
          v28 = 1;
LABEL_31:
          qfclose(v19);
          return (FILE *)v28;
        }
        if ( v16 )
        {
          v29 = qstrerror(0xFFFFFFFF);
          if ( v29 )
          {
            v30 = v29;
            v31 = strlen(v29);
            if ( v31 )
            {
              v32 = v31 + 1;
              v26 = v31;
              if ( *(_QWORD *)(v16 + 16) >= v31 + 1 )
              {
                v27 = *(void **)v16;
              }
              else
              {
                v27 = qvector_reserve((pthread_mutex_t *)v16, *(void **)v16, v32, 1u);
                *(_QWORD *)v16 = v27;
              }
              v33 = v30;
              *(_QWORD *)(v16 + 8) = v32;
LABEL_30:
              memmove(v27, v33, v26);
              v28 = 0;
              *(_BYTE *)(*(_QWORD *)v16 + v26) = 0;
              goto LABEL_31;
            }
          }
          goto LABEL_25;
        }
      }
      v28 = 0;
      goto LABEL_31;
    }
  }
  return result;
}
// BB030: variable 'v4' is possibly undefined
// BB040: variable 'v5' is possibly undefined
// BB088: variable 'v8' is possibly undefined
// BB094: variable 'v9' is possibly undefined
// BB09C: variable 'v11' is possibly undefined
// BB0A0: variable 'v13' is possibly undefined
// BB0B0: variable 'v15' is possibly undefined
// BB0C4: variable 'v18' is possibly undefined
// BB0C4: variable 'v41' is possibly undefined
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
