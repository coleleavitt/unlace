__int64 __fastcall sub_20BEA40(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rbx
  void *v5; // rdi
  _QWORD *v6; // rbp
  _QWORD *v7; // rbx
  void *v8; // rdi
  _QWORD *v9; // r13
  _QWORD *v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rbp
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  _QWORD *v17; // rbp
  _QWORD *v18; // rbx
  _QWORD *v19; // rdi
  _QWORD *v20; // rdi
  char *v21; // r13
  char *v22; // rbx
  void **v23; // r14
  void **v24; // rbp
  _QWORD *v25; // r14
  _QWORD *v26; // rbp
  _QWORD *v27; // rdi
  void *ptr[2]; // [rsp+0h] [rbp-138h] BYREF
  void *v30[2]; // [rsp+10h] [rbp-128h] BYREF
  __int64 v31; // [rsp+20h] [rbp-118h]
  void *v32[2]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v33; // [rsp+40h] [rbp-F8h]
  void *v34[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-D8h]
  void *v36[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+80h] [rbp-B8h]
  void *v38[2]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-98h]
  void *v40[2]; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-78h]
  void *v42[2]; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v43; // [rsp+E0h] [rbp-58h]
  void *v44[2]; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v45; // [rsp+100h] [rbp-38h]

  *(_OWORD *)v44 = 0;
  v45 = 0;
  *(_OWORD *)v42 = 0;
  v43 = 0;
  *(_OWORD *)v40 = 0;
  v41 = 0;
  *(_OWORD *)v38 = 0;
  v39 = 0;
  *(_OWORD *)v36 = 0;
  v37 = 0;
  *(_OWORD *)v34 = 0;
  v35 = 0;
  *(_OWORD *)v32 = 0;
  v33 = 0;
  *(_OWORD *)v30 = 0;
  v31 = 0;
  ptr[0] = v30;
  ptr[1] = nullptr;
  sub_2017B90(
    a1,
    193,
    0,
    0,
    (__int64)ptr,
    a2,
    v30,
    v32,
    (__int64)v34,
    (__int64 *)v36,
    (__int64 *)v38,
    (__int64 *)v40,
    v42,
    v44);
  if ( ptr[0] != v30 )
    free(ptr[0]);
  if ( v30[0] )
    operator delete(v30[0]);
  if ( v32[0] )
    operator delete(v32[0]);
  if ( v34[0] )
    operator delete(v34[0]);
  v3 = v36[1];
  v4 = v36[0];
  if ( v36[1] != v36[0] )
  {
    do
    {
      while ( 1 )
      {
        v5 = (void *)v4[2];
        if ( !v5 )
          break;
        operator delete(v5);
        v4 += 5;
        if ( v3 == v4 )
          goto LABEL_12;
      }
      v4 += 5;
    }
    while ( v3 != v4 );
LABEL_12:
    v4 = v36[0];
  }
  if ( v4 )
    operator delete(v4);
  v6 = v38[1];
  v7 = v38[0];
  if ( v38[1] != v38[0] )
  {
    do
    {
      while ( 1 )
      {
        v8 = (void *)v7[2];
        if ( !v8 )
          break;
        operator delete(v8);
        v7 += 5;
        if ( v6 == v7 )
          goto LABEL_18;
      }
      v7 += 5;
    }
    while ( v6 != v7 );
LABEL_18:
    v7 = v38[0];
  }
  if ( v7 )
    operator delete(v7);
  v9 = v40[1];
  v10 = v40[0];
  if ( v40[1] != v40[0] )
  {
    do
    {
      v11 = v10[6];
      v12 = v10[5];
      if ( v11 != v12 )
      {
        do
        {
          if ( *(_DWORD *)(v12 + 40) > 0x40u )
          {
            v13 = *(void **)(v12 + 32);
            if ( v13 )
              operator delete[](v13);
          }
          if ( *(_DWORD *)(v12 + 24) > 0x40u )
          {
            v14 = *(void **)(v12 + 16);
            if ( v14 )
              operator delete[](v14);
          }
          v12 += 48;
        }
        while ( v11 != v12 );
        v12 = v10[5];
      }
      if ( v12 )
        operator delete((void *)v12);
      if ( *((_DWORD *)v10 + 8) > 0x40u )
      {
        v15 = (void *)v10[3];
        if ( v15 )
          operator delete[](v15);
      }
      if ( *((_DWORD *)v10 + 4) > 0x40u )
      {
        v16 = (void *)v10[1];
        if ( v16 )
          operator delete[](v16);
      }
      v10 += 8;
    }
    while ( v9 != v10 );
    v10 = v40[0];
  }
  if ( v10 )
    operator delete(v10);
  v17 = v42[1];
  v18 = v42[0];
  if ( v42[1] != v42[0] )
  {
    do
    {
      while ( 1 )
      {
        v19 = (_QWORD *)v18[9];
        if ( v19 != v18 + 11 )
          free(v19);
        v20 = (_QWORD *)v18[1];
        if ( v20 == v18 + 3 )
          break;
        free(v20);
        v18 += 17;
        if ( v17 == v18 )
          goto LABEL_48;
      }
      v18 += 17;
    }
    while ( v17 != v18 );
LABEL_48:
    v18 = v42[0];
  }
  if ( v18 )
    operator delete(v18);
  v21 = (char *)v44[1];
  v22 = (char *)v44[0];
  if ( v44[1] != v44[0] )
  {
    do
    {
      while ( 1 )
      {
        v23 = *((void ***)v22 + 12);
        v24 = *((void ***)v22 + 11);
        if ( v23 != v24 )
        {
          do
          {
            while ( *v24 )
            {
              operator delete(*v24);
              v24 += 3;
              if ( v24 == v23 )
                goto LABEL_55;
            }
            v24 += 3;
          }
          while ( v23 != v24 );
LABEL_55:
          v24 = *((void ***)v22 + 11);
        }
        if ( v24 )
          operator delete(v24);
        v25 = *((_QWORD **)v22 + 9);
        v26 = *((_QWORD **)v22 + 8);
        if ( v25 != v26 )
        {
          do
          {
            while ( 1 )
            {
              v27 = (_QWORD *)v26[1];
              if ( v27 == v26 + 3 )
                break;
              free(v27);
              v26 += 9;
              if ( v26 == v25 )
                goto LABEL_61;
            }
            v26 += 9;
          }
          while ( v25 != v26 );
LABEL_61:
          v26 = *((_QWORD **)v22 + 8);
        }
        if ( v26 )
          operator delete(v26);
        if ( *(char **)v22 == v22 + 24 )
          break;
        free(*(void **)v22);
        v22 += 112;
        if ( v21 == v22 )
          goto LABEL_66;
      }
      v22 += 112;
    }
    while ( v21 != v22 );
LABEL_66:
    v22 = (char *)v44[0];
  }
  if ( v22 )
    operator delete(v22);
  return a1;
}
