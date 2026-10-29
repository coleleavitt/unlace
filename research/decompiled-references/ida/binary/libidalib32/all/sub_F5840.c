__int64 __fastcall sub_F5840(_BYTE *a1, unsigned int a2, char a3, __int64 *a4)
{
  unsigned __int64 *v6; // rax
  __int64 (*v7)(); // rax
  int v8; // r8d
  unsigned int v9; // r14d
  const char *v10; // rcx
  void (*v11)(); // rax
  __int128 v13; // [rsp+10h] [rbp-188h] BYREF
  __int64 v14; // [rsp+20h] [rbp-178h]
  _BYTE v15[24]; // [rsp+28h] [rbp-170h]
  __int64 v16; // [rsp+40h] [rbp-158h]
  int v17; // [rsp+48h] [rbp-150h]
  __int64 v18; // [rsp+50h] [rbp-148h]
  int v19; // [rsp+58h] [rbp-140h]
  __int64 v20; // [rsp+60h] [rbp-138h]
  int v21; // [rsp+68h] [rbp-130h]
  __int64 v22; // [rsp+70h] [rbp-128h]
  int v23; // [rsp+78h] [rbp-120h]
  __int64 v24; // [rsp+80h] [rbp-118h]
  __int64 v25; // [rsp+90h] [rbp-108h]
  __int64 v26; // [rsp+98h] [rbp-100h]
  __int64 v27; // [rsp+A0h] [rbp-F8h]
  char v28; // [rsp+A8h] [rbp-F0h] BYREF
  unsigned __int64 v29; // [rsp+168h] [rbp-30h] BYREF

  v29 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  *(_QWORD *)&v13 = 0;
  getinf_buf();
  get_eah();
  if ( !(unsigned __int8)is_mapped() )
  {
    return 0;
  }
  else
  {
    v25 = -1;
    v27 = 0;
    if ( !a4 )
      a4 = &qword_251640;
    v26 = 0xFFFFFFFFLL;
    v6 = (unsigned __int64 *)&v28;
    do
    {
      *(_WORD *)v6 = 0;
      v6 += 3;
      *((_WORD *)v6 - 11) = 0;
      *((_WORD *)v6 - 10) = 0;
      *((_DWORD *)v6 - 1) = 0;
      *((_WORD *)v6 - 9) = 0;
      *(v6 - 2) = 0;
      *((_DWORD *)v6 - 2) = 0;
    }
    while ( v6 != &v29 );
    if ( dword_2515A4
      && (get_flags_ex() & 0x600) == 0
      && a1[765]
      && get_debug_name() > 0
      && (int)decode_insn() > 0
      && sub_9E220() >= 0 )
    {
      *((_QWORD *)&v13 + 1) = 512;
      *(_QWORD *)&v13 = a2 | 0xFFFFFFFF00000000LL;
      v16 = 0;
      v14 = 0xFFFFFFFFLL;
      *(_WORD *)v15 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      *(__m128i *)&v15[4] = _mm_load_si128((const __m128i *)&unk_1D2310);
      add_func_ex();
    }
    v7 = *(__int64 (**)())(*(_QWORD *)a1 + 296LL);
    if ( v7 == sub_F2F70 || (v8 = ((__int64 (__fastcall *)(_BYTE *))v7)(a1), v8 < 0) )
      v8 = unk_2440C8;
    v14 = 0;
    *(_OWORD *)v15 = 0xFFFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v15[16] = 0;
    v13 = 0;
    v9 = sub_F4700((__int64)a1, (__int64)&v13, a2, -1, v8, 1u);
    if ( v9 == 1 )
    {
      if ( *((int *)a4 + 7) >= 0 )
      {
        *(_WORD *)&v15[4] = *((_DWORD *)a4 + 7);
        a4 = nullptr;
      }
      sub_16BD30(a1, &v13, ((a3 & 2) == 0 ? 3 : 1) | (4 * (a3 & 1u)), 0);
      if ( a4 )
      {
        v10 = s1;
        v11 = *(void (**)())(*(_QWORD *)a1 + 712LL);
        if ( a4[1] )
          v10 = (const char *)*a4;
        if ( v11 != nullsub_42 )
          ((void (__fastcall *)(_BYTE *, _QWORD, const char *))v11)(a1, *((unsigned int *)a4 + 6), v10);
      }
      if ( !(unsigned __int8)sub_153BD0(a1) && a1 == (_BYTE *)qword_251660 )
        sub_F5620((__int64)a1);
    }
    if ( *(_QWORD *)&v15[16] )
      qfree();
  }
  return v9;
}

