_QWORD *__fastcall sub_2253560(_QWORD *a1, _QWORD **a2)
{
  __int16 v2; // ax
  bool v3; // zf
  __int64 v4; // r13
  _BYTE *v5; // rbp
  _BYTE *v6; // rax
  unsigned __int8 v7; // cl
  const char *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  const char *v14; // rdx
  _BYTE *v15; // rax
  _BYTE *v16; // r12
  signed __int64 v17; // rbp
  __int64 (__fastcall **v18)(); // [rsp+0h] [rbp-188h] BYREF
  int v19; // [rsp+8h] [rbp-180h]
  __int128 v20; // [rsp+10h] [rbp-178h]
  __int64 v21; // [rsp+20h] [rbp-168h]
  char v22; // [rsp+28h] [rbp-160h]
  int v23; // [rsp+2Ch] [rbp-15Ch]
  void **p_ptr; // [rsp+30h] [rbp-158h]
  void *ptr; // [rsp+40h] [rbp-148h] BYREF
  _BYTE n[24]; // [rsp+48h] [rbp-140h] BYREF
  __int64 v27; // [rsp+60h] [rbp-128h]
  char v28; // [rsp+68h] [rbp-120h]
  int v29; // [rsp+6Ch] [rbp-11Ch]
  _QWORD *v30; // [rsp+70h] [rbp-118h]

  v2 = *((_WORD *)a2 + 16);
  if ( v2 == 260 )
  {
    v14 = (const char *)*a2;
    v15 = a1 + 2;
    *a1 = a1 + 2;
    v16 = *(_BYTE **)v14;
    v17 = *((_QWORD *)v14 + 1);
    if ( v17 + *(_QWORD *)v14 && !v16 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v17 > 0xF )
    {
      if ( v17 < 0 )
        goto LABEL_41;
      v15 = (_BYTE *)operator new(v17 + 1);
      a1[2] = v17;
      *a1 = v15;
    }
    else
    {
      if ( v17 == 1 )
      {
        *((_BYTE *)a1 + 16) = *v16;
LABEL_26:
        a1[1] = v17;
        v15[v17] = 0;
        return a1;
      }
      if ( !v17 )
        goto LABEL_26;
    }
    memcpy(v15, v16, v17);
    v15 = (_BYTE *)*a1;
    goto LABEL_26;
  }
  if ( v2 != 263 )
  {
    v3 = *((_BYTE *)a2 + 33) == 1;
    ptr = &n[16];
    *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    if ( v3 && (v7 = *((_BYTE *)a2 + 32), v7 <= 6u) && ((1LL << v7) & 0x7A) != 0 )
    {
      switch ( *((_BYTE *)a2 + 32) )
      {
        case 0:
        case 2:
        case 5:
        case 6:
          v4 = (__int64)a2[1];
          v5 = *a2;
          break;
        case 1:
          goto LABEL_17;
        case 3:
          v5 = *a2;
          if ( !*a2 )
          {
LABEL_17:
            v6 = a1 + 2;
            goto LABEL_18;
          }
          v4 = strlen((const char *)*a2);
          break;
        case 4:
          v5 = (_BYTE *)**a2;
          v4 = (*a2)[1];
          break;
        default:
          goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      v20 = 0;
      v19 = 2;
      v18 = &off_2BEBEE0;
      v22 = 0;
      v23 = 1;
      v21 = 0;
      p_ptr = &ptr;
      sub_227B8B0(&v18, 0, 0, 0);
      sub_2253400((__int64)&v18, (unsigned __int64)*a2, (size_t)a2[1], *((_BYTE *)a2 + 32));
      sub_2253400((__int64)&v18, (unsigned __int64)a2[2], (size_t)a2[3], *((_BYTE *)a2 + 33));
      v18 = (__int64 (__fastcall **)())&unk_2C76288;
      sub_227B7A0(&v18);
      v4 = *(_QWORD *)n;
      v5 = ptr;
    }
    v6 = a1 + 2;
    if ( v5 )
    {
      *a1 = v6;
      if ( (unsigned __int64)v4 <= 0xF )
      {
        if ( v4 == 1 )
        {
          *((_BYTE *)a1 + 16) = *v5;
LABEL_9:
          a1[1] = v4;
          v6[v4] = 0;
          goto LABEL_19;
        }
        if ( !v4 )
          goto LABEL_9;
LABEL_29:
        memcpy(v6, v5, v4);
        v6 = (_BYTE *)*a1;
        goto LABEL_9;
      }
      if ( v4 >= 0 )
      {
        v6 = (_BYTE *)operator new(v4 + 1);
        a1[2] = v4;
        *a1 = v6;
        goto LABEL_29;
      }
LABEL_41:
      std::__throw_length_error("basic_string::_M_create");
    }
LABEL_18:
    *a1 = v6;
    a1[1] = 0;
    *((_BYTE *)a1 + 16) = 0;
LABEL_19:
    if ( ptr != &n[16] )
      free(ptr);
    return a1;
  }
  v8 = (const char *)*a2;
  *a1 = a1 + 2;
  a1[1] = 0;
  *((_BYTE *)a1 + 16) = 0;
  v30 = a1;
  *(_OWORD *)&n[8] = 0;
  ptr = &off_2BEBE68;
  *(_DWORD *)n = 0;
  v28 = 0;
  v29 = 1;
  v27 = 0;
  sub_227B8B0(&ptr, 0, 0, 0);
  sub_227C750(&ptr, v8);
  if ( v27 != *(_QWORD *)&n[8] )
    sub_227B9F0(&ptr, v8, v9, v10, v11, v12, v18);
  ptr = &off_2BEBE68;
  sub_227B7A0(&ptr);
  return a1;
}
