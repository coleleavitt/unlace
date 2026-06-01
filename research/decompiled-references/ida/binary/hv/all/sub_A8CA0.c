__int64 __fastcall sub_A8CA0(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rax
  int *v6; // rbx
  __int64 v7; // r10
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rbp
  int *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r11
  unsigned int v15; // r13d
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // r13
  int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  int v23; // r14d
  int v24; // ecx
  int *v25; // r10
  int v26; // r13d
  _QWORD v27[7]; // [rsp+Ch] [rbp-3Ch]

  v3 = *a2;
  v4 = a2[1];
  *(_QWORD *)((char *)&v27[1] + 4) = __readfsqword(0x28u);
  v5 = a1[2];
  v6 = (int *)a1[1];
  v7 = (v4 - v3) >> 3;
  v8 = v7 + 1;
  if ( v5 )
    v6 += 4 * a1[2];
  v9 = a1[3] - v5;
  result = -70;
  if ( v9 < v8 )
    return result;
  v11 = a2[3] - a2[2];
  v27[0] = *(_QWORD *)a3;
  LODWORD(v27[1]) = *(_DWORD *)(a3 + 8);
  if ( !v7 )
    goto LABEL_20;
  v12 = v6;
  v13 = 0;
  v14 = 0;
  do
  {
    while ( 1 )
    {
      v16 = *(unsigned __int16 *)(v3 + 8 * v13 + 4);
      v12[1] = v16;
      v17 = *(unsigned __int16 *)(v3 + 8 * v13 + 6);
      v12[3] = 0;
      v12[2] = v17 + 3;
      if ( *((_DWORD *)a2 + 19) == v13 )
      {
        v26 = *((_DWORD *)a2 + 18);
        if ( v26 == 1 )
        {
          v16 = (unsigned int)(v16 + 0x10000);
          v12[1] = v16;
          LODWORD(v18) = *(_DWORD *)(v3 + 8 * v13);
          v19 = (unsigned int)(v18 - 1);
          if ( (unsigned int)v19 > 2 )
          {
LABEL_23:
            v20 = v18 - 3;
            goto LABEL_13;
          }
          v12[3] = v18;
LABEL_28:
          v20 = *((_DWORD *)v27 + v19);
          goto LABEL_13;
        }
        if ( v26 == 2 )
          v12[2] = v17 + 65539;
      }
      v18 = *(unsigned int *)(v3 + 8 * v13);
      v19 = (unsigned int)(v18 - 1);
      if ( (unsigned int)v19 > 2 )
        goto LABEL_23;
      v12[3] = v18;
      if ( (_DWORD)v16 )
        goto LABEL_28;
      v20 = (_DWORD)v18 == 3 ? LODWORD(v27[0]) - 1 : *((_DWORD *)v27 + v18);
LABEL_13:
      *v12 = v20;
      v21 = *(_DWORD *)(v3 + 8 * v13);
      if ( v21 <= 3 )
        break;
      v15 = v27[0];
      LODWORD(v27[0]) = v21 - 3;
      *(_QWORD *)((char *)v27 + 4) = __PAIR64__(HIDWORD(v27[0]), v15);
LABEL_7:
      ++v13;
      v14 += v16;
      v12 += 4;
      if ( v7 == v13 )
        goto LABEL_19;
    }
    v22 = v21 + (*(_WORD *)(v3 + 8 * v13 + 4) == 0) - 1;
    if ( !v22 )
      goto LABEL_7;
    v23 = LODWORD(v27[0]) - 1;
    if ( v22 == 3 || (v23 = *((_DWORD *)v27 + v22), v22 > 1) )
      v24 = HIDWORD(v27[0]);
    else
      v24 = v27[1];
    ++v13;
    LODWORD(v27[1]) = v24;
    v14 += v16;
    v12 += 4;
    v27[0] = __PAIR64__(v27[0], v23);
  }
  while ( v7 != v13 );
LABEL_19:
  LODWORD(v11) = v11 - v14;
LABEL_20:
  result = 0;
  v25 = &v6[4 * v7];
  v25[1] = v11;
  v25[2] = 0;
  *v25 = 0;
  a1[2] += v8;
  return result;
}

