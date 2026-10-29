__int64 __fastcall sub_4F0B0(
        _QWORD *a1,
        char *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char *s,
        _QWORD *a9,
        unsigned int a10)
{
  __int64 v11; // rbx
  size_t v12; // r13
  unsigned __int8 v13; // r13
  __int64 v14; // r13
  __int64 name_ea; // rax
  __int64 v17; // [rsp-10h] [rbp-130h]
  char *v18; // [rsp-8h] [rbp-128h]
  __int16 v19; // [rsp+18h] [rbp-108h]
  unsigned __int16 v20; // [rsp+1Ch] [rbp-104h]
  char v21; // [rsp+2Ch] [rbp-F4h]
  void *v22; // [rsp+30h] [rbp-F0h] BYREF
  __int128 v23; // [rsp+38h] [rbp-E8h]
  _QWORD v24[2]; // [rsp+50h] [rbp-D0h] BYREF
  __m128i si128; // [rsp+60h] [rbp-C0h]
  __int64 v26; // [rsp+70h] [rbp-B0h]
  __int16 v27; // [rsp+78h] [rbp-A8h]
  __int128 v28; // [rsp+80h] [rbp-A0h]
  __int64 v29; // [rsp+90h] [rbp-90h]
  __int64 v30; // [rsp+98h] [rbp-88h]
  int v31; // [rsp+A0h] [rbp-80h]
  __int64 v32; // [rsp+A8h] [rbp-78h]
  int v33; // [rsp+B0h] [rbp-70h]
  __int64 v34; // [rsp+B8h] [rbp-68h]
  int v35; // [rsp+C0h] [rbp-60h]
  __int64 v36; // [rsp+C8h] [rbp-58h]
  int v37; // [rsp+D0h] [rbp-50h]
  __int64 v38; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v39; // [rsp+E8h] [rbp-38h]

  v11 = (__int64)a2;
  v21 = a4;
  v19 = a5;
  v20 = a6;
  v39 = __readfsqword(0x28u);
  v23 = 0;
  v22 = nullptr;
  if ( s )
  {
    v12 = strlen(s);
    a2 = s;
    v22 = (void *)qvector_reserve(&v22, 0, v12 + 1, 1);
    *(_QWORD *)&v23 = v12 + 1;
    memmove(v22, s, v12);
    *((_BYTE *)v22 + v12) = 0;
    if ( (unsigned __int64)v23 > 1 )
    {
      a2 = &byte_6;
      if ( (unsigned __int8)validate_name(&v22, 6, 1025) )
      {
        name_ea = get_name_ea(-1, v22);
        v14 = name_ea;
        if ( name_ea != -1 )
        {
          if ( (unsigned __int8)segtype(name_ea) == v21 )
            goto LABEL_10;
          if ( (unsigned __int8)is_spec_ea(v14) || (unsigned __int8)is_public_name(v14) )
          {
            if ( (debug & 0x10) != 0 )
              sub_E950((__int64)"Duplicate public/special name '%s'\n", (const char *)v22);
            goto LABEL_10;
          }
          set_name(v14, "", 0);
        }
        sub_4EE50(a1, v11, v20, -(v21 == 1), s, a9, a10);
        a4 = v17;
        a2 = v18;
        if ( v14 != -1 )
        {
          a2 = (char *)v22;
          set_name(v14, v22, 6144);
        }
      }
    }
  }
  v13 = getinf(9, a2, a3, a4, a5, a6);
  if ( v13 == 8 )
  {
    put_qword(v11, a3);
    if ( v11 != -1 )
    {
      if ( v21 == 10 )
      {
        create_data(v11, 805306368, 8, -1);
        goto LABEL_9;
      }
LABEL_7:
      if ( v21 != 11 )
      {
        if ( v21 != 1 )
          goto LABEL_9;
        if ( a7 )
        {
          v24[0] = v11;
          v24[1] = v11 + v13 - 1;
          si128 = _mm_load_si128((const __m128i *)&xmmword_6C000);
          v26 = 0;
          v27 = 0;
          v29 = 0xFFFFFFFFLL;
          v30 = 0;
          v31 = 0;
          v32 = 0;
          v33 = 0;
          v34 = 0;
          v35 = 0;
          v36 = 0;
          v37 = 0;
          v38 = 0;
          v28 = 0;
          add_func_ex(v24);
          goto LABEL_9;
        }
        if ( v19 != 1 )
          goto LABEL_9;
      }
      if ( a3 != 4 )
      {
        if ( a3 > 4 )
        {
          if ( a3 == 8 )
          {
            create_data(v11, 805306368, 4, -1);
            goto LABEL_9;
          }
          goto LABEL_36;
        }
        if ( a3 )
        {
          if ( a3 == 2 )
          {
            create_data(v11, 0x10000000, 4, -1);
            goto LABEL_9;
          }
LABEL_36:
          create_data(v11, 0, 4, -1);
        }
LABEL_9:
        v14 = v11;
        goto LABEL_10;
      }
LABEL_29:
      create_data(v11, 0x20000000, 4, -1);
      goto LABEL_9;
    }
  }
  else
  {
    put_dword(v11, a3);
    if ( v11 != -1 )
    {
      if ( v21 == 10 )
        goto LABEL_29;
      goto LABEL_7;
    }
  }
  v14 = -1;
LABEL_10:
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  return v14;
}

