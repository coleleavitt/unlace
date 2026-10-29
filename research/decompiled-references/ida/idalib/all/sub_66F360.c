unsigned __int64 __fastcall sub_66F360(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4, char a5, char a6)
{
  unsigned __int64 v8; // rbx
  int v9; // eax
  char v10; // al
  __int64 v12; // r10
  __int64 v13; // rax
  bool v14; // [rsp+1Fh] [rbp-F1h]
  __int64 v15; // [rsp+20h] [rbp-F0h]
  __int64 v16; // [rsp+28h] [rbp-E8h]
  unsigned __int64 v18; // [rsp+40h] [rbp-D0h]
  _QWORD v20[2]; // [rsp+50h] [rbp-C0h] BYREF
  void *v21; // [rsp+60h] [rbp-B0h] BYREF
  __m128i si128; // [rsp+68h] [rbp-A8h]
  __int128 v23; // [rsp+78h] [rbp-98h]
  __int64 v24; // [rsp+88h] [rbp-88h]
  __int64 v25; // [rsp+90h] [rbp-80h]
  __int64 v26; // [rsp+98h] [rbp-78h]
  __int64 v27; // [rsp+A0h] [rbp-70h]
  __int64 v28; // [rsp+A8h] [rbp-68h]
  __int64 v29; // [rsp+B0h] [rbp-60h]
  __int64 v30; // [rsp+B8h] [rbp-58h]
  void *ptr; // [rsp+C0h] [rbp-50h]
  __int128 v32; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v33; // [rsp+D8h] [rbp-38h]

  v8 = 0;
  v33 = __readfsqword(0x28u);
  v14 = (a5 & 0x40) != 0;
  v15 = a3 - a2;
  do
  {
    v18 = sub_3BE900(a1, v8, 0);
    if ( (v18 & 0x80000000) != 0LL )
    {
      v27 = 0xFFFFFFFFLL;
      v25 = 0;
      v21 = &loc_800000;
      v24 = 0;
      v26 = 0;
      v28 = 0;
      v29 = 2;
      v30 = -1;
      ptr = nullptr;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
      v23 = -1;
      v32 = 0;
      if ( get_switch_info(&v21, v8) > 0 )
      {
        si128.m128i_i64[0] = sub_684CE0((_DWORD)a1, si128.m128i_i32[0], a2, a3, a4, v14, 1);
        *(_QWORD *)&v23 = sub_684CE0((_DWORD)a1, v23, a2, a3, a4, v14, 1);
        *((_QWORD *)&v23 + 1) = sub_684CE0((_DWORD)a1, DWORD2(v23), a2, a3, a4, v14, 1);
        v9 = (int)v21;
        if ( ((unsigned __int8)v21 & 1) != 0 )
        {
          si128.m128i_i64[1] = sub_684CE0((_DWORD)a1, si128.m128i_i32[2], a2, a3, a4, v14, 1);
          v9 = (int)v21;
        }
        if ( (v9 & 0x200) != 0 )
        {
          v26 = sub_684CE0((_DWORD)a1, v26, a2, a3, a4, v14, 1);
          v9 = (int)v21;
        }
        if ( (v9 & 0x800000) != 0 && (int)v29 > 1 )
        {
          v30 = sub_684CE0((_DWORD)a1, v30, a2, a3, a4, v14, 1);
          if ( (_QWORD)v32 )
          {
            v12 = 0;
            do
            {
              v16 = v12;
              v13 = sub_684CE0((_DWORD)a1, *((_QWORD *)ptr + v12), a2, a3, a4, v14, 1);
              *((_QWORD *)ptr + v16) = v13;
              v12 = v16 + 1;
            }
            while ( v16 + 1 < (unsigned __int64)v32 );
          }
        }
        set_switch_info(v8, &v21);
        sub_44F160(a1, v8, (__int64)&v21, v15);
      }
      if ( get_jumptable_info(v20, v8) > 0 )
      {
        v20[0] = sub_684CE0((_DWORD)a1, v20[0], a2, a3, a4, 0, 1);
        set_jumptable_info(v8, v20);
      }
      if ( ptr )
      {
        *(_QWORD *)&v32 = 0;
        qfree(ptr);
      }
    }
    if ( !a6 && (a5 & 8) != 0 )
    {
      v10 = is_off(v18, 15);
      if ( v8 >= a3 && v10 && v8 < a3 + a4 )
        sub_4E2B40(*a1, v8, v15);
    }
    v8 = sub_3C1900(
           a1,
           v8,
           0xFFFFFFFFFFFFFFFFLL,
           (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_66EA10,
           nullptr);
  }
  while ( v8 != -1 );
  return v33 - __readfsqword(0x28u);
}
