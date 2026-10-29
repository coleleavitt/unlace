char *__fastcall sub_2289AE0(__int128 a1, unsigned int a2)
{
  _BYTE *v3; // rax
  unsigned __int64 v4; // rdx
  __m128i si128; // xmm1
  __m128i v6; // xmm2
  char *v7; // rbx
  char v8; // al
  char v9; // cl
  bool v10; // r15
  _QWORD *v12; // rax
  __int128 v13; // [rsp+0h] [rbp-98h] BYREF
  _BYTE *v14; // [rsp+10h] [rbp-88h]
  unsigned __int64 v15; // [rsp+18h] [rbp-80h]
  __m128i v16; // [rsp+20h] [rbp-78h] BYREF
  __m128i v17; // [rsp+30h] [rbp-68h] BYREF
  _BYTE *v18; // [rsp+40h] [rbp-58h]
  unsigned __int64 v19; // [rsp+48h] [rbp-50h]
  __m128i v20; // [rsp+50h] [rbp-48h]

  v16 = 0;
  v3 = (_BYTE *)sub_2288A70((unsigned __int8 *)a1, *((unsigned __int64 *)&a1 + 1), a2);
  v13 = a1;
  si128 = _mm_load_si128((const __m128i *)&v13);
  v16.m128i_i32[2] = a2;
  v6 = _mm_load_si128(&v16);
  v14 = v3;
  v15 = v4;
  v17 = si128;
  v18 = v3;
  v19 = v4;
  v20 = v6;
  if ( !*((_QWORD *)&a1 + 1) )
    return nullptr;
  v7 = v3;
  if ( v4 <= 2 )
  {
LABEL_11:
    if ( a2 == 1 )
    {
      if ( *v7 == 47 )
        return v7;
      return nullptr;
    }
LABEL_12:
    if ( a2 && v4 && v7[v4 - 1] == 58 )
    {
      v10 = 0;
      goto LABEL_20;
    }
    v8 = *v7;
LABEL_14:
    v9 = v8;
    goto LABEL_15;
  }
  v8 = *v3;
  v9 = v8;
  if ( v8 == 47 )
  {
    if ( v7[1] == 47 )
    {
      v10 = 1;
      goto LABEL_20;
    }
    goto LABEL_11;
  }
  if ( a2 == 1 )
  {
LABEL_7:
    if ( a2 <= 1 || v9 != 92 )
      return nullptr;
    return v7;
  }
  v10 = a2 != 0 && v8 == 92;
  if ( v10 )
  {
    if ( v7[1] == 92 )
      goto LABEL_20;
    goto LABEL_12;
  }
  if ( !a2 )
    goto LABEL_7;
  if ( v7[v4 - 1] != 58 )
    goto LABEL_14;
LABEL_20:
  v12 = (_QWORD *)sub_2289340((__int64)&v17);
  if ( __PAIR128__(v12[4], *v12) == a1 || *v18 != 47 && (a2 <= 1 || *v18 != 92) )
  {
    if ( !v10 )
    {
      v9 = *v7;
LABEL_15:
      if ( v9 != 47 )
        goto LABEL_7;
      return v7;
    }
    return nullptr;
  }
  return v18;
}
