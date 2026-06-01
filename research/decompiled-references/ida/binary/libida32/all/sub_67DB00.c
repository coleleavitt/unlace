unsigned __int64 __fastcall sub_67DB00(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  int v4; // ebx
  unsigned __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rdx
  void *v9; // r14
  __int64 v10; // rsi
  char v11; // r13
  __int64 v12; // rax
  void **v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r13
  void *v16; // rdi
  char *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // r13
  void *v20; // rdi
  char *v21; // r12
  char v22; // al
  char *v23; // rdx
  __int64 v24; // r15
  __int64 i; // r14
  char *v26; // rax
  void *v27; // rdi
  void *v29; // rdi
  void *v30; // rdi
  void **v31; // [rsp+8h] [rbp-100h]
  __int64 v32; // [rsp+10h] [rbp-F8h]
  __int64 v33; // [rsp+18h] [rbp-F0h]
  __int64 v34; // [rsp+20h] [rbp-E8h]
  __int64 v36; // [rsp+38h] [rbp-D0h]
  void *v37; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v38; // [rsp+48h] [rbp-C0h]
  void *ptr; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+68h] [rbp-A0h]
  void **v41; // [rsp+78h] [rbp-90h]
  __int64 v42; // [rsp+80h] [rbp-88h]
  void *v43; // [rsp+98h] [rbp-70h]
  char v44; // [rsp+B9h] [rbp-4Fh]
  unsigned __int64 v45; // [rsp+C8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v2 = a2[1];
  if ( (int)v2 > 0 )
  {
    v34 = 0;
    v36 = 8LL * (unsigned int)(v2 - 1) + 8;
    while ( 1 )
    {
      v37 = nullptr;
      v38 = 0;
      get_tryblks(&v37, *a2 + v34);
      v4 = v38;
      if ( (int)v38 > 0 )
        break;
LABEL_20:
      v17 = (char *)v37;
      if ( v37 )
      {
        v18 = v38;
        if ( (_QWORD)v38 )
        {
          v19 = 0;
          do
          {
            v21 = &v17[96 * v19];
            v22 = v21[89];
            if ( v22 == 2 )
            {
              v23 = *((char **)v21 + 3);
              if ( v23 )
              {
                v24 = *((_QWORD *)v21 + 4);
                if ( v24 )
                {
                  for ( i = 0; i != v24; ++i )
                  {
                    v26 = &v23[40 * i];
                    v27 = *(void **)v26;
                    if ( *(_QWORD *)v26 )
                    {
                      *((_QWORD *)v26 + 1) = 0;
                      qfree(v27);
                      v23 = *((char **)v21 + 3);
                    }
                  }
                }
                *((_QWORD *)v21 + 4) = 0;
                qfree(v23);
              }
            }
            else if ( v22 == 1 )
            {
              v29 = *((void **)v21 + 7);
              if ( v29 )
              {
                *((_QWORD *)v21 + 8) = 0;
                qfree(v29);
              }
              v30 = *((void **)v21 + 3);
              if ( v30 )
              {
                *((_QWORD *)v21 + 4) = 0;
                qfree(v30);
              }
            }
            v20 = *(void **)v21;
            v21[89] = 0;
            if ( v20 )
            {
              *((_QWORD *)v21 + 1) = 0;
              qfree(v20);
            }
            ++v19;
            v17 = (char *)v37;
          }
          while ( v18 != v19 );
        }
        *(_QWORD *)&v38 = 0;
        qfree(v17);
      }
      v34 += 8;
      if ( v34 == v36 )
        return v45 - __readfsqword(0x28u);
    }
    v5 = a1[1] + (int)v38;
    if ( a1[2] < v5 )
      *a1 = qvector_reserve(a1, *a1, v5, 96);
    v6 = 0;
    v32 = 32 * (3LL * (unsigned int)(v4 - 1) + 3);
    while ( 1 )
    {
      ptr = nullptr;
      v41 = nullptr;
      v44 = 0;
      v40 = 0;
      sub_679080(&ptr, (void **)((char *)v37 + v6));
      v8 = a1[1];
      v9 = ptr;
      v10 = *a1;
      v11 = v44;
      v31 = v41;
      if ( a1[2] < (unsigned __int64)(v8 + 1) )
      {
        v12 = qvector_reserve(a1, v10, v8 + 1, 96);
        *a1 = v12;
        v8 = a1[1];
        v10 = v12;
      }
      v7 = v10 + 96 * v8;
      *(_QWORD *)v7 = 0;
      *(_BYTE *)(v7 + 89) = 0;
      *(_OWORD *)(v7 + 8) = 0;
      sub_679080((void **)v7, &ptr);
      ++a1[1];
      if ( v11 != 2 )
        break;
      v13 = v31;
      if ( v31 )
      {
        v14 = v42;
        v15 = 0;
        if ( v42 )
        {
          do
          {
            v16 = *v13;
            if ( *v13 )
            {
              v13[1] = nullptr;
              v33 = v14;
              qfree(v16);
              v14 = v33;
            }
            ++v15;
            v13 += 5;
          }
          while ( v14 != v15 );
        }
LABEL_41:
        qfree(v31);
      }
LABEL_9:
      if ( v9 )
        qfree(v9);
      v6 += 96;
      if ( v6 == v32 )
        goto LABEL_20;
    }
    if ( v11 != 1 )
      goto LABEL_9;
    if ( v43 )
      qfree(v43);
    if ( !v31 )
      goto LABEL_9;
    goto LABEL_41;
  }
  return v45 - __readfsqword(0x28u);
}

