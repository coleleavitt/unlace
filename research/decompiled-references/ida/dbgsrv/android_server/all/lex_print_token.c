/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_print_token
// Address: 0x0000000000086154

//----- (0000000000086154) ----------------------------------------------------
char *__fastcall lex_print_token(__int64 a1, __int64 a2)
{
  unsigned int v4; // w8
  __int64 v5; // x0
  unsigned __int64 v6; // x21
  size_t v7; // x20
  void *v8; // x0
  unsigned __int64 v9; // x11
  unsigned __int64 v10; // x10
  void **p_ptr; // x8
  int v12; // w9
  char v13; // w12
  unsigned __int64 v14; // x11
  __int64 v15; // x8
  char *v16; // x1
  int v17; // w2
  const char *v18; // x3
  const char *v19; // x2
  char *v20; // x2
  __int64 v21; // x0
  unsigned __int64 v22; // x21
  unsigned __int64 v23; // x22
  char *v24; // x20
  void *v25; // x0
  __int64 v26; // x0
  unsigned __int64 v27; // x21
  pthread_mutex_t *v28; // x1
  __int64 v29; // x0
  unsigned __int64 v30; // x21
  pthread_mutex_t *v32; // x9
  char *v33; // x9
  void *ptr; // [xsp+0h] [xbp-460h] BYREF
  __int64 v35; // [xsp+8h] [xbp-458h]
  __int64 v36; // [xsp+10h] [xbp-450h]
  pthread_mutex_t v37; // [xsp+18h] [xbp-448h] BYREF
  char v38; // [xsp+417h] [xbp-49h] BYREF
  __int64 v39; // [xsp+418h] [xbp-48h] BYREF

  v39 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(unsigned __int16 *)(a2 + 24);
  switch ( *(_WORD *)(a2 + 24) )
  {
    case 1:
      v5 = __strlen_chk("<END>", 6);
      if ( !v5 )
        goto LABEL_61;
      v6 = v5 + 1;
      v7 = v5;
      if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v5 + 1) )
      {
        v8 = *(void **)a1;
      }
      else
      {
        v8 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v6, 1u);
        *(_QWORD *)a1 = v8;
      }
      v28 = (pthread_mutex_t *)"<END>";
      *(_QWORD *)(a1 + 8) = v6;
      goto LABEL_70;
    case 2:
      goto LABEL_37;
    case 3:
      sub_3C748(a1, "0x%a", *(_QWORD *)(a2 + 32));
      goto LABEL_52;
    case 4:
      v35 = 0;
      v36 = 0;
      ptr = nullptr;
      v15 = *(_QWORD *)(a2 + 8);
      if ( v15 )
        v16 = *(char **)a2;
      else
        v16 = &byte_F154B;
      if ( v15 )
        v17 = v15 - 1;
      else
        v17 = 0;
      qstr2user((__int64)&ptr, v16, v17);
      if ( v35 )
        v18 = (const char *)ptr;
      else
        v18 = &byte_F154B;
      if ( *(_BYTE *)(a2 + 40) )
        v19 = "L";
      else
        v19 = "";
      sub_3C748(a1, "%s\"%s\"", v19, v18);
      if ( !ptr )
        goto LABEL_52;
      v35 = 0;
      qfree(ptr);
      ptr = nullptr;
      v36 = 0;
      if ( !*(_QWORD *)(a1 + 8) )
        return &byte_F154B;
      return *(char **)a1;
    case 5:
      v9 = *(_QWORD *)(a2 + 32);
      if ( v9 )
      {
        v10 = 8;
        p_ptr = &ptr;
        v12 = 2;
        if ( v9 < 0x100 )
          v10 = 1;
        v13 = 1;
        while ( 1 )
        {
          v14 = v9 >> (8 * ((unsigned __int8)v10 - v13));
          if ( (_BYTE)v14 )
          {
            *(_BYTE *)p_ptr = v14;
            p_ptr = (void **)((char *)p_ptr + 1);
          }
          v13 = v12;
          if ( v10 < v12 )
            break;
          v9 = *(_QWORD *)(a2 + 32);
          ++v12;
        }
        *(_BYTE *)p_ptr = 0;
        str2user(&v37, (char *)&ptr, 1024);
        sub_3C748(a1, "'%s'", &v37);
        goto LABEL_52;
      }
      v29 = __strlen_chk("'\\0'", 5);
      if ( !v29 )
        goto LABEL_61;
      v30 = v29 + 1;
      v7 = v29;
      if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v29 + 1) )
      {
        v8 = *(void **)a1;
      }
      else
      {
        v8 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v30, 1u);
        *(_QWORD *)a1 = v8;
      }
      *(_QWORD *)(a1 + 8) = v30;
      v28 = (pthread_mutex_t *)"'\\0'";
      goto LABEL_70;
    case 6:
      if ( *(_QWORD *)(a2 + 8) )
        v20 = *(char **)a2;
      else
        v20 = &byte_F154B;
      sub_3C748(a1, "@type %s", v20);
      goto LABEL_52;
    case 7:
      realtoasc(&v37, 0x400u, (int8x16_t *)(a2 + 48), 50);
      v21 = __strlen_chk(&v37, 1024);
      if ( v21 )
        goto LABEL_34;
      goto LABEL_61;
    case 8:
      sub_3C748(a1, "0x%llxi64", *(_QWORD *)(a2 + 48));
      goto LABEL_52;
    default:
      if ( v4 - 128 >= 0x380 )
      {
        if ( v4 == 11868 )
        {
          v26 = __strlen_chk("...", 4);
          if ( v26 )
          {
            v27 = v26 + 1;
            v7 = v26;
            if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v26 + 1) )
            {
              v8 = *(void **)a1;
            }
            else
            {
              v8 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v27, 1u);
              *(_QWORD *)a1 = v8;
            }
            *(_QWORD *)(a1 + 8) = v27;
            v28 = (pthread_mutex_t *)"...";
LABEL_70:
            memmove(v8, v28, v7);
            *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
            if ( *(_QWORD *)(a1 + 8) )
              return *(char **)a1;
            return &byte_F154B;
          }
        }
        else
        {
          v32 = &v37;
          if ( v4 >= 0x100 )
          {
            v32 = (pthread_mutex_t *)((char *)&v37.__lock + 1);
            v37.__size[0] = HIBYTE(*(_WORD *)(a2 + 24));
          }
          v32->__size[0] = v4;
          v33 = &v32->__size[1];
          if ( v33 >= (char *)&v39 )
          {
            v33 = &v38;
            v38 = 0;
          }
          *v33 = 0;
          v21 = __strlen_chk(&v37, 1024);
          if ( v21 )
          {
LABEL_34:
            v22 = v21 + 1;
            v7 = v21;
            if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v21 + 1) )
            {
              v8 = *(void **)a1;
            }
            else
            {
              v8 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v22, 1u);
              *(_QWORD *)a1 = v8;
            }
            *(_QWORD *)(a1 + 8) = v22;
            v28 = &v37;
            goto LABEL_70;
          }
        }
LABEL_61:
        *(_QWORD *)(a1 + 8) = 0;
        if ( *(_QWORD *)(a1 + 8) )
          return *(char **)a1;
        return &byte_F154B;
      }
LABEL_37:
      if ( a2 != a1 )
      {
        v23 = *(_QWORD *)(a2 + 8);
        if ( v23 >= 2 )
        {
          v24 = *(char **)a2;
          if ( *(_QWORD *)(a1 + 16) >= v23 )
          {
            v25 = *(void **)a1;
          }
          else
          {
            v25 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v23, 1u);
            *(_QWORD *)a1 = v25;
          }
          *(_QWORD *)(a1 + 8) = v23;
          memmove(v25, v24, v23 - 1);
          *(_BYTE *)(*(_QWORD *)a1 + v23 - 1) = 0;
          if ( !*(_QWORD *)(a1 + 8) )
            return &byte_F154B;
          return *(char **)a1;
        }
        goto LABEL_61;
      }
LABEL_52:
      if ( *(_QWORD *)(a1 + 8) )
        return *(char **)a1;
      return &byte_F154B;
  }
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
