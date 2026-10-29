__int64 __fastcall sub_2F94C0(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r14
  _DWORD *v4; // r15
  _DWORD *v5; // rax
  unsigned int v6; // ebp
  unsigned int v7; // esi
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 i; // rax
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // rdi
  int v14; // r12d
  unsigned int v15; // ebx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64); // rax
  _QWORD *v19; // rbx
  _QWORD *j; // r12
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r13
  void *v28; // r12
  __int64 v29; // rsi
  _BYTE *v30; // rdi
  char *v31; // rcx
  char *v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v35[2]; // [rsp+20h] [rbp-138h] BYREF
  __m128i v36; // [rsp+30h] [rbp-128h] BYREF
  int v37; // [rsp+40h] [rbp-118h]
  __int128 v38; // [rsp+48h] [rbp-110h]
  _QWORD v39[4]; // [rsp+58h] [rbp-100h] BYREF
  char v40[24]; // [rsp+78h] [rbp-E0h] BYREF
  void *ptr; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+98h] [rbp-C0h]
  _BYTE v43[184]; // [rsp+A0h] [rbp-B8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  ptr = v43;
  v42 = 0x1000000000LL;
  v36 = _mm_unpacklo_epi64((__m128i)v2, (__m128i)v2);
  sub_180C5A0(v35, "pb");
  v37 = sub_15DA4C0(v2 + 560, v35);
  v39[0] = 0;
  v39[1] = 0;
  v39[2] = 1;
  v39[3] = 0;
  v38 = 0;
  sub_16744A0(v40, v2);
  v3 = *(_QWORD *)(a1 + 608);
  if ( v3 )
  {
    v4 = (_DWORD *)(v3 + 104LL * *(unsigned int *)(v3 - 4));
    if ( v4 != (_DWORD *)v3 )
    {
      v5 = *(_DWORD **)(a1 + 608);
      do
      {
        if ( *v5 != 2 )
        {
          v6 = 0;
          goto LABEL_23;
        }
        v5 += 26;
      }
      while ( v4 != v5 );
      do
      {
        v35[1] = 0;
        v7 = *(_DWORD *)(a1 + 424);
        v8 = 0;
        v9 = *(_QWORD *)(a1 + 416);
        v35[0] = *(_QWORD *)(v3 + 88);
        v10 = *(_QWORD *)(sub_2EB230(v9, v7, v35) + 16);
        for ( i = *(_QWORD *)(v10 + 32); i; ++v8 )
        {
          if ( v8 >= *(_DWORD *)(i - 4) )
            break;
          sub_2FE6A0(&v36, &ptr, *(_QWORD *)(i + 56LL * v8));
          i = *(_QWORD *)(v10 + 32);
        }
        v3 += 104;
      }
      while ( v4 != (_DWORD *)v3 );
    }
  }
  v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 240LL);
  if ( v12 == sub_2EAF00 )
    v13 = *(_QWORD *)(a1 + 232);
  else
    v13 = v12(a1);
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 232LL))(v13);
  v15 = 0;
  if ( v14 )
  {
    do
    {
      v18 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 240LL);
      if ( v18 == sub_2EAF00 )
        v16 = *(_QWORD *)(a1 + 232);
      else
        v16 = v18(a1);
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 240LL))(v16, v15);
      sub_2FE6A0(&v36, &ptr, v17);
      ++v15;
    }
    while ( v14 != v15 );
  }
  v19 = *(_QWORD **)(a1 + 216);
  if ( v19 )
  {
    for ( j = &v19[*((unsigned int *)v19 - 1)]; j != v19; ++v19 )
      sub_2FE6A0(&v36, &ptr, *v19);
  }
  v6 = 1;
LABEL_23:
  sub_25A130((char *)v39);
  v21 = *((_QWORD *)&v38 + 1);
  if ( *((_QWORD *)&v38 + 1) )
  {
    v22 = *(unsigned int *)(*((_QWORD *)&v38 + 1) - 4LL);
    if ( (_DWORD)v22 )
    {
      v23 = *((_QWORD *)&v38 + 1) + 16 * v22;
      do
      {
        v24 = v21;
        v21 += 16;
        sub_15D0DF0(v24);
      }
      while ( v23 != v21 );
      v21 = *((_QWORD *)&v38 + 1);
    }
    sub_186B220((void *)(v21 - 8));
  }
  v25 = v38;
  if ( (_QWORD)v38 )
  {
    v26 = *(unsigned int *)(v38 - 4);
    if ( (_DWORD)v26 )
    {
      v27 = v38 + 32 * v26;
      do
      {
        v28 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v25);
        v29 = v25 + 16;
        v25 += 32;
        sub_182CBA0(v28, v29);
      }
      while ( v25 != v27 );
      v25 = v38;
    }
    sub_186B220((void *)(v25 - 8));
  }
  v30 = ptr;
  v31 = (char *)ptr + 8 * (unsigned int)v42;
  v32 = (char *)ptr;
  if ( ptr != v31 )
  {
    do
    {
      v33 = *(_QWORD *)v32;
      v32 += 8;
      *(_BYTE *)(v33 + 6) &= ~1u;
    }
    while ( v31 != v32 );
  }
  LODWORD(v42) = 0;
  if ( v30 && v30 != v43 )
    sub_186B220(v30);
  return v6;
}

