unsigned __int64 __fastcall sub_46C190(__int64 a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  __int64 v6; // r15
  __int16 flags; // ax
  unsigned __int64 not_tail; // r9
  int v9; // eax
  _QWORD *v10; // r14
  __int64 v11; // rax
  unsigned __int64 *v12; // rbx
  _QWORD *v13; // r13
  unsigned __int64 *v14; // r12
  unsigned __int64 v16; // rbp
  int v17; // eax
  _QWORD *func; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-A0h]
  __int64 v20; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 *v21; // [rsp+18h] [rbp-90h]
  __int128 v22; // [rsp+20h] [rbp-88h]
  signed int v23; // [rsp+30h] [rbp-78h]
  int v24; // [rsp+34h] [rbp-74h]
  _QWORD v25[2]; // [rsp+40h] [rbp-68h] BYREF
  __m128i v26; // [rsp+50h] [rbp-58h]
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(qword_2CCB598 + 1672);
  flags = get_flags_ex(a3, 4);
  not_tail = a3;
  if ( (flags & 0x600) == 0x200 )
    not_tail = prev_not_tail(a3);
  if ( (a4 & 0x20) == 0 )
  {
    v19 = not_tail;
    func = (_QWORD *)get_func(not_tail);
    not_tail = v19;
    if ( func )
    {
      if ( v19 == *func )
      {
        sub_459560(a1, 3u, a2, 0xFFFFFFFF, func, v19);
        not_tail = v19;
      }
    }
  }
  v20 = a1;
  v23 = a2;
  v21 = nullptr;
  v24 = a4;
  v22 = 0;
  sub_46BF30(&v20, not_tail);
  v25[0] = &v20;
  v25[1] = 0;
  v26 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B29410), (__m128i)(unsigned __int64)sub_46C130);
  sub_3D19E0(v6, a3);
  if ( v26.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v26.m128i_i64[0])(v25, v25, 3);
  if ( !(_QWORD)v22 )
  {
LABEL_17:
    v14 = v21;
    goto LABEL_10;
  }
  v9 = 1;
  if ( v23 )
    v9 = -(v23 != 1);
  v10 = *(_QWORD **)(switch_dbctx(*(int *)(v20 + 4LL * v9 + 16)) + 1672);
  v11 = switch_dbctx(*(int *)(v20 + 4LL * v23 + 16));
  v12 = v21;
  v13 = *(_QWORD **)(v11 + 1672);
  v14 = &v21[v22];
  if ( v21 != v14 )
  {
    do
    {
      while ( 1 )
      {
        v16 = *v12;
        if ( *(_QWORD *)(v10[3] + 16LL) >= *v12 )
          break;
        if ( v14 == ++v12 )
          goto LABEL_17;
      }
      if ( (sub_3BE900(v13, *v12, 4) & 0xC000) == 0 )
      {
        v17 = sub_3BE900(v10, v16, 4);
        if ( ((~(_WORD)v17 & 0x600) != 0 || (v17 & 0x10000000) == 0) && (v17 & 0x1000) == 0 && (v17 & 0xC000) == 0x8000 )
          sub_3D0150((_DWORD)v10, v16);
      }
      ++v12;
    }
    while ( v14 != v12 );
    goto LABEL_17;
  }
LABEL_10:
  if ( v14 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v14);
  }
  return v27 - __readfsqword(0x28u);
}
