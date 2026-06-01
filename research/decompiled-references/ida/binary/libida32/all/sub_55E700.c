__int64 __fastcall sub_55E700(__m128i *a1, unsigned int a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  unsigned __int64 *v4; // rax
  int v5; // eax
  unsigned int v6; // ebp
  int v7; // r14d
  unsigned int v8; // r14d
  unsigned int i; // r15d
  __int64 v11; // rax
  void (__fastcall *v12)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v13; // rax
  void (__fastcall *v14)(_QWORD, _QWORD, _QWORD); // rcx
  unsigned int v15; // r15d
  int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-188h] BYREF
  int v19[4]; // [rsp+8h] [rbp-180h]
  void *v20; // [rsp+18h] [rbp-170h]
  __int64 v21; // [rsp+20h] [rbp-168h]
  int v22[2]; // [rsp+28h] [rbp-160h]
  int v23[2]; // [rsp+30h] [rbp-158h]
  void *ptr; // [rsp+38h] [rbp-150h]
  int v25[4]; // [rsp+40h] [rbp-148h]
  __int128 v26; // [rsp+50h] [rbp-138h]
  __int64 v27; // [rsp+60h] [rbp-128h]
  __int64 v28; // [rsp+68h] [rbp-120h]
  _QWORD v29[3]; // [rsp+70h] [rbp-118h] BYREF
  char v30; // [rsp+88h] [rbp-100h] BYREF
  unsigned __int64 v31; // [rsp+148h] [rbp-40h] BYREF

  v31 = __readfsqword(0x28u);
  v3 = a3;
  v29[1] = 0xFFFFFFFFLL;
  v4 = (unsigned __int64 *)&v30;
  v29[0] = -1;
  v29[2] = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 3;
    *((_WORD *)v4 - 11) = 0;
    *((_WORD *)v4 - 10) = 0;
    *((_DWORD *)v4 - 1) = 0;
    *((_WORD *)v4 - 9) = 0;
    *(v4 - 2) = 0;
    *((_DWORD *)v4 - 2) = 0;
  }
  while ( &v31 != v4 );
  if ( !a3 )
    v3 = v29;
  v5 = sub_55A0B0(a1, (__int64)v3, a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( (unsigned int)sub_39CC50((__int64)a1) != 25 )
      sub_4DB6D0(a1, -(char)v6, a2, 0);
    return 0;
  }
  if ( !v5 )
    return 0;
  if ( !(unsigned __int8)is_spec_ea(a2) )
  {
    if ( (*((_BYTE *)v3 + 22) & 1) != 0 )
    {
      v15 = *((_DWORD *)v3 + 2);
      v16 = *((unsigned __int16 *)v3 + 7);
      v17 = sub_5AFCE0(a1);
      sub_657920(a1, v17, v15, v15 + v16);
    }
    if ( sub_375980(0xBu, v3) == -1 )
    {
      v27 = 0;
      v28 = 0;
      v26 = 0;
      sub_3CC010((_DWORD)a1, a2, 1);
      return 0;
    }
  }
  v7 = sub_3B9AA0((__int64)a1, a2, 0);
  if ( (~BYTE1(v7) & 6) != 0 )
    return 0;
  if ( (v7 & 0xF00000) == 0xD00000 )
  {
    v13 = sub_557DB0(*((_DWORD *)v3 + 2), 0);
    if ( v13 )
    {
      v14 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v13 + 72);
      if ( v14 )
        v14(*(_QWORD *)(v13 + 8), *((unsigned int *)v3 + 2), 0);
    }
  }
  if ( (v7 & 0xF000000) == 0xD000000 )
  {
    for ( i = 1; i != 8; ++i )
    {
      v11 = sub_557DB0(*((_DWORD *)v3 + 2), i);
      if ( v11 )
      {
        v12 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v11 + 72);
        if ( v12 )
          v12(*(_QWORD *)(v11 + 8), *((unsigned int *)v3 + 2), i);
      }
    }
  }
  v8 = v7 & 0x80000000;
  if ( (unsigned __int8)has_insn_feature(*((unsigned __int16 *)v3 + 6), 0x4000) )
  {
    v18 = 0x800000;
    v21 = 0xFFFFFFFF00000000LL;
    *(__m128i *)v19 = _mm_load_si128((const __m128i *)&xmmword_23838B0);
    v20 = nullptr;
    *(_QWORD *)v22 = 0;
    *(_QWORD *)v23 = 0xFFFFFFFF00000002LL;
    ptr = nullptr;
    *(_OWORD *)v25 = 0;
    if ( !v8 )
      goto LABEL_33;
  }
  else
  {
    if ( !v8 )
      return v6;
    v18 = 0x800000;
    v21 = 0xFFFFFFFF00000000LL;
    v20 = nullptr;
    *(_QWORD *)v22 = 0;
    *(_QWORD *)v23 = 0xFFFFFFFF00000002LL;
    ptr = nullptr;
    *(__m128i *)v19 = _mm_load_si128((const __m128i *)&xmmword_23838B0);
    *(_OWORD *)v25 = 0;
  }
  if ( get_switch_info(&v18, a2) > 0 )
  {
LABEL_18:
    sub_43AB80(a1, a2, (__int64)&v18);
    goto LABEL_34;
  }
LABEL_33:
  if ( sub_375980(0x28u, &v18, v3) == 1 )
  {
    if ( v19[3] == -1 )
    {
      if ( !under_debugger )
        interr(188);
      BUG();
    }
    set_switch_info(a2, &v18);
    if ( (v18 & 0x4000) != 0 )
      goto LABEL_18;
    sub_43CA40(a1, a2, (__int64)&v18);
  }
LABEL_34:
  if ( ptr )
  {
    *(_QWORD *)v25 = 0;
    qfree(ptr);
  }
  return v6;
}

