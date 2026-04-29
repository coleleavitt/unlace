__int64 __fastcall sub_191350(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  unsigned int *v8; // rdx
  unsigned int *v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // r15
  _QWORD *v13; // r15
  __int64 v14; // rdi
  unsigned int v15; // ecx
  unsigned int v16; // edx
  char v17; // r14
  __int64 v18; // rdi
  unsigned int v19; // ecx
  unsigned int v20; // edx
  char v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 *v25; // rdi
  __int64 v26; // rdx
  int **v27; // r13
  int *v28; // r14
  unsigned int v29; // ebx
  unsigned int *v31; // [rsp+0h] [rbp-108h]
  _QWORD *v32; // [rsp+8h] [rbp-100h]
  __int64 v33; // [rsp+10h] [rbp-F8h]
  __int64 v36; // [rsp+30h] [rbp-D8h]
  __int64 n; // [rsp+38h] [rbp-D0h]
  __int64 v38[2]; // [rsp+40h] [rbp-C8h] BYREF
  void *v39[2]; // [rsp+50h] [rbp-B8h] BYREF
  void *src; // [rsp+60h] [rbp-A8h]
  __int64 v41; // [rsp+68h] [rbp-A0h]
  __int64 (__fastcall **v42)(); // [rsp+80h] [rbp-88h] BYREF
  __int128 v43; // [rsp+88h] [rbp-80h]
  __int128 v44; // [rsp+98h] [rbp-70h]
  unsigned __int64 v45; // [rsp+A8h] [rbp-60h]
  __int64 *v46; // [rsp+B0h] [rbp-58h]
  __int64 *v47; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v48; // [rsp+C8h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( !a2[4] )
  {
    if ( !under_debugger )
      sub_383060(51635);
    BUG();
  }
  v4 = *(_QWORD *)(*(_QWORD *)a2[3] + 64LL);
  sub_32F640(v39, a3, *(_QWORD *)(a1 + 24));
  v5 = a2[4];
  v6 = a2[3];
  v38[0] = 0;
  v38[1] = 0;
  if ( 24 * v5 )
  {
    v31 = nullptr;
    v7 = (_QWORD *)(v6 + 24);
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = v31;
        v9 = (unsigned int *)*(v7 - 1);
        v32 = v7;
        v31 = v9;
        if ( v8 != v9 )
          break;
        v7 += 3;
        if ( v32 == (_QWORD *)(v6 + 24 * v5) )
          goto LABEL_22;
      }
      if ( (unsigned __int8)sub_32ED40(*v9, 0) )
        break;
      v10 = *(v7 - 1);
      if ( *(v7 - 2) != v10 )
      {
        v43 = 0u;
        v42 = &off_4DE130;
        v46 = a2 + 3;
        v44 = 0u;
        LOBYTE(v45) = 0;
        v47 = a3;
        if ( (unsigned int)sub_11E900((_BYTE *)*(v7 - 1), (__int64)&v42) )
          break;
        v10 = *(v7 - 1);
      }
      v11 = *(v7 - 3);
      v33 = *(_QWORD *)(v11 + 48);
      sub_64000((__int64 *)&v42, (__int64)v39);
      *((_QWORD *)&v43 + 1) = 0;
      v44 = 0;
      if ( v41 )
      {
        v36 = v41;
        n = 16 * v41;
        *((_QWORD *)&v43 + 1) = qalloc_or_throw(16 * v41);
        *((_QWORD *)&v44 + 1) = v36;
        memcpy(*((void **)&v43 + 1), src, n);
        *(_QWORD *)&v44 = v36;
      }
      v12 = sub_A9D90(v11, (__int64 *)&v42, v33, v10, 0x2001u);
      if ( *((_QWORD *)&v43 + 1) )
      {
        *(_QWORD *)&v44 = 0;
        qfree(*((_QWORD *)&v43 + 1));
      }
      qfree(v42);
      if ( v12 )
        break;
      sub_64190(v38, *(_DWORD *)(*(v7 - 3) + 72LL));
      v5 = a2[4];
      v6 = a2[3];
      if ( v7 != (_QWORD *)(v6 + 24 * v5) )
      {
        v13 = v7;
        do
        {
          if ( *(v7 - 1) != v13[2] )
          {
            v14 = *(_QWORD *)(v4 + 784);
            v15 = *(_DWORD *)(*v13 + 72LL);
            v16 = *(_DWORD *)(*(v7 - 3) + 72LL);
            v42 = nullptr;
            *(_QWORD *)&v43 = 0;
            v17 = sub_6FC30(v14, (__int64 *)&v42, v16, v15);
            qfree(v42);
            if ( v17 )
              goto LABEL_30;
            v18 = *(_QWORD *)(v4 + 784);
            v19 = *(_DWORD *)(*(v7 - 3) + 72LL);
            v20 = *(_DWORD *)(*v13 + 72LL);
            v42 = nullptr;
            *(_QWORD *)&v43 = 0;
            v21 = sub_6FC30(v18, (__int64 *)&v42, v20, v19);
            qfree(v42);
            if ( v21 )
              goto LABEL_30;
            v6 = a2[3];
            v5 = a2[4];
          }
          v13 += 3;
        }
        while ( v13 != (_QWORD *)(v6 + 24 * v5) );
        v7 += 3;
        if ( v32 != v13 )
          continue;
      }
      goto LABEL_22;
    }
LABEL_30:
    v29 = 1;
  }
  else
  {
LABEL_22:
    v22 = *a2;
    if ( 24 * a2[1] )
    {
      while ( 1 )
      {
        v23 = 3LL * *(int *)(*(_QWORD *)v22 + 72LL);
        v24 = **(_QWORD **)(a1 + 8);
        LOBYTE(v46) = 1;
        v42 = nullptr;
        v25 = (unsigned __int64 *)(v24 + 8 * v23);
        v43 = 0;
        v26 = *a3;
        BYTE8(v44) = *((_BYTE *)a3 + 8);
        *(_QWORD *)&v44 = v26;
        v45 = 0xFFFFFFFF00000001LL;
        v27 = (int **)sub_104DF0(v25, (__int64)&v42);
        if ( v42 )
        {
          *(_QWORD *)&v43 = 0;
          qfree(v42);
        }
        v28 = *v27;
        if ( 4LL * (_QWORD)v27[1] )
          break;
LABEL_36:
        v22 += 24;
        if ( v22 == *a2 + 24 * a2[1] )
          goto LABEL_37;
      }
      while ( sub_64930(v38, *v28) )
      {
        if ( ++v28 == &(*v27)[(_QWORD)v27[1]] )
          goto LABEL_36;
      }
      v29 = -1;
    }
    else
    {
LABEL_37:
      v29 = 0;
    }
  }
  qfree(v38[0]);
  if ( src )
  {
    v41 = 0;
    qfree(src);
  }
  qfree(v39[0]);
  return v29;
}
