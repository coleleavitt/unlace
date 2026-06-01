unsigned __int64 __fastcall sub_487790(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  unsigned int v5; // eax
  _QWORD *v7; // rdx
  _QWORD *v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rbp
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  __int64 v16; // rsi
  unsigned __int64 *v17; // r9
  __int64 v18; // rdi
  int *v19; // rbp
  int *v20; // rdi
  unsigned __int64 **v21; // rax
  unsigned __int64 **v22; // rsi
  _DWORD *v23; // rsi
  _QWORD v24[5]; // [rsp+0h] [rbp-78h] BYREF
  void *ptr; // [rsp+28h] [rbp-50h]
  __int128 v26; // [rsp+30h] [rbp-48h]
  __int64 v27; // [rsp+40h] [rbp-38h]
  int v28; // [rsp+48h] [rbp-30h]
  unsigned __int64 v29; // [rsp+58h] [rbp-20h]

  v5 = *(_DWORD *)a5;
  v29 = __readfsqword(0x28u);
  if ( a2 != 5 )
  {
    if ( v5 > 0x2F )
    {
      v9 = *(_QWORD **)(a5 + 8);
      *(_QWORD *)(a5 + 8) = v9 + 1;
      if ( *v9 != a1 )
        return v29 - __readfsqword(0x28u);
    }
    else
    {
      v7 = (_QWORD *)(*(_QWORD *)(a5 + 16) + v5);
      *(_DWORD *)a5 = v5 + 8;
      if ( *v7 != a1 )
        return v29 - __readfsqword(0x28u);
    }
    v10 = *(_QWORD *)(a1 + 56);
    v11 = *(_QWORD *)(a1 + 64);
    sub_459560(*(_QWORD *)(v10 + 32), 0, *(_DWORD *)(v10 + 12), *(_DWORD *)(v11 + 12), v10 + 48, v10 + 88);
    v12 = *(void **)(v10 + 48);
    if ( v12 )
    {
      *(_QWORD *)(v10 + 56) = 0;
      qfree(v12);
      *(_QWORD *)(v10 + 48) = 0;
      *(_QWORD *)(v10 + 64) = 0;
    }
    *(_QWORD *)(v10 + 72) = 0;
    v13 = *(void **)(v10 + 88);
    if ( v13 )
    {
      *(_QWORD *)(v10 + 96) = 0;
      qfree(v13);
      *(_QWORD *)(v10 + 88) = 0;
      *(_QWORD *)(v10 + 104) = 0;
    }
    *(_QWORD *)(v10 + 112) = 0;
    sub_459560(
      *(_QWORD *)(v11 + 32),
      0,
      *(_DWORD *)(v11 + 12),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 12LL),
      v11 + 48,
      v11 + 88);
    v14 = *(void **)(v11 + 48);
    if ( v14 )
    {
      *(_QWORD *)(v11 + 56) = 0;
      qfree(v14);
      *(_QWORD *)(v11 + 48) = 0;
      *(_QWORD *)(v11 + 64) = 0;
    }
    v15 = *(void **)(v11 + 88);
    *(_QWORD *)(v11 + 72) = 0;
    if ( v15 )
    {
      *(_QWORD *)(v11 + 96) = 0;
      qfree(v15);
      *(_QWORD *)(v11 + 88) = 0;
      *(_QWORD *)(v11 + 104) = 0;
    }
    *(_QWORD *)(v11 + 112) = 0;
    return v29 - __readfsqword(0x28u);
  }
  if ( v5 > 0x2F )
  {
    v21 = *(unsigned __int64 ***)(a5 + 8);
    v22 = v21 + 1;
    *(_QWORD *)(a5 + 8) = v21 + 1;
    v17 = *v21;
LABEL_22:
    v23 = v22 + 1;
    goto LABEL_23;
  }
  v16 = *(_QWORD *)(a5 + 16);
  *(_DWORD *)a5 = v5 + 8;
  v17 = *(unsigned __int64 **)(v16 + v5);
  if ( v5 + 8 > 0x2F )
  {
    v22 = *(unsigned __int64 ***)(a5 + 8);
    goto LABEL_22;
  }
  v18 = v5 + 16;
  *(_DWORD *)a5 = v18;
  if ( (unsigned int)v18 <= 0x2F )
  {
    *(_DWORD *)a5 = v5 + 24;
    v19 = *(int **)(a1 + 8LL * a3 + 56);
    if ( *(_DWORD *)(v18 + v16) )
      goto LABEL_19;
    return sub_487480(v19, v17, 1);
  }
  v23 = *(_DWORD **)(a5 + 8);
LABEL_23:
  *(_QWORD *)(a5 + 8) = v23 + 2;
  v19 = *(int **)(a1 + 8LL * a3 + 56);
  if ( *v23 )
  {
LABEL_19:
    v20 = *(int **)(a1 + 8LL * a4 + 56);
    v24[1] = 0;
    v24[2] = 0;
    v24[0] = &off_2B2B6A8;
    v24[3] = v19;
    v24[4] = v17;
    ptr = nullptr;
    v27 = 0;
    v28 = -1;
    v26 = 0;
    sub_485770(v20, v17, (__int64)v24);
    rangeset_t_add2((_DWORD)v19 + 48);
    v24[0] = &off_2B2B6A8;
    if ( ptr )
    {
      *(_QWORD *)&v26 = 0;
      qfree(ptr);
    }
    return v29 - __readfsqword(0x28u);
  }
  return sub_487480(v19, v17, 1);
}
