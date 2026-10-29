void __fastcall sub_D9B6E0(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // r13
  void *v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // r12
  __int64 v9; // r13
  void *v10; // rdi
  _QWORD *v11; // rax
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void (__fastcall ***v15)(void *); // rbx
  bool v16; // zf
  __int64 *v17; // rbx
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 (__fastcall ***v21)(__int64); // r13
  void *v22; // rdi
  void *v23; // rdi
  __int64 *v24; // rbx
  __int64 *v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 (__fastcall *v28)(__int64); // rax
  __int64 v29; // r12
  __int64 (__fastcall **v30)(__int64); // rbx
  __int64 (__fastcall **v31)(__int64); // r12
  __int64 (__fastcall *v32)(__int64); // rsi
  __int64 (__fastcall **v33)(__int64); // rdi
  __int64 (__fastcall *v34)(__int64); // rsi
  __int64 (__fastcall **v35)(__int64); // rax
  __int64 (__fastcall **v36)(__int64); // rbx
  __int64 (__fastcall **v37)(__int64); // rdi
  __int64 (__fastcall **v38)(__int64); // rdi

  v2 = *(_QWORD **)(a1 + 56);
  v3 = &v2[2 * *(unsigned int *)(a1 + 64)];
  if ( v2 != v3 )
  {
    while ( *v2 <= 1u )
    {
      v2 += 2;
      if ( v3 == v2 )
        goto LABEL_15;
    }
    while ( v3 != v2 )
    {
      v4 = v2[1];
      if ( v4 )
      {
        v5 = *(void **)(v4 + 24);
        if ( v5 )
          sub_186B220(v5);
        if ( *(_QWORD *)v4 )
          sub_186B220(*(void **)v4);
        sub_186B220((void *)v4);
      }
      v6 = v2 + 2;
      if ( v3 == v2 + 2 )
        break;
      while ( 1 )
      {
        v2 = v6;
        if ( *v6 > 1u )
          break;
        v6 += 2;
        if ( v3 == v6 )
          goto LABEL_15;
      }
    }
  }
LABEL_15:
  v7 = *(_QWORD **)(a1 + 80);
  v8 = &v7[2 * *(unsigned int *)(a1 + 88)];
  if ( v7 != v8 )
  {
    while ( *v7 <= 1u )
    {
      v7 += 2;
      if ( v8 == v7 )
        goto LABEL_29;
    }
    while ( v8 != v7 )
    {
      v9 = v7[1];
      if ( v9 )
      {
        v10 = *(void **)(v9 + 24);
        if ( v10 )
          sub_186B220(v10);
        if ( *(_QWORD *)v9 )
          sub_186B220(*(void **)v9);
        sub_186B220((void *)v9);
      }
      v11 = v7 + 2;
      if ( v8 == v7 + 2 )
        break;
      while ( 1 )
      {
        v7 = v11;
        if ( *v11 > 1u )
          break;
        v11 += 2;
        if ( v8 == v11 )
          goto LABEL_29;
      }
    }
  }
LABEL_29:
  v12 = *(void **)(a1 + 280);
  *(_QWORD *)(a1 + 232) = &off_1C62200;
  if ( v12 )
    sub_186B220(v12);
  v13 = *(void **)(a1 + 256);
  if ( v13 )
    sub_186B220(v13);
  v14 = *(void **)(a1 + 224);
  if ( v14 )
    sub_186B220(v14);
  v15 = *(void (__fastcall ****)(void *))(a1 + 192);
  if ( v15 )
  {
    v16 = (*((_DWORD *)v15 + 4))-- == 1;
    if ( v16 )
    {
      (**v15)(v15);
      sub_186B220(v15);
    }
  }
  v17 = *(__int64 **)(a1 + 184);
  if ( v17 )
  {
    v18 = &v17[*((unsigned int *)v17 - 1)];
    if ( v17 >= v18 )
      goto LABEL_46;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = *(_QWORD *)(a1 + 176);
          v16 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( ++v17 >= v18 )
          goto LABEL_45;
      }
      sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( v17 < v18 );
LABEL_45:
    v17 = *(__int64 **)(a1 + 184);
    if ( v17 )
LABEL_46:
      sub_186B220(v17 - 1);
  }
  sub_14B63F0(a1 + 160);
  v21 = *(__int64 (__fastcall ****)(__int64))(a1 + 104);
  if ( v21 )
  {
    v16 = (*((_DWORD *)v21 + 32))-- == 1;
    if ( v16 )
    {
      v28 = **v21;
      if ( v28 == sub_38D2C0 )
      {
        v29 = *((unsigned int *)v21 + 6);
        v30 = v21[2];
        *v21 = (__int64 (__fastcall **)(__int64))&off_1C4DD50;
        v31 = &v30[2 * v29];
        if ( v30 != v31 )
        {
          while ( (unsigned __int64)*v30 <= 1 )
          {
            v30 += 2;
            if ( v31 == v30 )
              goto LABEL_81;
          }
          if ( v31 != v30 )
          {
            v32 = *v30;
            v33 = v21[1];
            if ( *v30 )
              goto LABEL_79;
            while ( 1 )
            {
              v34 = v30[1];
              if ( v34 )
              {
                v16 = (*((_DWORD *)v34 + 2))-- == 1;
                if ( v16 )
                  sub_15D7BC0(v33, v34);
              }
              v35 = v30 + 2;
              if ( v31 == v30 + 2 )
                break;
              while ( 1 )
              {
                v32 = *v35;
                v30 = v35;
                if ( (unsigned __int64)*v35 > 1 )
                  break;
                v35 += 2;
                if ( v31 == v35 )
                  goto LABEL_81;
              }
              if ( v31 == v35 )
                break;
              v33 = v21[1];
LABEL_79:
              v16 = (*((_DWORD *)v32 + 2))-- == 1;
              if ( v16 )
              {
                sub_15D7BC0(v33, v32);
                v33 = v21[1];
              }
            }
          }
        }
LABEL_81:
        sub_1695230(v21 + 9);
        v36 = v21[8];
        if ( v36 )
        {
          (*(void (__fastcall **)(__int64 (__fastcall **)(__int64)))*v36)(v21[8]);
          sub_186B220(v36);
        }
        v37 = v21[5];
        if ( v37 )
          sub_186B220(v37);
        v38 = v21[2];
        if ( v38 )
          sub_186B220(v38);
      }
      else
      {
        v28((__int64)v21);
      }
      sub_186B220(v21);
    }
  }
  v22 = *(void **)(a1 + 80);
  if ( v22 )
    sub_186B220(v22);
  v23 = *(void **)(a1 + 56);
  if ( v23 )
    sub_186B220(v23);
  v24 = *(__int64 **)(a1 + 48);
  if ( v24 )
  {
    v25 = &v24[*((unsigned int *)v24 - 1)];
    if ( v24 >= v25 )
      goto LABEL_61;
    do
    {
      while ( 1 )
      {
        v26 = *v24;
        if ( *v24 )
        {
          v27 = *(_QWORD *)(a1 + 40);
          v16 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( ++v24 >= v25 )
          goto LABEL_60;
      }
      sub_15D7BC0(v27, v26);
      ++v24;
    }
    while ( v24 < v25 );
LABEL_60:
    v24 = *(__int64 **)(a1 + 48);
    if ( v24 )
LABEL_61:
      sub_186B220(v24 - 1);
  }
  sub_18572D0((void *)(a1 + 8));
}

