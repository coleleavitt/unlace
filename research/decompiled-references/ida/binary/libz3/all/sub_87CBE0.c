__int64 __fastcall sub_87CBE0(__int64 a1, unsigned int **a2)
{
  __int64 v3; // r12
  unsigned int v4; // eax
  __int64 v5; // r8
  int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r15
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rsi
  __int64 v14; // r12
  char *v15; // rbp
  unsigned int *v16; // rsi
  _DWORD *v17; // rax
  unsigned int v18; // r13d
  __int64 v19; // rdi
  bool v20; // zf
  char *v21; // rbx
  char *v22; // r14
  __int64 v23; // rsi
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  unsigned int v29; // eax
  unsigned int *v30; // [rsp+8h] [rbp-60h]
  int v31[2]; // [rsp+10h] [rbp-58h] BYREF
  void *v32; // [rsp+18h] [rbp-50h]
  _QWORD v33[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 72);
  v4 = sub_7E4F30(a1, *a2);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)v31 = v3;
  v9 = *(_QWORD *)(v7 + 3288);
  v10 = *(_QWORD *)(v8 + 864);
  v32 = nullptr;
  if ( *(_DWORD *)(v9 + 4LL * v4) == 1 )
    v10 = *(_QWORD *)(v8 + 856);
  sub_87AA10((int)v33, a1, (unsigned int *)a2, (__int64)v31, v5, v6);
  v13 = v33[0];
  v14 = *(_QWORD *)v31;
  v15 = (char *)v32;
  if ( v10 == v33[0] )
  {
    v18 = 1;
  }
  else
  {
    v16 = *a2;
    if ( *((_WORD *)*a2 + 2)
      || (v17 = *(_DWORD **)(*((_QWORD *)v16 + 2) + 24LL)) == nullptr
      || *(_DWORD *)(a1 + 128) != *v17
      || v17[1] != 52
      || (v30 = *a2, v29 = sub_87AE60(a1, (__int64)v16, (__int64)v31, v10, v11, v12), v16 = v30, v18 = v29, (_BYTE)v29) )
    {
      v18 = *(unsigned __int8 *)(a1 + 760);
      if ( !(_BYTE)v18 )
      {
        sub_87C060(a1, (__int64)v16, 1);
        sub_870E70(a1, (__int64)v16, v25, v26, v27, v28);
      }
    }
    v13 = v33[0];
  }
  if ( v13 )
  {
    v19 = v33[1];
    v20 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v20 )
      sub_15D7BC0(v19, v13);
  }
  if ( v15 )
  {
    v21 = v15;
    v22 = &v15[8 * *((unsigned int *)v15 - 1)];
    if ( v15 < v22 )
    {
      do
      {
        while ( 1 )
        {
          v23 = *(_QWORD *)v21;
          if ( *(_QWORD *)v21 )
          {
            v20 = (*(_DWORD *)(v23 + 8))-- == 1;
            if ( v20 )
              break;
          }
          v21 += 8;
          if ( v21 >= v22 )
            goto LABEL_20;
        }
        v21 += 8;
        sub_15D7BC0(v14, v23);
      }
      while ( v21 < v22 );
    }
LABEL_20:
    sub_186B220(v15 - 8);
  }
  return v18;
}

