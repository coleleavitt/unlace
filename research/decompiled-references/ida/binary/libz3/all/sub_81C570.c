__int64 __fastcall sub_81C570(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 *v3; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned int **v6; // rbx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rax
  unsigned int v10; // eax
  int v11; // r8d
  int v12; // r9d
  unsigned int *v13; // r14
  unsigned int *v14; // r12
  void *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned int *v18; // rbx
  bool v19; // zf
  __int64 v20; // r15
  unsigned int *v21; // rax
  unsigned int *v22; // rbx
  void *v23; // r13
  __int64 v24; // r12
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // r13
  unsigned int v29; // r15d
  const __m128i *v30; // rdi
  __m128 *v31; // rax
  __int64 result; // rax
  int v33; // [rsp+0h] [rbp-C0h]
  int v34; // [rsp+0h] [rbp-C0h]
  __int64 v35; // [rsp+0h] [rbp-C0h]
  int v36; // [rsp+8h] [rbp-B8h]
  unsigned int *v37; // [rsp+8h] [rbp-B8h]
  int v38; // [rsp+10h] [rbp-B0h]
  int v39; // [rsp+10h] [rbp-B0h]
  int v40; // [rsp+18h] [rbp-A8h]
  __int64 v41; // [rsp+18h] [rbp-A8h]
  __int64 v42; // [rsp+18h] [rbp-A8h]
  int v43; // [rsp+20h] [rbp-A0h]
  int v44; // [rsp+20h] [rbp-A0h]
  __int64 v45; // [rsp+20h] [rbp-A0h]
  char v46; // [rsp+28h] [rbp-98h]
  unsigned int **v47; // [rsp+28h] [rbp-98h]
  __int64 v48; // [rsp+30h] [rbp-90h]
  __int64 v49; // [rsp+38h] [rbp-88h]
  unsigned int *v50; // [rsp+38h] [rbp-88h]
  int v51; // [rsp+40h] [rbp-80h]
  unsigned int *v52; // [rsp+40h] [rbp-80h]
  void *v53; // [rsp+48h] [rbp-78h]
  void *v54; // [rsp+48h] [rbp-78h]
  __int64 v55; // [rsp+50h] [rbp-70h]
  unsigned int v56; // [rsp+5Ch] [rbp-64h]
  _DWORD **v57; // [rsp+60h] [rbp-60h]
  int v59; // [rsp+68h] [rbp-58h]
  unsigned int *v60; // [rsp+70h] [rbp-50h] BYREF
  int v61[2]; // [rsp+78h] [rbp-48h] BYREF
  int v62[2]; // [rsp+80h] [rbp-40h] BYREF
  int v63[2]; // [rsp+88h] [rbp-38h] BYREF

  v2 = *a2;
  v3 = (__int64 *)a2[22];
  ++*(_DWORD *)(a1 + 304);
  v55 = v2;
  v49 = *v3;
  if ( *(_WORD *)(v2 + 4) )
    BUG();
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 24LL) + 8LL);
  if ( *(_BYTE *)(v4 + 8) != 1 )
    sub_DBF6E(0);
  v53 = *(void **)v4;
  v5 = sub_15FCC40(a1 + 112, *(_QWORD *)v4);
  v38 = sub_15F0A30(a1 + 112, v5);
  v6 = (unsigned int **)sub_15FB1F0(a1 + 112, v5);
  v33 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)v63 = v49;
  v9 = sub_15DC610(v33, v38, 1, (int)v63, v7, v8, v33, (int)v63, v38, v40, v43, v46, (int)a2, v49, v51, v53);
  v44 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v41 = *(_QWORD *)(a1 + 72);
  v10 = sub_7E58C0(a1, v9);
  v13 = *v6;
  v56 = v10;
  if ( *v6 )
  {
    v52 = &v13[2 * *(v13 - 1)];
    if ( v52 == v13 )
    {
      v13 = nullptr;
    }
    else
    {
      v14 = *v6;
      v13 = nullptr;
      v47 = &v60;
      do
      {
        while ( 1 )
        {
          v23 = *(void **)v14;
          if ( v54 == *(void **)v14 )
          {
            v57 = *(_DWORD ***)(v48 + 184);
          }
          else
          {
            v15 = *(void **)v14;
            v16 = *(_QWORD *)(a1 + 72);
            v60 = v50;
            v17 = sub_15DC610(
                    v16,
                    (int)v15,
                    1,
                    (int)v47,
                    v11,
                    v12,
                    v34,
                    v36,
                    v39,
                    v41,
                    v44,
                    (char)v47,
                    v48,
                    (int)v50,
                    (int)v52,
                    v54);
            v18 = (unsigned int *)v17;
            if ( v17 )
              ++*(_DWORD *)(v17 + 8);
            if ( v13 )
            {
              v19 = v13[2]-- == 1;
              if ( v19 )
                sub_15D7BC0(v41, v13);
            }
            v57 = (_DWORD **)sub_7E5940(a1, v18);
            v13 = v18;
          }
          v20 = *(_QWORD *)(a1 + 72);
          *(_QWORD *)v61 = v55;
          v21 = (unsigned int *)sub_15DC610(
                                  v20,
                                  (int)v23,
                                  1,
                                  (int)v61,
                                  v11,
                                  v12,
                                  v34,
                                  v36,
                                  v39,
                                  v41,
                                  v44,
                                  (char)v47,
                                  v48,
                                  (int)v50,
                                  (int)v52,
                                  v54);
          v22 = v21;
          if ( v21 )
            break;
          sub_81C160((unsigned __int64 *)a1, v57, nullptr, v56);
          v14 += 2;
          if ( v52 == v14 )
            goto LABEL_21;
        }
        ++v21[2];
        sub_81C160((unsigned __int64 *)a1, v57, v21, v56);
        v19 = v22[2]-- == 1;
        if ( v19 )
          sub_15D7BC0(v20, v22);
        v14 += 2;
      }
      while ( v52 != v14 );
    }
  }
LABEL_21:
  sub_81C160((unsigned __int64 *)a1, (_DWORD **)v48, v50, v56 ^ 1);
  v24 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)v62 = v55;
  v27 = sub_15DC610(v24, v39, 1, (int)v62, v25, v26, v34, v36, v39, v41, v44, (char)v47, v48, (int)v50, (int)v52, v54);
  v28 = v27;
  if ( v27 )
    ++*(_DWORD *)(v27 + 8);
  v29 = sub_7E58C0(a1, v27);
  v30 = *(const __m128i **)(a1 + 80);
  *(_QWORD *)v63 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v56), _mm_cvtsi32_si128(v29 ^ 1)).m128i_u64[0];
  v31 = sub_7A65F0(v30, (unsigned __int64 *)(a1 + 16), 2u, v37, 0, nullptr, *(double *)v63, 0, nullptr);
  result = sub_7E5400(a1, v56 ^ 1, v29, v31);
  if ( v28 )
  {
    v19 = (*(_DWORD *)(v28 + 8))-- == 1;
    if ( v19 )
      result = sub_15D7BC0(v24, v28);
  }
  if ( v13 )
  {
    v19 = v13[2]-- == 1;
    if ( v19 )
      result = sub_15D7BC0(v42, v13);
  }
  if ( v45 )
  {
    v59 = *(_DWORD *)(v45 + 8);
    result = (unsigned int)(v59 - 1);
    *(_DWORD *)(v45 + 8) = result;
    if ( v59 == 1 )
      return sub_15D7BC0(v35, v45);
  }
  return result;
}

