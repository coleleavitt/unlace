__int64 __fastcall sub_F6700(_BYTE *a1, unsigned __int64 a2, char a3, __int64 *a4)
{
  unsigned __int64 *v6; // rax
  __int64 (*v7)(); // rax
  int v8; // r8d
  unsigned int v9; // r14d
  const char *v10; // rcx
  void (*v11)(); // rax
  __int64 v13; // [rsp+8h] [rbp-230h]
  __int128 v14; // [rsp+10h] [rbp-228h] BYREF
  __int64 v15; // [rsp+20h] [rbp-218h]
  __int64 v16; // [rsp+28h] [rbp-210h]
  __int64 v17; // [rsp+30h] [rbp-208h]
  __int64 v18; // [rsp+38h] [rbp-200h]
  __int128 v19; // [rsp+40h] [rbp-1F8h]
  __int64 v20; // [rsp+50h] [rbp-1E8h]
  __int64 v21; // [rsp+58h] [rbp-1E0h]
  int v22; // [rsp+60h] [rbp-1D8h]
  __int64 v23; // [rsp+68h] [rbp-1D0h]
  int v24; // [rsp+70h] [rbp-1C8h]
  __int64 v25; // [rsp+78h] [rbp-1C0h]
  int v26; // [rsp+80h] [rbp-1B8h]
  __int64 v27; // [rsp+88h] [rbp-1B0h]
  int v28; // [rsp+90h] [rbp-1A8h]
  __int64 v29; // [rsp+98h] [rbp-1A0h]
  __int128 v30; // [rsp+A0h] [rbp-198h]
  __int64 v31; // [rsp+B0h] [rbp-188h]
  __int64 v32; // [rsp+B8h] [rbp-180h]
  __int64 v33; // [rsp+C0h] [rbp-178h]
  char v34; // [rsp+C8h] [rbp-170h] BYREF
  unsigned __int64 v35; // [rsp+208h] [rbp-30h] BYREF

  v13 = a2;
  v35 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  v14 = 0;
  getinf_buf();
  if ( a2 >= *((_QWORD *)&v14 + 1) )
    v13 = *(_QWORD *)(get_eah() + 16) & a2;
  if ( !(unsigned __int8)is_mapped() )
  {
    return 0;
  }
  else
  {
    v31 = -1;
    v32 = 0;
    if ( !a4 )
      a4 = &qword_2527E0;
    v6 = (unsigned __int64 *)&v34;
    v33 = 0;
    v30 = -1;
    do
    {
      *(_WORD *)v6 = 0;
      v6 += 5;
      *((_WORD *)v6 - 19) = 0;
      *((_WORD *)v6 - 18) = 0;
      *((_DWORD *)v6 - 2) = 0;
      *((_WORD *)v6 - 17) = 0;
      *((_OWORD *)v6 - 2) = 0;
      *(v6 - 2) = 0;
    }
    while ( v6 != &v35 );
    if ( dword_25274C
      && (get_flags_ex() & 0x600) == 0
      && a1[773]
      && get_debug_name() > 0
      && (int)decode_insn() > 0
      && sub_9E360() >= 0 )
    {
      *((_QWORD *)&v14 + 1) = -1;
      v15 = 512;
      *(_QWORD *)&v14 = v13;
      LOWORD(v18) = 0;
      v16 = -1;
      v17 = 0;
      v20 = 0xFFFFFFFFLL;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v19 = 0;
      add_func_ex();
    }
    v7 = *(__int64 (**)())(*(_QWORD *)a1 + 296LL);
    if ( v7 == sub_F3E50 || (v8 = ((__int64 (__fastcall *)(_BYTE *, double))v7)(a1, 0.0), v8 < 0) )
      v8 = unk_245114;
    v15 = 0;
    v16 = -1;
    v17 = 0;
    v18 = 0;
    v14 = 0;
    v9 = sub_F5520((__int64)a1, (__int64)&v14, v13, -1, v8, 1u);
    if ( v9 == 1 )
    {
      if ( *((int *)a4 + 7) >= 0 )
      {
        WORD2(v16) = *((_DWORD *)a4 + 7);
        a4 = nullptr;
      }
      sub_16C700(a1, &v14, ((a3 & 2) == 0 ? 3 : 1) | (4 * (a3 & 1u)), 0);
      if ( a4 )
      {
        v10 = s1;
        v11 = *(void (**)())(*(_QWORD *)a1 + 712LL);
        if ( a4[1] )
          v10 = (const char *)*a4;
        if ( v11 != nullsub_42 )
          ((void (__fastcall *)(_BYTE *, _QWORD, const char *))v11)(a1, *((unsigned int *)a4 + 6), v10);
      }
      if ( !(unsigned __int8)sub_1543D0(a1) && a1 == (_BYTE *)qword_252800 )
        sub_F64B0((__int64)a1);
    }
    if ( v18 )
      qfree();
  }
  return v9;
}

