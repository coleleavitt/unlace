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
  __int64 v12; // rcx
  __int64 v13; // r15
  _QWORD *v14; // r15
  __int64 v15; // rdi
  unsigned int v16; // ecx
  unsigned int v17; // edx
  char v18; // r14
  __int64 v19; // rdi
  unsigned int v20; // ecx
  unsigned int v21; // edx
  char v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 *v26; // rdi
  __int64 v27; // rdx
  int **v28; // r13
  int *v29; // r14
  unsigned int v30; // ebx
  unsigned int *v32; // [rsp+0h] [rbp-108h]
  _QWORD *v33; // [rsp+8h] [rbp-100h]
  __int64 v34; // [rsp+10h] [rbp-F8h]
  __int64 v37; // [rsp+30h] [rbp-D8h]
  __int64 n; // [rsp+38h] [rbp-D0h]
  __int64 v39[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v40[2]; // [rsp+50h] [rbp-B8h] BYREF
  void *src; // [rsp+60h] [rbp-A8h]
  __int64 v42; // [rsp+68h] [rbp-A0h]
  __int64 (__fastcall **v43)(); // [rsp+80h] [rbp-88h] BYREF
  __int128 v44; // [rsp+88h] [rbp-80h]
  __int128 v45; // [rsp+98h] [rbp-70h]
  unsigned __int64 v46; // [rsp+A8h] [rbp-60h]
  __int64 *v47; // [rsp+B0h] [rbp-58h]
  __int64 *v48; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v49; // [rsp+C8h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  if ( !a2[4] )
  {
    if ( !under_debugger )
      sub_383060(51635);
    BUG();
  }
  v4 = *(_QWORD *)(*(_QWORD *)a2[3] + 64LL);
  sub_32F640(v40, a3, *(_QWORD *)(a1 + 24));
  v5 = a2[4];
  v6 = a2[3];
  v39[0] = 0;
  v39[1] = 0;
  if ( 24 * v5 )
  {
    v32 = nullptr;
    v7 = (_QWORD *)(v6 + 24);
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = v32;
        v9 = (unsigned int *)*(v7 - 1);
        v33 = v7;
        v32 = v9;
        if ( v8 != v9 )
          break;
        v7 += 3;
        if ( v33 == (_QWORD *)(v6 + 24 * v5) )
          goto LABEL_22;
      }
      if ( (unsigned __int8)sub_32ED40(*v9, 0) )
        break;
      v10 = *(v7 - 1);
      if ( *(v7 - 2) != v10 )
      {
        v44 = 0u;
        v43 = &off_4DE130;
        v47 = a2 + 3;
        v45 = 0u;
        LOBYTE(v46) = 0;
        v48 = a3;
        if ( (unsigned int)sub_11E900((_BYTE *)*(v7 - 1), (__int64)&v43) )
          break;
        v10 = *(v7 - 1);
      }
      v11 = *(v7 - 3);
      v34 = *(_QWORD *)(v11 + 48);
      sub_64000((__int64 *)&v43, (__int64)v40);
      *((_QWORD *)&v44 + 1) = 0;
      v45 = 0;
      if ( v42 )
      {
        v37 = v42;
        n = 16 * v42;
        *((_QWORD *)&v44 + 1) = qalloc_or_throw(16 * v42, (__int64)v40, 16 * v42, v12);
        *((_QWORD *)&v45 + 1) = v37;
        memcpy(*((void **)&v44 + 1), src, n);
        *(_QWORD *)&v45 = v37;
      }
      v13 = sub_A9D90(v11, (__int64 *)&v43, v34, v10, 0x2001u);
      if ( *((_QWORD *)&v44 + 1) )
      {
        *(_QWORD *)&v45 = 0;
        qfree(*((__int64 *)&v44 + 1));
      }
      qfree((__int64)v43);
      if ( v13 )
        break;
      sub_64190(v39, *(_DWORD *)(*(v7 - 3) + 72LL));
      v5 = a2[4];
      v6 = a2[3];
      if ( v7 != (_QWORD *)(v6 + 24 * v5) )
      {
        v14 = v7;
        do
        {
          if ( *(v7 - 1) != v14[2] )
          {
            v15 = *(_QWORD *)(v4 + 784);
            v16 = *(_DWORD *)(*v14 + 72LL);
            v17 = *(_DWORD *)(*(v7 - 3) + 72LL);
            v43 = nullptr;
            *(_QWORD *)&v44 = 0;
            v18 = sub_6FC30(v15, (__int64 *)&v43, v17, v16);
            qfree((__int64)v43);
            if ( v18 )
              goto LABEL_30;
            v19 = *(_QWORD *)(v4 + 784);
            v20 = *(_DWORD *)(*(v7 - 3) + 72LL);
            v21 = *(_DWORD *)(*v14 + 72LL);
            v43 = nullptr;
            *(_QWORD *)&v44 = 0;
            v22 = sub_6FC30(v19, (__int64 *)&v43, v21, v20);
            qfree((__int64)v43);
            if ( v22 )
              goto LABEL_30;
            v6 = a2[3];
            v5 = a2[4];
          }
          v14 += 3;
        }
        while ( v14 != (_QWORD *)(v6 + 24 * v5) );
        v7 += 3;
        if ( v33 != v14 )
          continue;
      }
      goto LABEL_22;
    }
LABEL_30:
    v30 = 1;
  }
  else
  {
LABEL_22:
    v23 = *a2;
    if ( 24 * a2[1] )
    {
      while ( 1 )
      {
        v24 = 3LL * *(int *)(*(_QWORD *)v23 + 72LL);
        v25 = **(_QWORD **)(a1 + 8);
        LOBYTE(v47) = 1;
        v43 = nullptr;
        v26 = (unsigned __int64 *)(v25 + 8 * v24);
        v44 = 0;
        v27 = *a3;
        BYTE8(v45) = *((_BYTE *)a3 + 8);
        *(_QWORD *)&v45 = v27;
        v46 = 0xFFFFFFFF00000001LL;
        v28 = (int **)sub_104DF0(v26, (__int64)&v43);
        if ( v43 )
        {
          *(_QWORD *)&v44 = 0;
          qfree((__int64)v43);
        }
        v29 = *v28;
        if ( 4LL * (_QWORD)v28[1] )
          break;
LABEL_36:
        v23 += 24;
        if ( v23 == *a2 + 24 * a2[1] )
          goto LABEL_37;
      }
      while ( sub_64930(v39, *v29) )
      {
        if ( ++v29 == &(*v28)[(_QWORD)v28[1]] )
          goto LABEL_36;
      }
      v30 = -1;
    }
    else
    {
LABEL_37:
      v30 = 0;
    }
  }
  qfree(v39[0]);
  if ( src )
  {
    v42 = 0;
    qfree((__int64)src);
  }
  qfree(v40[0]);
  return v30;
}
