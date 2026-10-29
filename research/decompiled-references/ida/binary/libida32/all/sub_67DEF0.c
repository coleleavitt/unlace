unsigned __int64 __fastcall sub_67DEF0(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rsi
  int v5; // ebx
  unsigned __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rdx
  void *v10; // r14
  __int64 v11; // rsi
  char v12; // r13
  __int64 v13; // rax
  void **v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r13
  void *v17; // rdi
  char *v18; // rdi
  __int64 v19; // r12
  __int64 v20; // r13
  void *v21; // rdi
  char *v22; // rbx
  char v23; // al
  char *v24; // rdx
  __int64 v25; // r15
  __int64 i; // r14
  char *v27; // rax
  void *v28; // rdi
  int v29; // eax
  void *v31; // rdi
  void *v32; // rdi
  void **v33; // [rsp+0h] [rbp-118h]
  __int64 v34; // [rsp+8h] [rbp-110h]
  __int64 v35; // [rsp+10h] [rbp-108h]
  __int64 v37; // [rsp+30h] [rbp-E8h] BYREF
  int v38; // [rsp+38h] [rbp-E0h]
  __int64 v39; // [rsp+3Ch] [rbp-DCh]
  void *v40; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v41; // [rsp+58h] [rbp-C0h]
  void *ptr; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v43; // [rsp+78h] [rbp-A0h]
  void **v44; // [rsp+88h] [rbp-90h]
  __int64 v45; // [rsp+90h] [rbp-88h]
  void *v46; // [rsp+A8h] [rbp-70h]
  char v47; // [rsp+C9h] [rbp-4Fh]
  unsigned __int64 v48; // [rsp+D8h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v3 = *a1;
  v37 = 0;
  v39 = 0;
  func_tail_iterator_set(&v37, v3, 0xFFFFFFFFLL);
  v4 = v37;
  v38 = -1;
  if ( v37 )
  {
    while ( 1 )
    {
      v40 = nullptr;
      v41 = 0;
      get_tryblks(&v40, v4);
      v5 = v41;
      if ( (int)v41 > 0 )
        break;
LABEL_19:
      v18 = (char *)v40;
      if ( v40 )
      {
        v19 = v41;
        if ( (_QWORD)v41 )
        {
          v20 = 0;
          do
          {
            v22 = &v18[96 * v20];
            v23 = v22[89];
            if ( v23 == 2 )
            {
              v24 = *((char **)v22 + 3);
              if ( v24 )
              {
                v25 = *((_QWORD *)v22 + 4);
                if ( v25 )
                {
                  for ( i = 0; i != v25; ++i )
                  {
                    v27 = &v24[40 * i];
                    v28 = *(void **)v27;
                    if ( *(_QWORD *)v27 )
                    {
                      *((_QWORD *)v27 + 1) = 0;
                      qfree(v28);
                      v24 = *((char **)v22 + 3);
                    }
                  }
                }
                *((_QWORD *)v22 + 4) = 0;
                qfree(v24);
              }
            }
            else if ( v23 == 1 )
            {
              v31 = *((void **)v22 + 7);
              if ( v31 )
              {
                *((_QWORD *)v22 + 8) = 0;
                qfree(v31);
              }
              v32 = *((void **)v22 + 3);
              if ( v32 )
              {
                *((_QWORD *)v22 + 4) = 0;
                qfree(v32);
              }
            }
            v21 = *(void **)v22;
            v22[89] = 0;
            if ( v21 )
            {
              *((_QWORD *)v22 + 1) = 0;
              qfree(v21);
            }
            ++v20;
            v18 = (char *)v40;
          }
          while ( v19 != v20 );
        }
        *(_QWORD *)&v41 = 0;
        qfree(v18);
      }
      v4 = v37;
      if ( !v37 )
        goto LABEL_37;
      v29 = v38 + 1;
      if ( *(_DWORD *)(v37 + 104) <= v38 + 1 )
        goto LABEL_37;
      ++v38;
      if ( v29 >= 0 )
        v4 = *(_QWORD *)(v37 + 112) + 8LL * v29;
    }
    v6 = a2[1] + (int)v41;
    if ( a2[2] < v6 )
      *a2 = qvector_reserve(a2, *a2, v6, 96);
    v7 = 0;
    v34 = 32 * (3LL * (unsigned int)(v5 - 1) + 3);
    while ( 1 )
    {
      ptr = nullptr;
      v44 = nullptr;
      v47 = 0;
      v43 = 0;
      sub_679080(&ptr, (void **)((char *)v40 + v7));
      v9 = a2[1];
      v10 = ptr;
      v11 = *a2;
      v12 = v47;
      v33 = v44;
      if ( a2[2] < (unsigned __int64)(v9 + 1) )
      {
        v13 = qvector_reserve(a2, v11, v9 + 1, 96);
        *a2 = v13;
        v9 = a2[1];
        v11 = v13;
      }
      v8 = v11 + 96 * v9;
      *(_QWORD *)v8 = 0;
      *(_BYTE *)(v8 + 89) = 0;
      *(_OWORD *)(v8 + 8) = 0;
      sub_679080((void **)v8, &ptr);
      ++a2[1];
      if ( v12 != 2 )
        break;
      v14 = v33;
      if ( v33 )
      {
        v15 = v45;
        v16 = 0;
        if ( v45 )
        {
          do
          {
            v17 = *v14;
            if ( *v14 )
            {
              v14[1] = nullptr;
              v35 = v15;
              qfree(v17);
              v15 = v35;
            }
            ++v16;
            v14 += 5;
          }
          while ( v15 != v16 );
        }
LABEL_43:
        qfree(v33);
      }
LABEL_8:
      if ( v10 )
        qfree(v10);
      v7 += 96;
      if ( v7 == v34 )
        goto LABEL_19;
    }
    if ( v12 != 1 )
      goto LABEL_8;
    if ( v46 )
      qfree(v46);
    if ( !v33 )
      goto LABEL_8;
    goto LABEL_43;
  }
LABEL_37:
  sub_67DB00(a2, a1 + 1);
  if ( v37 )
    lock_func_range(v37, 0);
  return v48 - __readfsqword(0x28u);
}

