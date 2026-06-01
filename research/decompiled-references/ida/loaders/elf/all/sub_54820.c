__int64 __fastcall sub_54820(__int64 a1, __int64 a2, unsigned __int64 a3, _BYTE *a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 v9; // rax
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // r13
  __int64 v17; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-60h] BYREF
  char v20; // [rsp+1Fh] [rbp-49h] BYREF
  double v21[9]; // [rsp+20h] [rbp-48h] BYREF

  v5 = 0;
  v19 = a3;
  *(_QWORD *)&v21[1] = __readfsqword(0x28u);
  v20 = 1;
  v9 = sub_4A4B0(a1, a2, &v20, 0);
  if ( !v9 )
    return v5;
  v21[0] = NAN;
  v10 = (_QWORD *)v9;
  v11 = *(_QWORD **)(a1 + 88);
  v12 = (_QWORD *)(a1 + 80);
  if ( !v11 )
  {
    v13 = (_QWORD *)(a1 + 80);
LABEL_9:
    v16 = sub_546B0((_QWORD *)(a1 + 72), v13, &v19, v21);
    v5 = *v10;
    if ( !v20 )
      v5 = v10[1];
    v17 = 4;
    if ( *(_BYTE *)(a2 + 617) )
      v17 = 8;
    set_segm_end(*v10, *(_QWORD *)(a2 + 456) & (v17 * a5 + v5), 0);
    v16[5] = v5;
    if ( a4 )
      *a4 = 1;
    return v5;
  }
  v13 = (_QWORD *)(a1 + 80);
  do
  {
    while ( 1 )
    {
      v14 = v11[2];
      v15 = v11[3];
      if ( v11[4] < v19 )
        break;
      v13 = v11;
      v11 = (_QWORD *)v11[2];
      if ( !v14 )
        goto LABEL_7;
    }
    v11 = (_QWORD *)v11[3];
  }
  while ( v15 );
LABEL_7:
  if ( v12 == v13 || v19 < v13[4] )
    goto LABEL_9;
  if ( a4 )
    *a4 = 0;
  return v13[5];
}

