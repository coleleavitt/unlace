__int64 __fastcall sub_211AF50(_QWORD *a1, __int64 a2, __int64 a3, char *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v9; // rbp
  void (*v11)(); // rax
  char v12; // al
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // r12
  char v20; // al
  __int64 v21; // rbp
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rdx
  __m128i v26; // [rsp+0h] [rbp-58h] BYREF
  char *v27; // [rsp+10h] [rbp-48h]
  __int16 v28; // [rsp+20h] [rbp-38h]

  v9 = a2;
  if ( *(_BYTE *)(a1[1] + 1882LL) == 1 )
    sub_211A1C0(a1);
  v11 = *(void (**)())(*a1 + 120LL);
  if ( v11 != nullsub_1401 )
    ((void (__fastcall *)(_QWORD *, __int64, __int64))v11)(a1, a3, 1);
  v12 = *(_BYTE *)(a2 + 32);
  v13 = a1[1];
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      a4 = (_BYTE *)(&qword_100 + 3);
      v26.m128i_i64[0] = (__int64)"_start";
      v28 = 259;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 33) == 1 )
      {
        v6 = *(_QWORD *)(a2 + 8);
        v25 = *(_QWORD *)a2;
      }
      else
      {
        v25 = a2;
        v12 = 2;
      }
      a4 = "_start";
      v26.m128i_i64[0] = v25;
      v26.m128i_i64[1] = v6;
      v27 = "_start";
      LOBYTE(v28) = v12;
      HIBYTE(v28) = 3;
    }
  }
  else
  {
    v28 = 256;
  }
  v14 = sub_21085E0(v13, &v26, 1, (__int64)a4, a5, a6);
  v18 = a1[1];
  v19 = v14;
  v20 = *(_BYTE *)(a2 + 32);
  if ( v20 )
  {
    if ( v20 == 1 )
    {
      v26.m128i_i64[0] = (__int64)"_end";
      v28 = 259;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 33) == 1 )
      {
        v7 = *(_QWORD *)(a2 + 8);
        v9 = *(_QWORD *)a2;
      }
      else
      {
        v20 = 2;
      }
      v26.m128i_i64[0] = v9;
      v26.m128i_i64[1] = v7;
      v27 = (char *)"_end";
      LOBYTE(v28) = v20;
      HIBYTE(v28) = 3;
    }
  }
  else
  {
    v28 = 256;
  }
  v21 = sub_21085E0(v18, &v26, 1, v15, v16, v17);
  (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD, __int64, __int64, __int64, __int64, char *))(*a1 + 824LL))(
    a1,
    v21,
    v19,
    *(_BYTE *)(a1[1] + 1882LL) == 0 ? 4 : 8,
    v22,
    v23,
    v26.m128i_i64[0],
    v26.m128i_i64[1],
    v27);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 208LL))(a1, v19, 0);
  return v21;
}
