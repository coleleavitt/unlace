__int64 __fastcall sub_3D83D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // eax
  const char *v11; // rsi
  const char *v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 i; // rbx
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 j; // rbx
  __int64 *v23; // rax
  __int64 v24; // rdi
  const char *v26; // [rsp+10h] [rbp-1A8h] BYREF
  __int128 v27; // [rsp+18h] [rbp-1A0h]
  __m128i v28[2]; // [rsp+30h] [rbp-188h] BYREF
  char v29; // [rsp+50h] [rbp-168h]
  unsigned __int64 v30; // [rsp+54h] [rbp-164h]
  __int64 v31; // [rsp+60h] [rbp-158h]
  __int128 v32; // [rsp+68h] [rbp-150h]
  __int64 v33; // [rsp+78h] [rbp-140h]
  __int128 v34; // [rsp+80h] [rbp-138h]
  __int64 v35; // [rsp+90h] [rbp-128h]
  __int128 v36; // [rsp+98h] [rbp-120h]
  __int64 v37; // [rsp+A8h] [rbp-110h]
  __int128 v38; // [rsp+B0h] [rbp-108h]
  int v39; // [rsp+C0h] [rbp-F8h]
  __int64 v40; // [rsp+C8h] [rbp-F0h]
  __int128 v41; // [rsp+D0h] [rbp-E8h]
  __int64 v42; // [rsp+E0h] [rbp-D8h]
  __int64 v43; // [rsp+E8h] [rbp-D0h]
  __int64 v44; // [rsp+F0h] [rbp-C8h]
  __int64 v45; // [rsp+F8h] [rbp-C0h]
  __int128 v46; // [rsp+100h] [rbp-B8h]
  __int64 v47; // [rsp+110h] [rbp-A8h]
  __int64 v48; // [rsp+118h] [rbp-A0h]
  __int64 v49; // [rsp+120h] [rbp-98h]
  __int64 v50; // [rsp+128h] [rbp-90h]
  __int64 v51; // [rsp+130h] [rbp-88h]
  __int128 v52; // [rsp+138h] [rbp-80h]
  __int64 v53; // [rsp+148h] [rbp-70h]
  __int128 v54; // [rsp+150h] [rbp-68h]
  __int64 v55; // [rsp+160h] [rbp-58h]
  __int128 v56; // [rsp+168h] [rbp-50h]
  __int64 v57; // [rsp+178h] [rbp-40h]
  __int64 v58; // [rsp+180h] [rbp-38h]
  int v59; // [rsp+188h] [rbp-30h]
  unsigned __int64 v60; // [rsp+198h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 64);
  v60 = __readfsqword(0x28u);
  if ( v3 && (unsigned int)(*(_DWORD *)(v3 + 60) - 1) >= 2 )
    v3 = 0;
  v4 = *(_QWORD *)(v3 + 64);
  v5 = sub_3CDC50(**(_QWORD **)(a1 + 16), v4);
  v6 = (_QWORD *)v5;
  if ( !v5 )
    return 0;
  if ( (unsigned int)sub_137EC0(v5, v4) )
  {
    sub_7FDD0((__int64)v6);
    j__qfree(v6);
    return 0;
  }
  *(_QWORD *)(**(_QWORD **)(a1 + 16) + 1344LL) = v6;
  v7 = j__qalloc_or_throw(224);
  sub_2523C0((__int64 *)v7, (__int64)v6);
  v8 = sub_62D60(v6);
  v9 = **(_QWORD **)(a1 + 16);
  v30 = 0xFFFFFFFF00000000LL;
  v29 = 0;
  v28[0].m128i_i64[1] = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v37 = 0;
  v39 = 0;
  v40 = 0;
  v28[0].m128i_i64[0] = (__int64)off_4BDB98;
  v42 = v7;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v53 = 0;
  v28[1] = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  v41 = 0;
  v46 = 0;
  v52 = 0;
  v54 = 0;
  v55 = 0;
  v57 = v9;
  v58 = 0;
  v59 = 0;
  v56 = 0;
  *(_DWORD *)v6 |= 0x1800000u;
  v10 = sub_30CFC0(v8, v28);
  v26 = nullptr;
  v27 = 0;
  sub_331410((__int64 *)&v26, v10, v6);
  v11 = s1;
  if ( (_QWORD)v27 )
    v11 = v26;
  sub_68D20((__int64)"structural_analysis: %s\n", v11);
  v12 = s1;
  if ( v6[52] )
    v12 = (const char *)v6[51];
  sub_3C5000((__int64)v28, 1u, (__int64)&unk_3F40D1, v12);
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  sub_68100(v28);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 104))-- == 1 )
    {
      sub_253D70((__int64 *)v7);
      v14 = *(_QWORD *)(v7 + 184);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v7 + 192);
        if ( v15 )
        {
          for ( i = 0; i != v15; ++i )
          {
            v17 = (__int64 *)(v14 + 24 * i);
            v18 = *v17;
            if ( *v17 )
            {
              v17[1] = 0;
              qfree(v18);
              v14 = *(_QWORD *)(v7 + 184);
            }
          }
        }
        *(_QWORD *)(v7 + 192) = 0;
        qfree(v14);
      }
      v19 = *(_QWORD *)(v7 + 160);
      if ( v19 )
      {
        *(_QWORD *)(v7 + 168) = 0;
        qfree(v19);
      }
      v20 = *(_QWORD *)(v7 + 128);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v7 + 136);
        if ( v21 )
        {
          for ( j = 0; j != v21; ++j )
          {
            v23 = (__int64 *)(v20 + 32 * j);
            v24 = *v23;
            if ( *v23 )
            {
              v23[1] = 0;
              qfree(v24);
              v20 = *(_QWORD *)(v7 + 128);
            }
          }
        }
        *(_QWORD *)(v7 + 136) = 0;
        qfree(v20);
      }
      sub_250450(v7 + 16);
      j__qfree(v7);
    }
  }
  return 1;
}
