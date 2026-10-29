__int64 __fastcall sub_948C70(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r13
  const __m128i *v7; // rax
  __int64 v8; // r13
  const __m128i *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD **v13; // rdi
  unsigned __int8 **v14; // rbp
  __int64 (*v15)(void); // rax
  __int64 v16; // r13
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  _QWORD **v20; // rdi
  __int64 (*v21)(void); // rax
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  char *v26; // rdx
  size_t v27; // rax
  __int64 result; // rax
  __int64 v29; // rax
  unsigned __int8 v30; // [rsp+Fh] [rbp-F9h]
  __int64 v31; // [rsp+18h] [rbp-F0h] BYREF
  __m128i v32; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v33; // [rsp+30h] [rbp-D8h]
  __m128i v34; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B8h]
  void *v36; // [rsp+60h] [rbp-A8h] BYREF
  size_t v37; // [rsp+68h] [rbp-A0h]
  char v38[16]; // [rsp+70h] [rbp-98h] BYREF
  void *v39; // [rsp+80h] [rbp-88h] BYREF
  __int64 v40; // [rsp+88h] [rbp-80h]
  char v41[16]; // [rsp+90h] [rbp-78h] BYREF
  void *v42; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v43; // [rsp+A8h] [rbp-60h]

  v6 = a1[23];
  v7 = (const __m128i *)sub_A1A5A0(v6, 24);
  v32 = _mm_loadu_si128(v7);
  v33 = v7[1].m128i_i64[0];
  sub_A1A5E0(v6, 24);
  v8 = a1[23];
  v9 = (const __m128i *)sub_A1A5A0(v8, 24);
  v34 = _mm_loadu_si128(v9);
  v35 = v9[1].m128i_i64[0];
  sub_A1A5E0(v8, 24);
  v10 = 56;
  v11 = sub_A1A5A0(a1[23], 56);
  if ( *(_OWORD *)&v34 != *(_OWORD *)&v32 )
  {
    v31 = sub_A16CE0(a1[25], a2);
    v12 = sub_A2E0C0(a1, &v31, 2271, 0);
    v13 = (_QWORD **)a1[3];
    v14 = (unsigned __int8 **)v12;
    v15 = (__int64 (*)(void))(*v13)[13];
    if ( (char *)v15 == (char *)sub_8D7E60 )
      v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v13[3] + 104LL))(v13[3]);
    else
      v16 = v15();
    if ( v34.m128i_i64[0] )
    {
      sub_97DB00(&v42, &v34, v16);
      v19 = *(_QWORD *)(v34.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v34.m128i_i64[0] + 8) & 4) != 0 )
        v19 = 0;
      sub_6A3290((__int64)&v36, (__int64)&v42, v16, *(_QWORD *)(v19 + 48), v17, v18);
      if ( (unsigned int)v42 <= 1 )
      {
        if ( !v14 )
          goto LABEL_10;
        goto LABEL_9;
      }
      sub_69F740((__int64)&v42);
      if ( !v14 )
      {
LABEL_10:
        v20 = (_QWORD **)a1[3];
        v21 = (__int64 (*)(void))(*v20)[13];
        if ( (char *)v21 == (char *)sub_8D7E60 )
          v22 = (*(__int64 (__fastcall **)(_QWORD *))(*v20[3] + 104LL))(v20[3]);
        else
          v22 = v21();
        if ( v32.m128i_i64[0] )
        {
          sub_97DB00(&v42, &v32, v22);
          v25 = *(_QWORD *)(v32.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v32.m128i_i64[0] + 8) & 4) != 0 )
            v25 = 0;
          sub_6A3290((__int64)&v39, (__int64)&v42, v22, *(_QWORD *)(v25 + 48), v23, v24);
          if ( (unsigned int)v42 > 1 )
          {
            sub_69F740((__int64)&v42);
            if ( !v14 )
            {
LABEL_19:
              if ( v39 != v41 )
                operator delete(v39, *(_QWORD *)v41 + 1LL);
              goto LABEL_21;
            }
          }
          else if ( !v14 )
          {
            goto LABEL_19;
          }
          v26 = (char *)v39;
          v27 = v40;
        }
        else
        {
          strcpy(v41, "nullptr");
          v39 = v41;
          v40 = 7;
          if ( !v14 )
          {
LABEL_21:
            if ( v36 != v38 )
              operator delete(v36, *(_QWORD *)v38 + 1LL);
            return 0;
          }
          v27 = 7;
          v26 = v41;
        }
        sub_838D50(v14, v26, v27);
        goto LABEL_19;
      }
    }
    else
    {
      strcpy(v38, "nullptr");
      v36 = v38;
      v37 = 7;
      if ( !v14 )
        goto LABEL_10;
    }
LABEL_9:
    sub_838D50(v14, v36, v37);
    goto LABEL_10;
  }
  LOBYTE(v10) = *(_BYTE *)(a3 + 112) != 2;
  v29 = sub_B9AC80(a3, v10);
  sub_B99210(&v42, v29);
  result = sub_987D60(a1, a2, v11, &v42);
  if ( v43 > 0x40 && v42 )
  {
    v30 = result;
    operator delete[](v42);
    return v30;
  }
  return result;
}

