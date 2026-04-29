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
  char tinfo_property; // al
  unsigned __int64 tinfo_size; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+10h] [rbp-78h] BYREF
  __int128 v22; // [rsp+18h] [rbp-70h]
  __int128 v23; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  int v25; // [rsp+40h] [rbp-48h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 72);
  v26 = __readfsqword(0x28u);
  if ( v4 <= 0x10 )
    v4 = getinf();
  if ( v4 == 176 || v4 == 256 )
  {
    if ( (tinfo_property = get_tinfo_property(), (tinfo_property & 0x3E) != 0) && (tinfo_property & 0xFu) <= 8
      || (get_tinfo_property() & 0xF) == 9 )
    {
      tinfo_size = get_tinfo_size();
      if ( tinfo_size > 8 )
      {
        LODWORD(v22) = 0;
        DWORD1(v22) = tinfo_size;
        v21 = 0;
        copy_tinfo_t();
        create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
      }
    }
  }
  if ( (get_tinfo_property() & 0xF) != 0xB )
    return 0;
  if ( a3 == -1 )
    goto LABEL_11;
  v6 = *(_DWORD *)(a1 + 72);
  if ( v6 <= 0x10 )
    v6 = getinf();
  if ( v6 == 176 || v6 == 256 )
  {
    return 0;
  }
  else
  {
LABEL_11:
    v24 = 0;
    v25 = 1;
    v22 = 0;
    v23 = 0;
    v21 = qvector_reserve();
    v7 = v21;
    *(_QWORD *)(v21 + 16) = 0;
    *(_QWORD *)(v7 + 40) = 0;
    *(_QWORD *)(v7 + 112) = 1;
    *(_DWORD *)(v7 + 120) = -1;
    *(_QWORD *)(v7 + 128) = 0;
    *(_BYTE *)(v7 + 136) = 0;
    *(_OWORD *)v7 = 0;
    *(_OWORD *)(v7 + 24) = 0;
    *(_OWORD *)(v7 + 48) = 0;
    *(_OWORD *)(v7 + 64) = 0;
    *(_QWORD *)&v22 = v22 + 1;
    copy_tinfo_t();
    v8 = "_r0";
    v9 = *(_QWORD *)(v7 + 16);
    if ( a3 != -1 )
      v8 = "arr";
    if ( *(_QWORD *)(v7 + 32) <= 3u )
    {
      v20 = qvector_reserve();
      *(_QWORD *)(v7 + 16) = v20;
      v9 = v20;
    }
    v10 = *(_WORD *)v8;
    *(_QWORD *)(v7 + 24) = 4;
    *(_WORD *)v9 = v10;
    *(_BYTE *)(v9 + 2) = v8[2];
    *(_BYTE *)(*(_QWORD *)(v7 + 16) + 3LL) = 0;
    *(_QWORD *)v7 = 0;
    v11 = sub_FB1C0(a1, a2, (__int64)&v21, a3, *(_QWORD *)(a1 + 40));
    v12 = v21;
    v13 = v11;
    if ( v21 )
    {
      v14 = v22;
      if ( (_QWORD)v22 )
      {
        v15 = 0;
        do
        {
          v16 = (_QWORD *)(v12 + 144 * v15);
          clear_tinfo_t();
          if ( v16[5] )
          {
            v16[6] = 0;
            qfree();
          }
          if ( v16[2] )
          {
            v16[3] = 0;
            qfree();
          }
          ++v15;
          v12 = v21;
        }
        while ( v14 != v15 );
      }
      *(_QWORD *)&v22 = 0;
      qfree();
    }
  }
  return v13;
}
