unsigned __int64 __fastcall sub_457D00(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v6; // r15
  __int16 flags; // ax
  unsigned int not_tail; // r9d
  int v9; // eax
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned int *v12; // rbx
  __int64 v13; // r13
  unsigned int *v14; // r12
  int v16; // eax
  unsigned int v17; // ebp
  _DWORD *func; // rax
  unsigned int v19; // [rsp+Ch] [rbp-9Ch]
  __int64 v20; // [rsp+10h] [rbp-98h] BYREF
  unsigned int *v21; // [rsp+18h] [rbp-90h]
  __int128 v22; // [rsp+20h] [rbp-88h]
  signed int v23; // [rsp+30h] [rbp-78h]
  int v24; // [rsp+34h] [rbp-74h]
  _QWORD v25[2]; // [rsp+40h] [rbp-68h] BYREF
  __m128i v26; // [rsp+50h] [rbp-58h]
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(qword_2CA1698 + 1480);
  flags = get_flags_ex(a3, 4);
  not_tail = a3;
  if ( (flags & 0x600) == 0x200 )
    not_tail = prev_not_tail(a3);
  if ( (a4 & 0x20) == 0 )
  {
    v19 = not_tail;
    func = (_DWORD *)get_func(not_tail);
    not_tail = v19;
    if ( func )
    {
      if ( v19 == *func )
      {
        sub_445720(a1, 3u, a2, 0xFFFFFFFF, func);
        not_tail = v19;
      }
    }
  }
  v20 = a1;
  v23 = a2;
  v21 = nullptr;
  v24 = a4;
  v22 = 0;
  sub_457AB0(&v20, not_tail);
  v25[1] = 0;
  v25[0] = &v20;
  v26 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2AFF450), (__m128i)(unsigned __int64)sub_457CA0);
  sub_3CC010(v6, a3, a4);
  if ( v26.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v26.m128i_i64[0])(v25, v25, 3);
  if ( !(_QWORD)v22 )
  {
LABEL_20:
    v14 = v21;
    goto LABEL_10;
  }
  v9 = 1;
  if ( v23 )
    v9 = -(v23 != 1);
  v10 = *(_QWORD *)(switch_dbctx(*(int *)(v20 + 4LL * v9 + 16)) + 1480);
  v11 = switch_dbctx(*(int *)(v20 + 4LL * v23 + 16));
  v12 = v21;
  v13 = *(_QWORD *)(v11 + 1480);
  v14 = &v21[v22];
  if ( v21 != v14 )
  {
    do
    {
      while ( 1 )
      {
        v17 = *v12;
        if ( (sub_3B9AA0(v13, *v12, 4) & 0xC000) == 0 )
          break;
        if ( v14 == ++v12 )
          goto LABEL_20;
      }
      v16 = sub_3B9AA0(v10, v17, 4);
      if ( ((~(_WORD)v16 & 0x600) != 0 || (v16 & 0x10000000) == 0) && (v16 & 0x1000) == 0 && (v16 & 0xC000) == 0x8000 )
        sub_3CA860(v10, v17);
      ++v12;
    }
    while ( v14 != v12 );
    goto LABEL_20;
  }
LABEL_10:
  if ( v14 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v14);
  }
  return v27 - __readfsqword(0x28u);
}

