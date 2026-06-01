__int64 __fastcall sub_D55100(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  int *v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // r12d
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 result; // rax
  bool v24; // zf
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // [rsp+8h] [rbp-A8h]
  __int64 v44; // [rsp+10h] [rbp-A0h]
  __int64 v45; // [rsp+18h] [rbp-98h]
  __int64 v46; // [rsp+20h] [rbp-90h]
  __int64 v48; // [rsp+30h] [rbp-80h]
  __int64 v49; // [rsp+38h] [rbp-78h]
  int v50; // [rsp+38h] [rbp-78h]
  int v51[2]; // [rsp+40h] [rbp-70h] BYREF
  __int64 v52; // [rsp+48h] [rbp-68h]
  int v53[2]; // [rsp+50h] [rbp-60h] BYREF
  __int64 v54; // [rsp+58h] [rbp-58h]
  __int64 v55; // [rsp+60h] [rbp-50h] BYREF
  __int64 v56; // [rsp+68h] [rbp-48h]
  __int64 v57; // [rsp+70h] [rbp-40h] BYREF
  __int64 v58; // [rsp+78h] [rbp-38h]

  v49 = a1 + 232;
  v6 = *(int **)(*(_QWORD *)(sub_15D1F10(a2) + 24) + 8LL);
  if ( *((_BYTE *)v6 + 8) )
    sub_DBF6E(0);
  v7 = *v6;
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v45 = v8;
    if ( v7 == 1 )
    {
      v55 = 0;
      v56 = v8;
      v31 = sub_D50430(v49, 1u);
      v32 = v31;
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      v33 = sub_D50390(v49, a3);
      v34 = v33;
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
      v35 = sub_D50430(v49, a3);
      v36 = v35;
      if ( v35 )
        ++*(_DWORD *)(v35 + 8);
      sub_D81DD0(a1 + 16, a2, v32, &v55);
      result = sub_D81E50(a1 + 16, v55, v34, v36, a4);
      if ( v36 )
      {
        v24 = (*(_DWORD *)(v36 + 8))-- == 1;
        if ( v24 )
          result = sub_15D7BC0(v45, v36);
      }
      if ( v34 )
      {
        v24 = (*(_DWORD *)(v34 + 8))-- == 1;
        if ( v24 )
          result = sub_15D7BC0(v45, v34);
      }
      if ( v32 )
      {
        v24 = (*(_DWORD *)(v32 + 8))-- == 1;
        if ( v24 )
          result = sub_15D7BC0(v45, v32);
      }
      v37 = v55;
      if ( v55 )
      {
        v38 = v56;
        v24 = (*(_DWORD *)(v55 + 8))-- == 1;
        if ( v24 )
          return sub_15D7BC0(v38, v37);
      }
    }
    else
    {
      LOBYTE(v56) = 0;
      v9 = v7 >> 1;
      LODWORD(v55) = v7 - 1;
      *(_QWORD *)v51 = a2;
      v10 = *(_QWORD *)(a1 + 240);
      LODWORD(v57) = v7 >> 1;
      LOBYTE(v58) = 0;
      v11 = sub_15DCAD0(v10, (int)v51, 0);
      sub_15D0DF0(&v57);
      sub_15D0DF0(&v55);
      if ( v11 )
        ++*(_DWORD *)(v11 + 8);
      LOBYTE(v56) = 0;
      LODWORD(v55) = v9 - 1;
      *(_QWORD *)v53 = a2;
      v57 = 0;
      v12 = *(_QWORD *)(a1 + 240);
      v58 = 0;
      v46 = sub_15DCAD0(v12, (int)v53, 0);
      sub_15D0DF0(&v57);
      sub_15D0DF0(&v55);
      if ( v46 )
        ++*(_DWORD *)(v46 + 8);
      v13 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(v11) + 24) + 8LL);
      if ( *(_BYTE *)(v13 + 8) )
        sub_DBF6E(0);
      v14 = *(_DWORD *)v13;
      v15 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)v51 = 0;
      *(_QWORD *)v53 = 0;
      v52 = v15;
      v54 = v15;
      sub_D55100(a1, v11, a3, v51);
      sub_D55100(a1, v46, a3, v53);
      v16 = *(_QWORD *)(a1 + 8);
      v55 = 0;
      v43 = v16;
      v56 = v16;
      v17 = sub_D50430(v49, v14);
      v18 = v17;
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      v44 = a1 + 16;
      sub_D81DD0(a1 + 16, v11, v17, &v55);
      v48 = *(_QWORD *)(a1 + 8);
      v19 = sub_D81BF0(v49, v14, a3);
      v20 = v19;
      if ( v19 )
        ++*(_DWORD *)(v19 + 8);
      v21 = sub_15E1B70(*(_QWORD *)(a1 + 240));
      v22 = v21;
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      result = sub_D81E50(v44, v55, v21, *(_QWORD *)v51, a4);
      if ( v20 )
      {
        v24 = (*(_DWORD *)(v20 + 8))-- == 1;
        if ( v24 )
          result = sub_15D7BC0(v48, v20);
      }
      if ( v22 )
      {
        v24 = (*(_DWORD *)(v22 + 8))-- == 1;
        if ( v24 )
          result = sub_15D7BC0(v48, v22);
      }
      if ( v18 )
      {
        v24 = (*(_DWORD *)(v18 + 8))-- == 1;
        if ( v24 )
          result = sub_15D7BC0(v43, v18);
      }
      v25 = v55;
      if ( v55 )
      {
        v26 = v56;
        v24 = (*(_DWORD *)(v55 + 8))-- == 1;
        if ( v24 )
          result = sub_15D7BC0(v26, v25);
      }
      v27 = *(_QWORD *)v53;
      if ( *(_QWORD *)v53 )
      {
        v28 = v54;
        v24 = (*(_DWORD *)(*(_QWORD *)v53 + 8LL))-- == 1;
        if ( v24 )
          result = sub_15D7BC0(v28, v27);
      }
      v29 = *(_QWORD *)v51;
      if ( *(_QWORD *)v51 )
      {
        v30 = v52;
        v24 = (*(_DWORD *)(*(_QWORD *)v51 + 8LL))-- == 1;
        if ( v24 )
          result = sub_15D7BC0(v30, v29);
      }
      if ( v46 )
      {
        v50 = *(_DWORD *)(v46 + 8);
        result = (unsigned int)(v50 - 1);
        *(_DWORD *)(v46 + 8) = result;
        if ( v50 == 1 )
          result = sub_15D7BC0(v45, v46);
      }
      v24 = (*(_DWORD *)(v11 + 8))-- == 1;
      if ( v24 )
        return sub_15D7BC0(v45, v11);
    }
  }
  else
  {
    v39 = sub_D50430(v49, a3);
    v40 = v39;
    if ( v39 )
      ++*(_DWORD *)(v39 + 8);
    v41 = *a4;
    if ( *a4 )
    {
      v42 = a4[1];
      v24 = (*(_DWORD *)(v41 + 8))-- == 1;
      if ( v24 )
        sub_15D7BC0(v42, v41);
    }
    *a4 = v40;
    return (__int64)a4;
  }
  return result;
}

