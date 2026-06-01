char *__fastcall sub_2289830(__int128 a1, unsigned int a2)
{
  _BYTE *v3; // rax
  unsigned __int64 v4; // rdx
  __m128i si128; // xmm1
  __m128i v6; // xmm2
  char *v7; // rbx
  size_t v8; // r12
  char v9; // cl
  bool v11; // r15
  size_t v12; // rax
  _QWORD *v13; // rax
  char v14; // [rsp+7h] [rbp-99h]
  __int128 v15; // [rsp+8h] [rbp-98h] BYREF
  _BYTE *v16; // [rsp+18h] [rbp-88h]
  unsigned __int64 v17; // [rsp+20h] [rbp-80h]
  __m128i v18; // [rsp+28h] [rbp-78h] BYREF
  __m128i v19; // [rsp+38h] [rbp-68h] BYREF
  _BYTE *v20; // [rsp+48h] [rbp-58h]
  unsigned __int64 v21; // [rsp+50h] [rbp-50h]
  __m128i v22; // [rsp+58h] [rbp-48h]

  v18 = 0;
  v3 = (_BYTE *)sub_2288A70((unsigned __int8 *)a1, *((unsigned __int64 *)&a1 + 1), a2);
  v15 = a1;
  si128 = _mm_load_si128((const __m128i *)&v15);
  v18.m128i_i32[2] = a2;
  v6 = _mm_load_si128(&v18);
  v16 = v3;
  v17 = v4;
  v19 = si128;
  v20 = v3;
  v21 = v4;
  v22 = v6;
  if ( !*((_QWORD *)&a1 + 1) )
    return nullptr;
  v7 = v3;
  v8 = v4;
  if ( v4 <= 2 )
    goto LABEL_3;
  v9 = *v3;
  if ( *v3 != 47 )
  {
    if ( a2 == 1 )
      goto LABEL_7;
    v11 = v9 == 92 && a2 != 0;
    if ( v11 )
    {
      if ( v3[1] != 92 )
      {
LABEL_4:
        if ( !a2 )
        {
LABEL_5:
          v9 = *v7;
          goto LABEL_6;
        }
        v11 = 0;
        goto LABEL_23;
      }
      v12 = j__strlen(":");
      if ( v12 > v8 )
        goto LABEL_17;
    }
    else
    {
      if ( !a2 )
        goto LABEL_7;
      v14 = *v3;
      v12 = j__strlen(":");
      if ( v12 > v8 )
      {
        v9 = v14;
LABEL_6:
        if ( v9 != 47 )
        {
LABEL_7:
          if ( a2 <= 1 || v9 != 92 )
            return nullptr;
        }
        return v7;
      }
    }
LABEL_15:
    if ( !v12 || !memcmp(&v7[v8 - v12], ":", v12) )
      goto LABEL_17;
    goto LABEL_24;
  }
  if ( v3[1] != 47 )
  {
LABEL_3:
    if ( a2 == 1 )
    {
      if ( *v3 != 47 )
        return nullptr;
      return v7;
    }
    goto LABEL_4;
  }
  if ( a2 < 2 )
    goto LABEL_17;
  v11 = 1;
LABEL_23:
  v12 = j__strlen(":");
  if ( v12 <= v8 )
    goto LABEL_15;
LABEL_24:
  if ( !v11 )
    goto LABEL_5;
LABEL_17:
  v13 = (_QWORD *)sub_2289340((__int64)&v19);
  if ( a1 == __PAIR128__(v13[4], *v13) || *v20 != 47 && (a2 <= 1 || *v20 != 92) )
    return v7;
  return (char *)a1;
}
