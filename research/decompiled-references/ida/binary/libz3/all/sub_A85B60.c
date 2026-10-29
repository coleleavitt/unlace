__int64 __fastcall sub_A85B60(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 v4; // r12
  char v5; // r8
  _BYTE *v6; // rax
  int v7; // r9d
  unsigned __int8 v8; // r13
  __int64 v9; // rcx
  char *v10; // r15
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdi
  __m128i v15; // kr00_16
  __int64 v16; // r13
  int v17; // eax
  __int64 v18; // rax
  unsigned int *v19; // r15
  __int64 v20; // rdi
  bool v21; // zf
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v24; // edx
  unsigned int v25; // ebx
  _DWORD *v27; // rax
  char *v28; // rax
  unsigned int *v29; // rcx
  unsigned int *v30; // rax
  char *v31; // rdi
  __int64 v32; // [rsp+8h] [rbp-98h]
  __int64 v33; // [rsp+18h] [rbp-88h]
  __int64 v34; // [rsp+20h] [rbp-80h]
  char v35; // [rsp+28h] [rbp-78h]
  char *v36; // [rsp+28h] [rbp-78h]
  int v37[2]; // [rsp+28h] [rbp-78h]
  __m128i v38; // [rsp+30h] [rbp-70h] BYREF
  __int64 v39; // [rsp+40h] [rbp-60h] BYREF
  __int64 v40; // [rsp+48h] [rbp-58h]
  void *ptr; // [rsp+50h] [rbp-50h] BYREF
  __int64 v42; // [rsp+58h] [rbp-48h]
  __int64 v43; // [rsp+60h] [rbp-40h]
  __int64 v44; // [rsp+68h] [rbp-38h]

  v3 = (unsigned int)(*(_DWORD *)a2 + 2);
  if ( (unsigned int)v3 > 5 )
  {
    sub_1872CE0("");
    sub_1873130(114, 1996);
  }
  v4 = *(_DWORD *)a2 & 1;
  v5 = byte_18C397F[v3];
  v34 = a1[1];
  if ( !byte_18C3979[v3] )
  {
    v40 = a1[1];
    ptr = nullptr;
    v42 = 0;
    v43 = 1;
    v44 = 0;
    v39 = 0;
    sub_A84BA0(v38.m128i_i64, a1, a2 + 8, a2 + 40, v5, (__int64)&ptr, &v39);
    sub_A72BE0(v39, v40);
    sub_25A130((char *)&ptr);
    v19 = (unsigned int *)v38.m128i_i64[0];
    v22 = *(_DWORD *)(v38.m128i_i64[0] + 8);
    goto LABEL_22;
  }
  v6 = (_BYTE *)sub_186B270(0x180u);
  v6[20] &= 0xFCu;
  v6[36] &= 0xFCu;
  v6[68] &= 0xFCu;
  v6[84] &= 0xFCu;
  v6[116] &= 0xFCu;
  v6[132] &= 0xFCu;
  v6[164] &= 0xFCu;
  v6[180] &= 0xFCu;
  v6[212] &= 0xFCu;
  *(_QWORD *)v6 = 0;
  *((_QWORD *)v6 + 3) = 0;
  *((_QWORD *)v6 + 5) = 0;
  *((_QWORD *)v6 + 6) = 0;
  *((_QWORD *)v6 + 9) = 0;
  *((_QWORD *)v6 + 11) = 0;
  *((_QWORD *)v6 + 12) = 0;
  *((_QWORD *)v6 + 15) = 0;
  *((_QWORD *)v6 + 17) = 0;
  *((_QWORD *)v6 + 18) = 0;
  *((_QWORD *)v6 + 21) = 0;
  *((_QWORD *)v6 + 23) = 0;
  *((_QWORD *)v6 + 24) = 0;
  *((_QWORD *)v6 + 27) = 0;
  v6[228] &= 0xFCu;
  v6[260] &= 0xFCu;
  v6[276] &= 0xFCu;
  v6[308] &= 0xFCu;
  v6[324] &= 0xFCu;
  v6[356] &= 0xFCu;
  v6[372] &= 0xFCu;
  *((_QWORD *)v6 + 29) = 0;
  *((_QWORD *)v6 + 30) = 0;
  *((_QWORD *)v6 + 33) = 0;
  *((_QWORD *)v6 + 35) = 0;
  *((_QWORD *)v6 + 36) = 0;
  *((_QWORD *)v6 + 39) = 0;
  *((_QWORD *)v6 + 41) = 0;
  *((_QWORD *)v6 + 42) = 0;
  *((_QWORD *)v6 + 45) = 0;
  *((_QWORD *)v6 + 47) = 0;
  *((_DWORD *)v6 + 4) = 0;
  *((_DWORD *)v6 + 16) = 0;
  *((_DWORD *)v6 + 28) = 0;
  *((_DWORD *)v6 + 40) = 0;
  *((_DWORD *)v6 + 52) = 0;
  *((_DWORD *)v6 + 64) = 0;
  *((_DWORD *)v6 + 76) = 0;
  *((_DWORD *)v6 + 88) = 0;
  *((_DWORD *)v6 + 8) = 1;
  *((_DWORD *)v6 + 20) = 1;
  *((_DWORD *)v6 + 32) = 1;
  *((_DWORD *)v6 + 44) = 1;
  *((_DWORD *)v6 + 56) = 1;
  *((_DWORD *)v6 + 68) = 1;
  *((_DWORD *)v6 + 80) = 1;
  *((_DWORD *)v6 + 92) = 1;
  ptr = v6;
  v42 = 8;
  LODWORD(v43) = 0;
  sub_A7CA80(a1, a2 + 8, (__int64)&ptr, (__int64)&qword_1C7F280);
  v35 = *(_BYTE *)(a2 + 60);
  v8 = (v35 & 1) == 0;
  if ( (v35 & 1) == 0 )
    v8 = *(_DWORD *)(a2 + 56) == 1;
  v36 = (char *)ptr;
  v9 = 48LL * (unsigned int)v42;
  v10 = (char *)ptr + v9;
  if ( ptr != (char *)ptr + v9 )
  {
    while ( *((_DWORD *)v36 + 1) != 2 )
    {
      v36 += 48;
      if ( v10 == v36 )
        goto LABEL_6;
    }
    if ( v36 != v10 )
    {
LABEL_28:
      v27 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*a1 + 32LL) + 8LL * *((unsigned int *)v36 + 2))) + 24);
      if ( v27 && *v27 == 5 && v27[1] == 1 && (v36[36] & 1) == 0 )
        v8 &= *((_DWORD *)v36 + 8) == 1;
      else
        v8 = 0;
      v28 = v36;
      while ( 1 )
      {
        v28 += 48;
        if ( v10 == v28 )
          break;
        v36 = v28;
        if ( *((_DWORD *)v28 + 1) == 2 )
        {
          if ( v10 != v28 )
            goto LABEL_28;
          break;
        }
      }
    }
  }
LABEL_6:
  sub_A846A0(&v38, (__int64)a1, (__int64 *)&ptr, (__int64)&qword_1C7F2A0, v8, v7);
  v14 = a1[3];
  v15 = v38;
  v32 = a1[1];
  if ( !v14 )
  {
    sub_16669E0(a1 + 2);
    v14 = a1[3];
  }
  v16 = sub_166A700(v14, (int)a2 + 40, v8, v11, v12, v13);
  *(_QWORD *)v37 = a1[1];
  if ( !v16 )
  {
    if ( !v15.m128i_i64[0] )
    {
      v30 = *(unsigned int **)(a1[1] + 856LL);
      v19 = v30;
      if ( v30 )
      {
        v31 = (char *)ptr;
        ++v30[2];
        if ( v31 )
          sub_A73030(v31, v42);
        goto LABEL_20;
      }
      if ( ptr )
        sub_A73030((char *)ptr, v42);
LABEL_50:
      v22 = 0;
      v19 = nullptr;
      goto LABEL_22;
    }
LABEL_10:
    v18 = sub_15E1B70(v37[0]);
    v19 = (unsigned int *)v18;
    if ( v18 )
      ++*(_DWORD *)(v18 + 8);
    sub_B6F780(*(_QWORD *)(*a1 + 16LL));
    v20 = *(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 7488LL);
    v33 = *(_QWORD *)(*a1 + 16LL);
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 48LL))(v20, v19);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v33 + 7488) + 64LL))(*(_QWORD *)(v33 + 7488));
    if ( !v16 )
    {
LABEL_14:
      if ( !v15.m128i_i64[0] )
        goto LABEL_17;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v17 = *(_DWORD *)(v16 + 8);
  *(_DWORD *)(v16 + 8) = v17 + 1;
  if ( v15.m128i_i64[0] != v16 )
    goto LABEL_10;
  v29 = *(unsigned int **)(*(_QWORD *)v37 + 856LL);
  v19 = v29;
  if ( v29 )
  {
    ++v29[2];
LABEL_13:
    v21 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( !v21 )
      goto LABEL_14;
    goto LABEL_52;
  }
  *(_DWORD *)(v15.m128i_i64[0] + 8) = v17;
  if ( !v17 )
  {
LABEL_52:
    sub_15D7BC0(v32, v16);
    goto LABEL_14;
  }
LABEL_15:
  v21 = (*(_DWORD *)(v15.m128i_i64[0] + 8))-- == 1;
  if ( v21 )
    sub_15D7BC0(v15.m128i_i64[1], v15.m128i_i64[0]);
LABEL_17:
  if ( ptr )
    sub_A73030((char *)ptr, v42);
  if ( !v19 )
    goto LABEL_50;
LABEL_20:
  v22 = v19[2];
  if ( !v22 )
  {
    sub_15D7BC0(*(_QWORD *)v37, v19);
    v22 = v19[2];
  }
LABEL_22:
  v23 = v22 - 1;
  v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 8832LL) + 4LL * *v19);
  v19[2] = v23;
  v25 = v4 + 2 * v24;
  if ( !v23 )
    sub_15D7BC0(v34, v19);
  return v25;
}

