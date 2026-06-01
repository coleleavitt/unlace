unsigned __int64 __fastcall sub_69E200(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rsi
  unsigned __int64 *v4; // rsi
  int v5; // ebp
  unsigned __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rdx
  void *v10; // r14
  __int64 v11; // rsi
  char v12; // r13
  __int64 v13; // rax
  void **v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r13
  void *v17; // rdi
  _BYTE *v18; // rdi
  __int64 v19; // r12
  __int64 v20; // r14
  __int64 v21; // r13
  void *v22; // rdi
  char *v23; // rbp
  char v24; // al
  char *v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 i; // r15
  void *v29; // rdi
  int v30; // eax
  void *v32; // rdi
  void *v33; // rdi
  void **v34; // [rsp+0h] [rbp-118h]
  __int64 v35; // [rsp+8h] [rbp-110h]
  __int64 v36; // [rsp+8h] [rbp-110h]
  __int64 v37; // [rsp+10h] [rbp-108h]
  void *v39; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v40; // [rsp+38h] [rbp-E0h]
  __int64 v41; // [rsp+50h] [rbp-C8h] BYREF
  int v42; // [rsp+58h] [rbp-C0h]
  __int128 v43; // [rsp+60h] [rbp-B8h]
  void *ptr; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+78h] [rbp-A0h]
  void **v46; // [rsp+88h] [rbp-90h]
  __int64 v47; // [rsp+90h] [rbp-88h]
  void *v48; // [rsp+B0h] [rbp-68h]
  char v49; // [rsp+D1h] [rbp-47h]
  unsigned __int64 v50; // [rsp+D8h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v3 = *a1;
  v41 = 0;
  v43 = 0;
  func_tail_iterator_set(&v41, v3, -1);
  v4 = (unsigned __int64 *)v41;
  v42 = -1;
  if ( v41 )
  {
    while ( 1 )
    {
      v39 = nullptr;
      v40 = 0;
      get_tryblks((__int64 *)&v39, v4);
      v5 = v40;
      if ( (int)v40 > 0 )
        break;
LABEL_19:
      v18 = v39;
      if ( v39 )
      {
        v19 = v40;
        if ( (_QWORD)v40 )
        {
          v20 = 0;
          v21 = 0;
          do
          {
            v23 = &v18[v20];
            v24 = v18[v20 + 97];
            if ( v24 == 2 )
            {
              v25 = *((char **)v23 + 3);
              if ( v25 )
              {
                v26 = *((_QWORD *)v23 + 4);
                if ( v26 )
                {
                  v27 = 0;
                  for ( i = 0; i != v26; ++i )
                  {
                    v29 = *(void **)&v25[v27];
                    if ( v29 )
                    {
                      *(_QWORD *)&v25[v27 + 8] = 0;
                      v36 = v27;
                      qfree(v29);
                      v25 = *((char **)v23 + 3);
                      v27 = v36;
                    }
                    v27 += 56;
                  }
                }
                *((_QWORD *)v23 + 4) = 0;
                qfree(v25);
              }
            }
            else if ( v24 == 1 )
            {
              v32 = *((void **)v23 + 8);
              if ( v32 )
              {
                *((_QWORD *)v23 + 9) = 0;
                qfree(v32);
              }
              v33 = *((void **)v23 + 3);
              if ( v33 )
              {
                *((_QWORD *)v23 + 4) = 0;
                qfree(v33);
              }
            }
            v22 = *(void **)v23;
            v23[97] = 0;
            if ( v22 )
            {
              *((_QWORD *)v23 + 1) = 0;
              qfree(v22);
            }
            ++v21;
            v18 = v39;
            v20 += 104;
          }
          while ( v19 != v21 );
        }
        *(_QWORD *)&v40 = 0;
        qfree(v18);
      }
      v4 = (unsigned __int64 *)v41;
      if ( !v41 )
        goto LABEL_37;
      v30 = v42 + 1;
      if ( *(_DWORD *)(v41 + 128) <= v42 + 1 )
        goto LABEL_37;
      ++v42;
      if ( v30 >= 0 )
        v4 = (unsigned __int64 *)(*(_QWORD *)(v41 + 136) + 16LL * v30);
    }
    v6 = a2[1] + (int)v40;
    if ( a2[2] < v6 )
      *a2 = qvector_reserve(a2, *a2, v6, 104);
    v7 = 0;
    v35 = 104 * ((unsigned int)(v5 - 1) + 1LL);
    while ( 1 )
    {
      ptr = nullptr;
      v46 = nullptr;
      v49 = 0;
      v45 = 0;
      sub_698F60((__int64)&ptr, (__int64)v39 + v7);
      v9 = a2[1];
      v10 = ptr;
      v11 = *a2;
      v12 = v49;
      v34 = v46;
      if ( a2[2] < (unsigned __int64)(v9 + 1) )
      {
        v13 = qvector_reserve(a2, v11, v9 + 1, 104);
        *a2 = v13;
        v9 = a2[1];
        v11 = v13;
      }
      v8 = v11 + 104 * v9;
      *(_QWORD *)v8 = 0;
      *(_BYTE *)(v8 + 97) = 0;
      *(_OWORD *)(v8 + 8) = 0;
      sub_698F60(v8, (__int64)&ptr);
      ++a2[1];
      if ( v12 != 2 )
        break;
      v14 = v34;
      if ( v34 )
      {
        v15 = v47;
        v16 = 0;
        if ( v47 )
        {
          do
          {
            v17 = *v14;
            if ( *v14 )
            {
              v14[1] = nullptr;
              v37 = v15;
              qfree(v17);
              v15 = v37;
            }
            ++v16;
            v14 += 7;
          }
          while ( v15 != v16 );
        }
LABEL_43:
        qfree(v34);
      }
LABEL_8:
      if ( v10 )
        qfree(v10);
      v7 += 104;
      if ( v35 == v7 )
        goto LABEL_19;
    }
    if ( v12 != 1 )
      goto LABEL_8;
    if ( v48 )
      qfree(v48);
    if ( !v34 )
      goto LABEL_8;
    goto LABEL_43;
  }
LABEL_37:
  sub_69DDF0(a2, a1 + 1);
  if ( v41 )
    lock_func_range(v41, 0);
  return v50 - __readfsqword(0x28u);
}
