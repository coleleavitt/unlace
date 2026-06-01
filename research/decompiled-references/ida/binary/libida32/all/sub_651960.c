unsigned __int64 __fastcall sub_651960(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6)
{
  unsigned int v8; // ebx
  int v9; // eax
  char v10; // al
  __int64 v12; // r10
  int v13; // eax
  __int64 v14; // [rsp+0h] [rbp-E0h]
  __int64 v15; // [rsp+0h] [rbp-E0h]
  bool v16; // [rsp+1Bh] [rbp-C5h]
  int v17; // [rsp+1Ch] [rbp-C4h]
  __int64 v18; // [rsp+20h] [rbp-C0h]
  unsigned __int64 v20; // [rsp+30h] [rbp-B0h]
  unsigned int v22; // [rsp+48h] [rbp-98h] BYREF
  __int64 v23; // [rsp+50h] [rbp-90h] BYREF
  __m128i si128; // [rsp+58h] [rbp-88h]
  __int64 v25; // [rsp+68h] [rbp-78h]
  unsigned __int64 v26; // [rsp+70h] [rbp-70h]
  __int64 v27; // [rsp+78h] [rbp-68h]
  unsigned __int64 v28; // [rsp+80h] [rbp-60h]
  void *ptr; // [rsp+88h] [rbp-58h]
  __int128 v30; // [rsp+90h] [rbp-50h]
  unsigned __int64 v31; // [rsp+A8h] [rbp-38h]

  v8 = 0;
  v31 = __readfsqword(0x28u);
  v16 = (a5 & 0x40) != 0;
  v17 = a3 - a2;
  do
  {
    v20 = sub_3B9AA0((__int64)a1, v8, 0);
    if ( (v20 & 0x80000000) != 0LL )
    {
      v26 = 0xFFFFFFFF00000000LL;
      v23 = 0x800000;
      v25 = 0;
      v27 = 0;
      v28 = 0xFFFFFFFF00000002LL;
      ptr = nullptr;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23838B0);
      v30 = 0;
      if ( get_switch_info(&v23, v8) > 0 )
      {
        si128.m128i_i32[0] = sub_665E90(a1, si128.m128i_u32[0], a2, a3, a4, v16, 1);
        LODWORD(v14) = 1;
        si128.m128i_i32[2] = sub_665E90(a1, si128.m128i_u32[2], a2, a3, a4, v16, v14);
        LODWORD(v15) = 1;
        si128.m128i_i32[3] = sub_665E90(a1, si128.m128i_u32[3], a2, a3, a4, v16, v15);
        v9 = v23;
        if ( (v23 & 1) != 0 )
        {
          si128.m128i_i32[1] = sub_665E90(a1, si128.m128i_u32[1], a2, a3, a4, v16, 1);
          v9 = v23;
        }
        if ( (v9 & 0x200) != 0 )
        {
          LODWORD(v26) = sub_665E90(a1, (unsigned int)v26, a2, a3, a4, v16, 1);
          v9 = v23;
        }
        if ( (v9 & 0x800000) != 0 && (int)v28 > 1 )
        {
          HIDWORD(v28) = sub_665E90(a1, HIDWORD(v28), a2, a3, a4, v16, 1);
          if ( (_QWORD)v30 )
          {
            v12 = 0;
            do
            {
              v18 = v12;
              v13 = sub_665E90(a1, *((unsigned int *)ptr + v12), a2, a3, a4, v16, 1);
              *((_DWORD *)ptr + v18) = v13;
              v12 = v18 + 1;
            }
            while ( v18 + 1 < (unsigned __int64)v30 );
          }
        }
        set_switch_info(v8, &v23);
        sub_43B2E0(a1, v8, (__int64)&v23, v17);
      }
      if ( get_jumptable_info(&v22, v8) > 0 )
      {
        v22 = sub_665E90(a1, v22, a2, a3, a4, 0, 1);
        set_jumptable_info(v8, &v22);
      }
      if ( ptr )
      {
        *(_QWORD *)&v30 = 0;
        qfree(ptr);
      }
    }
    if ( !a6 && (a5 & 8) != 0 )
    {
      v10 = is_off(v20, 15);
      if ( v8 >= a3 && v10 && v8 < a3 + a4 )
        sub_4CB3B0(*a1, v8, v17);
    }
    v8 = sub_3BC980(a1, v8, 0xFFFFFFFF, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_651070, nullptr);
  }
  while ( v8 != -1 );
  return v31 - __readfsqword(0x28u);
}

