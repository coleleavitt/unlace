__int64 __fastcall sub_18B1360(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        double a6,
        __m128 a7)
{
  _BYTE *v7; // rax
  int v10; // ebx
  unsigned int v11; // eax
  void **v12; // r13
  unsigned int v13; // r12d
  unsigned __int64 v14; // rax
  void **v15; // r14
  void **v16; // rbx
  void **v17; // rdi
  void **v18; // rdi
  void **v19; // rbx
  void **v20; // r14
  void **v21; // r13
  unsigned __int64 v22; // rax
  void **v23; // r14
  void **v24; // rbx
  void **v25; // rdi
  void **v26; // rdi
  void **v27; // rbx
  void **v28; // r14
  __int64 v30; // rdx
  __int64 v31; // rdx
  void *v34; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-70h]
  void *v36; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-50h]

  v7 = *(_BYTE **)(a1 + 232);
  if ( (v7[13] & 0x20) == 0 )
    return 0;
  v10 = -((*v7 & 0x20) == 0);
  sub_168B9B0((__int64)&v36, a1 + 8, 112);
  sub_168B9B0((__int64)&v34, a1 + 8, (v10 & 0xFFFFFA69) + 5606);
  v11 = sub_18B0720(a1, (__int64)&v34, (__int64)&v36, a2, a3, a4, a6, a7, a5, nullptr, nullptr, 0, 0);
  v12 = (void **)v34;
  v13 = v11;
  if ( v34 )
  {
    v14 = v35;
    if ( v35 )
    {
      if ( (unsigned __int64)v34 >= v35 && (unsigned __int64)v34 <= v35 + 14848 )
      {
        v30 = *(unsigned int *)(v35 + 14976);
        *(_DWORD *)(v35 + 14976) = v30 + 1;
        *(_QWORD *)(v14 + 8 * v30 + 14848) = v12;
      }
      else
      {
        v15 = *((void ***)v34 + 66);
        v16 = &v15[8 * (unsigned __int64)*((unsigned int *)v34 + 134)];
        if ( v15 != v16 )
        {
          do
          {
            while ( 1 )
            {
              v16 -= 8;
              v17 = (void **)v16[3];
              if ( v17 == v16 + 5 )
                break;
              operator delete(v17);
              if ( v15 == v16 )
                goto LABEL_9;
            }
          }
          while ( v15 != v16 );
LABEL_9:
          v16 = (void **)v12[66];
        }
        if ( v16 != v12 + 68 )
          free(v16);
        v18 = (void **)v12[52];
        if ( v18 != v12 + 54 )
          free(v18);
        v19 = v12 + 48;
        v20 = v12 + 8;
        do
        {
          while ( *v19 != v19 + 2 )
          {
            operator delete(*v19);
            v19 -= 4;
            if ( v19 == v20 )
              goto LABEL_17;
          }
          v19 -= 4;
        }
        while ( v19 != v20 );
LABEL_17:
        operator delete(v12, 0x3A0u);
      }
    }
  }
  v21 = (void **)v36;
  if ( v36 )
  {
    v22 = v37;
    if ( v37 )
    {
      if ( (unsigned __int64)v36 >= v37 && (unsigned __int64)v36 <= v37 + 14848 )
      {
        v31 = *(unsigned int *)(v37 + 14976);
        *(_DWORD *)(v37 + 14976) = v31 + 1;
        *(_QWORD *)(v22 + 8 * v31 + 14848) = v21;
      }
      else
      {
        v23 = *((void ***)v36 + 66);
        v24 = &v23[8 * (unsigned __int64)*((unsigned int *)v36 + 134)];
        if ( v23 != v24 )
        {
          do
          {
            while ( 1 )
            {
              v24 -= 8;
              v25 = (void **)v24[3];
              if ( v25 == v24 + 5 )
                break;
              operator delete(v25);
              if ( v23 == v24 )
                goto LABEL_25;
            }
          }
          while ( v23 != v24 );
LABEL_25:
          v24 = (void **)v21[66];
        }
        if ( v24 != v21 + 68 )
          free(v24);
        v26 = (void **)v21[52];
        if ( v26 != v21 + 54 )
          free(v26);
        v27 = v21 + 48;
        v28 = v21 + 8;
        do
        {
          while ( *v27 != v27 + 2 )
          {
            operator delete(*v27);
            v27 -= 4;
            if ( v28 == v27 )
              goto LABEL_33;
          }
          v27 -= 4;
        }
        while ( v27 != v28 );
LABEL_33:
        operator delete(v21, 0x3A0u);
      }
    }
  }
  if ( (**(_BYTE **)(a1 + 232) & 0x20) != 0 )
    return 0;
  return v13;
}
