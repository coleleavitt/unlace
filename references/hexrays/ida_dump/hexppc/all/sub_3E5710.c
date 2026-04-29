__int64 __fastcall sub_3E5710(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  _QWORD *v8; // r12
  __int64 (__fastcall **v10)(int, int, int, int, int, int, char); // [rsp+0h] [rbp-508h] BYREF
  __int64 v11; // [rsp+8h] [rbp-500h]
  __int128 v12; // [rsp+10h] [rbp-4F8h]
  int v13; // [rsp+20h] [rbp-4E8h]
  __m128i v14; // [rsp+30h] [rbp-4D8h] BYREF
  __int128 v15; // [rsp+40h] [rbp-4C8h]
  __int16 v16; // [rsp+464h] [rbp-A4h]
  __int64 v17; // [rsp+468h] [rbp-A0h]
  _QWORD *v18; // [rsp+470h] [rbp-98h]
  char v19; // [rsp+478h] [rbp-90h]
  __int64 v20; // [rsp+480h] [rbp-88h]
  __int64 v21; // [rsp+488h] [rbp-80h]
  __int128 v22; // [rsp+490h] [rbp-78h]
  __int64 v23; // [rsp+4A0h] [rbp-68h]
  __int64 v24; // [rsp+4A8h] [rbp-60h]
  __int64 v25; // [rsp+4B0h] [rbp-58h]
  __int128 v26; // [rsp+4B8h] [rbp-50h]
  __int64 v27; // [rsp+4C8h] [rbp-40h]
  __int128 v28; // [rsp+4D0h] [rbp-38h]
  int v29; // [rsp+4E0h] [rbp-28h]
  __int16 v30; // [rsp+4E4h] [rbp-24h]
  char v31; // [rsp+4E6h] [rbp-22h]
  unsigned __int64 v32; // [rsp+4E8h] [rbp-20h]

  v32 = __readfsqword(0x28u);
  v13 = 0;
  v14.m128i_i64[1] = (__int64)&v10;
  v10 = &off_4D0738;
  v6 = a1[187];
  v11 = 0;
  v14.m128i_i64[0] = v6;
  v15 = 0u;
  v17 = 0xFFFFFFFFLL;
  v20 = 0;
  v21 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v27 = 0;
  v29 = 0;
  v12 = 0;
  v22 = 0;
  v26 = 0;
  v28 = 0;
  v30 = 0;
  v31 = 0;
  v16 = 0;
  v18 = a1;
  v19 = 0;
  v7 = sub_3E56C0(&v14, a3, a2, (__m128)0LL);
  if ( v19 )
  {
    v8 = v18;
    if ( v18 )
    {
      sub_81000(v18);
      j__qfree(v8);
    }
  }
  v18 = nullptr;
  v15 = 0;
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  qfree(v23);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  v10 = &off_4D0738;
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  return v7;
}
