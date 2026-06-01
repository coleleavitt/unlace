__int64 *__fastcall sub_40A2F0(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rax
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rbp
  bool v13; // zf
  int v14; // eax
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdi
  void *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rbx
  int v40[2]; // [rsp+0h] [rbp-F8h]
  unsigned int *v41; // [rsp+0h] [rbp-F8h]
  unsigned int *v42; // [rsp+0h] [rbp-F8h]
  unsigned int v43; // [rsp+8h] [rbp-F0h]
  __int64 v44; // [rsp+8h] [rbp-F0h]
  __int64 v45; // [rsp+10h] [rbp-E8h]
  _QWORD *v46; // [rsp+10h] [rbp-E8h]
  _BYTE *v47; // [rsp+18h] [rbp-E0h]
  int v48; // [rsp+20h] [rbp-D8h]
  __int64 v49; // [rsp+20h] [rbp-D8h]
  __int64 *v50; // [rsp+28h] [rbp-D0h]
  int v51; // [rsp+30h] [rbp-C8h]
  __int64 v52; // [rsp+30h] [rbp-C8h]
  int v53; // [rsp+38h] [rbp-C0h]
  int v54; // [rsp+40h] [rbp-B8h]
  void *v55; // [rsp+48h] [rbp-B0h]
  __int64 v56; // [rsp+50h] [rbp-A8h] BYREF
  unsigned int *v57; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+60h] [rbp-98h] BYREF
  __int64 v59; // [rsp+68h] [rbp-90h]
  _QWORD v60[2]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v61[120]; // [rsp+80h] [rbp-78h] BYREF

  v3 = a2[1];
  *a1 = 0;
  v50 = a1;
  v4 = *(_QWORD *)(v3 + 864);
  a1[1] = v3;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  sub_3FCDF0(0, v3);
  *a1 = v4;
  v5 = a2[27];
  if ( v5 && *(_DWORD *)(v5 - 4) )
  {
    v47 = v61;
    sub_1694970(v61, a2[1]);
    v6 = (void *)a2[1];
    v7 = a2[6];
    v55 = v6;
    if ( v7 && *(_DWORD *)(v7 - 4) )
    {
      LODWORD(v45) = *(_DWORD *)(v7 - 4);
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v40[0] = (int)v6;
      while ( 1 )
      {
        v14 = sub_439010(*a2 + 8LL, *(_QWORD *)(v7 + 8 * v8), 1, 0);
        v17 = sub_15DC610(v40[0], v14, 0, 0, v15, v16, v40[0], v8, v45, (int)v47, v48, (char)v50, v51, v53, v54, v55);
        v18 = v17;
        if ( v17 )
          ++*(_DWORD *)(v17 + 8);
        if ( v10 )
        {
          v13 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v13 )
            sub_15D7BC0(v55, v10);
        }
        v11 = sub_15DB5C0(a2[1], v43, *(_QWORD *)(*(_QWORD *)(a2[6] + 8 * v8) + 40LL));
        v12 = v11;
        if ( v11 )
          ++*(_DWORD *)(v11 + 8);
        if ( v9 )
        {
          v13 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v13 )
            sub_15D7BC0(v55, v9);
        }
        sub_1692DB0(v47, v18, v12, 0, 0);
        ++v8;
        *(_QWORD *)v40 = a2[1];
        if ( v8 == v45 )
          break;
        v7 = a2[6];
        v9 = v12;
        v10 = v18;
      }
    }
    else
    {
      v40[0] = (int)v6;
      v12 = 0;
      v18 = 0;
    }
    v60[0] = 0;
    v46 = v60;
    v23 = (void *)sub_1434DA0(v40[0], (unsigned int)v60);
    sub_18572D0(v60);
    (*(void (__fastcall **)(void *, _BYTE *))(*(_QWORD *)v23 + 24LL))(v23, v47);
    v24 = a2[27];
    v44 = a2[1];
    if ( v24 )
    {
      v19 = *(unsigned int *)(v24 - 4);
      if ( (_DWORD)v19 )
      {
        v25 = 8 * v19;
        v26 = a2[1];
        v27 = 0;
        v52 = v25;
        LODWORD(v41) = 0;
        while ( 1 )
        {
          v30 = *(_QWORD *)(v24 + v27);
          v59 = v26;
          v31 = *(_QWORD *)(v30 + 8);
          if ( v31 )
            ++*(_DWORD *)(v31 + 8);
          v32 = *(_QWORD *)(v30 + 24);
          v58 = v31;
          if ( v32 && *(_DWORD *)(v32 - 4) )
          {
            sub_16983D0(v46);
            v33 = v58;
            v34 = v60[0];
            v60[0] = v58;
            v58 = v34;
            sub_3FCDF0(v33, v60[1]);
            sub_1872CE0("");
            sub_1873130(107, 1122);
          }
          v35 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
          v39 = v58;
          if ( v58 )
          {
            ++*(_DWORD *)(v58 + 8);
            sub_1435270(
              (_DWORD)v23,
              v39,
              (unsigned int)&v58,
              v36,
              v37,
              v38,
              (_DWORD)v41,
              v44,
              (__int64)v46,
              (__int64)v47,
              v35);
            v13 = (*(_DWORD *)(v39 + 8))-- == 1;
            if ( v13 )
              sub_15D7BC0(v49, v39);
          }
          else
          {
            sub_1435270(
              (_DWORD)v23,
              0,
              (unsigned int)&v58,
              v36,
              v37,
              v38,
              (_DWORD)v41,
              v44,
              (__int64)v46,
              (__int64)v47,
              v35);
          }
          v60[0] = v58;
          if ( v58 )
            ++*(_DWORD *)(v58 + 8);
          v56 = v44;
          v57 = v42;
          sub_407600(&v57, v46);
          v28 = v58;
          v41 = v57;
          if ( v58 )
          {
            v29 = v59;
            v13 = (*(_DWORD *)(v58 + 8))-- == 1;
            if ( v13 )
              sub_15D7BC0(v29, v28);
          }
          v27 += 8;
          if ( v52 == v27 )
            break;
          v26 = a2[1];
          v24 = a2[27];
        }
        if ( v41 )
          v19 = *(v41 - 1);
        else
          v19 = 0;
      }
      else
      {
        v41 = nullptr;
      }
    }
    else
    {
      v41 = nullptr;
      v19 = 0;
    }
    v20 = sub_15EC240(v44, v19);
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    v21 = *v50;
    *v50 = v20;
    sub_3FCDF0(v21, v44);
    v56 = v44;
    v57 = v41;
    sub_2334C0(&v56);
    sub_41EA70(v23);
    sub_3FCDF0(v12, (__int64)v55);
    sub_3FCDF0(v18, (__int64)v55);
    sub_1695230(v47);
  }
  return v50;
}

