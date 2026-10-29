__int64 __fastcall sub_577F80(__m128i *a1, void *a2, __int128 *a3)
{
  __int128 *v3; // rbx
  unsigned __int64 *v4; // rax
  int v5; // eax
  unsigned int v6; // ebp
  int v7; // r14d
  unsigned int v8; // r14d
  unsigned int i; // r15d
  __int64 v11; // rax
  void (__fastcall *v12)(_QWORD, _QWORD, _QWORD, double); // rcx
  __int64 v13; // rax
  void (__fastcall *v14)(_QWORD, _QWORD, _QWORD, double); // rcx
  __int64 v15; // r15
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-248h] BYREF
  int v19[4]; // [rsp+8h] [rbp-240h]
  void *v20[2]; // [rsp+18h] [rbp-230h]
  int v21[2]; // [rsp+28h] [rbp-220h]
  int v22[2]; // [rsp+30h] [rbp-218h]
  int v23[2]; // [rsp+38h] [rbp-210h]
  int v24[2]; // [rsp+40h] [rbp-208h]
  int v25[2]; // [rsp+48h] [rbp-200h]
  int v26[2]; // [rsp+50h] [rbp-1F8h]
  int v27[2]; // [rsp+58h] [rbp-1F0h]
  void *ptr; // [rsp+60h] [rbp-1E8h]
  __int128 v29; // [rsp+68h] [rbp-1E0h]
  __int128 v30; // [rsp+80h] [rbp-1C8h]
  __int64 v31; // [rsp+90h] [rbp-1B8h]
  __int64 v32; // [rsp+98h] [rbp-1B0h]
  __int128 v33; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-198h]
  __int64 v35; // [rsp+B8h] [rbp-190h]
  __int64 v36; // [rsp+C0h] [rbp-188h]
  char v37; // [rsp+C8h] [rbp-180h] BYREF
  unsigned __int64 v38; // [rsp+208h] [rbp-40h] BYREF

  v38 = __readfsqword(0x28u);
  v3 = a3;
  v4 = (unsigned __int64 *)&v37;
  v34 = -1;
  v35 = 0;
  v36 = 0;
  v33 = -1;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( &v38 != v4 );
  if ( !a3 )
    v3 = &v33;
  v5 = sub_573C40(a1->m128i_i64, (__int64)v3, a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( (unsigned int)sub_3A1820((__int64)a1) != 25 )
      sub_4F2EF0(a1, -(char)v6, (__int64)a2, 0);
    return 0;
  }
  if ( !v5 )
    return 0;
  if ( !(unsigned __int8)is_spec_ea(a2) )
  {
    if ( (*((_BYTE *)v3 + 34) & 1) != 0 )
    {
      v15 = *((_QWORD *)v3 + 2);
      v16 = *((unsigned __int16 *)v3 + 13);
      v17 = sub_5CAA10(a1);
      sub_675810(a1, v17, v15, v15 + v16, 0.0);
    }
    if ( sub_3792E0(0xBu, v3, 0.0) == -1 )
    {
      v31 = 0;
      v30 = 0;
      v32 = 0;
      sub_3D19E0((_DWORD)a1, (_DWORD)a2);
      return 0;
    }
  }
  v7 = sub_3BE900(a1, (unsigned __int64)a2, 0);
  if ( (~BYTE1(v7) & 6) != 0 )
    return 0;
  if ( (v7 & 0xF00000) == 0xD00000 )
  {
    v13 = sub_5718C0(*((_QWORD *)v3 + 2), 0);
    if ( v13 )
    {
      v14 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, double))(v13 + 80);
      if ( v14 )
        v14(*(_QWORD *)(v13 + 8), *((_QWORD *)v3 + 2), 0, 0.0);
    }
  }
  if ( (v7 & 0xF000000) == 0xD000000 )
  {
    for ( i = 1; i != 8; ++i )
    {
      v11 = sub_5718C0(*((_QWORD *)v3 + 2), i);
      if ( v11 )
      {
        v12 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, double))(v11 + 80);
        if ( v12 )
          v12(*(_QWORD *)(v11 + 8), *((_QWORD *)v3 + 2), i, 0.0);
      }
    }
  }
  v8 = v7 & 0x80000000;
  if ( (unsigned __int8)has_insn_feature(*((unsigned __int16 *)v3 + 12), (const char *)&stru_4000) || v8 )
  {
    v18 = (__int64)&loc_800000;
    *(_QWORD *)v21 = 0;
    *(__m128i *)v19 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
    *(_OWORD *)v20 = -1;
    *(_QWORD *)v22 = 0;
    *(_QWORD *)v23 = 0;
    *(_QWORD *)v24 = 0xFFFFFFFFLL;
    *(_QWORD *)v25 = 0;
    *(_QWORD *)v26 = 2;
    *(_QWORD *)v27 = -1;
    ptr = nullptr;
    v29 = 0;
    if ( v8 && get_switch_info(&v18, a2) > 0 )
      goto LABEL_34;
    if ( sub_3792E0(0x28u, &v18, v3) != 1 )
      goto LABEL_19;
    if ( v20[1] == (void *)-1LL )
    {
      if ( !under_debugger )
        interr(188);
      BUG();
    }
    set_switch_info(a2, &v18);
    if ( (v18 & 0x4000) != 0 )
LABEL_34:
      sub_44EA00(a1->m128i_i64, (unsigned __int64)a2, (__int64)&v18);
    else
      sub_4509B0(a1, a2, (__int64)&v18);
LABEL_19:
    if ( ptr )
    {
      *(_QWORD *)&v29 = 0;
      qfree(ptr);
    }
  }
  return v6;
}
