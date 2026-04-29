__int64 __fastcall sub_3724B0(__int64 a1, _QWORD *a2, int a3)
{
  unsigned int v4; // eax
  unsigned int v6; // eax
  __int64 v7; // rbx
  const char *v8; // r14
  __int64 v9; // rsi
  __int16 v10; // ax
  unsigned int v11; // eax
  __int64 v12; // rdi
  unsigned int v13; // r12d
  __int64 v14; // r13
  __int64 v15; // rbp
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  char tinfo_property; // al
  unsigned __int64 tinfo_size; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-80h] BYREF
  __int64 v24; // [rsp+10h] [rbp-78h] BYREF
  __int128 v25; // [rsp+18h] [rbp-70h]
  __int128 v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  int v28; // [rsp+40h] [rbp-48h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 72);
  v29 = __readfsqword(0x28u);
  if ( v4 <= 0x10 )
    v4 = getinf(99);
  if ( v4 == 176 || v4 == 256 )
  {
    if ( (tinfo_property = get_tinfo_property(*a2, 2), (tinfo_property & 0x3E) != 0) && (tinfo_property & 0xFu) <= 8
      || (get_tinfo_property(*a2, 2) & 0xF) == 9 )
    {
      tinfo_size = get_tinfo_size(0, *a2, 0);
      if ( tinfo_size > 8 )
      {
        LODWORD(v25) = 0;
        DWORD1(v25) = tinfo_size;
        v23 = 17;
        v24 = 0;
        copy_tinfo_t(&v24, &v23);
        create_tinfo(a2, 11, 11, &v24);
        clear_tinfo_t(&v24);
        clear_tinfo_t(&v23);
      }
    }
  }
  if ( (get_tinfo_property(*a2, 2) & 0xF) != 0xB )
    return 0;
  if ( a3 == -1 )
    goto LABEL_11;
  v6 = *(_DWORD *)(a1 + 72);
  if ( v6 <= 0x10 )
    v6 = getinf(99);
  if ( v6 == 176 || v6 == 256 )
  {
    return 0;
  }
  else
  {
LABEL_11:
    v24 = 0;
    v27 = 0;
    v28 = 1;
    v25 = 0;
    v26 = 0;
    v24 = qvector_reserve(&v24, 0, 1, 144);
    v7 = v24 + 144 * v25;
    *(_QWORD *)(v7 + 16) = 0;
    *(_QWORD *)(v7 + 40) = 0;
    *(_QWORD *)(v7 + 112) = 1;
    *(_DWORD *)(v7 + 120) = -1;
    *(_QWORD *)(v7 + 128) = 0;
    *(_BYTE *)(v7 + 136) = 0;
    *(_OWORD *)v7 = 0;
    *(_OWORD *)(v7 + 24) = 0;
    *(_OWORD *)(v7 + 48) = 0;
    *(_OWORD *)(v7 + 64) = 0;
    *(_QWORD *)&v25 = v25 + 1;
    copy_tinfo_t(v7 + 64, a2);
    v8 = "_r0";
    v9 = *(_QWORD *)(v7 + 16);
    if ( a3 != -1 )
      v8 = "arr";
    if ( *(_QWORD *)(v7 + 32) <= 3u )
    {
      v22 = qvector_reserve(v7 + 16, v9, 4, 1);
      *(_QWORD *)(v7 + 16) = v22;
      v9 = v22;
    }
    v10 = *(_WORD *)v8;
    *(_QWORD *)(v7 + 24) = 4;
    *(_WORD *)v9 = v10;
    *(_BYTE *)(v9 + 2) = v8[2];
    *(_BYTE *)(*(_QWORD *)(v7 + 16) + 3LL) = 0;
    *(_QWORD *)v7 = 0;
    v11 = sub_FB1C0(a1, a2, (__int64)&v24, a3, *(_QWORD *)(a1 + 40));
    v12 = v24;
    v13 = v11;
    if ( v24 )
    {
      v14 = v25;
      if ( (_QWORD)v25 )
      {
        v15 = 0;
        do
        {
          v16 = (_QWORD *)(v12 + 144 * v15);
          clear_tinfo_t(v16 + 8);
          v17 = v16[5];
          if ( v17 )
          {
            v16[6] = 0;
            qfree(v17);
          }
          v18 = v16[2];
          if ( v18 )
          {
            v16[3] = 0;
            qfree(v18);
          }
          ++v15;
          v12 = v24;
        }
        while ( v14 != v15 );
      }
      *(_QWORD *)&v25 = 0;
      qfree(v12);
    }
  }
  return v13;
}
