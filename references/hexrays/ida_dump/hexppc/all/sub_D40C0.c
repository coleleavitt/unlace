__int64 __fastcall sub_D40C0(_QWORD *a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdx
  _DWORD *v23; // rax
  __int64 v24; // rbx
  _DWORD *v25; // [rsp+0h] [rbp-F8h]
  __int64 v26; // [rsp+8h] [rbp-F0h]
  __int64 v27; // [rsp+10h] [rbp-E8h] BYREF
  __int128 v28; // [rsp+18h] [rbp-E0h]
  char v29[8]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C0h]
  __int64 v31; // [rsp+40h] [rbp-B8h]
  __int64 v32; // [rsp+50h] [rbp-A8h]
  __int64 v33; // [rsp+58h] [rbp-A0h]
  _QWORD v34[3]; // [rsp+88h] [rbp-70h] BYREF
  _QWORD v35[11]; // [rsp+A0h] [rbp-58h] BYREF

  v7 = a1[187];
  v35[3] = __readfsqword(0x28u);
  sub_CD670((__int64)v29, v7, 0xB0u);
  v9 = a1[188];
  v27 = 0;
  v28 = 0;
  sub_D3E00(a2, &v27, v9, v34, a4, 0);
  sub_D3E00(a2, &v27, a1[188], v35, a4, 1);
  v10 = a4[3];
  if ( v10 )
  {
    v17 = (_QWORD *)a4[2];
    v18 = *(_QWORD *)(*(_QWORD *)(a1[187] + 24LL) + 16LL);
    sub_D3A50(
      a2,
      &v27,
      a1[188],
      v18 & (*v17 - a1[180]),
      (v18 & (LODWORD(v17[2 * v10 - 2]) + LODWORD(v17[2 * v10 - 1]) - a1[180])) - (v18 & (*v17 - a1[180])));
  }
  v11 = a2[1];
  if ( a3 && v11 )
  {
    v19 = qalloc_or_throw(24);
    *(_QWORD *)v19 = 0;
    a4 = (__int64 *)v19;
    *(_OWORD *)(v19 + 8) = 0;
    v20 = v28;
    if ( (_QWORD)v28 )
    {
      v21 = qalloc_or_throw(24 * v28);
      *a4 = v21;
      v22 = 0;
      a4[2] = v20;
      while ( 1 )
      {
        v26 = v22;
        v23 = (_DWORD *)(24 * v22 + v21);
        v24 = v27 + 24 * v22;
        *v23 = 0;
        v25 = v23;
        copy_argloc(v23, v24);
        v22 = v26 + 1;
        v25[4] = *(_DWORD *)(v24 + 16);
        if ( v20 == v26 + 1 )
          break;
        v21 = *a4;
      }
      a4[1] = v20;
    }
    cleanup_argloc(a3);
    if ( a4 )
    {
      *(_DWORD *)a3 = 2;
      *(_QWORD *)(a3 + 8) = a4;
    }
    v11 = a2[1];
  }
  v12 = v27;
  LOBYTE(a4) = v11 != 0;
  if ( v27 )
  {
    v13 = v28;
    if ( (_QWORD)v28 )
    {
      v14 = 0;
      do
      {
        v15 = 3 * v14++;
        cleanup_argloc(v12 + 8 * v15);
        v12 = v27;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v28 = 0;
    qfree(v12);
  }
  if ( v35[0] )
  {
    v35[1] = 0;
    qfree(v35[0]);
  }
  if ( v34[0] )
  {
    v34[1] = 0;
    qfree(v34[0]);
  }
  if ( v32 )
  {
    v33 = 0;
    qfree(v32);
  }
  if ( v30 )
  {
    v31 = 0;
    qfree(v30);
  }
  return (unsigned int)a4;
}
