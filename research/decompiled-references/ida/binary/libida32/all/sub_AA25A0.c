_QWORD *__fastcall sub_AA25A0(_QWORD *a1, unsigned int a2, __int64 a3)
{
  _QWORD *v3; // r12
  __int64 v5; // rdi
  char v6; // al
  _QWORD *v7; // r12
  __int64 (__fastcall ***v8)(); // rdi
  __int64 v9; // rax
  _BYTE *v10; // rdx
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  _BYTE *v13; // rsi
  __int64 v14; // rdx
  _QWORD v16[2]; // [rsp+0h] [rbp-B8h] BYREF
  int v17; // [rsp+10h] [rbp-A8h]
  __int16 v18; // [rsp+14h] [rbp-A4h]
  char v19; // [rsp+16h] [rbp-A2h]
  void *ptr; // [rsp+20h] [rbp-98h] BYREF
  __m128i si128; // [rsp+28h] [rbp-90h]
  _BYTE v22[24]; // [rsp+38h] [rbp-80h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+50h] [rbp-68h] BYREF
  int v24; // [rsp+58h] [rbp-60h]
  __int128 v25; // [rsp+60h] [rbp-58h]
  _BYTE *v26; // [rsp+70h] [rbp-48h]
  char v27; // [rsp+78h] [rbp-40h]
  int v28; // [rsp+7Ch] [rbp-3Ch]
  void **p_ptr; // [rsp+80h] [rbp-38h]

  v3 = (_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384DC0);
  ptr = v22;
  if ( (unsigned __int8)sub_F34220(v5) )
  {
    v6 = a2 <= 0x7F;
  }
  else if ( (unsigned __int8)sub_F34250(*v3) )
  {
    v6 = sub_21F5500(a2);
  }
  else
  {
    v6 = sub_21F5520(a2);
  }
  v7 = a1 + 2;
  if ( v6 )
  {
    v23 = (__int64 (__fastcall **)())v16;
    sub_21F5450(a2, &v23);
    sub_FA3B00(v16, (char *)v23 - (char *)v16, &ptr);
    v13 = ptr;
    v14 = si128.m128i_i64[0];
    *a1 = v7;
    sub_A9C700(a1, v13, (__int64)&v13[v14]);
  }
  else
  {
    v27 = 0;
    v25 = 0;
    v23 = &off_2BC1F40;
    v24 = 2;
    v28 = 1;
    v26 = nullptr;
    p_ptr = &ptr;
    sub_2257B70(&v23, 0, 0, 0);
    if ( *((_BYTE **)&v25 + 1) == v26 )
    {
      v8 = (__int64 (__fastcall ***)())sub_22581D0(&v23, "<", 1);
    }
    else
    {
      *v26 = 60;
      v8 = &v23;
      ++v26;
    }
    v16[1] = 0;
    v16[0] = a2;
    v17 = 1;
    v18 = 257;
    v19 = 1;
    v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(), _QWORD *))sub_22591B0)(v8, v16);
    v10 = *(_BYTE **)(v9 + 32);
    if ( v10 == *(_BYTE **)(v9 + 24) )
    {
      sub_22581D0(v9, ">", 1);
    }
    else
    {
      *v10 = 62;
      ++*(_QWORD *)(v9 + 32);
    }
    v11 = ptr;
    v12 = si128.m128i_i64[0];
    *a1 = v7;
    sub_A9C700(a1, v11, (__int64)&v11[v12]);
    v23 = (__int64 (__fastcall **)())&unk_2C4C288;
    sub_2257A60(&v23);
  }
  if ( ptr != v22 )
    free(ptr);
  return a1;
}

