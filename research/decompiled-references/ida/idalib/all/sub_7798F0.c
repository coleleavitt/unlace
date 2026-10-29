unsigned __int64 __fastcall sub_7798F0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 *v7; // rbp
  __int64 *i; // r13
  unsigned __int64 v9; // r9
  __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // r13
  unsigned __int64 v13; // rbp
  __int64 v14; // r9
  __int64 *v15; // r15
  __int64 *v16; // r10
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r11
  _BYTE *v20; // rax
  char *v21; // rcx
  const void *v22; // rsi
  char *v23; // rax
  __int64 *v25; // rcx
  __int64 *v26; // rax
  char *v27; // rax
  unsigned __int64 v28; // [rsp+0h] [rbp-78h]
  __int64 v29; // [rsp+0h] [rbp-78h]
  __int64 v30; // [rsp+0h] [rbp-78h]
  __int64 v32; // [rsp+10h] [rbp-68h]
  __int64 *v33; // [rsp+10h] [rbp-68h]
  __int64 v34; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v36; // [rsp+28h] [rbp-50h]
  unsigned __int64 v37; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 48);
  v37 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 56);
  ++*(_DWORD *)(a1 + 104);
  v6 = a3[1];
  v36 = 0;
  ptr = nullptr;
  v32 = v4 + 176 * v5;
  if ( v4 != v32 )
  {
    do
    {
      v7 = *(__int64 **)(v4 + 24);
      for ( i = (__int64 *)((char *)v7 + 9 * *(_QWORD *)(v4 + 32)); i != v7; v7 = (__int64 *)((char *)v7 + 9) )
      {
        if ( !*((_BYTE *)v7 + 8) )
        {
          v9 = *v7;
          if ( *v7 < (unsigned __int64)a2 || v9 >= v6 + (unsigned __int64)a2 )
          {
            v10 = v36;
            v11 = ptr;
            if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 1) )
            {
              v28 = *v7;
              ptr = (void *)qvector_reserve(&ptr, ptr, v36 + 1, 8);
              v11 = ptr;
              v9 = v28;
              v10 = v36;
            }
            v11[v10] = v9;
            *(_QWORD *)&v36 = v36 + 1;
          }
        }
      }
      v4 += 176;
    }
    while ( v32 != v4 );
    v5 = *(_QWORD *)(a1 + 56);
  }
  v12 = 0;
  v13 = 0;
  if ( v5 )
  {
    do
    {
      v14 = v12 + *(_QWORD *)(a1 + 48);
      v15 = *(__int64 **)(v14 + 24);
      v16 = (__int64 *)((char *)v15 + 9 * *(_QWORD *)(v14 + 32));
      if ( v16 != v15 )
      {
        do
        {
          if ( !*((_BYTE *)v15 + 8) )
          {
            v17 = *v15;
            if ( *v15 >= (unsigned __int64)a2 && v17 < v6 + (unsigned __int64)a2 )
            {
              v18 = v17 - a2;
              v19 = *(int *)(*a3 + 4 * v18);
              if ( !*(_DWORD *)(*a3 + 4 * v18) )
                goto LABEL_19;
              v25 = (__int64 *)((char *)ptr + 8 * v36);
              if ( ptr == v25 )
                goto LABEL_36;
              v26 = (__int64 *)ptr;
              while ( v19 != *v26 )
              {
                if ( v25 == ++v26 )
                  goto LABEL_36;
              }
              if ( v26 == v25 )
              {
LABEL_36:
                if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 1) )
                {
                  v34 = v14;
                  v33 = v16;
                  v30 = v19;
                  v27 = (char *)qvector_reserve(&ptr, ptr, v36 + 1, 8);
                  v14 = v34;
                  ptr = v27;
                  v16 = v33;
                  v19 = v30;
                  v25 = (__int64 *)&v27[8 * v36];
                }
                *v25 = v19;
                *(_QWORD *)&v36 = v36 + 1;
              }
              else
              {
LABEL_19:
                v19 = -1;
              }
              *v15 = v19;
              *(_DWORD *)(v14 + 168) |= 1u;
            }
          }
          v15 = (__int64 *)((char *)v15 + 9);
        }
        while ( v15 != v16 );
        v20 = *(_BYTE **)(v14 + 24);
        v21 = &v20[9 * *(_QWORD *)(v14 + 32)];
        while ( v20 != v21 )
        {
          while ( 1 )
          {
            v22 = v21;
            v21 -= 9;
            if ( v21[8] || *(_QWORD *)v21 != -1 )
              break;
            v29 = v14;
            v23 = (char *)memmove(v21, v22, v20 - v21 + 9LL * *(_QWORD *)(v14 + 32) - 9);
            v14 = v29;
            v21 = v23;
            v20 = *(_BYTE **)(v29 + 24);
            --*(_QWORD *)(v29 + 32);
            if ( v20 == v21 )
              goto LABEL_27;
          }
        }
      }
LABEL_27:
      sub_777860(a1, v13++, v14, nullptr);
      v12 += 176;
    }
    while ( v13 < *(_QWORD *)(a1 + 56) );
  }
  sub_775DC0(a1);
  if ( ptr )
  {
    *(_QWORD *)&v36 = 0;
    qfree(ptr);
  }
  return v37 - __readfsqword(0x28u);
}
