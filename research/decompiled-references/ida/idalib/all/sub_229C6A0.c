__int64 __fastcall sub_229C6A0(char *a1, char *a2, __int64 a3, unsigned __int64 *a4, char a5)
{
  unsigned int v5; // ebx
  int v6; // r14d
  int v7; // ebp
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  _QWORD *v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  _BYTE *v16; // rdi
  __int64 v18; // rbx
  char *v19; // r15
  __int64 *v20; // r15
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  char *v29[2]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v30; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-90h]
  void *ptr; // [rsp+40h] [rbp-88h] BYREF
  __int64 v33; // [rsp+48h] [rbp-80h]
  _BYTE v34[120]; // [rsp+50h] [rbp-78h] BYREF

  *(_QWORD *)a3 = "none";
  *(_QWORD *)(a3 + 16) = "a_key";
  v29[0] = a1;
  v29[1] = a2;
  *(_QWORD *)(a3 + 8) = 4;
  *(_QWORD *)(a3 + 24) = 5;
  *(_WORD *)(a3 + 32) = 0;
  *(_BYTE *)(a3 + 34) = 0;
  if ( a2 == byte_4 )
  {
    v5 = 1;
    if ( *(_DWORD *)a1 == 1701736302 )
      return v5;
  }
  else if ( a2 == byte_8 && *(_QWORD *)a1 == 0x647261646E617473LL )
  {
    *(_BYTE *)(a3 + 32) = 1;
    v5 = 1;
    *(_QWORD *)a3 = "non-leaf";
    *(_QWORD *)(a3 + 8) = 8;
    *(_BYTE *)(a3 + 34) = 1;
    *(_BYTE *)(a3 + 33) = a5;
    return v5;
  }
  ptr = v34;
  v33 = 0x400000000LL;
  sub_22471D0(v29, (__int64)&ptr, "+", 1u, -1, 1);
  v6 = v33;
  if ( (_DWORD)v33 )
  {
    v7 = 0;
    while ( 1 )
    {
LABEL_5:
      v8 = 16LL * v7;
      v9 = 0;
      v10 = (char *)ptr + v8;
      v11 = sub_2246FB0((__int64 *)((char *)ptr + v8), asc_22E1692, 6, 0);
      v12 = v10[1];
      if ( v11 < v12 )
      {
        v9 = v12 - v11;
        v12 = v11;
      }
      v13 = *v10 + v12;
      v31 = v9;
      v30 = v13;
      v14 = sub_2247130(&v30, asc_22E1692, 6, 0xFFFFFFFFFFFFFFFFLL) + 1;
      if ( v14 > v31 )
        v14 = v31;
      v15 = v31 - v9 + v14;
      if ( v15 > v31 )
        v15 = v31;
      if ( v15 != 3 )
        break;
      if ( *(_WORD *)v30 == 29794 && *(_BYTE *)(v30 + 2) == 105 )
      {
        *(_BYTE *)(a3 + 32) = 1;
      }
      else
      {
        if ( *(_WORD *)v30 != 25447 || *(_BYTE *)(v30 + 2) != 115 )
          goto LABEL_14;
        *(_BYTE *)(a3 + 34) = 1;
      }
      if ( v6 == ++v7 )
        goto LABEL_42;
    }
    if ( v15 == 7 )
    {
      if ( *(_DWORD *)v30 == 761487728 && *(_WORD *)(v30 + 4) == 25970 && *(_BYTE *)(v30 + 6) == 116 )
      {
        ++v7;
        v18 = v8 + 16;
        v19 = (char *)ptr;
        *(_QWORD *)a3 = "non-leaf";
        for ( *(_QWORD *)(a3 + 8) = 8; v7 != v6; v19 = (char *)ptr )
        {
          v20 = (__int64 *)&v19[v18];
          v21 = 0;
          v22 = sub_2246FB0(v20, asc_22E1692, 6, 0);
          v23 = v20[1];
          if ( v22 < v23 )
          {
            v21 = v23 - v22;
            v23 = v22;
          }
          v24 = *v20 + v23;
          v31 = v21;
          v30 = v24;
          v25 = sub_2247130(&v30, asc_22E1692, 6, 0xFFFFFFFFFFFFFFFFLL) + 1;
          if ( v25 > v31 )
            v25 = v31;
          v26 = v31 - v21 + v25;
          if ( v26 > v31 )
            v26 = v31;
          if ( v26 == 4 )
          {
            if ( *(_DWORD *)v30 != 1717658988 )
              goto LABEL_5;
            *(_QWORD *)a3 = "all";
            *(_QWORD *)(a3 + 8) = 3;
          }
          else if ( v26 == 5 )
          {
            if ( *(_DWORD *)v30 != 1701522786 || *(_BYTE *)(v30 + 4) != 121 )
              goto LABEL_5;
            *(_QWORD *)(a3 + 16) = "b_key";
            *(_QWORD *)(a3 + 24) = 5;
          }
          else
          {
            if ( v26 != 2 || *(_WORD *)v30 != 25456 )
              goto LABEL_5;
            *(_BYTE *)(a3 + 33) = 1;
          }
          ++v7;
          v18 += 16;
        }
        v16 = v19;
        v5 = 1;
        goto LABEL_15;
      }
LABEL_14:
      v16 = ptr;
      *a4 = v30;
      a4[1] = v15;
      v5 = 0;
      goto LABEL_15;
    }
    if ( v15 )
      goto LABEL_14;
    v16 = ptr;
    *a4 = (unsigned __int64)"<empty>";
    v5 = 0;
    a4[1] = 7;
  }
  else
  {
LABEL_42:
    v16 = ptr;
    v5 = 1;
  }
LABEL_15:
  if ( v16 != v34 )
    free(v16);
  return v5;
}
