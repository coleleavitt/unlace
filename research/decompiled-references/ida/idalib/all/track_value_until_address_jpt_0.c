__int64 __fastcall track_value_until_address_jpt_0(unsigned __int16 *a1, __m128i *a2, __int64 a3)
{
  __m128i *v5; // rax
  __int32 v6; // edx
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebp
  _QWORD *v14; // rbx
  _QWORD *v15; // r12
  void *v16; // rdi
  _QWORD **v17; // rbx
  void *v18; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 (*v22)(); // rax
  __int64 (__fastcall *v23)(unsigned __int16 *, void **); // rax
  _DWORD *v24; // rax
  const __m128i *v25; // roff
  void *v26; // [rsp+0h] [rbp-298h]
  void *ptr; // [rsp+10h] [rbp-288h] BYREF
  __int128 v28; // [rsp+18h] [rbp-280h]
  __int64 v29[3]; // [rsp+30h] [rbp-268h] BYREF
  char v30; // [rsp+48h] [rbp-250h]
  int v31; // [rsp+4Ch] [rbp-24Ch]
  __int128 v32; // [rsp+50h] [rbp-248h]
  __int64 v33; // [rsp+60h] [rbp-238h]
  __int64 v34; // [rsp+68h] [rbp-230h]
  int v35; // [rsp+70h] [rbp-228h]
  int v36; // [rsp+80h] [rbp-218h] BYREF
  void *v37; // [rsp+88h] [rbp-210h]
  int *v38; // [rsp+90h] [rbp-208h]
  int *v39; // [rsp+98h] [rbp-200h]
  __int64 v40; // [rsp+A0h] [rbp-1F8h]
  int v41; // [rsp+B0h] [rbp-1E8h] BYREF
  void *v42; // [rsp+B8h] [rbp-1E0h]
  int *v43; // [rsp+C0h] [rbp-1D8h]
  int *v44; // [rsp+C8h] [rbp-1D0h]
  __int64 v45; // [rsp+D0h] [rbp-1C8h]
  _BYTE *v46; // [rsp+D8h] [rbp-1C0h]
  __int64 *v47; // [rsp+E0h] [rbp-1B8h]
  _BYTE v48[360]; // [rsp+F0h] [rbp-1A8h] BYREF
  unsigned __int64 v49; // [rsp+258h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  if ( *((_QWORD *)a1 + 4) == a3 )
    return 1;
  ptr = nullptr;
  v28 = 0;
  sub_44A340((__int64)&ptr, 1u);
  v5 = (__m128i *)ptr;
  v26 = a1 + 8;
  *(__m128i *)ptr = _mm_loadu_si128(a2);
  v5[1] = _mm_loadu_si128(a2 + 1);
  v6 = a2[2].m128i_i32[0];
  v29[1] = (__int64)&ptr;
  v5[2].m128i_i32[0] = v6;
  qmemcpy(v48, a1 + 8, sizeof(v48));
  v7 = *((_QWORD *)a1 + 4);
  v29[2] = (__int64)a1;
  v38 = &v36;
  v39 = &v36;
  v29[0] = v7;
  v30 = 0;
  v31 = 200;
  v33 = v7;
  v34 = -1;
  v35 = 0;
  v36 = 0;
  v37 = nullptr;
  v40 = 0;
  v41 = 0;
  v42 = nullptr;
  v43 = &v41;
  v44 = &v41;
  v45 = 0;
  v32 = 0;
  *(_QWORD *)&v32 = get_func(v7);
  if ( !(_QWORD)v32 )
  {
    *((_QWORD *)&v32 + 1) = getseg(v33);
    if ( !*((_QWORD *)&v32 + 1) )
    {
      if ( !under_debugger )
        interr(10183);
      BUG();
    }
  }
  v46 = (char *)a1 + 793;
  v47 = (__int64 *)(a1 + 400);
  while ( 1 )
  {
    v8 = sub_4514E0(v29);
    if ( *v46 )
    {
      if ( v8 == 21 )
        goto LABEL_8;
      *v46 = 0;
    }
    if ( !v8 )
      goto LABEL_9;
LABEL_8:
    if ( (~((unsigned __int16)get_flags_ex(v29[0], 4) >> 8) & 6) != 0
      || !(unsigned int)decode_insn(v26, v29[0], v9, v10, v11, v12, 0.0) )
    {
      goto LABEL_9;
    }
    v20 = v34;
    if ( v34 == -1 )
      v20 = v29[0];
    *v47 = v20;
    if ( *((_QWORD *)a1 + 4) == a3 )
      break;
    v21 = *(_QWORD *)a1;
    v22 = *(__int64 (**)())(*(_QWORD *)a1 + 16LL);
    if ( v22 == sub_449F10 )
    {
LABEL_24:
      v23 = *(__int64 (__fastcall **)(unsigned __int16 *, void **))(v21 + 24);
      if ( (char *)v23 == (char *)j__check_spoiled_jpt )
        check_spoiled_jpt(a1, &ptr);
      else
        v23(a1, &ptr);
      if ( !*((_BYTE *)ptr + 1) )
      {
LABEL_9:
        v13 = 0;
        goto LABEL_10;
      }
    }
    else if ( !((unsigned __int8 (__fastcall *)(unsigned __int16 *, void **))v22)(a1, &ptr) )
    {
      v21 = *(_QWORD *)a1;
      goto LABEL_24;
    }
  }
  v24 = ptr;
  v13 = 1;
  v25 = (const __m128i *)ptr;
  *a2 = _mm_loadu_si128((const __m128i *)ptr);
  a2[1] = _mm_loadu_si128(v25 + 1);
  a2[2].m128i_i32[0] = v24[8];
LABEL_10:
  qmemcpy(v26, v48, 0x168u);
  v14 = v42;
  if ( v42 )
  {
    do
    {
      v15 = v14;
      sub_44AE10((_QWORD *)v14[3]);
      v16 = (void *)v14[5];
      v14 = (_QWORD *)v14[2];
      if ( v16 )
      {
        v15[6] = 0;
        qfree(v16);
      }
      operator delete(v15, 0x48u);
    }
    while ( v14 );
  }
  v17 = (_QWORD **)v37;
  if ( v37 )
  {
    do
    {
      sub_44A540(v17[3]);
      v18 = v17;
      v17 = (_QWORD **)v17[2];
      operator delete(v18, 0x30u);
    }
    while ( v17 );
  }
  if ( ptr )
  {
    *(_QWORD *)&v28 = 0;
    qfree(ptr);
  }
  return v13;
}
