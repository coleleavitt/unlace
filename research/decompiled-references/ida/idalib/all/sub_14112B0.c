__int64 __fastcall sub_14112B0(__int64 a1, __int64 a2, __m128i a3, __m128i a4)
{
  int v5; // eax
  bool v6; // zf
  void *v7; // rdi
  void **v8; // r14
  unsigned __int64 v9; // rax
  void **v10; // r15
  void **v11; // rbx
  void **v12; // rdi
  void **v13; // rdi
  void **v14; // rbx
  void **v15; // r15
  __int64 v16; // rax
  void **v17; // r12
  void **v18; // rbx
  int v20; // edx
  void **v21; // r12
  unsigned __int64 v22; // rax
  void **v23; // r14
  void **v24; // rbx
  void **v25; // rdi
  void **v26; // rdi
  void **v27; // rbx
  void **v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rdx
  void *v31; // [rsp+0h] [rbp-F8h] BYREF
  unsigned __int64 v32; // [rsp+8h] [rbp-F0h]
  __int64 v33; // [rsp+10h] [rbp-E8h]
  void *v34; // [rsp+20h] [rbp-D8h]
  _BYTE v35[16]; // [rsp+30h] [rbp-C8h] BYREF
  __int16 v36; // [rsp+40h] [rbp-B8h]
  int v37; // [rsp+50h] [rbp-A8h]
  void **v38; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+60h] [rbp-98h]
  _BYTE v40[144]; // [rsp+68h] [rbp-90h] BYREF

  v37 = 0;
  v38 = (void **)v40;
  v39 = 0x200000000LL;
  v5 = sub_140C1F0((_BYTE **)a2, a3, *(double *)a4.m128i_i64);
  v6 = *(_DWORD *)(a2 + 72) == 5;
  v37 = v5;
  if ( !v6 )
  {
    sub_FC70B0((__int64)&v31, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 76), 1088);
    if ( (_BYTE)v36 )
    {
      sub_FC7790(v33, (__int64 *)&v31, SHIBYTE(v36));
      v7 = v34;
      v33 = 0;
      v36 = 0;
      if ( v34 == v35 )
      {
LABEL_5:
        v8 = (void **)v31;
        if ( v31 )
        {
          v9 = v32;
          if ( v32 )
          {
            if ( (unsigned __int64)v31 >= v32 && (unsigned __int64)v31 <= v32 + 14848 )
            {
              v29 = *(unsigned int *)(v32 + 14976);
              *(_DWORD *)(v32 + 14976) = v29 + 1;
              *(_QWORD *)(v9 + 8 * v29 + 14848) = v8;
            }
            else
            {
              v10 = *((void ***)v31 + 66);
              v11 = &v10[8 * (unsigned __int64)*((unsigned int *)v31 + 134)];
              if ( v10 != v11 )
              {
                do
                {
                  while ( 1 )
                  {
                    v11 -= 8;
                    v12 = (void **)v11[3];
                    if ( v12 == v11 + 5 )
                      break;
                    operator delete(v12);
                    if ( v10 == v11 )
                      goto LABEL_12;
                  }
                }
                while ( v10 != v11 );
LABEL_12:
                v11 = (void **)v8[66];
              }
              if ( v11 != v8 + 68 )
                free(v11);
              v13 = (void **)v8[52];
              if ( v13 != v8 + 54 )
                free(v13);
              v14 = v8 + 48;
              v15 = v8 + 8;
              do
              {
                while ( *v14 != v14 + 2 )
                {
                  operator delete(*v14);
                  v14 -= 4;
                  if ( v14 == v15 )
                    goto LABEL_20;
                }
                v14 -= 4;
              }
              while ( v15 != v14 );
LABEL_20:
              operator delete(v8, 0x3A0u);
            }
          }
        }
        *(_BYTE *)(a2 + 64) = 1;
        v16 = (unsigned int)v39;
        *(_BYTE *)(a1 + 104) = 0;
        goto LABEL_22;
      }
    }
    else
    {
      v7 = v34;
      if ( v34 == v35 )
        goto LABEL_5;
    }
    operator delete(v7);
    goto LABEL_5;
  }
  if ( (unsigned __int8)sub_1410A50(a2, (__int64)&v38, a3, a4) )
  {
    *(_BYTE *)(a1 + 104) = 0;
    v16 = (unsigned int)v39;
  }
  else
  {
    v16 = (unsigned int)v39;
    if ( (unsigned int)v39 > 1 )
    {
      sub_FC70B0((__int64)&v31, *(_QWORD *)(a2 + 8), *((_DWORD *)v38 + 18), 1091);
      if ( (_BYTE)v36 )
      {
        sub_FC7790(v33, (__int64 *)&v31, SHIBYTE(v36));
        v33 = 0;
        v36 = 0;
      }
      if ( v34 != v35 )
        operator delete(v34);
      v21 = (void **)v31;
      if ( v31 )
      {
        v22 = v32;
        if ( v32 )
        {
          if ( (unsigned __int64)v31 < v32 || (unsigned __int64)v31 > v32 + 14848 )
          {
            v23 = *((void ***)v31 + 66);
            v24 = &v23[8 * (unsigned __int64)*((unsigned int *)v31 + 134)];
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
                    goto LABEL_53;
                }
              }
              while ( v23 != v24 );
LABEL_53:
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
                if ( v27 == v28 )
                  goto LABEL_61;
              }
              v27 -= 4;
            }
            while ( v28 != v27 );
LABEL_61:
            operator delete(v21, 0x3A0u);
          }
          else
          {
            v30 = *(unsigned int *)(v32 + 14976);
            *(_DWORD *)(v32 + 14976) = v30 + 1;
            *(_QWORD *)(v22 + 8 * v30 + 14848) = v21;
          }
        }
      }
      v16 = (unsigned int)v39;
    }
    v20 = v37;
    *(_QWORD *)(a1 + 16) = 0x200000000LL;
    *(_DWORD *)a1 = v20;
    *(_QWORD *)(a1 + 8) = a1 + 24;
    if ( (_DWORD)v16 )
    {
      sub_14078B0(a1 + 8, (__int64)&v38);
      v16 = (unsigned int)v39;
    }
    *(_BYTE *)(a1 + 104) = 1;
  }
LABEL_22:
  v17 = v38;
  v18 = &v38[5 * v16];
  if ( v38 != v18 )
  {
    do
    {
      while ( 1 )
      {
        v18 -= 5;
        if ( *v18 == v18 + 2 )
          break;
        operator delete(*v18);
        if ( v17 == v18 )
          goto LABEL_25;
      }
    }
    while ( v17 != v18 );
LABEL_25:
    v18 = v38;
  }
  if ( v18 != (void **)v40 )
    free(v18);
  return a1;
}
