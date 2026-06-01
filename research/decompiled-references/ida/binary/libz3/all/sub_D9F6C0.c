void __fastcall sub_D9F6C0(__int64 *a1)
{
  __int64 v2; // r12
  void *v3; // rdi
  __int64 v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rbx
  void *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 *v12; // rdi
  __int64 *v13; // rcx
  __int64 *i; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 *v20; // rbx
  __int64 *v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rdi
  _DWORD *v24; // r14
  __int64 (__fastcall ***v25)(__int64); // r13
  __int64 v26; // rdi
  __int64 (__fastcall *v27)(__int64); // rax
  __int64 v28; // r12
  __int64 (__fastcall **v29)(__int64); // rbx
  __int64 (__fastcall **v30)(__int64); // r12
  __int64 (__fastcall *v31)(__int64); // rsi
  __int64 (__fastcall **v32)(__int64); // rdi
  __int64 (__fastcall *v33)(__int64); // rsi
  __int64 (__fastcall **v34)(__int64); // rax
  __int64 (__fastcall *v35)(__int64); // rax
  __int64 v36; // r13
  __int64 *v37; // rbx
  __int64 *v38; // r13
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 *v42; // rax
  __int64 (__fastcall **v43)(__int64); // rbx
  __int64 (__fastcall **v44)(__int64); // rdi
  __int64 (__fastcall **v45)(__int64); // rdi
  void (__fastcall ***v46)(_QWORD); // rbx
  void *v47; // rdi
  void *v48; // rdi

  v2 = *a1;
  if ( *a1 )
  {
    v3 = *(void **)(v2 + 704);
    if ( v3 )
      sub_186B220(v3);
    v4 = *(_QWORD *)(v2 + 640);
    if ( v4 )
      sub_186B220((void *)(v4 - 8));
    v5 = *(void **)(v2 + 616);
    if ( v5 )
      sub_186B220(v5);
    v6 = *(void **)(v2 + 592);
    if ( v6 )
      sub_186B220(v6);
    sub_1372EF0(v2 + 432);
    v7 = *(void **)(v2 + 424);
    if ( v7 )
    {
      sub_13606C0(*(_QWORD *)(v2 + 424));
      sub_186B220(v7);
    }
    sub_157EB20(v2 + 360);
    v8 = *(void **)(v2 + 320);
    if ( v8 )
      sub_186B220(v8);
    v9 = *(_QWORD *)(v2 + 296);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v2 + 304);
      v11 = (*(_DWORD *)(v9 + 8))-- == 1;
      if ( v11 )
        sub_15D7BC0(v10, v9);
    }
    v12 = *(__int64 **)(v2 + 120);
    v13 = &v12[*(unsigned int *)(v2 + 128)];
    for ( i = v12; i != v13; *(_BYTE *)(v15 + 6) &= ~1u )
      v15 = *i++;
    *(_DWORD *)(v2 + 128) = 0;
    if ( v12 != (__int64 *)(v2 + 136) && v12 )
      sub_186B220(v12);
    v16 = *(_QWORD *)(v2 + 112);
    if ( v16 )
      sub_186B220((void *)(v16 - 8));
    v17 = *(_QWORD *)(v2 + 104);
    if ( v17 )
      sub_186B220((void *)(v17 - 8));
    v18 = *(_QWORD *)(v2 + 96);
    if ( v18 )
      sub_186B220((void *)(v18 - 8));
    v19 = *(_QWORD *)(v2 + 88);
    if ( v19 )
      sub_186B220((void *)(v19 - 8));
    v20 = *(__int64 **)(v2 + 40);
    if ( v20 )
    {
      v21 = &v20[*((unsigned int *)v20 - 1)];
      if ( v20 >= v21 )
        goto LABEL_38;
      do
      {
        while ( 1 )
        {
          v22 = *v20;
          if ( *v20 )
          {
            v23 = *(_QWORD *)(v2 + 32);
            v11 = (*(_DWORD *)(v22 + 8))-- == 1;
            if ( v11 )
              break;
          }
          if ( ++v20 >= v21 )
            goto LABEL_37;
        }
        sub_15D7BC0(v23, v22);
        ++v20;
      }
      while ( v20 < v21 );
LABEL_37:
      v20 = *(__int64 **)(v2 + 40);
      if ( v20 )
LABEL_38:
        sub_186B220(v20 - 1);
    }
    v24 = *(_DWORD **)(v2 + 8);
    if ( v24 && (v11 = v24[32] == 1, --v24[32], v11) )
    {
      v35 = **(__int64 (__fastcall ***)(__int64))v24;
      if ( v35 == sub_38D2C0 )
      {
        v36 = (unsigned int)v24[6];
        v37 = *((__int64 **)v24 + 2);
        *(_QWORD *)v24 = &off_1C4DD50;
        v38 = &v37[2 * v36];
        if ( v37 != v38 )
        {
          while ( (unsigned __int64)*v37 <= 1 )
          {
            v37 += 2;
            if ( v38 == v37 )
              goto LABEL_90;
          }
          if ( v38 != v37 )
          {
            v39 = *v37;
            v40 = *((_QWORD *)v24 + 1);
            if ( *v37 )
              goto LABEL_81;
            while ( 1 )
            {
              v41 = v37[1];
              if ( v41 )
              {
                v11 = (*(_DWORD *)(v41 + 8))-- == 1;
                if ( v11 )
                  sub_15D7BC0(v40, v41);
              }
              v42 = v37 + 2;
              if ( v38 == v37 + 2 )
                break;
              while ( 1 )
              {
                v39 = *v42;
                v37 = v42;
                if ( (unsigned __int64)*v42 > 1 )
                  break;
                v42 += 2;
                if ( v38 == v42 )
                  goto LABEL_90;
              }
              if ( v38 == v42 )
                break;
              v40 = *((_QWORD *)v24 + 1);
LABEL_81:
              v11 = (*(_DWORD *)(v39 + 8))-- == 1;
              if ( v11 )
              {
                sub_15D7BC0(v40, v39);
                v40 = *((_QWORD *)v24 + 1);
              }
            }
          }
        }
LABEL_90:
        sub_1695230(v24 + 18);
        v46 = *((void (__fastcall ****)(_QWORD))v24 + 8);
        if ( v46 )
        {
          (**v46)(*((_QWORD *)v24 + 8));
          sub_186B220(v46);
        }
        v47 = *((void **)v24 + 5);
        if ( v47 )
          sub_186B220(v47);
        v48 = *((void **)v24 + 2);
        if ( v48 )
          sub_186B220(v48);
      }
      else
      {
        v35((__int64)v24);
      }
      sub_186B220(v24);
      sub_186B220((void *)v2);
    }
    else
    {
      sub_186B220((void *)v2);
    }
  }
  v25 = (__int64 (__fastcall ***)(__int64))a1[4];
  if ( v25 )
  {
    v11 = (*((_DWORD *)v25 + 32))-- == 1;
    if ( v11 )
    {
      v27 = **v25;
      if ( v27 == sub_38D2C0 )
      {
        v28 = *((unsigned int *)v25 + 6);
        v29 = v25[2];
        *v25 = (__int64 (__fastcall **)(__int64))&off_1C4DD50;
        v30 = &v29[2 * v28];
        if ( v29 != v30 )
        {
          while ( (unsigned __int64)*v29 <= 1 )
          {
            v29 += 2;
            if ( v30 == v29 )
              goto LABEL_83;
          }
          if ( v30 != v29 )
          {
            v31 = *v29;
            v32 = v25[1];
            if ( *v29 )
              goto LABEL_63;
            while ( 1 )
            {
              v33 = v29[1];
              if ( v33 )
              {
                v11 = (*((_DWORD *)v33 + 2))-- == 1;
                if ( v11 )
                  sub_15D7BC0(v32, v33);
              }
              v34 = v29 + 2;
              if ( v30 == v29 + 2 )
                break;
              while ( 1 )
              {
                v31 = *v34;
                v29 = v34;
                if ( (unsigned __int64)*v34 > 1 )
                  break;
                v34 += 2;
                if ( v30 == v34 )
                  goto LABEL_83;
              }
              if ( v30 == v34 )
                break;
              v32 = v25[1];
LABEL_63:
              v11 = (*((_DWORD *)v31 + 2))-- == 1;
              if ( v11 )
              {
                sub_15D7BC0(v32, v31);
                v32 = v25[1];
              }
            }
          }
        }
LABEL_83:
        sub_1695230(v25 + 9);
        v43 = v25[8];
        if ( v43 )
        {
          (*(void (__fastcall **)(__int64 (__fastcall **)(__int64)))*v43)(v25[8]);
          sub_186B220(v43);
        }
        v44 = v25[5];
        if ( v44 )
          sub_186B220(v44);
        v45 = v25[2];
        if ( v45 )
          sub_186B220(v45);
      }
      else
      {
        v27((__int64)v25);
      }
      sub_186B220(v25);
    }
  }
  v26 = a1[3];
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
}

