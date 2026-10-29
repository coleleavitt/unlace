/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A408
// Address: 0x000000000042A408

//----- (000000000042A408) ----------------------------------------------------
__int64 __fastcall sub_42A408(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // x1
  unsigned int v5; // w19
  __int64 v7; // x4
  __int64 v8; // x3
  unsigned int v10; // w0
  unsigned int v11; // w1
  unsigned __int64 v12; // x1
  unsigned __int64 v13; // x21
  unsigned __int64 v14; // x3
  __int64 v16; // x26
  __int64 v17; // x0
  __int64 v18; // x4
  __int64 v19; // x27
  __int64 v20; // x20
  char *v21; // x21
  __int64 v22; // x20
  unsigned __int64 v23; // x1
  __int64 v24; // x3
  char *v25; // x0
  __int64 v26; // x27
  __int64 v27; // x26
  char *v28; // x1
  char *v29; // x0
  unsigned __int64 v30; // [xsp+58h] [xbp-A8h] BYREF
  unsigned __int64 v31; // [xsp+60h] [xbp-A0h] BYREF
  __int64 v32; // [xsp+68h] [xbp-98h] BYREF
  __int64 v33; // [xsp+80h] [xbp-80h]
  __int64 v34; // [xsp+88h] [xbp-78h]
  __int64 v35; // [xsp+A0h] [xbp-60h]
  __int64 (__fastcall **v36)(); // [xsp+A8h] [xbp-58h] BYREF
  __int64 v37; // [xsp+B0h] [xbp-50h]
  __int64 v38; // [xsp+B8h] [xbp-48h]
  unsigned __int64 v39; // [xsp+C0h] [xbp-40h]
  unsigned __int64 v40; // [xsp+C8h] [xbp-38h]
  void *ptr; // [xsp+D0h] [xbp-30h] BYREF
  unsigned __int64 v42; // [xsp+D8h] [xbp-28h]
  unsigned __int64 v43; // [xsp+E0h] [xbp-20h]
  unsigned __int64 v44; // [xsp+E8h] [xbp-18h]
  __int64 i; // [xsp+F0h] [xbp-10h]

  v4 = a3[2];
  if ( !v4 )
    return 0;
  v7 = *a3;
  v8 = *(int *)(a1 + 400);
  HIDWORD(v32) = 6;
  v33 = v7;
  v34 = v4;
  v35 = v8;
  sub_42A3D0(a1, &v30, &v31, &v32, (__int64)"Dynamic info size");
  if ( !v30 )
    return 0;
  v36 = off_519C08;
  v37 = a1;
  v38 = v33;
  v39 = v30;
  v10 = 0;
  v40 = v31;
  ptr = nullptr;
  v11 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  for ( i = 0; ; v11 = HIDWORD(i) )
  {
    if ( v11 > v10 )
      goto LABEL_25;
    v12 = v44;
    v13 = v39 - v44;
    if ( v39 == v44 )
      goto LABEL_23;
    v14 = v42;
    if ( v13 > v42 )
    {
      v29 = (char *)ptr;
      if ( v13 > v43 )
      {
        v29 = (char *)sub_491288((__int64)&ptr, ptr, v39 - v44, 0x10u);
        v14 = v42;
        ptr = v29;
      }
      memset(&v29[16 * v14], 0, 16 * (v13 - v14));
      v12 = v44;
      v42 = v13;
    }
    else if ( v13 < v42 )
    {
      v42 = v39 - v44;
    }
    LODWORD(i) = 0;
    if ( !v40 || v12 == 0 )
    {
      if ( !v40 )
        goto LABEL_17;
    }
    else if ( !is_mul_ok(v12, v40) )
    {
      goto LABEL_30;
    }
    if ( !is_mul_ok(v13, v40) )
      goto LABEL_30;
LABEL_17:
    v16 = v37;
    v17 = sub_48C428(*(_QWORD *)(v37 + 472), 0, 1);
    v18 = *(_QWORD *)(v16 + 480);
    v19 = v17 - v18;
    if ( sub_48C428(*(_QWORD *)(v16 + 472), v38 + v44 * v40 + v18, 0) == -1 )
      break;
    v20 = 0;
    do
    {
      if ( !sub_4265B0((__int64)&v36, (_QWORD *)ptr + 2 * v20) )
        break;
      ++v20;
    }
    while ( v13 != v20 );
    sub_48C428(*(_QWORD *)(v16 + 472), v19 + *(_QWORD *)(v16 + 480), 0);
    HIDWORD(i) = v20;
    if ( !(_DWORD)v20 )
      goto LABEL_23;
    v10 = i;
    v44 += (unsigned int)v20;
    if ( (unsigned int)v20 <= (unsigned int)i )
      goto LABEL_23;
LABEL_25:
    v21 = (char *)ptr;
    v22 = 16LL * v10;
    v24 = *(_QWORD *)(a2 + 8);
    v23 = *(_QWORD *)(a2 + 16);
    LODWORD(i) = v10 + 1;
    v25 = *(char **)a2;
    v26 = *(_QWORD *)((char *)ptr + v22);
    v27 = *(_QWORD *)((char *)ptr + v22 + 8);
    if ( v24 + 1 > v23 )
    {
      v25 = (char *)sub_491288(a2, *(void **)a2, v24 + 1, 0x10u);
      v24 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v25;
    }
    v28 = &v25[16 * v24];
    *(_QWORD *)v28 = v26;
    *((_QWORD *)v28 + 1) = v27;
    ++*(_QWORD *)(a2 + 8);
    if ( !*(_QWORD *)&v21[v22] )
      goto LABEL_23;
    v10 = i;
  }
  sub_48C428(*(_QWORD *)(v16 + 472), v19 + *(_QWORD *)(v16 + 480), 0);
LABEL_30:
  HIDWORD(i) = 0;
LABEL_23:
  v36 = off_519C08;
  v5 = 1;
  if ( ptr )
  {
    v42 = 0;
    j__free(ptr);
  }
  return v5;
}
// 42A408: could not find valid save-restore pair for x21
// 42A408: could not find valid save-restore pair for x26
// 42A408: could not find valid save-restore pair for x27
// 519C08: using guessed type __int64 (__fastcall *off_519C08[3])();
