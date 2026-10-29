__int64 __fastcall sub_16C4A0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64, int *); // rax
  unsigned int v3; // ebx
  int v5; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v6; // [rsp+8h] [rbp-B0h]
  __int64 v7; // [rsp+10h] [rbp-A8h]
  int v8; // [rsp+18h] [rbp-A0h]
  __int64 v9; // [rsp+20h] [rbp-98h]
  __int128 v10; // [rsp+28h] [rbp-90h]
  __m128i si128; // [rsp+38h] [rbp-80h]
  int v12; // [rsp+48h] [rbp-70h]
  char v13; // [rsp+50h] [rbp-68h]
  __int64 v14; // [rsp+58h] [rbp-60h]
  int v15; // [rsp+60h] [rbp-58h]
  __int64 v16; // [rsp+68h] [rbp-50h]
  __int128 v17; // [rsp+70h] [rbp-48h]
  __int64 v18; // [rsp+80h] [rbp-38h]
  char v19; // [rsp+88h] [rbp-30h]
  unsigned __int64 v20; // [rsp+98h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v10 = 0;
  v5 = 0;
  v6 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D2FF0);
  v7 = -1;
  v8 = -1;
  v9 = 0;
  v12 = -1;
  v13 = 0;
  v14 = -1;
  v15 = -2;
  v16 = -1;
  v18 = 0xFFFFFFFFLL;
  v19 = 0;
  v17 = 0;
  sub_15F500(a1, (__int64)&v5, 2u);
  v2 = *(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)a1 + 568LL);
  if ( v2 == sub_16C470 )
  {
    if ( !v5 || !(unsigned int)sub_120970(&v5) )
      sub_16C310(a1);
    v3 = 1;
  }
  else
  {
    v3 = v2(a1, a2, &v5);
  }
  if ( v15 >= -1 && v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v3;
}

