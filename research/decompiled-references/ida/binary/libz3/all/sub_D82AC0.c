__int64 __fastcall sub_D82AC0(_QWORD *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v7; // r14
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdi
  __int64 v14; // rdx
  _DWORD *v15; // rax
  __int64 v16; // r12
  int v17; // ecx
  __int64 v18; // r15
  __int64 v19; // r12
  int v20; // edx
  int v21; // eax
  __int64 v22; // rdi
  bool v23; // zf
  __int64 v24; // rsi
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // rdi
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdi
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rdi
  int v55; // [rsp+1Ch] [rbp-94h]
  int v56; // [rsp+20h] [rbp-90h]
  int v57[2]; // [rsp+30h] [rbp-80h]
  int v58[2]; // [rsp+30h] [rbp-80h]
  int v59[2]; // [rsp+30h] [rbp-80h]
  int v61[2]; // [rsp+48h] [rbp-68h] BYREF
  int v62[2]; // [rsp+50h] [rbp-60h] BYREF
  int v63[2]; // [rsp+58h] [rbp-58h] BYREF
  int v64[2]; // [rsp+60h] [rbp-50h] BYREF
  char v65; // [rsp+68h] [rbp-48h]
  __int64 v66; // [rsp+70h] [rbp-40h] BYREF
  __int64 v67; // [rsp+78h] [rbp-38h]

  v4 = a1[5];
  if ( !v4 )
    return 0;
  v5 = 0;
  if ( *(_DWORD *)(a2 + 16) < *(_DWORD *)(v4 - 4) )
  {
    v7 = *a1;
    v10 = sub_15D1F10(a2);
    v13 = a1[3];
    v14 = v10;
    v15 = *(_DWORD **)(v10 + 24);
    v16 = *a1;
    v17 = *(_DWORD *)(v13 + 448);
    if ( !v15 || *v15 != v17 )
      goto LABEL_6;
    v29 = v15[1];
    if ( v29 )
    {
      if ( v29 != 1 )
      {
LABEL_6:
        v18 = sub_15DB5C0(*a1, *(unsigned int *)(a2 + 16), v14);
        v19 = *a3;
        if ( v18 )
        {
          v20 = *(_DWORD *)(v18 + 8);
          v21 = v20 + 1;
          *(_DWORD *)(v18 + 8) = v20 + 1;
          if ( v18 != v19 )
          {
            if ( !v19 )
            {
              *a3 = v18;
              goto LABEL_11;
            }
            v22 = a3[1];
            v23 = (*(_DWORD *)(v19 + 8))-- == 1;
            if ( !v23 )
            {
              *a3 = v18;
              v21 = *(_DWORD *)(v18 + 8);
LABEL_11:
              v24 = *a4;
              *(_DWORD *)(v18 + 8) = v21 + 1;
              if ( v24 )
              {
                v25 = a4[1];
                v23 = (*(_DWORD *)(v24 + 8))-- == 1;
                if ( !v23 )
                {
                  v26 = *(_DWORD *)(v18 + 8);
                  *a4 = 0;
                  v21 = v26 - 1;
                  goto LABEL_14;
                }
                sub_15D7BC0(v25, v24);
                *a4 = 0;
                goto LABEL_21;
              }
              *a4 = 0;
LABEL_14:
              *(_DWORD *)(v18 + 8) = v21;
              if ( !v21 )
                sub_15D7BC0(v7, v18);
              return 1;
            }
            sub_15D7BC0(v22, v19);
            *a3 = v18;
LABEL_37:
            v21 = *(_DWORD *)(v18 + 8);
            goto LABEL_11;
          }
          v27 = *a4;
          if ( !*a4 )
          {
            *a4 = 0;
            v21 = v20;
            goto LABEL_14;
          }
          v28 = a4[1];
          v23 = (*(_DWORD *)(v27 + 8))-- == 1;
          if ( v23 )
            sub_15D7BC0(v28, v27);
          *a4 = 0;
          v18 = v19;
LABEL_21:
          v21 = *(_DWORD *)(v18 + 8) - 1;
          goto LABEL_14;
        }
        if ( !v19 )
        {
          v51 = *a4;
          if ( *a4 )
          {
            v52 = a4[1];
            v23 = (*(_DWORD *)(v51 + 8))-- == 1;
            if ( v23 )
              sub_15D7BC0(v52, v51);
          }
          goto LABEL_45;
        }
        v37 = a3[1];
        v23 = (*(_DWORD *)(v19 + 8))-- == 1;
        if ( v23 )
          sub_15D7BC0(v37, v19);
        *a3 = 0;
LABEL_42:
        v38 = *a4;
        if ( *a4 )
        {
          v39 = a4[1];
          v23 = (*(_DWORD *)(v38 + 8))-- == 1;
          if ( v23 )
            sub_15D7BC0(v39, v38);
        }
LABEL_45:
        *a4 = 0;
        return 1;
      }
      v30 = sub_1674700(v13 + 232, 3);
      v31 = sub_15DB5C0(v16, *(unsigned int *)(a2 + 16), v30);
      v32 = v31;
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      v33 = a1[3];
      *(_QWORD *)v64 = v31;
      *(_QWORD *)v57 = *(_QWORD *)(v33 + 432);
      v34 = sub_15D2CD0(*(_QWORD *)v57, *(unsigned int *)(v33 + 448), 1, 0, 0);
      v18 = sub_15DCAD0(v57[0], (int)v64, v34);
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      if ( v32 )
      {
        v23 = (*(_DWORD *)(v32 + 8))-- == 1;
        if ( v23 )
          sub_15D7BC0(v16, v32);
      }
    }
    else
    {
      *(_QWORD *)v58 = v14;
      v56 = sub_15C5540((int)v13 + 432, v14, v14, v17, v11, v12);
      v40 = sub_15C5560(a1[3] + 432LL, *(_QWORD *)v58);
      *(_QWORD *)v59 = *a1;
      v55 = v56 + v40;
      v41 = sub_1674700(a1[3] + 232LL, (unsigned int)(v56 + v40));
      v42 = sub_15DB5C0(*(_QWORD *)v59, *(unsigned int *)(a2 + 16), v41);
      v43 = v42;
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      v44 = a1[3];
      v65 = 0;
      LOBYTE(v67) = 0;
      v64[0] = v55 - 2;
      v45 = *(_QWORD *)(v44 + 240);
      LODWORD(v66) = v56;
      *(_QWORD *)v61 = v42;
      sub_15DCAD0(v45, (int)v61, 0);
      sub_15D0DF0(&v66);
      sub_15D0DF0(v64);
      v46 = a1[3];
      v65 = 0;
      *(_QWORD *)v62 = v43;
      v66 = 0;
      v67 = 0;
      v47 = *(_QWORD *)(v46 + 240);
      v64[0] = v56 - 1;
      sub_15DCAD0(v47, (int)v62, 0);
      sub_15D0DF0(&v66);
      sub_15D0DF0(v64);
      v48 = a1[3];
      v65 = 0;
      LOBYTE(v67) = 0;
      v49 = *(_QWORD *)(v48 + 240);
      *(_QWORD *)v63 = v43;
      v64[0] = v55 - 1;
      LODWORD(v66) = v55 - 1;
      sub_15DCAD0(v49, (int)v63, 0);
      sub_15D0DF0(&v66);
      sub_15D0DF0(v64);
      v50 = sub_15E1BF0(*(_QWORD *)(v44 + 432));
      v18 = v50;
      if ( v50 )
        ++*(_DWORD *)(v50 + 8);
      if ( v43 )
      {
        v23 = (*(_DWORD *)(v43 + 8))-- == 1;
        if ( v23 )
          sub_15D7BC0(v16, v43);
      }
    }
    v35 = *a3;
    if ( *a3 == v18 )
    {
      v53 = *a4;
      if ( *a4 )
      {
        v54 = a4[1];
        v23 = (*(_DWORD *)(v53 + 8))-- == 1;
        if ( v23 )
          sub_15D7BC0(v54, v53);
      }
      *a4 = 0;
      if ( !v18 )
        return 1;
      goto LABEL_21;
    }
    if ( v35 )
    {
      v36 = a3[1];
      v23 = (*(_DWORD *)(v35 + 8))-- == 1;
      if ( v23 )
        sub_15D7BC0(v36, v35);
    }
    *a3 = v18;
    if ( v18 )
      goto LABEL_37;
    goto LABEL_42;
  }
  return v5;
}

