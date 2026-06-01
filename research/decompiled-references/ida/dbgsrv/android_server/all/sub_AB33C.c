/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB33C
// Address: 0x00000000000AB33C

//----- (00000000000AB33C) ----------------------------------------------------
void sub_AB33C(int a1, ...)
{
  __int64 gr_offs; // x8
  int v2; // w9
  char **stack; // x8
  char *v4; // x0
  _OWORD **v5; // x8
  _OWORD *v6; // x8
  __int128 v7; // q0
  __int64 v8; // x8
  _QWORD *v9; // x8
  int v10; // w8
  int v11; // w9
  __int64 v12; // x8
  int v13; // w9
  pthread_mutex_t **v14; // x8
  pthread_mutex_t *v15; // x0
  __int64 *v16; // x8
  int v17; // w9
  int v18; // w8
  unsigned int *v19; // x9
  __int64 v20; // x26
  const char **v21; // x8
  const char *v22; // x8
  char *v23; // x19
  char *v24; // x0
  char *v25; // x0
  __int64 v26; // x8
  _OWORD **v27; // x8
  _OWORD *v28; // x8
  __int128 v29; // q0
  _OWORD *v30; // x1
  FILE *v31; // x19
  _OWORD v32[2]; // [xsp+D0h] [xbp-28C0h] BYREF
  _OWORD v33[2]; // [xsp+F0h] [xbp-28A0h] BYREF
  gcc_va_list va; // [xsp+118h] [xbp-2878h] BYREF
  pthread_mutex_t v35[256]; // [xsp+138h] [xbp-2858h] BYREF
  __int64 v36; // [xsp+2938h] [xbp-58h]

  va_start(va, a1);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a1 )
  {
    case 23:
      gr_offs = va[0].__gr_offs;
      v2 = gr_offs + 8;
      va[0].__gr_offs += 8;
      if ( (int)gr_offs + 8 < 1 )
      {
        v4 = *(char **)((char *)va[0].__gr_top + gr_offs);
        if ( v2 < 0 )
        {
          va[0].__gr_offs = gr_offs + 16;
          if ( (int)gr_offs + 16 <= 0 )
          {
            v5 = (_OWORD **)((char *)va[0].__gr_top + v2);
            goto LABEL_5;
          }
        }
      }
      else
      {
        stack = (char **)va[0].__stack;
        va[0].__stack = (char *)va[0].__stack + 8;
        v4 = *stack;
      }
      v5 = (_OWORD **)va[0].__stack;
      va[0].__stack = (char *)va[0].__stack + 8;
LABEL_5:
      v6 = *v5;
      v7 = v6[1];
      v33[0] = *v6;
      v33[1] = v7;
      qvprintf(v4, v33);
      return;
    case 24:
      v17 = va[0].__gr_offs;
      v18 = va[0].__gr_offs + 8;
      va[0].__gr_offs += 8;
      if ( v17 + 8 <= 0 )
      {
        v19 = (unsigned int *)((char *)va[0].__gr_top + v17);
      }
      else
      {
        v19 = (unsigned int *)va[0].__stack;
        va[0].__stack = (char *)va[0].__stack + 8;
      }
      v20 = *v19;
      if ( (_DWORD)v20 != 10 )
      {
        if ( v18 < 0 && (va[0].__gr_offs = v18 + 8, v18 + 8 <= 0) )
        {
          v21 = (const char **)((char *)va[0].__gr_top + v18);
        }
        else
        {
          v21 = (const char **)va[0].__stack;
          va[0].__stack = (char *)va[0].__stack + 8;
        }
        v22 = *v21;
        if ( !v22 )
          v22 = "<null>";
        do
        {
          do
          {
            v23 = (char *)v22;
            if ( strncmp(v22, "ICON ", 5u) && strncmp(v23, "AUTOHIDE ", 9u) && strncmp(v23, "@0:", 3u) )
              break;
            v24 = strchr(v23, 10);
            v22 = v24 + 1;
          }
          while ( v24 );
          if ( strncmp(v23, "HELP\n", 5u) )
            break;
          v25 = strstr(v23, "ENDHELP\n");
          v22 = v25 + 8;
        }
        while ( v25 );
        v26 = va[0].__gr_offs;
        if ( va[0].__gr_offs < 0 && (va[0].__gr_offs += 8, (int)v26 + 8 <= 0) )
        {
          v27 = (_OWORD **)((char *)va[0].__gr_top + v26);
        }
        else
        {
          v27 = (_OWORD **)va[0].__stack;
          va[0].__stack = (char *)va[0].__stack + 8;
        }
        v28 = *v27;
        v29 = v28[1];
        v32[0] = *v28;
        v32[1] = v29;
        qvsnprintf(v35, 10240, v23, v32);
        printf("%s: %s\n", off_15F5C8[v20], (const char *)v35);
        if ( (unsigned int)v20 <= 8 && ((1 << v20) & 0x1D9) != 0 )
        {
          v31 = qexit((pthread_mutex_t *)((char *)&dword_0 + 1), v30);
          std::bad_alloc::~bad_alloc((std::bad_alloc *)v31);
          operator delete(v31);
        }
      }
      return;
    case 25:
    case 26:
    case 27:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
      return;
    case 28:
      v10 = va[0].__gr_offs;
      v11 = va[0].__gr_offs + 8;
      va[0].__gr_offs += 8;
      if ( v10 + 8 >= 1 )
      {
        va[0].__stack = (char *)va[0].__stack + 8;
LABEL_12:
        va[0].__stack = (char *)va[0].__stack + 8;
LABEL_13:
        va[0].__stack = (char *)va[0].__stack + 8;
LABEL_14:
        va[0].__stack = (char *)va[0].__stack + 8;
        return;
      }
      if ( (v11 & 0x80000000) == 0 )
        goto LABEL_12;
      va[0].__gr_offs = v10 + 16;
      if ( v10 + 16 >= 1 )
        goto LABEL_12;
      if ( ((v10 + 16) & 0x80000000) == 0 )
        goto LABEL_13;
      va[0].__gr_offs = v10 + 24;
      if ( v10 + 24 >= 1 )
        goto LABEL_13;
      if ( ((v10 + 24) & 0x80000000) == 0 )
        goto LABEL_14;
      va[0].__gr_offs = v10 + 32;
      if ( v10 + 32 > 0 )
        goto LABEL_14;
      return;
    case 52:
      v12 = va[0].__gr_offs;
      v13 = v12 + 8;
      va[0].__gr_offs += 8;
      if ( (int)v12 + 8 >= 1 )
      {
        v14 = (pthread_mutex_t **)va[0].__stack;
        va[0].__stack = (char *)va[0].__stack + 8;
        v15 = *v14;
LABEL_17:
        v16 = (__int64 *)va[0].__stack;
        va[0].__stack = (char *)va[0].__stack + 8;
        goto LABEL_18;
      }
      v15 = *(pthread_mutex_t **)((char *)va[0].__gr_top + v12);
      if ( (v13 & 0x80000000) == 0 )
        goto LABEL_17;
      va[0].__gr_offs = v12 + 16;
      if ( (int)v12 + 16 > 0 )
        goto LABEL_17;
      v16 = (__int64 *)((char *)va[0].__gr_top + v13);
LABEL_18:
      qsnprintf(v15, *v16, "%d.%d", 9, 30);
      return;
    default:
      if ( a1 == 86 )
      {
        v8 = va[0].__gr_offs;
        va[0].__gr_offs = v8 + 8;
        if ( (int)v8 + 8 <= 0 )
        {
          v9 = (char *)va[0].__gr_top + v8;
        }
        else
        {
          v9 = va[0].__stack;
          va[0].__stack = (char *)va[0].__stack + 8;
        }
        (**(void (__fastcall ***)(_QWORD))*v9)(*v9);
      }
      return;
  }
}
// AB3DC: conditional instruction was optimized away because %var_2878@24.4==FFFFFFC8
// AB434: conditional instruction was optimized away because %var_2878@24.4==FFFFFFC8
// AB46C: conditional instruction was optimized away because %var_2878@24.4==FFFFFFC8
// AB4BC: conditional instruction was optimized away because %var_2878@24.4==FFFFFFC8
// AB514: conditional instruction was optimized away because %var_2878@24.4==FFFFFFC8
// AB7A8: variable 'v30' is possibly undefined
// 0: using guessed type int dword_0;
// 15F5C8: using guessed type char *off_15F5C8[12];
