__int64 __fastcall sub_120EA0(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v7; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+8h] [rbp-B0h]
  __int64 v9; // [rsp+10h] [rbp-A8h]
  int v10; // [rsp+18h] [rbp-A0h]
  __int64 v11; // [rsp+20h] [rbp-98h]
  __int128 v12; // [rsp+28h] [rbp-90h]
  __m128i si128; // [rsp+38h] [rbp-80h]
  int v14; // [rsp+48h] [rbp-70h]
  char v15; // [rsp+50h] [rbp-68h]
  __int64 v16; // [rsp+58h] [rbp-60h]
  int v17; // [rsp+60h] [rbp-58h]
  __int64 v18; // [rsp+68h] [rbp-50h]
  __int128 v19; // [rsp+70h] [rbp-48h]
  __int64 v20; // [rsp+80h] [rbp-38h]
  char v21; // [rsp+88h] [rbp-30h]
  unsigned __int64 v22; // [rsp+98h] [rbp-20h]

  v1 = *a1;
  v22 = __readfsqword(0x28u);
  v2 = sub_1545C0(v1);
  if ( v2 )
  {
    v12 = 0;
    v7 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1D2FF0);
    v8 = 0;
    v9 = -1;
    v10 = -1;
    v11 = 0;
    v14 = -1;
    v15 = 0;
    v16 = -1;
    v17 = -2;
    v18 = -1;
    v20 = 0xFFFFFFFFLL;
    v21 = 0;
    v19 = 0;
    ((void (__fastcall *)(__int64, int *, __int64, __int64, __int64, __int64))sub_15F500)(v2, &v7, 2, v3, v4, v5);
    if ( v17 >= -1 && v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree();
    }
    clear_tinfo_t();
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree();
    }
  }
  return 0;
}

