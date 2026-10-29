void __fastcall sub_189CEB0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 **v11; // rax
  __int64 *v12; // rdx
  unsigned __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 i; // rcx
  __int64 *v25; // rcx
  __int64 *v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  bool v32; // [rsp+Fh] [rbp-A9h] BYREF
  _BYTE v33[168]; // [rsp+10h] [rbp-A8h] BYREF

  v6 = a3;
  if ( (unsigned __int8)sub_BA7E40(a3, a2, a3, a4, a5, a6) )
  {
    if ( (*(_BYTE *)(v6 + 29) & 1) == 0 )
      goto LABEL_40;
    v11 = (__int64 **)sub_B8C3D0(v6, a2, v7, v8, v9, v10);
    v12 = *v11;
    v13 = (unsigned __int64)&(*v11)[*((unsigned int *)v11 + 2)];
    if ( (unsigned __int64)v12 < v13 )
    {
      v25 = v12;
      while ( *(_WORD *)(*v25 + 36) != 428 )
      {
        if ( (__int64 *)v13 == ++v25 )
          goto LABEL_40;
      }
      if ( (__int64 *)v13 == v25 )
      {
LABEL_40:
        sub_168B9F0((__int64)v33, a1, *(_DWORD *)(a2 + 24), 0x1115u, 0);
        sub_15F7200(v33);
        BUG();
      }
    }
    else
    {
      if ( v12 == (__int64 *)v13 )
        goto LABEL_40;
      if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 428 )
      {
        v14 = (__int64 *)(v13 + 8);
        while ( v14 != v12 )
        {
          v15 = *v14++;
          if ( *(_WORD *)(v15 + 36) == 428 )
            goto LABEL_23;
        }
        goto LABEL_40;
      }
    }
LABEL_23:
    v6 = *v12;
    if ( *(_WORD *)(*v12 + 36) != 428 )
    {
      v26 = v12 + 1;
      do
        v6 = *v26++;
      while ( *(_WORD *)(v6 + 36) != 428 );
    }
    sub_168B9F0((__int64)v33, a1, *(_DWORD *)(a2 + 24), 0x1115u, 0);
    goto LABEL_27;
  }
  if ( !(unsigned __int8)sub_BA7E40(a2, a2, v7, v8, v9, v10) )
    return;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_41;
  v20 = sub_B8C3D0(a2, a2, v16, v17, v18, v19);
  v21 = (_QWORD *)*v20;
  v22 = *v20 + 8LL * *((unsigned int *)v20 + 2);
  if ( (unsigned __int64)v21 < v22 )
  {
    v27 = v21;
    while ( *(_WORD *)(*v27 + 36LL) != 428 )
    {
      if ( (_QWORD *)v22 == ++v27 )
        goto LABEL_41;
    }
    if ( (_QWORD *)v22 != v27 )
      goto LABEL_32;
    goto LABEL_41;
  }
  if ( v21 == (_QWORD *)v22 )
    goto LABEL_41;
  if ( *(_WORD *)(*(_QWORD *)v22 + 36LL) != 428 )
  {
    v23 = v22 + 8;
    for ( i = v23; v21 != (_QWORD *)v23; i = v23 )
    {
      v23 += 8LL;
      if ( *(_WORD *)(*(_QWORD *)i + 36LL) == 428 )
        goto LABEL_32;
    }
LABEL_41:
    BUG();
  }
LABEL_32:
  v28 = *v21;
  if ( *(_WORD *)(*v21 + 36LL) != 428 )
  {
    v29 = v21 + 1;
    do
      v28 = *v29++;
    while ( *(_WORD *)(v28 + 36) != 428 );
  }
  sub_168B9F0((__int64)v33, a1, *(_DWORD *)(v28 + 24), 0x1102u, 0);
  v30 = *(_QWORD *)(v6 + 16);
  if ( (v30 & 4) != 0 )
    v31 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v31 = v30 & 0xFFFFFFFFFFFFFFF8LL;
  v32 = (*(_BYTE *)(v31 + 8) & 0x7F) == 19;
  sub_1588420((__int64)v33, (unsigned __int8 *)&v32);
LABEL_27:
  sub_15F7200(v33);
  sub_168B9F0((__int64)v33, a1, *(_DWORD *)(v6 + 24), 0x70u, 0);
  sub_15F7200(v33);
}
