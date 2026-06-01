__int64 __fastcall sub_3C6490(unsigned int **a1, int a2, __int64 *a3, int a4)
{
  unsigned int *v6; // rax
  __int64 result; // rax
  unsigned int *v8; // r12
  unsigned int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // r9d
  unsigned int *v13; // r8
  int v14; // ecx
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  unsigned int *v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rdi
  unsigned int *v21; // rdi
  __int64 v22; // rdx
  _DWORD *v23; // rax
  unsigned int i; // r13d
  __int64 v25; // rax
  __int64 v26; // r14
  int v27; // r9d
  unsigned int *v28; // r8
  int v29; // ecx
  __int64 v30; // rsi
  __int64 v31; // rdi
  unsigned int *v32; // rax
  unsigned int v33; // edx
  __int64 v34; // rdi
  unsigned int *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rsi
  unsigned int *v39; // rdi
  __int64 v40; // rsi
  unsigned int *v41; // rdi
  int v42; // [rsp+0h] [rbp-B0h]
  __int64 v43; // [rsp+8h] [rbp-A8h]
  unsigned int *v44; // [rsp+10h] [rbp-A0h]
  int v45; // [rsp+18h] [rbp-98h]
  int *v46; // [rsp+18h] [rbp-98h]
  int v47; // [rsp+20h] [rbp-90h]
  int v48; // [rsp+20h] [rbp-90h]
  __int64 v49; // [rsp+28h] [rbp-88h]
  __int64 v50; // [rsp+28h] [rbp-88h]
  __int64 v51; // [rsp+28h] [rbp-88h]
  unsigned int *v52; // [rsp+30h] [rbp-80h] BYREF
  void *v53; // [rsp+38h] [rbp-78h] BYREF
  int v54[2]; // [rsp+40h] [rbp-70h] BYREF
  unsigned int *v55; // [rsp+48h] [rbp-68h]
  __int64 v56; // [rsp+50h] [rbp-60h] BYREF
  int v57; // [rsp+58h] [rbp-58h]
  __int64 v58; // [rsp+60h] [rbp-50h] BYREF
  int v59; // [rsp+68h] [rbp-48h]
  int v60[2]; // [rsp+70h] [rbp-40h] BYREF
  __int64 v61; // [rsp+78h] [rbp-38h]

  v6 = *a1;
  v47 = a2;
  *(_QWORD *)v54 = 0;
  v44 = v6;
  v55 = v6;
  v52 = nullptr;
  result = sub_3BF620(a3, &v52);
  v8 = v52;
  if ( v52 )
  {
    if ( a4 )
    {
      v9 = 0;
      v49 = 0;
      v46 = v60;
      while ( v9 < *(v8 - 1) )
      {
        v21 = *a1;
        v22 = *(_QWORD *)&v8[2 * v9];
        if ( v22 )
        {
          v10 = sub_15DB5C0(v21, v9, v22);
          v11 = v10;
          if ( v10 )
            ++*(_DWORD *)(v10 + 8);
          if ( v49 )
          {
            HIDWORD(v43) = *(_DWORD *)(v49 + 8);
            *(_DWORD *)(v49 + 8) = HIDWORD(v43) - 1;
            if ( HIDWORD(v43) == 1 )
              sub_15D7BC0(v44, v49);
          }
          v56 = v11;
          v57 = a4;
          *(_QWORD *)v60 = 0;
          LODWORD(v61) = 0;
          v58 = 0;
          v59 = 0;
          sub_FA4800((_DWORD)a1 + 72, 2, v47, (unsigned int)&v56, (unsigned int)&v58, (_DWORD)v46, (__int64)v54);
          v13 = a1[95];
          if ( v13 )
            v14 = *(v13 - 1);
          else
            v14 = 0;
          sub_157BE40(
            (int)v46,
            (_DWORD)a1 + 200,
            v54[0],
            v14,
            (int)v13,
            v12,
            v42,
            v43,
            (int)v44,
            (int)v46,
            v47,
            v49,
            (__int64)v52,
            v53);
          v15 = *(_QWORD *)v54;
          v50 = *(_QWORD *)v60;
          *(_QWORD *)v54 = *(_QWORD *)v60;
          *(_QWORD *)v60 = v15;
          if ( v15 )
          {
            v16 = v61;
            v17 = (*(_DWORD *)(v15 + 8))-- == 1;
            if ( v17 )
            {
              sub_15D7BC0(v16, v15);
              v50 = *(_QWORD *)v54;
            }
          }
          if ( v50 )
            ++*(_DWORD *)(v50 + 8);
          v18 = a1[99];
          if ( !v18 || (v19 = *(v18 - 1), v19 == *(v18 - 2)) )
          {
            sub_23A6F0(a1 + 99);
            v18 = a1[99];
            v19 = *(v18 - 1);
          }
          v20 = v50;
          v49 = v11;
          *(_QWORD *)&v18[2 * v19] = v20;
          *(v18 - 1) = v19 + 1;
        }
        else
        {
          v23 = *((_DWORD **)v21 + 107);
          v53 = v23;
          if ( v23 )
            ++v23[2];
          sub_3BD3D0(a1 + 99, &v53);
        }
        ++v9;
      }
    }
    else
    {
      v49 = 0;
      for ( i = 0; i < *(v8 - 1); ++i )
      {
        v35 = *a1;
        v36 = *(_QWORD *)&v8[2 * i];
        if ( v36 )
        {
          v25 = sub_15DB5C0(v35, i, v36);
          v26 = v25;
          if ( v25 )
            ++*(_DWORD *)(v25 + 8);
          if ( v49 )
          {
            v45 = *(_DWORD *)(v49 + 8);
            *(_DWORD *)(v49 + 8) = v45 - 1;
            if ( v45 == 1 )
              sub_15D7BC0(v44, v49);
          }
          v56 = v26;
          v57 = 0;
          LODWORD(v61) = 0;
          *(_QWORD *)v60 = 0;
          v58 = 0;
          v59 = 0;
          sub_FA4800((_DWORD)a1 + 72, 2, v47, (unsigned int)&v56, (unsigned int)&v58, (unsigned int)v60, (__int64)v54);
          v28 = a1[95];
          if ( v28 )
            v29 = *(v28 - 1);
          else
            v29 = 0;
          sub_157BE40(
            (int)v60,
            (_DWORD)a1 + 200,
            v54[0],
            v29,
            (int)v28,
            v27,
            v42,
            v43,
            (int)v44,
            v45,
            v47,
            v49,
            (__int64)v52,
            v53);
          v30 = *(_QWORD *)v54;
          v51 = *(_QWORD *)v60;
          *(_QWORD *)v54 = *(_QWORD *)v60;
          *(_QWORD *)v60 = v30;
          if ( v30 )
          {
            v31 = v61;
            v17 = (*(_DWORD *)(v30 + 8))-- == 1;
            if ( v17 )
            {
              sub_15D7BC0(v31, v30);
              v51 = *(_QWORD *)v54;
            }
          }
          if ( v51 )
            ++*(_DWORD *)(v51 + 8);
          v32 = a1[97];
          if ( !v32 || (v33 = *(v32 - 1), v33 == *(v32 - 2)) )
          {
            sub_23A6F0(a1 + 97);
            v32 = a1[97];
            v33 = *(v32 - 1);
          }
          v34 = v51;
          v49 = v26;
          *(_QWORD *)&v32[2 * v33] = v34;
          *(v32 - 1) = v33 + 1;
        }
        else
        {
          v37 = *((_QWORD *)v35 + 107);
          v56 = v37;
          if ( v37 )
            ++*(_DWORD *)(v37 + 8);
          sub_3BD3D0(a1 + 97, &v56);
        }
      }
    }
    v38 = *(_QWORD *)v54;
    if ( *(_QWORD *)v54 )
    {
      v39 = v55;
      v17 = (*(_DWORD *)(*(_QWORD *)v54 + 8LL))-- == 1;
      if ( v17 )
        sub_15D7BC0(v39, v38);
    }
    if ( v49 )
    {
      v48 = *(_DWORD *)(v49 + 8);
      *(_DWORD *)(v49 + 8) = v48 - 1;
      if ( v48 == 1 )
        sub_15D7BC0(v44, v49);
    }
    return sub_186B220(v8 - 2);
  }
  else
  {
    v40 = *(_QWORD *)v54;
    if ( *(_QWORD *)v54 )
    {
      v41 = v55;
      v17 = (*(_DWORD *)(*(_QWORD *)v54 + 8LL))-- == 1;
      if ( v17 )
        return sub_15D7BC0(v41, v40);
    }
  }
  return result;
}

