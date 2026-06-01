__int64 __fastcall sub_14F7310(const __m128i *a1, _BYTE *a2, _QWORD *a3, __m128i a4)
{
  __int16 v6; // ax
  __int8 v7; // r12
  unsigned int v8; // eax
  unsigned int v9; // r15d
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _DWORD v18[10]; // [rsp+10h] [rbp-BD8h] BYREF
  void *v19; // [rsp+38h] [rbp-BB0h]
  __int64 v20; // [rsp+48h] [rbp-BA0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B90h] BYREF
  void *ptr; // [rsp+60h] [rbp-B88h]
  __int64 v23; // [rsp+70h] [rbp-B78h] BYREF
  void *v24; // [rsp+90h] [rbp-B58h]
  int v25; // [rsp+9Ch] [rbp-B4Ch]
  __int64 v26; // [rsp+B0h] [rbp-B38h]
  _QWORD v27[2]; // [rsp+140h] [rbp-AA8h] BYREF
  __int128 v28; // [rsp+150h] [rbp-A98h]
  __int64 v29; // [rsp+160h] [rbp-A88h]
  __int64 v30; // [rsp+168h] [rbp-A80h]
  __int64 v31; // [rsp+170h] [rbp-A78h]
  int v32; // [rsp+178h] [rbp-A70h]
  __int64 v33; // [rsp+180h] [rbp-A68h]
  __int64 v34; // [rsp+190h] [rbp-A58h]
  __int64 v35; // [rsp+198h] [rbp-A50h]
  int v36; // [rsp+1A0h] [rbp-A48h]
  __int64 v37; // [rsp+1A8h] [rbp-A40h]
  __int64 v38; // [rsp+1B0h] [rbp-A38h]
  int v39; // [rsp+1B8h] [rbp-A30h]
  char *v40; // [rsp+1C0h] [rbp-A28h]
  __int64 v41; // [rsp+1C8h] [rbp-A20h]
  char v42; // [rsp+1D0h] [rbp-A18h] BYREF
  __int16 v43; // [rsp+410h] [rbp-7D8h]
  __int64 v44; // [rsp+418h] [rbp-7D0h]
  char *v45; // [rsp+420h] [rbp-7C8h]
  __int64 v46; // [rsp+428h] [rbp-7C0h]
  char v47; // [rsp+430h] [rbp-7B8h] BYREF
  __int64 v48; // [rsp+440h] [rbp-7A8h]
  char *v49; // [rsp+448h] [rbp-7A0h]
  __int64 v50; // [rsp+450h] [rbp-798h]
  char v51; // [rsp+458h] [rbp-790h] BYREF
  _QWORD *v52; // [rsp+468h] [rbp-780h]
  __int64 v53; // [rsp+470h] [rbp-778h]
  __int64 v54; // [rsp+478h] [rbp-770h]
  __int64 v55; // [rsp+480h] [rbp-768h]
  __int64 v56; // [rsp+488h] [rbp-760h]
  __int64 v57; // [rsp+490h] [rbp-758h]
  __int64 v58; // [rsp+B98h] [rbp-50h]

  v6 = a1[2].m128i_i16[0];
  v7 = a1[129].m128i_i8[0];
  a1[129].m128i_i8[0] = 1;
  if ( v6 == 151 || v6 == 72 || v6 == 5 || v6 == 416 )
    sub_1565E90(a1, 0);
  LOBYTE(v8) = sub_13D0F50((__int64)a1[1].m128i_i64, *(_QWORD *)(a1->m128i_i64[1] + 56));
  v9 = v8;
  if ( !(_BYTE)v8 )
  {
    v14 = sub_14BFC10(a1, 0, a4);
    if ( v14 == 1 )
    {
      v9 = 1;
    }
    else
    {
      *a2 = 1;
      *a3 = v14 & 0xFFFFFFFFFFFFFFFELL;
    }
    goto LABEL_15;
  }
  sub_147A4A0((__int64)v18, (__int64)&a1[31].m128i_i64[1]);
  sub_14C64D0(a1, v18);
  if ( a1[2].m128i_i16[0] == 22 )
  {
    v15 = sub_14C87B0((__int64)a1, (__int64)v18);
    if ( v15 != 1 )
    {
      v16 = sub_14BFE70((__int64)a1, v15 & 0xFFFFFFFFFFFFFFFELL, a4);
      if ( v16 != 1 )
      {
        v17 = sub_14BE680(a1, v16 & 0xFFFFFFFFFFFFFFFELL, 1, a4);
        if ( v17 != 1 )
        {
          *a2 = 1;
          v9 = 0;
          *a3 = v17 & 0xFFFFFFFFFFFFFFFELL;
          if ( !v25 )
            goto LABEL_11;
LABEL_22:
          free(v24);
          goto LABEL_11;
        }
      }
    }
  }
  else
  {
    if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
    {
      qword_2CD8AE0[0] = 0;
      qword_2CD8AE0[1] = &qword_2CD8AE0[3];
      qword_2CD8AE0[2] = 0x200000000LL;
      __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
      __cxa_guard_release(&qword_2CD8AC8);
    }
    v52 = qword_2CD8AE0;
    v28 = 0;
    v35 = v26;
    v40 = &v42;
    v41 = 0x400000000LL;
    v27[0] = v18;
    v27[1] = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    LOBYTE(v43) = (((v18[0] >> 12) & 0x7F) == 69) | v43 & 0xFE;
    v45 = &v47;
    v48 = v21;
    v43 &= 0xFC01u;
    v46 = 0x200000000LL;
    v49 = &v51;
    v50 = 0x200000000LL;
    v34 = 0;
    v36 = 5;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v44 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v10 = a1[6].m128i_i64[0];
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v11 = sub_1E85500(v10, v27);
    v9 = v12;
    if ( !(_BYTE)v12 )
    {
      *a2 = 0;
      *a3 = v11;
    }
    sub_147A7A0((char *)v27);
  }
  if ( v25 )
    goto LABEL_22;
LABEL_11:
  sub_15DCED0(v21, &v21);
  if ( ptr != &v23 )
    free(ptr);
  if ( v19 != &v20 )
    free(v19);
LABEL_15:
  a1[129].m128i_i8[0] = v7;
  return v9;
}
