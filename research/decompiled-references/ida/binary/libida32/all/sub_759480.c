unsigned __int64 __fastcall sub_759480(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // r15
  __int64 v5; // rbp
  __int64 v6; // rdx
  unsigned int *v7; // rbx
  int *i; // r14
  unsigned int v9; // r9d
  __int64 v10; // rax
  _DWORD *v11; // rsi
  unsigned int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // r15
  int *v15; // rbx
  int *v16; // r9
  unsigned int v17; // eax
  int v18; // r10d
  _BYTE *v19; // rax
  char *v20; // rcx
  const void *v21; // rsi
  char *v22; // rax
  int *v24; // rcx
  int *v25; // rax
  char *v26; // rax
  unsigned int v27; // [rsp+0h] [rbp-74h]
  int v28; // [rsp+0h] [rbp-74h]
  __int64 v30; // [rsp+Ch] [rbp-68h]
  int *v31; // [rsp+Ch] [rbp-68h]
  void *ptr; // [rsp+1Ch] [rbp-58h] BYREF
  __int128 v33; // [rsp+24h] [rbp-50h]
  unsigned __int64 v34; // [rsp+34h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 48);
  v34 = __readfsqword(0x28u);
  ++*(_DWORD *)(a1 + 100);
  v5 = a3[1];
  v6 = *(_QWORD *)(a1 + 56);
  v33 = 0;
  ptr = nullptr;
  v30 = v4 + 176 * v6;
  if ( v4 != v30 )
  {
    do
    {
      v7 = *(unsigned int **)(v4 + 24);
      for ( i = (int *)((char *)v7 + 5 * *(_QWORD *)(v4 + 32)); i != (int *)v7; v7 = (unsigned int *)((char *)v7 + 5) )
      {
        if ( !*((_BYTE *)v7 + 4) )
        {
          v9 = *v7;
          if ( *v7 < a2 || v9 >= v5 + (unsigned __int64)a2 )
          {
            v10 = v33;
            v11 = ptr;
            if ( *((_QWORD *)&v33 + 1) < (unsigned __int64)(v33 + 1) )
            {
              v27 = *v7;
              ptr = (void *)qvector_reserve(&ptr, ptr, v33 + 1, 4);
              v11 = ptr;
              v9 = v27;
              v10 = v33;
            }
            v11[v10] = v9;
            *(_QWORD *)&v33 = v33 + 1;
          }
        }
      }
      v4 += 176;
    }
    while ( v30 != v4 );
    v6 = *(_QWORD *)(a1 + 56);
  }
  v12 = 0;
  v13 = 0;
  if ( v6 )
  {
    do
    {
      v14 = *(_QWORD *)(a1 + 48) + 176 * v13;
      v15 = *(int **)(v14 + 24);
      v16 = (int *)((char *)v15 + 5 * *(_QWORD *)(v14 + 32));
      if ( v16 != v15 )
      {
        do
        {
          if ( !*((_BYTE *)v15 + 4) )
          {
            v17 = *v15;
            if ( *v15 >= a2 && v17 < v5 + (unsigned __int64)a2 )
            {
              v18 = *(_DWORD *)(*a3 + 4LL * (v17 - a2));
              if ( !v18 )
                goto LABEL_19;
              v24 = (int *)((char *)ptr + 4 * v33);
              if ( ptr == v24 )
                goto LABEL_36;
              v25 = (int *)ptr;
              while ( v18 != *v25 )
              {
                if ( v24 == ++v25 )
                  goto LABEL_36;
              }
              if ( v25 == v24 )
              {
LABEL_36:
                if ( *((_QWORD *)&v33 + 1) < (unsigned __int64)(v33 + 1) )
                {
                  v31 = v16;
                  v28 = v18;
                  v26 = (char *)qvector_reserve(&ptr, ptr, v33 + 1, 4);
                  v16 = v31;
                  ptr = v26;
                  v18 = v28;
                  v24 = (int *)&v26[4 * v33];
                }
                *v24 = v18;
                *(_QWORD *)&v33 = v33 + 1;
              }
              else
              {
LABEL_19:
                v18 = -1;
              }
              *v15 = v18;
              *(_DWORD *)(v14 + 164) |= 1u;
            }
          }
          v15 = (int *)((char *)v15 + 5);
        }
        while ( v15 != v16 );
        v19 = *(_BYTE **)(v14 + 24);
        v20 = &v19[5 * *(_QWORD *)(v14 + 32)];
        while ( v19 != v20 )
        {
          while ( 1 )
          {
            v21 = v20;
            v20 -= 5;
            if ( v20[4] || *(_DWORD *)v20 != -1 )
              break;
            v22 = (char *)memmove(v20, v21, v19 - v20 + 5LL * *(_QWORD *)(v14 + 32) - 5);
            --*(_QWORD *)(v14 + 32);
            v20 = v22;
            v19 = *(_BYTE **)(v14 + 24);
            if ( v19 == v20 )
              goto LABEL_27;
          }
        }
      }
LABEL_27:
      sub_757350(a1, v12++, v14, nullptr);
      v13 = v12;
    }
    while ( (unsigned __int64)v12 < *(_QWORD *)(a1 + 56) );
  }
  sub_7558A0(a1);
  if ( ptr )
  {
    *(_QWORD *)&v33 = 0;
    qfree(ptr);
  }
  return v34 - __readfsqword(0x28u);
}

