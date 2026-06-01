__int64 __fastcall sub_3241A0(__int64 a1, const char *a2)
{
  int *v2; // rbx
  int *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdi
  const char *v15; // [rsp+0h] [rbp-150h] BYREF
  __int64 (__fastcall **v16)(); // [rsp+8h] [rbp-148h] BYREF
  __int64 v17; // [rsp+10h] [rbp-140h]
  __int128 v18; // [rsp+18h] [rbp-138h]
  __int64 v19; // [rsp+28h] [rbp-128h]
  __int64 v20; // [rsp+30h] [rbp-120h]
  int v21; // [rsp+38h] [rbp-118h]
  __int128 v22; // [rsp+40h] [rbp-110h]
  int v23; // [rsp+50h] [rbp-100h]
  _BYTE v24[72]; // [rsp+58h] [rbp-F8h] BYREF
  int v25; // [rsp+B8h] [rbp-98h] BYREF
  __int64 ph; // [rsp+C0h] [rbp-90h]
  bool v27; // [rsp+C8h] [rbp-88h]
  double v28; // [rsp+D0h] [rbp-80h]
  __int128 v29; // [rsp+D8h] [rbp-78h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-68h]
  __int128 v31; // [rsp+F0h] [rbp-60h]
  int v32; // [rsp+100h] [rbp-50h]
  unsigned __int64 v33; // [rsp+110h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v16 = (__int64 (__fastcall **)())&stru_86F6A0;
  v20 = a1;
  v2 = &v25;
  v19 = 0;
  v21 = 0;
  v23 = -1;
  v18 = -1;
  v17 = 0x20007FF000004LL;
  v3 = (int *)v24;
  v22 = 0;
  do
  {
    *(_QWORD *)v3 = 0;
    v3 += 6;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( &v25 != v3 );
  v25 = 0;
  v4 = HIDWORD(v17);
  v5 = ((HIDWORD(v17) >> 19) & 0x3F) - 1;
  if ( ((HIDWORD(v17) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v17) != 0xFF )
      goto LABEL_23;
    v4 = HIDWORD(v17) & 0xFE07FFFF;
    BYTE3(v17) = ((HIDWORD(v17) >> 19) & 0x3F) - 1;
    HIDWORD(v17) &= 0xFE07FFFF;
  }
  v16 = segm_chooser_t___vtable;
  ph = get_ph(a1, a2, v4, v5);
  v6 = *(_DWORD *)(ph + 8);
  v28 = 0.0;
  v29 = 0;
  v31 = 0;
  v30 = 0;
  v27 = (v6 & 0xC0) == 64;
  v32 = *(_DWORD *)(get_eah(a1, a2, v7) + 24);
  sub_323F40((__int64)&v16);
  *((_QWORD *)&v10 + 1) = _mm_loadu_si128((const __m128i *)((char *)&v29 + 8)).m128i_i64[1];
  v23 = 46;
  *(double *)&v10 = v28;
  v22 = v10;
  if ( (v17 & 0x100000000LL) == 0 )
  {
    if ( under_debugger )
      goto LABEL_25;
    interr(40540, a2, v8, v9, 0.0);
LABEL_23:
    if ( !under_debugger )
      interr(3449, a2, v4, v5, 0.0);
LABEL_25:
    BUG();
  }
  v15 = a2;
  if ( a2 == (const char *)-1LL )
    v15 = (const char *)xmmword_8CC810;
  v11 = sub_4AED50(&v16, &v15, v8, v9);
  if ( v11 < 0 )
    v12 = 0;
  else
    v12 = getnseg((unsigned int)v11);
  v16 = segm_chooser_t___vtable;
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30, (const char *)&v15);
  }
  if ( v28 != 0.0 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(*(_QWORD *)&v28, (const char *)&v15);
  }
  v16 = (__int64 (__fastcall **)())&stru_86F6A0;
  do
  {
    v13 = *((_QWORD *)v2 - 3);
    v2 -= 6;
    if ( v13 )
    {
      *((_QWORD *)v2 + 1) = 0;
      qfree(v13, (const char *)&v15);
    }
  }
  while ( v2 != (int *)v24 );
  return v12;
}
