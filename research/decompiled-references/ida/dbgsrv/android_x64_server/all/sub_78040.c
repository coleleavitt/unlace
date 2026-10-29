/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78040
// Address: 0x0000000000078040

//----- (0000000000078040) ----------------------------------------------------
__int64 __fastcall sub_78040(_QWORD *a1, char **a2, double a3, __m128 a4)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rcx
  void *v15; // r13
  char *v16; // r14
  char **v17; // rdi
  int v18; // ebp
  __int64 v19; // rcx
  char *v20; // rax
  char **v21; // r15
  __int64 v22; // rcx
  char *v23; // rax
  char *v24; // rdi
  const char *v25; // rsi
  __int64 v26; // rcx
  char *v27; // rax
  char *v28; // rdi
  void *v30[2]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v31; // [rsp+10h] [rbp-88h]
  char v32[8]; // [rsp+20h] [rbp-78h] BYREF
  void *ptr[3]; // [rsp+28h] [rbp-70h] BYREF
  char v34[8]; // [rsp+40h] [rbp-58h] BYREF
  void *v35; // [rsp+48h] [rbp-50h]
  __int128 v36; // [rsp+50h] [rbp-48h]
  unsigned __int64 v37; // [rsp+60h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  *(_OWORD *)v30 = 0;
  v31 = 0;
  v6 = a1[3];
  v7 = 32 * (a1[4] - 1LL);
  if ( !(unsigned int)idcv_string(v7 + v6, 0.0, a4) )
  {
    v30[0] = *(void **)(v6 + v7 + 8);
    v30[1] = *(void **)(v6 + v7 + 16);
    v31 = *(_QWORD *)(v6 + v7 + 24);
    *(_QWORD *)(v6 + v7 + 8) = 0;
    *(_OWORD *)(v6 + v7 + 16) = 0;
    sub_77660((__int64)a1, 0.0, a4);
    v8 = a1[3];
    v9 = 32 * (a1[4] - 1LL);
    if ( *(_BYTE *)(v8 + v9) == 5 )
    {
      v10 = *(_QWORD *)(v8 + v9 + 8);
      if ( v10 )
      {
        LOBYTE(v11) = sub_784D0(a1, v10, (__int64)v30, a2, 0.0, a4);
        v12 = v11;
        goto LABEL_31;
      }
    }
    else
    {
      set_qerrno(0x5FCu);
    }
  }
  v13 = a1[3];
  v14 = 32 * (a1[4] - 1LL);
  if ( *(_BYTE *)(v13 + v14) == 2 && SLODWORD(qword_154A68[2]) > 0 )
  {
    v15 = *(void **)(v13 + v14 + 8);
    v16 = *a2;
    *a2 = nullptr;
    v17 = (char **)(a1 + 9);
    v18 = *((_DWORD *)a1 + 8);
    v19 = a1[10];
    if ( a1[11] >= (unsigned __int64)(v19 + 1) )
    {
      v20 = *v17;
    }
    else
    {
      v20 = (char *)qvector_reserve((__int64)v17, *v17, v19 + 1, 4u);
      a1[9] = v20;
      v19 = a1[10];
    }
    *(_DWORD *)&v20[4 * v19] = v18;
    ++a1[10];
    v34[0] = 2;
    v36 = 0;
    v35 = v15;
    v21 = (char **)(a1 + 3);
    v22 = a1[4];
    if ( a1[5] >= (unsigned __int64)(v22 + 1) )
    {
      v23 = *v21;
    }
    else
    {
      v23 = (char *)qvector_reserve((__int64)(a1 + 3), *v21, v22 + 1, 0x20u);
      a1[3] = v23;
      v22 = a1[4];
    }
    v24 = &v23[32 * v22];
    *v24 = 2;
    *(_OWORD *)(v24 + 8) = 0;
    *((_QWORD *)v24 + 3) = 0;
    *((_QWORD *)v24 + 1) = 0;
    ++a1[4];
    move_idcv(v24, v34, 0.0, a4);
    if ( v30[1] )
      v25 = (const char *)v30[0];
    else
      v25 = s1;
    v32[0] = 7;
    sub_37F60((__int64)ptr, v25);
    v26 = a1[4];
    if ( a1[5] >= (unsigned __int64)(v26 + 1) )
    {
      v27 = *v21;
    }
    else
    {
      v27 = (char *)qvector_reserve((__int64)(a1 + 3), *v21, v26 + 1, 0x20u);
      a1[3] = v27;
      v26 = a1[4];
    }
    v28 = &v27[32 * v26];
    *v28 = 2;
    *(_OWORD *)(v28 + 8) = 0;
    *((_QWORD *)v28 + 3) = 0;
    *((_QWORD *)v28 + 1) = 0;
    ++a1[4];
    move_idcv(v28, v32, 0.0, a4);
    v12 = sub_77C10(a1, v16, nullptr, -LODWORD(qword_154A68[2]), 0.0, a4);
    if ( v32[0] == 5 )
    {
      sub_72DD0((char **)ptr[0], v32, 0.0, a4);
    }
    else if ( v32[0] == 7 && ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      ptr[2] = nullptr;
    }
    if ( v34[0] == 5 )
    {
      sub_72DD0((char **)v35, v34, 0.0, a4);
    }
    else if ( v34[0] == 7 && v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree(v35);
      v35 = nullptr;
      *((_QWORD *)&v36 + 1) = 0;
    }
  }
  else
  {
    sub_75F30(a1, 0.0, a4);
    v12 = 0;
  }
LABEL_31:
  if ( v30[0] )
  {
    v30[1] = nullptr;
    qfree(v30[0]);
    v30[0] = nullptr;
    v31 = 0;
  }
  return v12;
}
// 780F5: variable 'v11' is possibly undefined
// 154A68: using guessed type __int64 qword_154A68[3];
