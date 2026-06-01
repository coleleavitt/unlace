__int64 __fastcall sub_121F60(__int64 a1, int a2)
{
  int *v2; // rbx
  int *v3; // rax
  int v4; // eax
  __int128 v5; // xmm1
  __int64 v6; // r12
  __int64 v7; // rdi
  int v9; // [rsp+0h] [rbp-14Ch] BYREF
  __int64 (__fastcall **v10)(); // [rsp+4h] [rbp-148h] BYREF
  __int64 v11; // [rsp+Ch] [rbp-140h]
  __int128 v12; // [rsp+14h] [rbp-138h]
  __int64 v13; // [rsp+24h] [rbp-128h]
  __int64 v14; // [rsp+2Ch] [rbp-120h]
  int v15; // [rsp+34h] [rbp-118h]
  __int128 v16; // [rsp+3Ch] [rbp-110h]
  int v17; // [rsp+4Ch] [rbp-100h]
  _BYTE v18[72]; // [rsp+54h] [rbp-F8h] BYREF
  int v19; // [rsp+B4h] [rbp-98h] BYREF
  __int64 ph; // [rsp+BCh] [rbp-90h]
  bool v21; // [rsp+C4h] [rbp-88h]
  double v22; // [rsp+CCh] [rbp-80h]
  __int128 v23; // [rsp+D4h] [rbp-78h] BYREF
  __int64 v24; // [rsp+E4h] [rbp-68h]
  __int128 v25; // [rsp+ECh] [rbp-60h]
  int v26; // [rsp+FCh] [rbp-50h]
  unsigned __int64 v27; // [rsp+10Ch] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v10 = (__int64 (__fastcall **)())&stru_235898;
  v14 = a1;
  v2 = &v19;
  v13 = 0;
  v15 = 0;
  v17 = -1;
  v12 = -1;
  v11 = 0x20007FF000004LL;
  v3 = (int *)v18;
  v16 = 0;
  do
  {
    *(_QWORD *)v3 = 0;
    v3 += 6;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( &v19 != v3 );
  v19 = 0;
  if ( ((HIDWORD(v11) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v11) != 0xFF )
      goto LABEL_23;
    BYTE3(v11) = ((HIDWORD(v11) >> 19) & 0x3F) - 1;
    HIDWORD(v11) &= 0xFE07FFFF;
  }
  v10 = off_231030;
  ph = get_ph();
  v4 = *(_DWORD *)(ph + 8);
  v22 = 0.0;
  v23 = 0;
  v25 = 0;
  v24 = 0;
  v21 = (v4 & 0xC0) == 64;
  v26 = *(_DWORD *)(get_eah() + 8);
  sub_121D00((__int64)&v10);
  *((_QWORD *)&v5 + 1) = _mm_loadu_si128((const __m128i *)((char *)&v23 + 8)).m128i_i64[1];
  v17 = 46;
  *(double *)&v5 = v22;
  v16 = v5;
  if ( (v11 & 0x100000000LL) == 0 )
  {
    if ( under_debugger )
      goto LABEL_25;
    interr();
LABEL_23:
    if ( !under_debugger )
      interr();
LABEL_25:
    BUG();
  }
  v9 = a2;
  if ( a2 == -1 )
    v9 = qword_251700;
  if ( sub_198260(&v10, &v9) < 0 )
    v6 = 0;
  else
    v6 = getnseg();
  v10 = off_231030;
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  if ( v22 != 0.0 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  v10 = (__int64 (__fastcall **)())&stru_235898;
  do
  {
    v7 = *((_QWORD *)v2 - 3);
    v2 -= 6;
    if ( v7 )
    {
      *((_QWORD *)v2 + 1) = 0;
      qfree();
    }
  }
  while ( v2 != (int *)v18 );
  return v6;
}

