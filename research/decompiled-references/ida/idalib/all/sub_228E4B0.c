__int64 __fastcall sub_228E4B0(size_t *a1, _QWORD *a2, char a3)
{
  _WORD *v3; // rax
  unsigned int v4; // eax
  void *v5; // rdi
  unsigned int v6; // ebp
  void **p_ptr; // rbx
  std::_V2 *v9; // rdi
  int v10; // edx
  unsigned int v11; // eax
  bool v12; // cf
  __int64 v13; // rax
  __int64 v14; // rbx
  char *v15; // rdx
  _BYTE *v16; // rdi
  signed __int64 v17; // rdx
  __int64 v18; // rcx
  _WORD *v19; // [rsp+0h] [rbp-10C8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-10C0h]
  _WORD v21[68]; // [rsp+18h] [rbp-10B0h] BYREF
  void *ptr; // [rsp+A0h] [rbp-1028h] BYREF
  __m128i v23; // [rsp+A8h] [rbp-1020h]
  _BYTE v24[4112]; // [rsp+B8h] [rbp-1010h] BYREF

  if ( !a3 )
  {
    p_ptr = &ptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v19 = v21;
    v9 = (std::_V2 *)sub_2253CC0(a1, &v19);
    if ( !realpath((const char *)v9, (char *)&ptr) )
    {
      std::_V2::generic_category(v9);
      v6 = *__errno_location();
LABEL_16:
      v5 = v19;
      if ( v19 == v21 )
        return v6;
      goto LABEL_3;
    }
    do
    {
      v10 = *(_DWORD *)p_ptr;
      p_ptr = (void **)((char *)p_ptr + 4);
      v11 = ~v10 & (v10 - 16843009) & 0x80808080;
    }
    while ( !v11 );
    if ( (~v10 & (v10 - 16843009) & 0x8080) == 0 )
    {
      LOBYTE(v11) = (~v10 & (v10 - 16843009) & 0x80808080) >> 16;
      p_ptr = (void **)((char *)p_ptr + 2);
    }
    v12 = __CFADD__((_BYTE)v11, (_BYTE)v11);
    v13 = a2[1];
    v14 = (char *)p_ptr - v12 - 3 - (char *)&ptr;
    if ( (unsigned __int64)(v14 + v13) > a2[2] )
    {
      v9 = (std::_V2 *)a2;
      sub_2236E10((__int64)a2, a2 + 3, v14 + v13, 1);
      v13 = a2[1];
    }
    if ( !v14 )
      goto LABEL_15;
    v15 = (char *)(v13 + *a2);
    if ( (unsigned int)v14 >= 8 )
    {
      v16 = (_BYTE *)((unsigned __int64)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      *(_QWORD *)v15 = ptr;
      *(_QWORD *)&v15[(unsigned int)v14 - 8] = *(_QWORD *)((char *)&v21[64] + (unsigned int)v14);
      v17 = v15 - v16;
      v18 = (unsigned int)(v14 + v17) >> 3;
      qmemcpy(v16, (char *)&ptr - v17, 8 * v18);
      v9 = (std::_V2 *)&v16[8 * v18];
    }
    else
    {
      if ( (v14 & 4) != 0 )
      {
        *(_DWORD *)v15 = (_DWORD)ptr;
        *(_DWORD *)&v15[(unsigned int)v14 - 4] = *(_DWORD *)((char *)&v21[66] + (unsigned int)v14);
        v13 = a2[1];
        goto LABEL_15;
      }
      if ( !(_DWORD)v14 )
      {
LABEL_15:
        a2[1] = v13 + v14;
        v6 = 0;
        std::_V2::system_category(v9);
        goto LABEL_16;
      }
      *v15 = (char)ptr;
      if ( (v14 & 2) != 0 )
      {
        *(_WORD *)&v15[(unsigned int)v14 - 2] = *(_WORD *)((char *)&v21[67] + (unsigned int)v14);
        v13 = a2[1];
        goto LABEL_15;
      }
    }
    v13 = a2[1];
    goto LABEL_15;
  }
  ptr = v24;
  v23 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  sub_22538C0((const char **)a1, (__int64)&ptr);
  sub_228DD70((char **)&ptr);
  v21[4] = 261;
  v3 = ptr;
  a2[1] = 0;
  v19 = v3;
  si128.m128i_i64[0] = v23.m128i_i64[0];
  v4 = sub_228E4B0(&v19, a2, 0);
  v5 = ptr;
  v6 = v4;
  if ( ptr != v24 )
LABEL_3:
    free(v5);
  return v6;
}
