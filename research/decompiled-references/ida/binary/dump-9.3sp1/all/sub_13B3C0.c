__int64 __fastcall sub_13B3C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // r12d
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r14
  int v19; // [rsp+0h] [rbp-A8h]
  int v20; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v21; // [rsp+8h] [rbp-A0h]
  __int64 v22; // [rsp+10h] [rbp-98h] BYREF
  __int64 v23; // [rsp+20h] [rbp-88h] BYREF
  __int128 v24; // [rsp+28h] [rbp-80h]
  __int64 v25[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v26; // [rsp+50h] [rbp-58h] BYREF
  __int128 v27; // [rsp+58h] [rbp-50h]
  unsigned __int64 v28; // [rsp+68h] [rbp-40h]

  v6 = *(_DWORD *)(a1 + 76);
  v28 = __readfsqword(0x28u);
  v7 = a3;
  LOBYTE(a3) = v6 == 6 || v6 == 1;
  if ( (_BYTE)a3 )
    return 0;
  v8 = a3;
  v24 = 0;
  sub_127FE0(a1, (__int64)&v22, v7, 0, a5, a6, v19, v20, 0, 0, 0);
  if ( !(unsigned __int8)sub_64820(&v22, (_QWORD *)(a1 + 80)) || !(unsigned __int8)sub_317F40(a1 + 96, &v23) )
  {
    v11 = &v22;
    if ( sub_A9D90(a1, &v22, *(_QWORD *)(a1 + 48), 0, 0x201u) )
    {
LABEL_6:
      v14 = j__qalloc_or_throw(80, (__int64)v11, v12, v13);
      v15 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v14 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v14 + 40) = 0;
      *(_QWORD *)(v14 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v14 + 56) = 0;
      *(_QWORD *)(v14 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v14 + 72) = 0;
      sub_330970(v14, v15);
      *(_DWORD *)v14 = 4;
      *(_DWORD *)(v14 + 4) |= 0x80u;
      sub_125180(v14 + 32, (unsigned __int8 *)a2);
      sub_125180(v14 + 64, (unsigned __int8 *)v7);
      if ( *(_DWORD *)(a2 + 4) != *(_DWORD *)(v7 + 4) )
      {
        if ( !under_debugger )
          sub_383060(51245);
        BUG();
      }
      sub_A3160(a1, (_QWORD *)v14, 0);
      *(_DWORD *)(a1 + 24) |= 0xA0u;
      v8 = 1;
      goto LABEL_8;
    }
    if ( !(unsigned __int8)sub_64880(&v22) || (_QWORD)v24 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      v25[0] = 0;
      v25[1] = 0;
      v17 = *(_QWORD *)(v16 + 128);
      v18 = *(_QWORD *)(v16 + 1440);
      v27 = 0;
      v26 = 0;
      if ( v17 + v18 - 1 >= v18 )
      {
        v21 = v17;
        v26 = qvector_reserve((__int64)&v26, 0, 1, 16);
        *(__m128i *)(v26 + 16 * v27) = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v21);
        *(_QWORD *)&v27 = v27 + 1;
      }
      v11 = v25;
      if ( !(unsigned __int8)sub_64820(&v22, v25)
        || (v11 = &v23, !(unsigned __int8)sub_317F40(&v26, &v23))
        || *(_DWORD *)(a1 + 376) != 1
        || *(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1 != **(_DWORD **)(a1 + 368) )
      {
        sub_93B40(v25);
        goto LABEL_6;
      }
      sub_93B40(v25);
    }
  }
LABEL_8:
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  qfree(v22);
  return v8;
}
