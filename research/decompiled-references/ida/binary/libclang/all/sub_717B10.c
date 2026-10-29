void *__fastcall sub_717B10(_QWORD *a1, void *a2, unsigned __int8 a3)
{
  unsigned int v4; // ebx
  void *v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // eax
  void *result; // rax
  _BYTE *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int16 v13; // cx
  __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r13
  __int64 j; // rbx
  unsigned __int64 v20; // rdx
  __int64 v21; // r14
  char v22; // al
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rax
  _DWORD *v26; // rbx
  _BOOL8 v27; // r13
  unsigned __int8 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rax
  __m128i v31; // xmm0
  unsigned __int16 v32; // [rsp+20h] [rbp-228h]
  void *v33; // [rsp+20h] [rbp-228h]
  void *i; // [rsp+28h] [rbp-220h] BYREF
  bool v35; // [rsp+37h] [rbp-211h] BYREF
  __int64 v36; // [rsp+38h] [rbp-210h] BYREF
  __int64 v37; // [rsp+48h] [rbp-200h]
  __int64 v38; // [rsp+50h] [rbp-1F8h]
  __m128i v39; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 v40; // [rsp+70h] [rbp-1D8h]
  void *ptr; // [rsp+80h] [rbp-1C8h] BYREF
  __int64 v42; // [rsp+88h] [rbp-1C0h]
  char v43; // [rsp+90h] [rbp-1B8h] BYREF

  v4 = a3;
  for ( i = a2; ; i = ptr )
  {
    v5 = (void *)sub_B03CC0(&i, v4);
    v42 = v6;
    ptr = v5;
    if ( !(_BYTE)v6 )
      break;
  }
  v7 = sub_B03960(&i);
  if ( v7 == 6 )
  {
    v26 = (_DWORD *)sub_B03E40(&i);
    sub_B031E0(&ptr, v26);
    sub_717FD0(&v39, a1, &ptr);
    v27 = (*v26 & 0x1FFF8) != 0;
    v28 = sub_B037C0(v26);
    v29 = sub_B037B0(v26);
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29);
    return (void *)sub_6CCD50(a1, (__int64)&v39, v30, v28, v27);
  }
  if ( v7 <= 6 )
  {
    if ( v7 )
      return *(void **)(sub_B03EA0(&i) + 24);
    v9 = (_BYTE *)sub_B03A00(&i, 0);
    if ( (v9[28] & 0x7F) == 0x42 )
      v9 = (_BYTE *)sub_7173A0(a1, (__int64)v9);
    v10 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v9 + 32LL))(v9);
    sub_B03930(&ptr, v10);
    return ptr;
  }
  v11 = sub_B03F50(&i);
  v12 = *(_QWORD *)(v11 + 16);
  v13 = (*(_DWORD *)v11 >> 3) & 0x3FFF;
  v38 = *(_WORD *)(v11 + 2) >> 1;
  v32 = v13;
  v37 = v11 + 24;
  v36 = sub_717B10(a1, v12, 1);
  v35 = v36 != v12;
  sub_718270(&ptr, a1, v37, v38, &v35);
  v18 = *(_QWORD *)(sub_B03A00(&v36, 0) + 56);
  for ( j = (unsigned int)(v42 - 1); (int)j >= 0; --j )
  {
    v21 = *(_QWORD *)(v18 + 8 * j + 24);
    v22 = *(_BYTE *)(v21 + 28) & 0x7F;
    if ( v22 == 65 )
    {
      if ( *(_QWORD *)(v21 + 72) <= 7u )
        break;
      if ( !(_BYTE)qword_4AD2180 && __cxa_guard_acquire(&qword_4AD2180) )
      {
        LODWORD(qword_4AD21A0[0]) = 0;
        qword_4AD21A0[1] = 0;
        qword_4AD21A0[3] = 0;
        __cxa_guard_release(&qword_4AD2180);
      }
      v20 = *(_QWORD *)(v21 + 72);
      if ( v20 <= 7 )
      {
        v14 = qword_4AD21A0;
        goto LABEL_19;
      }
    }
    else if ( v22 == 66 )
    {
      if ( *(_QWORD *)(v21 + 72) <= 7u )
        break;
      if ( !(_BYTE)qword_4AD2108 && __cxa_guard_acquire(&qword_4AD2108) )
      {
        LODWORD(qword_4AD2120[0]) = 0;
        qword_4AD2120[1] = 0;
        qword_4AD2120[3] = 0;
        __cxa_guard_release(&qword_4AD2108);
      }
      v20 = *(_QWORD *)(v21 + 72);
      if ( v20 <= 7 )
      {
        v14 = qword_4AD2120;
        goto LABEL_19;
      }
    }
    else
    {
      if ( *(_QWORD *)(v21 + 72) <= 7u )
        break;
      if ( !(_BYTE)qword_4AD2140 && __cxa_guard_acquire(&qword_4AD2140) )
      {
        LODWORD(qword_4AD2160[0]) = 0;
        qword_4AD2160[1] = 0;
        qword_4AD2160[3] = 0;
        __cxa_guard_release(&qword_4AD2140);
      }
      v20 = *(_QWORD *)(v21 + 72);
      if ( v20 <= 7 )
      {
        v14 = qword_4AD2160;
        goto LABEL_19;
      }
    }
    v23 = v20;
    v14 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
    v24 = v23 & 6;
    if ( v24 == 2 )
    {
      v25 = v14[9];
      if ( !v25 )
        break;
      v14 = (__int64 *)(v14[9] & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v25 & 6) == 4 )
      {
        if ( !v14 )
          break;
LABEL_31:
        v14 = (__int64 *)v14[1];
      }
      if ( !v14 )
        break;
      goto LABEL_19;
    }
    if ( v24 == 4 )
      goto LABEL_31;
LABEL_19:
    sub_717FD0(&v39, a1, v14);
    if ( !(unsigned __int8)sub_AFDE80((char *)ptr + 24 * j, &v39) )
    {
      if ( (_DWORD)v42 - 1 == (_DWORD)j )
        LODWORD(v42) = v42 - 1;
      v35 = 1;
    }
  }
  result = i;
  if ( v35 )
  {
    v39.m128i_i64[1] = (__int64)ptr;
    v39.m128i_i32[0] = v32;
    v40 = (unsigned int)v42;
    v31 = _mm_load_si128(&v39);
    result = (void *)sub_6CCED0(
                       a1,
                       v36,
                       (__int64)v14,
                       v15,
                       v16,
                       v17,
                       v31.m128i_i8[0],
                       v31.m128i_i32[2],
                       (unsigned int)v42);
  }
  if ( ptr != &v43 )
  {
    v33 = result;
    free(ptr);
    return v33;
  }
  return result;
}

