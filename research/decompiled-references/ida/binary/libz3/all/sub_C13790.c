__int64 __fastcall sub_C13790(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // edx
  _QWORD *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rbx
  _QWORD *v10; // r14
  __int64 v11; // rsi
  bool v12; // zf
  _QWORD *v13; // r13
  unsigned __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // r14
  __int64 v19; // r14
  unsigned __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // r9d
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rdi
  unsigned __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 *v29; // rbx
  unsigned __int64 v30; // rbp
  __int64 v31; // rsi
  __int64 *v32; // rbx
  unsigned __int64 v33; // rbp
  __int64 v34; // rsi
  __int64 *v35; // rbx
  __int64 v36; // rax
  __int64 *v37; // rbp
  __int64 v38; // rsi
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdi
  unsigned __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rax
  _QWORD *v47; // r12
  __int64 *v48; // rbx
  unsigned __int64 v49; // rbp
  __int64 v50; // rsi
  __int64 v51; // [rsp+0h] [rbp-D8h]
  int v52; // [rsp+8h] [rbp-D0h]
  __int64 v53; // [rsp+10h] [rbp-C8h]
  __int64 v54; // [rsp+10h] [rbp-C8h]
  __int64 v55; // [rsp+18h] [rbp-C0h]
  __int64 v56; // [rsp+18h] [rbp-C0h]
  __int64 v57; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v58; // [rsp+38h] [rbp-A0h]
  __int64 v59; // [rsp+40h] [rbp-98h] BYREF
  __int64 *v60; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int64 v61; // [rsp+50h] [rbp-88h] BYREF
  __int64 v62; // [rsp+58h] [rbp-80h] BYREF
  __int64 v63; // [rsp+60h] [rbp-78h] BYREF
  _QWORD *v64; // [rsp+68h] [rbp-70h] BYREF
  __int64 v65; // [rsp+70h] [rbp-68h] BYREF
  _QWORD *v66; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v67; // [rsp+80h] [rbp-58h] BYREF
  __int64 v68; // [rsp+88h] [rbp-50h]
  __int64 v69; // [rsp+90h] [rbp-48h] BYREF
  __int64 v70; // [rsp+98h] [rbp-40h]

  v69 = 0;
  sub_13A5730((int)&v59, v51, v52, v53, v55, (__int64)&v59);
  sub_18572D0(&v69);
  v2 = *a1;
  v60 = nullptr;
  v64 = nullptr;
  v3 = *((unsigned int *)a1 + 236);
  v54 = v2;
  v63 = v2;
  v65 = v2;
  v4 = a1[117];
  v66 = nullptr;
  if ( v4 && (v5 = *(_DWORD *)(v4 - 4), (unsigned int)v3 < v5) )
  {
    v6 = nullptr;
    v56 = 24LL * (unsigned int)v3;
    v58 = 24 * ((unsigned int)v3 + (unsigned __int64)(v5 - (unsigned int)v3 - 1) + 1);
    while ( 1 )
    {
      v7 = v56 + v4;
      v8 = *(_QWORD *)(v7 + 16);
      v9 = *(_QWORD *)(v7 + 8);
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      v67 = 0;
      v69 = 0;
      v68 = v54;
      v70 = v54;
      if ( v6 )
      {
        v10 = &v6[*((unsigned int *)v6 - 1)];
        if ( v6 >= v10 )
          goto LABEL_14;
        do
        {
          while ( 1 )
          {
            v11 = *v6;
            if ( *v6 )
            {
              v12 = (*(_DWORD *)(v11 + 8))-- == 1;
              if ( v12 )
                break;
            }
            if ( ++v6 >= v10 )
              goto LABEL_13;
          }
          sub_15D7BC0(v63, v11);
          ++v6;
        }
        while ( v6 < v10 );
LABEL_13:
        v6 = v64;
        if ( v64 )
LABEL_14:
          *((_DWORD *)v6 - 1) = 0;
      }
      v13 = v66;
      if ( v66 )
      {
        v14 = (unsigned __int64)&v66[*((unsigned int *)v66 - 1)];
        if ( (unsigned __int64)v66 >= v14 )
          goto LABEL_23;
        do
        {
          while ( 1 )
          {
            v15 = *v13;
            if ( *v13 )
            {
              v12 = (*(_DWORD *)(v15 + 8))-- == 1;
              if ( v12 )
                break;
            }
            if ( (unsigned __int64)++v13 >= v14 )
              goto LABEL_22;
          }
          sub_15D7BC0(v65, v15);
          ++v13;
        }
        while ( (unsigned __int64)v13 < v14 );
LABEL_22:
        v13 = v66;
        if ( v66 )
LABEL_23:
          *((_DWORD *)v13 - 1) = 0;
      }
      sub_13A61F0(v57, v9, (unsigned int)&v63, (unsigned int)&v65, (unsigned int)&v67, (unsigned int)&v69);
      v16 = 0;
      if ( *(_DWORD *)(*a1 + 712) )
      {
        v46 = sub_15DE0E0(*a1, v8, v69);
        v16 = v46;
        if ( v46 )
          ++*(_DWORD *)(v46 + 8);
      }
      if ( v8 )
      {
        v12 = (*(_DWORD *)(v8 + 8))-- == 1;
        if ( v12 )
          sub_15D7BC0(v54, v8);
      }
      v61 = v67;
      if ( v67 )
        ++*(_DWORD *)(v67 + 8);
      sub_C10880(&v64, &v61);
      v62 = v16;
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      sub_C0FED0(&v66, &v62);
      if ( !(unsigned __int8)sub_18290A0(*a1) )
        break;
      v17 = v64;
      if ( v64 )
      {
        v18 = *((unsigned int *)v64 - 1);
        if ( (_DWORD)v18 )
        {
          v19 = 8 * v18;
          v20 = 0;
          while ( 1 )
          {
            v24 = v17[v20 / 8];
            if ( v16 )
            {
              v12 = (*(_DWORD *)(v16 + 8))-- == 1;
              if ( v12 )
                sub_15D7BC0(v54, v16);
            }
            sub_14BB8A0(a1 + 3, v24, &v67, &v69);
            if ( !(unsigned __int8)sub_18290A0(*a1) )
              break;
            if ( *(_DWORD *)(*a1 + 712) )
            {
              v21 = sub_15DE0E0(*a1, v66[v20 / 8], v69);
              v16 = v21;
              if ( v21 )
                ++*(_DWORD *)(v21 + 8);
            }
            else
            {
              v16 = 0;
            }
            sub_C130D0(a1, v67, v16, (__int64 *)&v60, v22, v23);
            v20 += 8LL;
            if ( v19 == v20 )
              goto LABEL_87;
            v17 = v64;
          }
          v16 = 0;
          break;
        }
      }
LABEL_87:
      v42 = v69;
      if ( v69 )
      {
        v43 = v70;
        v12 = (*(_DWORD *)(v69 + 8))-- == 1;
        if ( v12 )
          sub_15D7BC0(v43, v42);
      }
      v44 = v67;
      if ( v67 )
      {
        v45 = v68;
        v12 = (*(_DWORD *)(v67 + 8))-- == 1;
        if ( v12 )
          sub_15D7BC0(v45, v44);
      }
      if ( v16 )
      {
        v12 = (*(_DWORD *)(v16 + 8))-- == 1;
        if ( v12 )
          sub_15D7BC0(v54, v16);
      }
      v56 += 24;
      if ( v58 == v56 )
      {
        v3 = *((unsigned int *)a1 + 236);
        goto LABEL_100;
      }
      v6 = v64;
      v54 = *a1;
      v4 = a1[117];
    }
    v25 = v69;
    if ( v69 )
    {
      v26 = v70;
      v12 = (*(_DWORD *)(v69 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v26, v25);
    }
    v27 = v67;
    if ( v67 )
    {
      v28 = v68;
      v12 = (*(_DWORD *)(v67 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v28, v27);
    }
    if ( v16 )
    {
      v12 = (*(_DWORD *)(v16 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v54, v16);
    }
    v29 = v66;
    if ( v66 )
    {
      v30 = (unsigned __int64)&v66[*((unsigned int *)v66 - 1)];
      if ( (unsigned __int64)v66 >= v30 )
        goto LABEL_64;
      do
      {
        while ( 1 )
        {
          v31 = *v29;
          if ( *v29 )
          {
            v12 = (*(_DWORD *)(v31 + 8))-- == 1;
            if ( v12 )
              break;
          }
          if ( (unsigned __int64)++v29 >= v30 )
            goto LABEL_63;
        }
        sub_15D7BC0(v65, v31);
        ++v29;
      }
      while ( (unsigned __int64)v29 < v30 );
LABEL_63:
      v29 = v66;
      if ( v66 )
LABEL_64:
        sub_186B220(v29 - 1);
    }
    v32 = v64;
    if ( v64 )
    {
      v33 = (unsigned __int64)&v64[*((unsigned int *)v64 - 1)];
      if ( (unsigned __int64)v64 >= v33 )
        goto LABEL_73;
      do
      {
        while ( 1 )
        {
          v34 = *v32;
          if ( *v32 )
          {
            v12 = (*(_DWORD *)(v34 + 8))-- == 1;
            if ( v12 )
              break;
          }
          if ( (unsigned __int64)++v32 >= v33 )
            goto LABEL_72;
        }
        sub_15D7BC0(v63, v34);
        ++v32;
      }
      while ( (unsigned __int64)v32 < v33 );
LABEL_72:
      v32 = v64;
      if ( v64 )
LABEL_73:
        sub_186B220(v32 - 1);
    }
    v35 = v60;
    if ( v60 )
    {
      v36 = *((unsigned int *)v60 - 1);
      if ( (_DWORD)v36 )
      {
        v37 = &v60[3 * v36];
        do
        {
          v39 = v35[1];
          v40 = *v35;
          if ( v39 )
          {
            v12 = (*(_DWORD *)(v39 + 8))-- == 1;
            if ( v12 )
            {
              sub_15D7BC0(v40, v39);
              v40 = *v35;
            }
          }
          v38 = v35[2];
          if ( v38 )
          {
            v12 = (*(_DWORD *)(v38 + 8))-- == 1;
            if ( v12 )
              sub_15D7BC0(v40, v38);
          }
          v35 += 3;
        }
        while ( v35 != v37 );
        v35 = v60;
      }
      sub_186B220(v35 - 1);
    }
  }
  else
  {
LABEL_100:
    v47 = a1 + 117;
    sub_C169A0(v47, v3);
    sub_C16B80(v47, &v60);
    v48 = v66;
    if ( v66 )
    {
      v49 = (unsigned __int64)&v66[*((unsigned int *)v66 - 1)];
      if ( (unsigned __int64)v66 >= v49 )
        goto LABEL_108;
      do
      {
        v50 = *v48;
        if ( *v48 )
        {
          v12 = (*(_DWORD *)(v50 + 8))-- == 1;
          if ( v12 )
            sub_15D7BC0(v65, v50);
        }
        ++v48;
      }
      while ( (unsigned __int64)v48 < v49 );
      v48 = v66;
      if ( v66 )
LABEL_108:
        sub_186B220(v48 - 1);
    }
    sub_2334C0(&v63);
    sub_C16E30(&v60);
  }
  return sub_13A5000(v57);
}

