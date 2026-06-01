__int64 __fastcall get_config_value(int *a1, const char *a2)
{
  int *v3; // rbx
  const char *v4; // rsi
  __int64 result; // rax
  int v6; // eax
  char *v7; // rbp
  unsigned __int64 v8; // rbx
  int v9; // edx
  int v10; // eax
  char v11; // bl
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // rax
  _QWORD *v17; // rbx
  size_t v18; // rax
  size_t v19; // r14
  size_t v20; // r12
  void *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // r12
  size_t v24; // rbx
  unsigned __int8 v25; // al
  int v26; // edx
  unsigned __int16 v27; // ax
  int v28; // edx
  void *v29; // rax

  v3 = &off_2B07280;
  while ( 1 )
  {
    v4 = *(const char **)v3;
    if ( !strcmp(a2, *(const char **)v3) )
      break;
    v3 += 10;
    if ( &unk_2B08518 == (_UNKNOWN *)v3 )
      return 0;
  }
  if ( !a1 )
    return 1;
  v6 = v3[4];
  v7 = *((char **)v3 + 1);
  if ( (v6 & 0x40000) != 0 )
    v7 += *(_QWORD *)(qword_2CA1698 + 1480) + 40;
  switch ( v6 & 0xF )
  {
    case 1:
      if ( (v6 & 0x1000000) != 0 )
      {
        v22 = operator new(0x18u);
        *(_QWORD *)v22 = 0;
        v23 = (_QWORD *)v22;
        *(_OWORD *)(v22 + 8) = 0;
        v24 = *((_QWORD *)v7 + 1);
        if ( v24 )
        {
          v29 = (void *)qalloc_or_throw(*((_QWORD *)v7 + 1), v4);
          *v23 = v29;
          v23[2] = v24;
          memcpy(v29, *(const void **)v7, v24);
          v23[1] = v24;
        }
        if ( *a1 )
          jvalue_t_clear(a1);
        *a1 = 2;
        *((_QWORD *)a1 + 1) = v23;
      }
      else
      {
        v16 = operator new(0x18u);
        *(_QWORD *)v16 = 0;
        v17 = (_QWORD *)v16;
        *(_OWORD *)(v16 + 8) = 0;
        if ( v7 )
        {
          v18 = strlen(v7);
          v19 = v18 + 1;
          v20 = v18;
          v21 = (void *)qvector_reserve(v17, 0, v18 + 1, 1);
          *v17 = v21;
          v17[1] = v19;
          memmove(v21, v7, v20);
          *(_BYTE *)(*v17 + v20) = 0;
        }
        if ( *a1 )
          jvalue_t_clear(a1);
        *a1 = 2;
        *((_QWORD *)a1 + 1) = v17;
      }
      return 1;
    case 2:
      v12 = v6 & 0x3000000;
      v13 = v3[4] & 0x8000000;
      v14 = v12;
      if ( v12 == 0x1000000 )
      {
        v25 = *v7;
        v26 = *a1;
        if ( v13 )
        {
          v8 = v25;
          if ( !v26 )
          {
LABEL_12:
            *a1 = 1;
            *((_QWORD *)a1 + 1) = v8;
            return 1;
          }
        }
        else
        {
          v8 = (char)v25;
          if ( !v26 )
            goto LABEL_12;
        }
LABEL_40:
        jvalue_t_clear(a1);
        goto LABEL_12;
      }
      if ( v12 == (_DWORD)&loc_2000000 )
      {
        v27 = *(_WORD *)v7;
        v28 = *a1;
        if ( v13 )
        {
          v8 = v27;
          if ( !v28 )
            goto LABEL_12;
        }
        else
        {
          v8 = (__int16)v27;
          if ( !v28 )
            goto LABEL_12;
        }
        goto LABEL_40;
      }
      result = 0;
      if ( !v14 )
      {
        v15 = *(_DWORD *)v7;
        v9 = *a1;
        if ( v13 )
        {
          v8 = v15;
LABEL_11:
          if ( !v9 )
            goto LABEL_12;
        }
        else
        {
          v8 = (int)v15;
          if ( !v9 )
            goto LABEL_12;
        }
        goto LABEL_40;
      }
      return result;
    case 3:
      v10 = v6 & 0xF000000;
      if ( v10 == (_DWORD)&loc_2000000 )
      {
        v11 = ((unsigned __int16)v3[6] & *(_WORD *)v7) == 0;
      }
      else if ( v10 > (int)&loc_2000000 )
      {
        if ( v10 != 50331648 )
          return 0;
        v11 = *v7;
      }
      else if ( v10 )
      {
        v11 = ((unsigned __int8)v3[6] & (unsigned __int8)*v7) == 0;
      }
      else
      {
        v11 = (v3[6] & *(_DWORD *)v7) == 0;
      }
      if ( *a1 )
        jvalue_t_clear(a1);
      *a1 = 5;
      *((_BYTE *)a1 + 8) = v11;
      return 1;
    case 5:
      v8 = *(_QWORD *)v7;
      v9 = *a1;
      goto LABEL_11;
    case 7:
      jvalue_t_copy(a1, v7);
      return 1;
    default:
      return 0;
  }
}

