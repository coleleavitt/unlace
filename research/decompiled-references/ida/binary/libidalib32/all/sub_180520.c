__int64 __fastcall sub_180520(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebp
  __int64 v3; // rax
  __m128i v4; // xmm1
  unsigned int v5; // eax
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v15; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v16; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+18h] [rbp-A0h] BYREF
  __int128 v18; // [rsp+20h] [rbp-98h]
  char v19; // [rsp+30h] [rbp-88h]
  __int64 (__fastcall **v20)(); // [rsp+40h] [rbp-78h] BYREF
  __int64 v21; // [rsp+48h] [rbp-70h]
  __m128i v22; // [rsp+50h] [rbp-68h]
  __int64 v23; // [rsp+60h] [rbp-58h] BYREF
  __int128 v24; // [rsp+68h] [rbp-50h]
  char v25; // [rsp+78h] [rbp-40h]
  int v26; // [rsp+80h] [rbp-38h]
  unsigned __int64 v27; // [rsp+88h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 1760);
  if ( (v1 & 0x100) != 0 )
  {
    return 0;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 1760) & 1;
    if ( (v1 & 1) == 0 )
    {
      v3 = *(_QWORD *)a1;
      v19 = 0;
      v16 = 0;
      v15 = 0;
      v17 = 0;
      v18 = 0;
      (*(void (__fastcall **)(__int64, __int64 *, __int64))(v3 + 152))(a1, &v15, 7);
      v4 = _mm_loadu_si128(&v16);
      v23 = 0;
      v25 = 0;
      v20 = &off_234CB0;
      v21 = v15;
      v15 = 0;
      v24 = 0;
      v22 = v4;
      v16 = 0;
      sub_17EA00(&v23, &v17);
      v26 = 7;
      v5 = sub_17F110((__int64 *)a1, (__int64)&v20);
      v20 = &off_234CB0;
      v2 = v5;
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
      v6 = v21;
      if ( v21 )
      {
        v7 = v22.m128i_i64[0];
        if ( v22.m128i_i64[0] )
        {
          v8 = 0;
          do
          {
            v9 = *(_QWORD *)(v6 + 32 * v8);
            if ( v9 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
              v6 = v21;
            }
            ++v8;
          }
          while ( v7 != v8 );
        }
        v22.m128i_i64[0] = 0;
        qfree();
      }
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v10 = v15;
      if ( v15 )
      {
        v11 = v16.m128i_i64[0];
        if ( v16.m128i_i64[0] )
        {
          v12 = 0;
          do
          {
            v13 = *(_QWORD *)(v10 + 32 * v12);
            if ( v13 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
              v10 = v15;
            }
            ++v12;
          }
          while ( v11 != v12 );
        }
        v16.m128i_i64[0] = 0;
        qfree();
      }
    }
  }
  return v2;
}

