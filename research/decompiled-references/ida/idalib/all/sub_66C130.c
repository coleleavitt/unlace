unsigned __int64 __fastcall sub_66C130(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4, char a5)
{
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v13; // rdx
  char *v14; // rsi
  char v15; // [rsp+18h] [rbp-88h]
  __int16 v16; // [rsp+2Ch] [rbp-74h] BYREF
  char v17; // [rsp+2Eh] [rbp-72h]
  void *v18; // [rsp+30h] [rbp-70h] BYREF
  __int128 v19; // [rsp+38h] [rbp-68h]
  void *ptr; // [rsp+50h] [rbp-50h] BYREF
  __int128 v21; // [rsp+58h] [rbp-48h]
  unsigned __int64 v22; // [rsp+68h] [rbp-38h]

  v7 = a4[2];
  v8 = a4[8];
  v22 = __readfsqword(0x28u);
  v18 = nullptr;
  v19 = 0;
  if ( !v7 && (v8 & 0x100) != 0 )
  {
    get_tinfo_pdata(&v18, v8, 0);
    v8 = a4[8];
  }
  v10 = *a4;
  v11 = a4[1];
  ptr = nullptr;
  v21 = 0;
  v15 = v10;
  if ( (v8 & 0xF) == 0xE )
  {
    v17 = 0;
    v16 = 0;
    if ( (unsigned __int8)get_tinfo_details(v8, 14, &v16) )
    {
      sub_35A790((char **)&ptr);
      v13 = a4[1];
      if ( a5 )
      {
        if ( v13 != HIBYTE(v16) )
          sub_35A910((__int64 *)&ptr);
      }
      else if ( v13 != HIBYTE(v16) )
      {
        if ( !under_debugger )
          interr(870);
        goto LABEL_32;
      }
    }
    else
    {
      v14 = (char *)ptr;
      if ( *((_QWORD *)&v21 + 1) <= 0x17u )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, 24, 1);
        v14 = (char *)ptr;
      }
      *(_QWORD *)&v21 = 24;
      *(__m128i *)v14 = _mm_load_si128((const __m128i *)&xmmword_23A7E70);
      *(_QWORD *)(v14 + 15) = 0x6570797420646C65LL;
      *((_BYTE *)ptr + 23) = 0;
    }
    sub_35A910(a1);
  }
  else
  {
    sub_35A910(a1);
    print_tinfo((unsigned int)&ptr, 0, 0, 0, 8, (_DWORD)a4 + 64, 0, 0);
    if ( !a5 )
    {
      if ( (v15 & 7) != 0 )
      {
        if ( !under_debugger )
          interr(815);
      }
      else
      {
        if ( (v11 & 7) == 0 )
          goto LABEL_6;
        if ( !under_debugger )
          interr(816);
      }
LABEL_32:
      BUG();
    }
    if ( (v15 & 7) != 0 )
      sub_35A910((__int64 *)&ptr);
    if ( (v11 & 7) != 0 )
      sub_35A910((__int64 *)&ptr);
  }
LABEL_6:
  sub_35A910(a1);
  if ( ptr )
  {
    *(_QWORD *)&v21 = 0;
    qfree(ptr);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  return v22 - __readfsqword(0x28u);
}
