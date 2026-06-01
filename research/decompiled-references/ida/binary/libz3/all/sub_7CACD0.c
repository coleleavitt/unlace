void __fastcall sub_7CACD0(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ebp
  __int64 v8; // r13
  int v9; // eax
  bool v10; // r12
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 v12; // rdi
  unsigned int v13; // ebp
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int32 v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __m128i v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rax
  _DWORD *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // [rsp+20h] [rbp-68h]
  __int64 v31; // [rsp+20h] [rbp-68h]
  __int32 v32; // [rsp+2Ch] [rbp-5Ch]
  __m128i v33; // [rsp+30h] [rbp-58h] BYREF
  __int64 v34; // [rsp+40h] [rbp-48h]

  v6 = *((_DWORD *)a2 + 7);
  if ( v6 == 0x7FFFFFFF )
    return;
  v8 = a3;
  if ( a3 )
  {
    v9 = *(_DWORD *)(a3 + 24);
    if ( v9 )
      v10 = v9 == -1;
    else
      v10 = *(_QWORD *)(a1[18] + 856LL) != *(_QWORD *)a3;
    v11 = *(__int64 (__fastcall **)(__int64))(*a1 + 432LL);
    if ( v11 == sub_79EFF0 )
      v12 = (__int64)(a1 + 268);
    else
      v12 = v11((__int64)a1);
    v13 = v10 + 2 * v6;
    v14 = 0;
    v15 = sub_180C100(v12, 24);
    v16 = 0;
    *(_DWORD *)(v15 + 8) = 2;
    *(_QWORD *)(v15 + 16) = v8;
    *(_QWORD *)v15 = a1;
  }
  else
  {
    v24 = *a2;
    if ( *(_WORD *)(*a2 + 4)
      || (v26 = *(_DWORD **)(*(_QWORD *)(v24 + 16) + 24LL)) == nullptr
      || *v26
      || v26[1] != 2
      || *(_DWORD *)(v24 + 24) != 2 )
    {
      sub_1872CE0("");
      sub_1873130(114, 551);
    }
    v14 = *(_QWORD *)(v24 + 32);
    v16 = *(_QWORD *)(v24 + 40);
    v25 = a1[302];
    if ( v25 )
    {
      v15 = v25 - 8;
      v13 = 2 * v6;
    }
    else
    {
      v31 = v16;
      v13 = 2 * v6;
      v15 = sub_186B270(0x18u);
      v16 = v31;
      *(_QWORD *)(v15 + 8) = 1;
      *(_QWORD *)(v15 + 16) = 0;
      a1[302] = v15 + 8;
      *(_QWORD *)v15 = a1;
    }
  }
  v17 = a1[3];
  v18 = *(_DWORD *)(v17 + 3612);
  v19 = *(_DWORD *)(*(_QWORD *)(v17 + 3288) + 4LL * v13);
  if ( v19 == -1 )
  {
    a6 = a1[281];
    LOBYTE(v19) = v16 != 0;
    if ( v16 == 0 || v14 == 0 || !a6 )
    {
      v33.m128i_i32[0] = *(_DWORD *)(v17 + 3612);
      v33.m128i_i64[1] = v15;
      LODWORD(v34) = 3;
      goto LABEL_21;
    }
    v32 = *(_DWORD *)(v17 + 3612);
    v30 = v15;
    sub_7F4630(a1[281], v14, v16);
    v17 = a1[3];
    v18 = v32;
    v15 = v30;
    v19 = *(_DWORD *)(*(_QWORD *)(v17 + 3288) + 4LL * v13);
  }
  if ( v19 <= 0 )
  {
    if ( v19 < -1 )
      return;
    v33.m128i_i32[0] = v18;
    v33.m128i_i64[1] = v15;
    LODWORD(v34) = 3;
    if ( !v19 )
    {
      sub_11C3360(v17, v13, 0, v16, v18, a6, (__int128)_mm_load_si128(&v33), v34);
      return;
    }
LABEL_21:
    sub_11B4C90(v17, v13 ^ 1, v19, v16, v18, a6, (__int128)_mm_load_si128(&v33), v34);
    return;
  }
  if ( v19 == 1
    && *((_BYTE *)a2 + 14)
    && (*((_DWORD *)a2 + 8) > 1u || (v27 = a2[6]) != 0 && *(_DWORD *)(v27 - 4) || *((_DWORD *)a2 + 38))
    && !(unsigned __int8)sub_15D26C0(a1[18], *(_QWORD *)a2[8]) )
  {
    if ( !v8 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 392LL))(a1, *(_QWORD *)(a1[18] + 856LL)) )
      {
        sub_1872CE0("");
        sub_1873130(114, 638);
      }
      v28 = a1[215];
      if ( v28 )
      {
        v29 = **(unsigned int **)(a1[18] + 856LL);
        if ( (unsigned int)v29 < *(_DWORD *)(v28 - 4) )
          v8 = *(_QWORD *)(v28 + 8 * v29);
      }
      else
      {
        LODWORD(v8) = 0;
      }
    }
    v33.m128i_i8[8] = 0;
    v33.m128i_i32[0] = 2;
    v34 = (16 * v13) | 1;
    v23 = _mm_load_si128(&v33);
    sub_13D9120((_DWORD)a1 + 1592, (_DWORD)a2, v8, v20, v21, v22, v23.m128i_i32[0], v23.m128i_i32[2], v34);
  }
}

