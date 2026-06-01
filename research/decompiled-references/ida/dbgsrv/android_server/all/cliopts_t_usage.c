/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_usage
// Address: 0x00000000000AEA9C

//----- (00000000000AEA9C) ----------------------------------------------------
void __fastcall __noreturn cliopts_t_usage(__int64 *a1, char a2)
{
  unsigned __int64 v2; // x29
  __int64 v4; // x19
  unsigned __int64 i; // x24
  __int64 v6; // x28
  const char *v7; // x3
  __int64 v8; // x0
  __int64 align; // x1
  size_t v10; // x26
  __int64 v11; // x21
  __int64 v12; // x25
  unsigned __int64 v13; // x27
  const char *v14; // x2
  const char *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  size_t v18; // x26
  __int64 v19; // x21
  __int64 v20; // x25
  unsigned __int64 v21; // x27
  const void *v22; // x26
  size_t v23; // x0
  __int64 v24; // x1
  size_t v25; // x27
  __int64 v26; // x21
  size_t v27; // x25
  unsigned __int64 v28; // x28
  __int64 v29; // x0
  __int64 v30; // x1
  size_t v31; // x26
  __int64 v32; // x21
  __int64 v33; // x25
  unsigned __int64 v34; // x27
  int (**v35)(const char *, ...); // x19
  char *v36; // x0
  const char *v37; // x1
  const char *v38; // x2
  _OWORD *v39; // x1
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  FILE *v47; // x19
  char v48; // [xsp+0h] [xbp-80h]
  pthread_mutex_t ptr; // [xsp+8h] [xbp-78h] BYREF

  memset(&ptr, 0, 24);
  v2 = a1[1];
  if ( v2 )
  {
    v4 = 0;
    for ( i = 0; i < v2; ++i )
    {
      v6 = *a1;
      if ( *(_BYTE *)(*a1 + v4) )
      {
        if ( *(_DWORD *)(v6 + v4 + 32) )
          v7 = " ...";
        else
          v7 = "    ";
        sub_4C730(&ptr, "  -%c%s", *(unsigned __int8 *)(*a1 + v4), v7);
      }
      else
      {
        v8 = __strlen_chk("        ", 9);
        align = ptr.__align;
        v10 = v8;
        if ( *(&ptr.__align + 1) )
          v11 = *(&ptr.__align + 1) - 1;
        else
          v11 = 0;
        v12 = v11 + v8;
        v13 = v11 + v8 + 1;
        if ( *(&ptr.__align + 2) < v13 )
        {
          align = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v13, 1u);
          ptr.__align = align;
        }
        *(&ptr.__align + 1) = v13;
        *(_BYTE *)(align + v12) = 0;
        memmove((void *)(ptr.__align + v11), "        ", v10);
      }
      v14 = *(const char **)(v6 + v4 + 8);
      if ( v14 )
      {
        if ( *(_DWORD *)(v6 + v4 + 32) )
          v15 = " ...";
        else
          v15 = "";
        sub_4C730(&ptr, "  (--%s%s)", v14, v15);
      }
      v16 = __strlen_chk(" ", 2);
      v17 = ptr.__align;
      v18 = v16;
      if ( *(&ptr.__align + 1) )
        v19 = *(&ptr.__align + 1) - 1;
      else
        v19 = 0;
      v20 = v19 + v16;
      v21 = v19 + v16 + 1;
      if ( *(&ptr.__align + 2) < v21 )
      {
        v17 = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v21, 1u);
        ptr.__align = v17;
      }
      *(&ptr.__align + 1) = v21;
      *(_BYTE *)(v17 + v20) = 0;
      memmove((void *)(ptr.__align + v19), " ", v18);
      v22 = *(const void **)(v6 + v4 + 16);
      if ( v22 )
      {
        v23 = strlen(*(const char **)(v6 + v4 + 16));
        v24 = ptr.__align;
        v25 = v23;
        if ( *(&ptr.__align + 1) )
          v26 = *(&ptr.__align + 1) - 1;
        else
          v26 = 0;
        v27 = v26 + v23;
        v28 = v26 + v23 + 1;
        if ( *(&ptr.__align + 2) < v28 )
        {
          v24 = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v28, 1u);
          ptr.__align = v24;
        }
        *(&ptr.__align + 1) = v28;
        *(_BYTE *)(v24 + v27) = 0;
        memmove((void *)(ptr.__align + v26), v22, v25);
      }
      v29 = __strlen_chk("\n", 2);
      v30 = ptr.__align;
      v31 = v29;
      if ( *(&ptr.__align + 1) )
        v32 = *(&ptr.__align + 1) - 1;
      else
        v32 = 0;
      v33 = v32 + v29;
      v34 = v32 + v29 + 1;
      if ( *(&ptr.__align + 2) < v34 )
      {
        v30 = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v34, 1u);
        ptr.__align = v30;
      }
      *(&ptr.__align + 1) = v34;
      *(_BYTE *)(v30 + v33) = 0;
      memmove((void *)(ptr.__align + v32), "\n", v31);
      v4 += 40;
    }
  }
  if ( a1[9] )
    v35 = (int (**)(const char *, ...))a1[9];
  else
    v35 = &printf;
  v36 = &byte_F154B;
  if ( a1[4] )
    v36 = (char *)a1[3];
  v37 = qbasename(v36);
  if ( *(&ptr.__align + 1) )
    v38 = (const char *)ptr.__align;
  else
    v38 = &byte_F154B;
  ((void (*)(const char *, ...))v35)("Usage: %s [options]\n%s", v37, v38);
  if ( (unsigned __int64)a1[7] >= 2 )
    ((void (*)(const char *, ...))v35)("\n%s\n", (const char *)a1[6]);
  v47 = qexit((pthread_mutex_t *)(a2 & 1), v39);
  if ( ptr.__align )
  {
    *(&ptr.__align + 1) = 0;
    qfree((void *)ptr.__align);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  Unwind_Resume(v47, v40, v41, v42, v43, v44, v45, v46, v48);
}
// AED90: variable 'v39' is possibly undefined
// AEDB8: variable 'v40' is possibly undefined
// AEDB8: variable 'v41' is possibly undefined
// AEDB8: variable 'v42' is possibly undefined
// AEDB8: variable 'v43' is possibly undefined
// AEDB8: variable 'v44' is possibly undefined
// AEDB8: variable 'v45' is possibly undefined
// AEDB8: variable 'v46' is possibly undefined
// AEDB8: variable 'v48' is possibly undefined
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
