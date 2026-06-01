__int64 __fastcall sub_3DD650(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // eax
  const char *v15; // rsi
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 i; // rbx
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 j; // rbx
  __int64 *v26; // rax
  __int64 v27; // rdi
  const char *v29; // [rsp+10h] [rbp-1A8h] BYREF
  __int128 v30; // [rsp+18h] [rbp-1A0h]
  __m128i v31[2]; // [rsp+30h] [rbp-188h] BYREF
  char v32; // [rsp+50h] [rbp-168h]
  unsigned __int64 v33; // [rsp+54h] [rbp-164h]
  __int64 v34; // [rsp+60h] [rbp-158h]
  __int128 v35; // [rsp+68h] [rbp-150h]
  __int64 v36; // [rsp+78h] [rbp-140h]
  __int128 v37; // [rsp+80h] [rbp-138h]
  __int64 v38; // [rsp+90h] [rbp-128h]
  __int128 v39; // [rsp+98h] [rbp-120h]
  __int64 v40; // [rsp+A8h] [rbp-110h]
  __int128 v41; // [rsp+B0h] [rbp-108h]
  int v42; // [rsp+C0h] [rbp-F8h]
  __int64 v43; // [rsp+C8h] [rbp-F0h]
  __int128 v44; // [rsp+D0h] [rbp-E8h]
  __int64 v45; // [rsp+E0h] [rbp-D8h]
  __int64 v46; // [rsp+E8h] [rbp-D0h]
  __int64 v47; // [rsp+F0h] [rbp-C8h]
  __int64 v48; // [rsp+F8h] [rbp-C0h]
  __int128 v49; // [rsp+100h] [rbp-B8h]
  __int64 v50; // [rsp+110h] [rbp-A8h]
  __int64 v51; // [rsp+118h] [rbp-A0h]
  __int64 v52; // [rsp+120h] [rbp-98h]
  __int64 v53; // [rsp+128h] [rbp-90h]
  __int64 v54; // [rsp+130h] [rbp-88h]
  __int128 v55; // [rsp+138h] [rbp-80h]
  __int64 v56; // [rsp+148h] [rbp-70h]
  __int128 v57; // [rsp+150h] [rbp-68h]
  __int64 v58; // [rsp+160h] [rbp-58h]
  __int128 v59; // [rsp+168h] [rbp-50h]
  __int64 v60; // [rsp+178h] [rbp-40h]
  __int64 v61; // [rsp+180h] [rbp-38h]
  int v62; // [rsp+188h] [rbp-30h]
  unsigned __int64 v63; // [rsp+198h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 64);
  v63 = __readfsqword(0x28u);
  if ( v3 && (unsigned int)(*(_DWORD *)(v3 + 60) - 1) >= 2 )
    v3 = 0;
  v4 = *(_QWORD *)(v3 + 64);
  v5 = sub_3D2ED0(**(_QWORD **)(a1 + 16), v4);
  v6 = (_QWORD *)v5;
  if ( !v5 )
    return 0;
  if ( (unsigned int)sub_13C380(v5, v4) )
  {
    sub_84290((__int64)v6);
    j__qfree((__int64)v6);
    return 0;
  }
  *(_QWORD *)(**(_QWORD **)(a1 + 16) + 1344LL) = v6;
  v9 = j__qalloc_or_throw(224, v4, v7, v8);
  sub_256FC0((__int64 *)v9, (__int64)v6);
  v12 = sub_670E0(v6, (__int64)v6, v10, v11);
  v13 = **(_QWORD **)(a1 + 16);
  v33 = 0xFFFFFFFF00000000LL;
  v32 = 0;
  v31[0].m128i_i64[1] = 0;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v31[0].m128i_i64[0] = (__int64)off_4EBD58;
  v45 = v9;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v56 = 0;
  v31[1] = 0;
  v35 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v44 = 0;
  v49 = 0;
  v55 = 0;
  v57 = 0;
  v58 = 0;
  v60 = v13;
  v61 = 0;
  v62 = 0;
  v59 = 0;
  *(_DWORD *)v6 |= 0x1800000u;
  v14 = sub_3120C0(v12, v31);
  v29 = nullptr;
  v30 = 0;
  sub_3369B0((__int64 *)&v29, v14, v6);
  v15 = s1;
  if ( (_QWORD)v30 )
    v15 = v29;
  sub_6D0A0((__int64)"structural_analysis: %s\n", v15);
  sub_3CA280((__int64)v31, 1u, (__int64)&unk_4190BD);
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree((__int64)v29);
  }
  sub_6C480(v31);
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 104))-- == 1 )
    {
      sub_258970((__int64 *)v9);
      v17 = *(_QWORD *)(v9 + 184);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v9 + 192);
        if ( v18 )
        {
          for ( i = 0; i != v18; ++i )
          {
            v20 = (__int64 *)(v17 + 24 * i);
            v21 = *v20;
            if ( *v20 )
            {
              v20[1] = 0;
              qfree(v21);
              v17 = *(_QWORD *)(v9 + 184);
            }
          }
        }
        *(_QWORD *)(v9 + 192) = 0;
        qfree(v17);
      }
      v22 = *(_QWORD *)(v9 + 160);
      if ( v22 )
      {
        *(_QWORD *)(v9 + 168) = 0;
        qfree(v22);
      }
      v23 = *(_QWORD *)(v9 + 128);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v9 + 136);
        if ( v24 )
        {
          for ( j = 0; j != v24; ++j )
          {
            v26 = (__int64 *)(v23 + 32 * j);
            v27 = *v26;
            if ( *v26 )
            {
              v26[1] = 0;
              qfree(v27);
              v23 = *(_QWORD *)(v9 + 128);
            }
          }
        }
        *(_QWORD *)(v9 + 136) = 0;
        qfree(v23);
      }
      sub_255050(v9 + 16);
      j__qfree(v9);
    }
  }
  return 1;
}
