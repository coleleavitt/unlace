__int64 __fastcall sub_B13F70(__int64 a1, int a2, int a3, int a4)
{
  unsigned __int64 v6; // r12
  int v7; // r9d
  unsigned int v8; // r12d
  void *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // r15
  void *v17; // r14
  __int64 v18; // rsi
  int v20; // [rsp+0h] [rbp-498h] BYREF
  int v21; // [rsp+8h] [rbp-490h] BYREF
  char v22; // [rsp+Ch] [rbp-48Ch]
  _DWORD v23[5]; // [rsp+10h] [rbp-488h] BYREF
  __m128i v24; // [rsp+30h] [rbp-468h] BYREF
  _QWORD *v25; // [rsp+40h] [rbp-458h]
  unsigned __int64 v26; // [rsp+48h] [rbp-450h]
  int v27; // [rsp+50h] [rbp-448h]
  __int128 v28; // [rsp+58h] [rbp-440h]
  _QWORD v29[2]; // [rsp+68h] [rbp-430h] BYREF
  _QWORD v30[3]; // [rsp+78h] [rbp-420h] BYREF
  _QWORD v31[129]; // [rsp+90h] [rbp-408h] BYREF

  v31[0] = 0;
  v21 = 1000;
  v22 = 1;
  sub_15B6C70(&v21, v31);
  sub_18572D0(v31);
  sub_B04810((__int64)v31, a1);
  v6 = *(_QWORD *)(a1 + 104);
  v25 = v31;
  v26 = v6;
  v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)v6);
  sub_180C5A0(&v20, "pb");
  v27 = sub_15DA4C0(v6 + 560, &v20);
  v29[0] = 0;
  v29[1] = 0;
  v30[0] = 1;
  v30[1] = 0;
  v28 = 0;
  v8 = sub_B1D870(
         (unsigned int)v23,
         0,
         a2,
         a3,
         a4,
         v7,
         v20,
         v21,
         0,
         (unsigned int)&v24,
         v23[4],
         0,
         v24.m128i_i64[0],
         v24.m128i_i64[1],
         (__int64)v25);
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v29);
  sub_182CBA0(v9, v30);
  v10 = *((_QWORD *)&v28 + 1);
  if ( *((_QWORD *)&v28 + 1) )
  {
    v11 = *(unsigned int *)(*((_QWORD *)&v28 + 1) - 4LL);
    if ( (_DWORD)v11 )
    {
      v12 = *((_QWORD *)&v28 + 1) + 16 * v11;
      do
      {
        v13 = v10;
        v10 += 16;
        sub_15D0DF0(v13);
      }
      while ( v10 != v12 );
      v10 = *((_QWORD *)&v28 + 1);
    }
    sub_186B220((void *)(v10 - 8));
  }
  v14 = v28;
  if ( (_QWORD)v28 )
  {
    v15 = *(unsigned int *)(v28 - 4);
    if ( (_DWORD)v15 )
    {
      v16 = v28 + 32 * v15;
      do
      {
        v17 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v14);
        v18 = v14 + 16;
        v14 += 32;
        sub_182CBA0(v17, v18);
      }
      while ( v16 != v14 );
      v14 = v28;
    }
    sub_186B220((void *)(v14 - 8));
  }
  sub_B085B0((__int64)v31);
  return v8;
}

