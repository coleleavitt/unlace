__m128i *__fastcall sub_1F5A8B0(__int64 *a1, _DWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r15
  int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdi
  __m128i *result; // rax
  int v12; // r14d
  unsigned int v13; // ebx
  int v14; // edx
  unsigned __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // r8
  __int64 v24; // rsi
  __int64 v25; // rax
  bool v26; // zf
  unsigned __int64 v27; // r15
  int v28; // ecx
  unsigned __int64 v29; // r15
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // r11
  __int64 v34; // rdi
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // r15
  __int64 v37; // rax
  _QWORD *v38; // r15
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // eax
  __int64 v47; // rcx
  unsigned int v48; // esi
  _QWORD *v49; // r15
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdi
  unsigned __int64 v59; // r15
  __m128i *v60; // [rsp-10h] [rbp-98h]
  __int64 v61; // [rsp+10h] [rbp-78h]
  __int64 v62; // [rsp+10h] [rbp-78h]
  __int64 v63; // [rsp+10h] [rbp-78h]
  __int64 v64; // [rsp+18h] [rbp-70h]
  __int64 v65; // [rsp+18h] [rbp-70h]
  __int64 v66; // [rsp+20h] [rbp-68h]
  __int64 v67; // [rsp+20h] [rbp-68h]
  int v68; // [rsp+2Ch] [rbp-5Ch]
  __m128i v69; // [rsp+30h] [rbp-58h] BYREF
  __int128 v70; // [rsp+40h] [rbp-48h]

  sub_1F58FC0(a1, (__int64)a2);
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  v7 = sub_1EE7490(v4);
  v8 = *a1;
  a2[4] = v7;
  v9 = sub_1EE7490(v8);
  v10 = *a1;
  a2[5] = v9;
  a2[6] = sub_1EE7490(v10);
  result = &v69;
  if ( (_DWORD)v6 )
  {
    v12 = v6;
    v13 = 0;
    do
    {
      v49 = *(_QWORD **)(*a1 + 8);
      v50 = sub_1EE13A0((__int64)v49, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
      v55 = sub_1EDB980(v49, v50, v51, v52, v53, v54);
      sub_C03CB0((__int64)a2, v13, v55);
      v56 = *a1;
      v57 = *(unsigned int *)(*a1 + 24);
      v16 = *(_QWORD *)(*a1 + 16);
      v58 = *(_QWORD *)(*a1 + 8);
      v26 = *(_QWORD *)(v16 + 856) == 0;
      *(_DWORD *)(v56 + 24) = v57 + 1;
      v59 = *(_QWORD *)(*(_QWORD *)(v56 + 32) + 8 * v57);
      if ( !v26 )
      {
        v61 = v16;
        sub_1EDF870(v58, v16);
        v16 = v61;
      }
      v14 = __ROR4__(v59, 1);
      v15 = HIDWORD(v59);
      if ( v15 )
        v16 = *(_QWORD *)(*(_QWORD *)(v16 + 3320) + 8LL * (unsigned int)(v15 - 1));
      if ( v14 )
        v14 = v14 + *(_DWORD *)(v16 + 1648) - 2;
      sub_C03CC0((__int64)a2, v13, v14);
      v17 = *a1;
      v18 = *(_QWORD *)(*a1 + 8);
      v19 = *(_QWORD *)(v18 + 13064);
      v20 = *(_DWORD *)(v18 + 13072);
      v21 = *(_QWORD *)(v19 + 8LL * v20 - 8);
      v22 = *(_QWORD *)(v19 + 8LL * (v20 - 2) - 8);
      v23 = *(_QWORD *)(v19 + 8LL * (v20 - 1) - 8);
      *(_DWORD *)(v18 + 13072) = v20 - 3;
      v24 = *(unsigned int *)(v17 + 24);
      v25 = *(_QWORD *)(v17 + 16);
      v26 = *(_QWORD *)(v25 + 856) == 0;
      *(_DWORD *)(v17 + 24) = v24 + 1;
      v27 = *(_QWORD *)(*(_QWORD *)(v17 + 32) + 8 * v24);
      if ( !v26 )
      {
        v66 = v21;
        v64 = v23;
        v62 = v25;
        sub_1EDF870(v18, v25);
        v25 = v62;
        v23 = v64;
        v21 = v66;
      }
      v28 = __ROR4__(v27, 1);
      v29 = HIDWORD(v27);
      if ( v29 )
        v25 = *(_QWORD *)(*(_QWORD *)(v25 + 3320) + 8LL * (unsigned int)(v29 - 1));
      if ( v28 )
        v28 = v28 + *(_DWORD *)(v25 + 1648) - 2;
      v30 = 0;
      if ( v22 )
      {
        v31 = *a1;
        v32 = *(unsigned int *)(*a1 + 24);
        v33 = *(_QWORD *)(*a1 + 16);
        v34 = *(_QWORD *)(*a1 + 8);
        v26 = *(_QWORD *)(v33 + 856) == 0;
        *(_DWORD *)(v31 + 24) = v32 + 1;
        v35 = *(_QWORD *)(*(_QWORD *)(v31 + 32) + 8 * v32);
        if ( !v26 )
        {
          v68 = v28;
          v67 = v21;
          v65 = v23;
          v63 = v33;
          sub_1EDF870(v34, v33);
          v33 = v63;
          v23 = v65;
          v21 = v67;
          v28 = v68;
        }
        v30 = __ROR4__(v35, 1);
        v36 = HIDWORD(v35);
        if ( v36 )
          v33 = *(_QWORD *)(*(_QWORD *)(v33 + 3320) + 8LL * (unsigned int)(v36 - 1));
        if ( v30 )
          v30 = v30 + *(_DWORD *)(v33 + 1648) - 2;
      }
      sub_C03CE0((__int64)a2, v13, v21, v28, v23, v30, v22);
      v37 = *a1;
      v70 = 0;
      v69 = 0;
      v38 = *(_QWORD **)(v37 + 8);
      v39 = sub_1EE13A0((__int64)v38, *(_QWORD *)(v37 + 16), (__int64 *)(v37 + 32), (_DWORD *)(v37 + 24));
      v69.m128i_i64[0] = sub_1EDB980(v38, v39, v40, v41, v42, v43);
      v44 = *(_QWORD *)(*a1 + 8);
      v45 = *(_QWORD *)(v44 + 13064);
      v46 = *(_DWORD *)(v44 + 13072);
      v69.m128i_i64[1] = *(_QWORD *)(v45 + 8LL * v46 - 8);
      *(_QWORD *)&v70 = *(_QWORD *)(v45 + 8LL * (v46 - 1) - 8);
      v47 = *(_QWORD *)(v45 + 8LL * (v46 - 2) - 8);
      *(_DWORD *)(v44 + 13072) = v46 - 3;
      v48 = v13++;
      *((_QWORD *)&v70 + 1) = v47;
      sub_C03E00((__int64)a2, v48, &v69);
      result = v60;
    }
    while ( v12 != v13 );
  }
  return result;
}
