/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60F40
// Address: 0x0000000000060F40

//----- (0000000000060F40) ----------------------------------------------------
__int64 __fastcall sub_60F40(__int64 a1, const char *a2, double a3, __m128 a4)
{
  const char *v4; // r14
  __int64 v6; // r15
  __int64 v7; // rbp
  const char *v8; // rdi
  int v9; // eax
  char v10; // cl
  char v11; // r12
  size_t v12; // rbp
  _BYTE *v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  int v16; // r12d
  unsigned __int64 v17; // r13
  const char *v18; // rdi
  __int64 v19; // rax
  __int64 v21; // [rsp+8h] [rbp-70h]
  __int64 *v22; // [rsp+18h] [rbp-60h]
  _BYTE n[24]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+38h] [rbp-40h]
  unsigned __int64 v25; // [rsp+40h] [rbp-38h]

  v4 = a2;
  v25 = __readfsqword(0x28u);
  sub_61420(a1 + 112, 0);
  LODWORD(v6) = a1 + 136;
  sub_61420(a1 + 136, 0);
  sub_61420(a1 + 160, 0);
  if ( *(_QWORD *)(a1 + 432) )
  {
    n[0] = 2;
    a3 = 0.0;
    *(_OWORD *)&n[8] = 0;
    v24 = 0;
    sub_68BE0(a1 + 424, 0, n, 0.0, a4);
    free_idcv(n, 0.0, a4);
  }
  if ( *(_QWORD *)(a1 + 232) )
  {
    *(_DWORD *)n = 0;
    sub_68E10(a1 + 224, 0, n);
  }
  if ( *(_QWORD *)(a1 + 256) )
  {
    *(_DWORD *)n = 0;
    sub_68E10(a1 + 248, 0, n);
  }
  if ( *(_QWORD *)(a1 + 280) )
  {
    *(_DWORD *)n = 0;
    sub_68E10(a1 + 272, 0, n);
  }
  if ( *(_QWORD *)(a1 + 304) )
  {
    *(_DWORD *)n = 0;
    sub_68E10(a1 + 296, 0, n);
  }
  if ( *(_QWORD *)(a1 + 328) )
  {
    *(_WORD *)n = 0;
    sub_68FB0(a1 + 320, 0, n);
  }
  if ( *(_QWORD *)(a1 + 352) )
  {
    *(_QWORD *)n = 0;
    sub_69160(a1 + 344, 0, n);
  }
  if ( *(_QWORD *)(a1 + 376) )
  {
    a3 = 0.0;
    *(_OWORD *)n = 0;
    sub_69340(a1 + 368, 0, n);
  }
  if ( *(_QWORD *)(a1 + 400) )
  {
    a3 = 0.0;
    *(_OWORD *)n = 0;
    sub_69340(a1 + 392, 0, n);
  }
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 448) = -1;
  if ( !*(_QWORD *)(a1 + 184) )
  {
    v7 = sub_6CC60(*(_QWORD *)(a1 + 104), a2, a3, a4);
    if ( v7 != -1 )
      goto LABEL_55;
    goto LABEL_58;
  }
  sub_37F60((__int64)n, a2);
  v7 = *(_QWORD *)(a1 + 184);
  if ( *(_QWORD *)(v7 + 40) )
    v8 = *(const char **)(v7 + 32);
  else
    v8 = s1;
  v9 = strcmp(v8, a2);
  v10 = *(_BYTE *)(a1 + 220);
  if ( v9 )
  {
    if ( v10 )
    {
      LODWORD(v6) = set_qerrno(0x630u);
      v11 = 0;
      goto LABEL_51;
    }
  }
  else if ( v10 )
  {
    v12 = *(_QWORD *)&n[8] - 1LL;
    if ( !*(_QWORD *)&n[8] )
      v12 = 0;
    v13 = *(_BYTE **)n;
    if ( *(_QWORD *)&n[16] < v12 + 2 )
    {
      v13 = qvector_reserve((__int64)n, *(char **)n, v12 + 2, 1u);
      *(_QWORD *)n = v13;
    }
    *(_QWORD *)&n[8] = v12 + 2;
    v13[v12 + 1] = 0;
    if ( v12 )
      memmove((void *)(*(_QWORD *)n + 1LL), *(const void **)n, v12);
    **(_BYTE **)n = 126;
    *(_DWORD *)(a1 + 216) = 2;
    v7 = *(_QWORD *)(a1 + 184);
  }
  else
  {
    *(_DWORD *)(a1 + 216) = 1;
  }
  v14 = sub_6D9B0(v7, *(_QWORD **)(a1 + 104), (__int64)n, a3, a4);
  v11 = 1;
  if ( v14 == -1 )
  {
    v7 = -1;
  }
  else
  {
    v22 = (__int64 *)(a1 + 136);
    if ( *(_DWORD *)(a1 + 216) == 2 )
      *(_DWORD *)(*(_QWORD *)(a1 + 184) + 64LL) = v14;
    v21 = v14;
    v15 = *(_QWORD *)(a1 + 144);
    if ( !v15 )
      goto LABEL_50;
    v6 = *v22;
    v16 = 1;
    v17 = 0;
    while ( 1 )
    {
      v18 = s1;
      if ( *(_QWORD *)(v6 + 24 * v17 + 8) )
        v18 = *(const char **)(v6 + 24 * v17);
      if ( !strcmp(v18, "this") )
        break;
      v17 = v16++;
      if ( v15 <= v17 )
        goto LABEL_50;
    }
    if ( v17 == -1 )
    {
LABEL_50:
      sub_657D0((__int64)v22, "this");
      v4 = a2;
      v7 = v21;
      v11 = 1;
    }
    else
    {
      v4 = a2;
      v7 = v21;
      v11 = 1;
    }
  }
LABEL_51:
  if ( *(_QWORD *)n )
  {
    *(_QWORD *)&n[8] = 0;
    qfree(*(void **)n);
    *(_QWORD *)n = 0;
    *(_QWORD *)&n[16] = 0;
  }
  if ( v11 )
  {
    if ( v7 != -1 )
    {
LABEL_55:
      v19 = *(_QWORD *)(**(_QWORD **)(a1 + 104) + 8 * v7);
      *(_QWORD *)(a1 + 192) = v19;
      *(_QWORD *)(a1 + 200) = v19 + 32;
      *(_DWORD *)(a1 + 208) = 0;
      *(_BYTE *)(a1 + 212) = -90;
      LODWORD(v6) = 0;
      if ( *(_DWORD *)(v19 + 136) != -1 )
      {
        if ( !(_BYTE)under_debugger )
          interr(484);
        BUG();
      }
      return (unsigned int)v6;
    }
LABEL_58:
    set_error_string(0, v4);
    LODWORD(v6) = set_qerrno(0x28u);
  }
  return (unsigned int)v6;
}
// 158B40: using guessed type __int64 under_debugger;
