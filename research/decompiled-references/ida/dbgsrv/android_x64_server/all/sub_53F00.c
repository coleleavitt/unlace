/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53F00
// Address: 0x0000000000053F00

//----- (0000000000053F00) ----------------------------------------------------
char __fastcall sub_53F00(__int64 a1, _QWORD *a2, __int64 *a3, char a4)
{
  int v7; // eax
  int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // ecx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int128 *v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // r15
  char **v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  char *v28; // rax
  int v29; // ebp
  void (__fastcall *v30)(__int64, __int64, __int64, _QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD); // rbx
  __int64 v31; // rax
  __int64 v32; // r9
  __int128 v34; // [rsp+0h] [rbp-98h]
  __int128 v35; // [rsp+10h] [rbp-88h]
  __int128 v36; // [rsp+10h] [rbp-88h]
  __int128 v37; // [rsp+10h] [rbp-88h]
  __int128 v38; // [rsp+20h] [rbp-78h]
  __int128 v39; // [rsp+20h] [rbp-78h]
  __int128 v40; // [rsp+20h] [rbp-78h]
  __int64 (__fastcall **v41)(); // [rsp+40h] [rbp-58h] BYREF
  __int64 v42; // [rsp+48h] [rbp-50h]
  _QWORD *v43; // [rsp+50h] [rbp-48h]
  int v44; // [rsp+58h] [rbp-40h]
  unsigned __int64 v45; // [rsp+60h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  if ( a4 )
  {
    if ( a3[52] <= 0 || !a3[54] )
      goto LABEL_6;
    *((_QWORD *)&v35 + 1) = a3[52];
    *(_QWORD *)&v38 = a3[54];
    v7 = 2;
  }
  else
  {
    v9 = *(unsigned int *)(a1 + 220);
    if ( !*(_DWORD *)(a1 + 220) )
      goto LABEL_21;
    if ( !*(_BYTE *)(a1 + 248) )
      goto LABEL_49;
    if ( *(_QWORD *)(a1 + 120) <= v9 )
      goto LABEL_21;
    v10 = v9 << 6;
    v11 = v10 + *(_QWORD *)(a1 + 112);
    if ( !v11 )
      goto LABEL_21;
    v38 = *(_OWORD *)(v11 + 32);
    v35 = *(_OWORD *)(v11 + 16);
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + v10 + 40);
    if ( v12 != *(_DWORD *)(a1 + 192) || (v7 = 1, !*(_DWORD *)(a1 + 312)) )
    {
      if ( v12 != *(_DWORD *)(a1 + 160) )
        goto LABEL_21;
      v7 = 2;
      if ( *(_DWORD *)(a1 + 296) == *(_DWORD *)(a1 + 312) )
        goto LABEL_21;
    }
  }
  v42 = a1;
  v41 = off_1470E8;
  v43 = a2;
  v44 = v7;
  sub_54440((__int64 *)&v41, *((__int64 *)&v35 + 1), v38);
  if ( a4 )
  {
LABEL_6:
    if ( a3[48] <= 0 || !a3[50] )
      goto LABEL_10;
    *((_QWORD *)&v36 + 1) = a3[48];
    *(_QWORD *)&v39 = a3[50];
    v8 = 2;
    goto LABEL_9;
  }
LABEL_21:
  v13 = *(unsigned int *)(a1 + 216);
  if ( !*(_DWORD *)(a1 + 216) )
    goto LABEL_29;
  if ( !*(_BYTE *)(a1 + 248) )
    goto LABEL_49;
  if ( *(_QWORD *)(a1 + 120) <= v13
    || (v14 = v13 << 6, (v15 = v14 + *(_QWORD *)(a1 + 112)) == 0)
    || ((v39 = *(_OWORD *)(v15 + 32),
         v36 = *(_OWORD *)(v15 + 16),
         v16 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + v14 + 40),
         v16 != *(_DWORD *)(a1 + 192))
     || (v8 = 1, !*(_DWORD *)(a1 + 312)))
    && (v16 != *(_DWORD *)(a1 + 160) || (v8 = 2, *(_DWORD *)(a1 + 296) == *(_DWORD *)(a1 + 312))) )
  {
LABEL_29:
    v17 = *(unsigned int *)(a1 + 224);
    if ( !*(_DWORD *)(a1 + 224) )
      return 1;
    if ( *(_BYTE *)(a1 + 248) )
    {
      if ( *(_QWORD *)(a1 + 120) <= v17 )
        return 1;
      v18 = v17 << 6;
      v19 = (__int128 *)(v18 + *(_QWORD *)(a1 + 112));
      if ( !v19 )
        return 1;
      v40 = v19[2];
      v37 = v19[1];
      v34 = *v19;
      v20 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + v18 + 40);
      if ( (v20 != *(_DWORD *)(a1 + 192) || !*(_DWORD *)(a1 + 312))
        && (v20 != *(_DWORD *)(a1 + 160) || *(_DWORD *)(a1 + 296) == *(_DWORD *)(a1 + 312)) )
      {
        return 1;
      }
      goto LABEL_37;
    }
LABEL_49:
    if ( !(_BYTE)under_debugger )
      interr(20099);
    BUG();
  }
LABEL_9:
  v42 = a1;
  v41 = off_147108;
  v43 = a2;
  v44 = v8;
  sub_54860((__int64 *)&v41, *((__int64 *)&v36 + 1), v39);
  if ( !a4 )
    goto LABEL_29;
LABEL_10:
  if ( a3[56] <= 0 || !a3[58] )
    return 1;
  v34 = 0;
  *(_QWORD *)&v37 = a3[57];
  *((_QWORD *)&v37 + 1) = a3[56];
  *(_QWORD *)&v40 = a3[58];
  DWORD1(v34) = 1879048191;
LABEL_37:
  v21 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
  v22 = *(_QWORD *)(a1 + 480);
  v23 = v21 - v22;
  if ( qlseek(*(_QWORD *)(a1 + 472), *((_QWORD *)&v37 + 1) + v22, 0) != -1 && (unsigned __int64)v40 >= 2 )
  {
    v24 = (char **)(a2 + 6);
    v25 = 0;
    while ( 1 )
    {
      v26 = a2[7];
      v27 = v26 + 1;
      if ( a2[8] >= (unsigned __int64)(v26 + 1) )
      {
        v28 = *v24;
      }
      else
      {
        v28 = (char *)qvector_reserve((__int64)(a2 + 6), *v24, v27, 2u);
        a2[6] = v28;
        v26 = a2[7];
        v27 = v26 + 1;
      }
      a2[7] = v27;
      v29 = lreadbytes(*(_QWORD *)(a1 + 472), &v28[2 * v26], 2, *(_BYTE *)(a1 + 616));
      if ( v29 < 0 )
        break;
      if ( ++v25 >= (unsigned __int64)v40 >> 1 )
        goto LABEL_47;
    }
    v30 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(a1 + 496);
    v31 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v30(a1, 19, 2, v29, v31, v32, v34, *((_QWORD *)&v34 + 1), v37);
  }
LABEL_47:
  qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v23, 0);
  return 1;
}
// 543AD: variable 'v32' is possibly undefined
// 1470E8: using guessed type __int64 (__fastcall *off_1470E8[2])();
// 147108: using guessed type __int64 (__fastcall *off_147108[2])();
// 158B40: using guessed type __int64 under_debugger;
