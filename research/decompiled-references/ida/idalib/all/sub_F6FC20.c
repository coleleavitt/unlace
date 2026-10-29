void __fastcall sub_F6FC20(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4, char a5, unsigned int a6)
{
  char *v6; // rax
  __int64 v10; // rbx
  _BYTE *v11; // rax
  char v12; // r15
  unsigned __int8 v13; // al
  __int64 v14; // r8
  _BYTE *v15; // rdi
  size_t v16; // rcx
  _BYTE *v17; // r8
  unsigned __int64 v18; // rax
  _BYTE *v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  _BYTE *v23; // r8
  size_t v24; // rcx
  __int64 v25; // [rsp+10h] [rbp-148h]
  bool v26; // [rsp+20h] [rbp-138h]
  _BYTE *v27; // [rsp+20h] [rbp-138h]
  _BYTE *v28; // [rsp+20h] [rbp-138h]
  void *v29; // [rsp+20h] [rbp-138h]
  size_t v30; // [rsp+28h] [rbp-130h]
  size_t v31; // [rsp+28h] [rbp-130h]
  _BYTE *v32; // [rsp+28h] [rbp-130h]
  const char *v33; // [rsp+30h] [rbp-128h]
  __m128i v36[2]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v37; // [rsp+60h] [rbp-F8h]
  char v38; // [rsp+68h] [rbp-F0h]
  int v39; // [rsp+6Ch] [rbp-ECh]
  void **p_ptr; // [rsp+70h] [rbp-E8h]
  void *ptr; // [rsp+80h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+88h] [rbp-D0h]
  _BYTE v43[192]; // [rsp+98h] [rbp-C0h] BYREF

  v6 = ", ";
  v10 = a2;
  if ( (a4->m128i_i8[4] & 0x10) != 0 )
    v6 = ",";
  v33 = v6;
  v25 = a2 + 24 * a3;
  if ( a5 )
  {
    if ( a2 == v25 )
      return;
  }
  else
  {
    v11 = *(_BYTE **)(a1 + 32);
    if ( (unsigned __int64)v11 >= *(_QWORD *)(a1 + 24) )
    {
      sub_227BA10(a1, 60);
    }
    else
    {
      *(_QWORD *)(a1 + 32) = v11 + 1;
      *v11 = 60;
    }
    if ( a2 == v25 )
    {
LABEL_21:
      v19 = *(_BYTE **)(a1 + 32);
      v20 = *(_QWORD *)(a1 + 24);
      goto LABEL_22;
    }
  }
  v26 = 0;
  v12 = 1;
  do
  {
    while ( 1 )
    {
      v36[0].m128i_i32[2] = 2;
      ptr = v43;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      v38 = 0;
      v36[0].m128i_i64[0] = (__int64)&off_2BEBEE0;
      v39 = 1;
      p_ptr = &ptr;
      v37 = 0;
      v36[1] = 0;
      sub_227B8B0(v36, 0, 0, 0);
      if ( (*(_DWORD *)v10 & 0x7FFFFFFF) == 9 )
      {
        v21 = *(unsigned int *)(v10 + 4);
        if ( (_DWORD)v21 && !v12 )
        {
          sub_995540(a1, v33);
          v21 = *(unsigned int *)(v10 + 4);
        }
        sub_F6FC20(v36, *(_QWORD *)(v10 + 8), v21, a4, 1, a6);
      }
      else
      {
        if ( !v12 )
          sub_995540(a1, v33);
        v13 = sub_BBDA50((__int64)a4, 0, a6);
        sub_F1E030(v10, a4, v36, v13, v14, 0.0);
      }
      v15 = *(_BYTE **)(a1 + 32);
      v16 = (size_t)p_ptr[1];
      v17 = *p_ptr;
      v18 = *(_QWORD *)(a1 + 24);
      if ( v12 && v16 && *v17 == 58 )
      {
        if ( v18 <= (unsigned __int64)v15 )
        {
          v32 = *p_ptr;
          v29 = p_ptr[1];
          sub_227BA10(a1, 32);
          v22 = *(_QWORD *)(a1 + 24);
          v15 = *(_BYTE **)(a1 + 32);
          v16 = (size_t)v29;
          v17 = v32;
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v15 + 1;
          *v15 = 32;
          v22 = *(_QWORD *)(a1 + 24);
          v15 = *(_BYTE **)(a1 + 32);
        }
        if ( v16 > v22 - (__int64)v15 )
        {
LABEL_38:
          v30 = v16;
          v27 = v17;
          sub_227BF10(a1, v17, v16);
          v23 = v27;
          v24 = v30;
          goto LABEL_39;
        }
      }
      else
      {
        if ( v16 > v18 - (unsigned __int64)v15 )
          goto LABEL_38;
        if ( !v16 )
          goto LABEL_15;
      }
      v31 = v16;
      v28 = v17;
      memcpy(v15, v17, v16);
      v24 = v31;
      v23 = v28;
      *(_QWORD *)(a1 + 32) += v31;
LABEL_39:
      if ( (a4->m128i_i8[3] & 0x40) != 0 )
      {
        v26 = v23[v24 - 1] == 62;
        v12 = 0;
      }
      else
      {
        v12 = 0;
        v26 = 0;
      }
LABEL_15:
      a6 += a5 == 0;
      v36[0].m128i_i64[0] = (__int64)&unk_2C76288;
      sub_227B7A0(v36);
      if ( ptr == v43 )
        break;
      free(ptr);
      v10 += 24;
      if ( v25 == v10 )
        goto LABEL_17;
    }
    v10 += 24;
  }
  while ( v25 != v10 );
LABEL_17:
  if ( !a5 )
  {
    v19 = *(_BYTE **)(a1 + 32);
    v20 = *(_QWORD *)(a1 + 24);
    if ( v26 )
    {
      if ( v20 > (unsigned __int64)v19 )
      {
        *(_QWORD *)(a1 + 32) = v19 + 1;
        *v19 = 32;
        goto LABEL_21;
      }
      sub_227BA10(a1, 32);
      v19 = *(_BYTE **)(a1 + 32);
      v20 = *(_QWORD *)(a1 + 24);
    }
LABEL_22:
    if ( (unsigned __int64)v19 >= v20 )
    {
      sub_227BA10(a1, 62);
    }
    else
    {
      *(_QWORD *)(a1 + 32) = v19 + 1;
      *v19 = 62;
    }
  }
}
