unsigned __int64 __fastcall sub_69DDF0(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  int v4; // ebp
  unsigned __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rdx
  void *v9; // r14
  __int64 v10; // rsi
  char v11; // r13
  __int64 v12; // rax
  void **v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r13
  void *v16; // rdi
  _BYTE *v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // r14
  __int64 v20; // r13
  void *v21; // rdi
  char *v22; // r12
  char v23; // al
  char *v24; // rsi
  char *v25; // rcx
  __int64 v26; // rax
  char *i; // r15
  void *v28; // rdi
  void *v30; // rdi
  void *v31; // rdi
  void **v32; // [rsp+8h] [rbp-100h]
  char *v33; // [rsp+8h] [rbp-100h]
  __int64 v34; // [rsp+10h] [rbp-F8h]
  __int64 v35; // [rsp+10h] [rbp-F8h]
  __int64 v36; // [rsp+18h] [rbp-F0h]
  __int64 v37; // [rsp+20h] [rbp-E8h]
  __int64 v39; // [rsp+38h] [rbp-D0h]
  void *v40; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v41; // [rsp+48h] [rbp-C0h]
  void *ptr; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v43; // [rsp+68h] [rbp-A0h]
  void **v44; // [rsp+78h] [rbp-90h]
  __int64 v45; // [rsp+80h] [rbp-88h]
  void *v46; // [rsp+A0h] [rbp-68h]
  char v47; // [rsp+C1h] [rbp-47h]
  unsigned __int64 v48; // [rsp+C8h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v2 = a2[1];
  if ( (int)v2 > 0 )
  {
    v37 = 0;
    v39 = 16 * ((unsigned int)(v2 - 1) + 1LL);
    while ( 1 )
    {
      v40 = nullptr;
      v41 = 0;
      get_tryblks((__int64 *)&v40, (unsigned __int64 *)(*a2 + v37));
      v4 = v41;
      if ( (int)v41 > 0 )
        break;
LABEL_20:
      v17 = v40;
      if ( v40 )
      {
        v18 = v41;
        if ( (_QWORD)v41 )
        {
          v19 = 0;
          v20 = 0;
          do
          {
            v22 = &v17[v19];
            v23 = v17[v19 + 97];
            if ( v23 == 2 )
            {
              v24 = *((char **)v22 + 3);
              if ( v24 )
              {
                v25 = *((char **)v22 + 4);
                if ( v25 )
                {
                  v26 = 0;
                  for ( i = nullptr; i != v25; ++i )
                  {
                    v28 = *(void **)&v24[v26];
                    if ( v28 )
                    {
                      *(_QWORD *)&v24[v26 + 8] = 0;
                      v35 = v26;
                      v33 = v25;
                      qfree(v28);
                      v24 = *((char **)v22 + 3);
                      v26 = v35;
                      v25 = v33;
                    }
                    v26 += 56;
                  }
                }
                *((_QWORD *)v22 + 4) = 0;
                qfree(v24);
              }
            }
            else if ( v23 == 1 )
            {
              v30 = *((void **)v22 + 8);
              if ( v30 )
              {
                *((_QWORD *)v22 + 9) = 0;
                qfree(v30);
              }
              v31 = *((void **)v22 + 3);
              if ( v31 )
              {
                *((_QWORD *)v22 + 4) = 0;
                qfree(v31);
              }
            }
            v21 = *(void **)v22;
            v22[97] = 0;
            if ( v21 )
            {
              *((_QWORD *)v22 + 1) = 0;
              qfree(v21);
            }
            ++v20;
            v17 = v40;
            v19 += 104;
          }
          while ( v18 != v20 );
        }
        *(_QWORD *)&v41 = 0;
        qfree(v17);
      }
      v37 += 16;
      if ( v37 == v39 )
        return v48 - __readfsqword(0x28u);
    }
    v5 = a1[1] + (int)v41;
    if ( a1[2] < v5 )
      *a1 = qvector_reserve(a1, *a1, v5, 104);
    v6 = 0;
    v34 = 104 * ((unsigned int)(v4 - 1) + 1LL);
    while ( 1 )
    {
      ptr = nullptr;
      v44 = nullptr;
      v47 = 0;
      v43 = 0;
      sub_698F60((__int64)&ptr, (__int64)v40 + v6);
      v8 = a1[1];
      v9 = ptr;
      v10 = *a1;
      v11 = v47;
      v32 = v44;
      if ( a1[2] < (unsigned __int64)(v8 + 1) )
      {
        v12 = qvector_reserve(a1, v10, v8 + 1, 104);
        *a1 = v12;
        v8 = a1[1];
        v10 = v12;
      }
      v7 = v10 + 104 * v8;
      *(_QWORD *)v7 = 0;
      *(_BYTE *)(v7 + 97) = 0;
      *(_OWORD *)(v7 + 8) = 0;
      sub_698F60(v7, (__int64)&ptr);
      ++a1[1];
      if ( v11 != 2 )
        break;
      v13 = v32;
      if ( v32 )
      {
        v14 = v45;
        v15 = 0;
        if ( v45 )
        {
          do
          {
            v16 = *v13;
            if ( *v13 )
            {
              v13[1] = nullptr;
              v36 = v14;
              qfree(v16);
              v14 = v36;
            }
            ++v15;
            v13 += 7;
          }
          while ( v14 != v15 );
        }
LABEL_41:
        qfree(v32);
      }
LABEL_9:
      if ( v9 )
        qfree(v9);
      v6 += 104;
      if ( v6 == v34 )
        goto LABEL_20;
    }
    if ( v11 != 1 )
      goto LABEL_9;
    if ( v46 )
      qfree(v46);
    if ( !v32 )
      goto LABEL_9;
    goto LABEL_41;
  }
  return v48 - __readfsqword(0x28u);
}
