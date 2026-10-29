__int64 __fastcall get_config_value(int *a1, const char *a2)
{
  int *v2; // rbx
  __int64 result; // rax
  int v4; // eax
  char *v5; // rbp
  unsigned __int64 v6; // rbx
  int v7; // edx
  int v8; // eax
  char v9; // bl
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // rax
  _QWORD *v15; // rbx
  size_t v16; // rax
  size_t v17; // r14
  size_t v18; // r12
  void *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // r12
  size_t v22; // rbx
  unsigned __int8 v23; // al
  int v24; // edx
  unsigned __int16 v25; // ax
  int v26; // edx
  void *v27; // rax

  v2 = &off_2B31240;
  while ( strcmp(a2, *(const char **)v2) )
  {
    v2 += 10;
    if ( &unk_2B324D8 == (_UNKNOWN *)v2 )
      return 0;
  }
  if ( !a1 )
    return 1;
  v4 = v2[4];
  v5 = *((char **)v2 + 1);
  if ( (v4 & 0x40000) != 0 )
    v5 += *(_QWORD *)(qword_2CCB598 + 1672) + 40;
  switch ( v4 & 0xF )
  {
    case 1:
      if ( (v4 & 0x1000000) != 0 )
      {
        v20 = operator new(0x18u);
        *(_QWORD *)v20 = 0;
        v21 = (_QWORD *)v20;
        *(_OWORD *)(v20 + 8) = 0;
        v22 = *((_QWORD *)v5 + 1);
        if ( v22 )
        {
          v27 = (void *)qalloc_or_throw(*((_QWORD *)v5 + 1));
          *v21 = v27;
          v21[2] = v22;
          memcpy(v27, *(const void **)v5, v22);
          v21[1] = v22;
        }
        if ( *a1 )
          jvalue_t_clear(a1);
        *a1 = 2;
        *((_QWORD *)a1 + 1) = v21;
      }
      else
      {
        v14 = operator new(0x18u);
        *(_QWORD *)v14 = 0;
        v15 = (_QWORD *)v14;
        *(_OWORD *)(v14 + 8) = 0;
        if ( v5 )
        {
          v16 = strlen(v5);
          v17 = v16 + 1;
          v18 = v16;
          v19 = (void *)qvector_reserve(v15, 0, v16 + 1, 1);
          *v15 = v19;
          v15[1] = v17;
          memmove(v19, v5, v18);
          *(_BYTE *)(*v15 + v18) = 0;
        }
        if ( *a1 )
          jvalue_t_clear(a1);
        *a1 = 2;
        *((_QWORD *)a1 + 1) = v15;
      }
      return 1;
    case 2:
      v10 = v4 & 0x3000000;
      v11 = v2[4] & 0x8000000;
      v12 = v10;
      if ( v10 == (_DWORD)&loc_1000000 )
      {
        v23 = *v5;
        v24 = *a1;
        if ( v11 )
        {
          v6 = v23;
          if ( !v24 )
          {
LABEL_12:
            *a1 = 1;
            *((_QWORD *)a1 + 1) = v6;
            return 1;
          }
        }
        else
        {
          v6 = (char)v23;
          if ( !v24 )
            goto LABEL_12;
        }
LABEL_40:
        jvalue_t_clear(a1);
        goto LABEL_12;
      }
      if ( v10 == 0x2000000 )
      {
        v25 = *(_WORD *)v5;
        v26 = *a1;
        if ( v11 )
        {
          v6 = v25;
          if ( !v26 )
            goto LABEL_12;
        }
        else
        {
          v6 = (__int16)v25;
          if ( !v26 )
            goto LABEL_12;
        }
        goto LABEL_40;
      }
      result = 0;
      if ( !v12 )
      {
        v13 = *(_DWORD *)v5;
        v7 = *a1;
        if ( v11 )
        {
          v6 = v13;
LABEL_11:
          if ( !v7 )
            goto LABEL_12;
        }
        else
        {
          v6 = (int)v13;
          if ( !v7 )
            goto LABEL_12;
        }
        goto LABEL_40;
      }
      return result;
    case 3:
      v8 = v4 & 0xF000000;
      if ( v8 == 0x2000000 )
      {
        v9 = ((unsigned __int16)v2[6] & *(_WORD *)v5) == 0;
      }
      else if ( v8 > 0x2000000 )
      {
        if ( v8 != 50331648 )
          return 0;
        v9 = *v5;
      }
      else if ( v8 )
      {
        v9 = ((unsigned __int8)v2[6] & (unsigned __int8)*v5) == 0;
      }
      else
      {
        v9 = (v2[6] & *(_DWORD *)v5) == 0;
      }
      if ( *a1 )
        jvalue_t_clear(a1);
      *a1 = 5;
      *((_BYTE *)a1 + 8) = v9;
      return 1;
    case 5:
      v6 = *(_QWORD *)v5;
      v7 = *a1;
      goto LABEL_11;
    case 7:
      jvalue_t_copy(a1, v5);
      return 1;
    default:
      return 0;
  }
}
