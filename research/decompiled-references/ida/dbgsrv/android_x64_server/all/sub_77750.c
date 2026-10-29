/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77750
// Address: 0x0000000000077750

//----- (0000000000077750) ----------------------------------------------------
__int64 __fastcall sub_77750(__int64 a1, _DWORD *a2, int a3, __int64 a4, char *a5, char a6, double a7, __m128 a8)
{
  _QWORD *v12; // rdi
  int v13; // r12d
  __int64 v14; // rcx
  _DWORD *v15; // rax
  unsigned int v16; // ebp
  char **v17; // r12
  __int64 v18; // rcx
  char *v19; // rax
  char *v20; // rdi
  void *v21; // rbp
  __int64 v22; // rcx
  char *v23; // rax
  char *v24; // rdi
  unsigned int v25; // eax
  char v28[8]; // [rsp+10h] [rbp-98h] BYREF
  void *ptr[2]; // [rsp+18h] [rbp-90h]
  __int64 v30; // [rsp+28h] [rbp-80h]
  char v31[8]; // [rsp+30h] [rbp-78h] BYREF
  void *v32[2]; // [rsp+38h] [rbp-70h]
  void *v33; // [rsp+48h] [rbp-60h]
  char v34[8]; // [rsp+50h] [rbp-58h] BYREF
  void *v35; // [rsp+58h] [rbp-50h]
  __int128 v36; // [rsp+60h] [rbp-48h]
  unsigned __int64 v37; // [rsp+70h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  if ( a3 < 0 )
  {
    if ( a3 == -1 || (unsigned __int64)off_154A20 <= -a3 )
      goto LABEL_8;
  }
  else if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) <= (unsigned __int64)a3 )
  {
LABEL_8:
    v16 = 0;
    set_error_string(0, "?");
    set_qerrno(0x58u);
    sub_75F30((_QWORD *)a1, a7, a8);
    return v16;
  }
  v12 = (_QWORD *)(a1 + 72);
  v13 = *(_DWORD *)(a1 + 32);
  v14 = *(_QWORD *)(a1 + 80);
  if ( *(_QWORD *)(a1 + 88) >= (unsigned __int64)(v14 + 1) )
  {
    v15 = (_DWORD *)*v12;
  }
  else
  {
    v15 = qvector_reserve((__int64)v12, *(char **)(a1 + 72), v14 + 1, 4u);
    *(_QWORD *)(a1 + 72) = v15;
    v14 = *(_QWORD *)(a1 + 80);
  }
  v15[v14] = v13;
  ++*(_QWORD *)(a1 + 80);
  v36 = 0;
  v34[0] = 5;
  v35 = a2;
  ++a2[6];
  v17 = (char **)(a1 + 24);
  v18 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 40) >= (unsigned __int64)(v18 + 1) )
  {
    v19 = *v17;
  }
  else
  {
    v19 = (char *)qvector_reserve(a1 + 24, *v17, v18 + 1, 0x20u);
    *(_QWORD *)(a1 + 24) = v19;
    v18 = *(_QWORD *)(a1 + 32);
  }
  v20 = &v19[32 * v18];
  *v20 = 2;
  *(_OWORD *)(v20 + 8) = 0;
  *((_QWORD *)v20 + 3) = 0;
  *((_QWORD *)v20 + 1) = 0;
  ++*(_QWORD *)(a1 + 32);
  move_idcv(v20, v34, 0.0, a8);
  v31[0] = 7;
  *(_OWORD *)v32 = 0;
  v33 = nullptr;
  v21 = *(void **)(a4 + 8);
  if ( v21 )
  {
    v32[0] = qalloc_or_throw(*(_QWORD *)(a4 + 8));
    v33 = v21;
    memcpy(v32[0], *(const void **)a4, (size_t)v21);
    v32[1] = v21;
  }
  v22 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 40) >= (unsigned __int64)(v22 + 1) )
  {
    v23 = *v17;
  }
  else
  {
    v23 = (char *)qvector_reserve(a1 + 24, *v17, v22 + 1, 0x20u);
    *(_QWORD *)(a1 + 24) = v23;
    v22 = *(_QWORD *)(a1 + 32);
  }
  v24 = &v23[32 * v22];
  *v24 = 2;
  *(_OWORD *)(v24 + 8) = 0;
  *((_QWORD *)v24 + 3) = 0;
  *((_QWORD *)v24 + 1) = 0;
  ++*(_QWORD *)(a1 + 32);
  move_idcv(v24, v31, 0.0, a8);
  if ( a6 )
  {
    v25 = sub_77C10((_QWORD *)a1, a5, nullptr, a3, 0.0, a8);
  }
  else
  {
    v28[0] = 2;
    *(_OWORD *)ptr = 0;
    v30 = 0;
    copy_idcv(v28, a5, 0.0, a8);
    sub_688B0(a1 + 24, v28, 0.0, a8);
    if ( v28[0] == 5 )
    {
      sub_72DD0((char **)ptr[0], v28, 0.0, a8);
    }
    else if ( v28[0] == 7 && ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v30 = 0;
    }
    v25 = sub_77C10((_QWORD *)a1, nullptr, nullptr, a3, 0.0, a8);
  }
  v16 = v25;
  if ( v31[0] == 5 )
  {
    sub_72DD0((char **)v32[0], v31, 0.0, a8);
  }
  else if ( v31[0] == 7 && v32[0] )
  {
    v32[1] = nullptr;
    qfree(v32[0]);
    v32[0] = nullptr;
    v33 = nullptr;
  }
  if ( v34[0] == 5 )
  {
    sub_72DD0((char **)v35, v34, 0.0, a8);
  }
  else if ( v34[0] == 7 && v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
    v35 = nullptr;
    *((_QWORD *)&v36 + 1) = 0;
  }
  return v16;
}
// 154A20: using guessed type int *off_154A20;
