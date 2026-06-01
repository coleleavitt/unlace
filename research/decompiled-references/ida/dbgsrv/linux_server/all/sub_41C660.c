/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41C660
// Address: 0x000000000041C660

//----- (000000000041C660) ----------------------------------------------------
__int64 __fastcall sub_41C660(
        __int64 a1,
        int a2,
        char a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v11; // r15
  __int64 v12; // rbx
  int v16; // edi
  char *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  int v23; // ecx
  signed int v24; // eax
  signed int v25; // esi
  __int64 v26; // rax
  _BYTE *v27; // rdi
  _QWORD *v28; // rbx
  _DWORD *v29; // rax
  _DWORD *v30; // rdi
  int v31; // ebx
  __int64 v32; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  _QWORD *v36; // rsi
  __int64 v37; // rax
  int v38; // r12d
  _DWORD *v39; // rsi
  char v40; // [rsp-8h] [rbp-98h]
  __int64 v41; // [rsp+10h] [rbp-80h] BYREF
  void *dest; // [rsp+18h] [rbp-78h] BYREF
  __int128 v43; // [rsp+20h] [rbp-70h]
  void *ptr; // [rsp+38h] [rbp-58h] BYREF
  __int128 v45; // [rsp+40h] [rbp-50h]
  unsigned __int64 v46; // [rsp+50h] [rbp-40h]

  v11 = a1 + 1216;
  v12 = *(_QWORD *)(a1 + 1232);
  v46 = __readfsqword(0x28u);
  v43 = 0;
  dest = nullptr;
  ptr = nullptr;
  v45 = 0;
  if ( v12 == a1 + 1216 )
    goto LABEL_26;
  do
  {
    while ( 1 )
    {
      while ( (*(_DWORD *)(v12 + 32) == a2) == a3 )
      {
LABEL_9:
        v12 = std::_Rb_tree_increment(v12);
        if ( v12 == v11 )
          goto LABEL_10;
      }
      if ( !*(_DWORD *)(v12 + 60) && !*(_BYTE *)(v12 + 64) && !*(_BYTE *)(v12 + 65) )
        break;
LABEL_32:
      ++*(_DWORD *)(v12 + 44);
      v12 = std::_Rb_tree_increment(v12);
      if ( v12 == v11 )
        goto LABEL_10;
    }
    if ( !sub_40D760(*(_DWORD *)(v12 + 40), 0x13u) )
    {
      v34 = v43;
      v35 = v12 + 40;
      v41 = v12 + 40;
      v36 = dest;
      if ( *((_QWORD *)&v43 + 1) < (unsigned __int64)(v43 + 1) )
      {
        dest = sub_481540((__int64)&dest, dest, v43 + 1, 8u);
        v36 = dest;
        v35 = v12 + 40;
        v34 = v43;
      }
      v36[v34] = v35;
      *(_QWORD *)&v43 = v43 + 1;
      *(_BYTE *)(v12 + 64) = 1;
      goto LABEL_32;
    }
    v16 = *__errno_location();
    if ( v16 != 3 )
    {
      v17 = strerror(v16);
      sub_411B10(a1, "failed to send SIGSTOP to thread %d: %s\n", *(_DWORD *)(v12 + 40), v17);
      goto LABEL_9;
    }
    v37 = v45;
    v38 = *(_DWORD *)(v12 + 40);
    v39 = ptr;
    if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1) )
    {
      ptr = sub_481540((__int64)&ptr, ptr, v45 + 1, 4u);
      v39 = ptr;
      v37 = v45;
    }
    v39[v37] = v38;
    *(_QWORD *)&v45 = v45 + 1;
    v12 = std::_Rb_tree_increment(v12);
  }
  while ( v12 != v11 );
LABEL_10:
  while ( (_QWORD)v43 )
  {
    while ( 1 )
    {
      v23 = *(unsigned __int8 *)(a1 + 1349);
      LODWORD(v41) = 0;
      v24 = sub_4235B0(a1, (int *)&v41, -1, -v23);
      v18 = v43;
      v25 = v24;
      v26 = v43;
      if ( v25 > 0 )
        break;
LABEL_12:
      if ( !v26 )
        goto LABEL_21;
    }
    v27 = dest;
    v28 = dest;
    if ( !(8LL * (_QWORD)v43) )
    {
LABEL_34:
      sub_412DB0(
        (_QWORD *)a1,
        v25,
        v41,
        (__m128)0LL,
        a5,
        a6,
        a7,
        *(double *)v21.m128_u64,
        *(double *)v22.m128_u64,
        a10,
        a11);
      v26 = v43;
      goto LABEL_12;
    }
    while ( 1 )
    {
      v29 = (_DWORD *)*v28;
      if ( *(_DWORD *)*v28 == v25 )
        break;
      if ( ++v28 == (_QWORD *)((char *)dest + 8 * (_QWORD)v43) )
        goto LABEL_34;
    }
    if ( (_WORD)v41 == 4991 )
    {
      *((_BYTE *)v29 + 24) = 0;
      v29[5] = 1;
    }
    else
    {
      sub_412DB0(
        (_QWORD *)a1,
        v25,
        v41,
        (__m128)0LL,
        a5,
        a6,
        a7,
        *(double *)v21.m128_u64,
        *(double *)v22.m128_u64,
        a10,
        a11);
      v27 = dest;
      v18 = v43;
    }
    memmove(v28, v28 + 1, &v27[8 * v18] - (_BYTE *)v28 - 8);
    *(_QWORD *)&v43 = v43 - 1;
  }
LABEL_21:
  v30 = ptr;
  if ( (_QWORD)v45 )
  {
    v31 = 0;
    v32 = 0;
    do
    {
      sub_41C480(a1, v30[v32], 3, v18, v19, v20, (__m128)0LL, a5, a6, a7, v21, v22, a10, a11, v40);
      ++v31;
      v30 = ptr;
      v32 = v31;
    }
    while ( v31 < (unsigned __int64)v45 );
  }
  if ( v30 )
  {
    *(_QWORD *)&v45 = 0;
    j__free(v30);
  }
LABEL_26:
  if ( dest )
  {
    *(_QWORD *)&v43 = 0;
    j__free(dest);
  }
  return 1;
}
// 41C83B: variable 'v18' is possibly undefined
// 41C83B: variable 'v19' is possibly undefined
// 41C83B: variable 'v20' is possibly undefined
// 41C83B: variable 'v21' is possibly undefined
// 41C83B: variable 'v22' is possibly undefined
// 41C83B: variable 'v40' is possibly undefined
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
