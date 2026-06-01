__int64 __fastcall sub_5787F0(__int64 a1)
{
  _QWORD *exception; // rdi
  char v2; // dl
  _BYTE *v3; // rax
  unsigned int v4; // r12d
  __int64 v5; // rsi
  int v7; // [rsp+4h] [rbp-6Ch] BYREF
  void *v8; // [rsp+8h] [rbp-68h] BYREF
  __int128 v9; // [rsp+10h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-50h]
  __int128 v11; // [rsp+28h] [rbp-48h]
  __int64 v12; // [rsp+38h] [rbp-38h]
  int v13; // [rsp+40h] [rbp-30h]
  char v14; // [rsp+44h] [rbp-2Ch]
  unsigned __int64 v15; // [rsp+50h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v13 = 0;
  v8 = nullptr;
  ptr = nullptr;
  v12 = 0;
  v14 = 1;
  v9 = 0;
  v11 = 0;
  qlseek(a1, 0, 0);
  if ( !(unsigned __int8)sub_5786D0((__int64 *)&v8, a1)
    || BYTE2(v13) != 0xF0 && BYTE2(v13) != 0xF3 && BYTE2(v13) != 0xA4 )
  {
    goto LABEL_16;
  }
  if ( HIBYTE(v13) )
  {
    v2 = v13 + BYTE1(v13) + BYTE2(v13);
    if ( (_QWORD)v9 )
    {
      v3 = v8;
      do
        v2 += *v3++;
      while ( v3 != (char *)v8 + (_QWORD)v9 );
    }
    if ( v2 + HIBYTE(v13) )
      goto LABEL_16;
  }
  v4 = sub_5786D0((__int64 *)&v8, a1);
  if ( !(_BYTE)v4 || !BYTE2(v13) || !(_WORD)v13 )
    goto LABEL_16;
  if ( BYTE2(v13) == 0xF3 )
  {
    v12 = 1;
    if ( (unsigned __int64)v9 <= 4 )
    {
      if ( !v14 )
        sub_375320((__int64)"Too short OMF record");
      exception = __cxa_allocate_exception(8u);
      *exception = &off_2BD1280;
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_5767E0);
    }
    v5 = *(unsigned int *)((char *)v8 + 1);
    v12 = 5;
    qlseek(a1, v5, 1);
    v7 = 0;
    if ( qlread(a1, &v7, 4) != 4 || !v7 )
LABEL_16:
      v4 = 0;
  }
  if ( ptr )
  {
    *(_QWORD *)&v11 = 0;
    qfree(ptr);
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  return v4;
}

