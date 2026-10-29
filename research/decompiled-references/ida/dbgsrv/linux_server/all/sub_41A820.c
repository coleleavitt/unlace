/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A820
// Address: 0x000000000041A820

//----- (000000000041A820) ----------------------------------------------------
__int64 __fastcall sub_41A820(__int64 *a1, unsigned __int64 a2, char *a3)
{
  __int64 *v4; // rax
  void **v5; // rbx
  __int64 v6; // r13
  char *v7; // rax
  unsigned __int64 v9; // r13
  void *v10; // rsi
  _QWORD *v11; // rbx
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rdx
  void *v14; // rsi
  unsigned __int64 *v15; // r15
  __int64 v16; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  size_t v22; // rax
  size_t v23; // r13
  void *v25; // rdi
  unsigned __int64 v26; // r14
  void *v27; // rax
  void *v28; // rax
  void *v29; // rax
  unsigned __int64 v30; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 *v31[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = (__int64 *)a1[3];
  v5 = (void **)a1[4];
  v30 = a2;
  v6 = *v4;
  v7 = (char *)v5[1];
  v31[1] = (unsigned __int64 *)__readfsqword(0x28u);
  v9 = a2 + v6;
  v30 = v9;
  v10 = *v5;
  if ( v5[2] < v7 + 1 )
  {
    v28 = sub_481540((__int64)v5, v10, (unsigned __int64)(v7 + 1), 8u);
    *v5 = v28;
    v10 = v28;
    v7 = (char *)v5[1];
  }
  *((_QWORD *)v10 + (_QWORD)v7) = v9;
  v5[1] = (char *)v5[1] + 1;
  v11 = (_QWORD *)a1[4];
  v12 = (unsigned __int64 *)sub_481490(a3);
  v13 = v11[5];
  v14 = (void *)v11[3];
  v31[0] = v12;
  v15 = v12;
  v16 = v11[4];
  if ( v13 < v16 + 1 )
  {
    v27 = sub_481540((__int64)(v11 + 3), v14, v16 + 1, 8u);
    v11[3] = v27;
    v14 = v27;
    v16 = v11[4];
  }
  *((_QWORD *)v14 + v16) = v15;
  ++v11[4];
  v17 = (_QWORD *)a1[3];
  v18 = (_QWORD *)v17[10];
  if ( !v18 )
  {
    v19 = v17 + 9;
LABEL_19:
    v31[0] = &v30;
    v19 = sub_41A6A0(v17 + 8, v19, (__int64)byte_48F2E3, v31);
    goto LABEL_12;
  }
  v19 = v17 + 9;
  do
  {
    while ( 1 )
    {
      v20 = v18[2];
      v21 = v18[3];
      if ( v18[4] < v30 )
        break;
      v19 = v18;
      v18 = (_QWORD *)v18[2];
      if ( !v20 )
        goto LABEL_10;
    }
    v18 = (_QWORD *)v18[3];
  }
  while ( v21 );
LABEL_10:
  if ( v19 == v17 + 9 || v30 < v19[4] )
    goto LABEL_19;
LABEL_12:
  if ( a3 && (v22 = strlen(a3), (v23 = v22) != 0) )
  {
    v25 = (void *)v19[5];
    v26 = v22 + 1;
    if ( v19[7] < v22 + 1 )
    {
      v29 = sub_481540((__int64)(v19 + 5), (void *)v19[5], v26, 1u);
      v19[5] = v29;
      v25 = v29;
    }
    v19[6] = v26;
    memmove(v25, a3, v23);
    *(_BYTE *)(v19[5] + v23) = 0;
  }
  else
  {
    v19[6] = 0;
  }
  if ( __ROR8__(0xD288CE703AFB7E91LL * *(_QWORD *)(a1[4] + 8), 4) <= 0x68DB8BAC710CBuLL )
    sub_411B10(a1[2], "");
  return 0;
}
