void __fastcall sub_77FFB0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  void (__fastcall *v10)(_QWORD *, __int64, __int64); // r12
  __int64 v11; // rdx
  void *v12; // rdx
  __int64 *v13; // [rsp+0h] [rbp-C8h] BYREF
  int v14; // [rsp+8h] [rbp-C0h]
  __int128 v15; // [rsp+10h] [rbp-B8h]
  __int64 v16; // [rsp+20h] [rbp-A8h]
  char v17; // [rsp+28h] [rbp-A0h]
  int v18; // [rsp+2Ch] [rbp-9Ch]
  void **p_ptr; // [rsp+30h] [rbp-98h]
  void *ptr; // [rsp+40h] [rbp-88h] BYREF
  __m128i si128; // [rsp+48h] [rbp-80h]
  _BYTE v22[112]; // [rsp+58h] [rbp-70h] BYREF

  v4 = a1[2] & 0xFFFFFFFFFFFFFFF8LL;
  if ( (a1[2] & 4) != 0 )
    v4 = *(_QWORD *)v4;
  v5 = *(_BYTE *)(v4 + 8) & 0x7F;
  if ( (unsigned __int8)v5 > 0x10u )
  {
    if ( (((_BYTE)v5 + 96) & 0x7Fu) <= 5 )
      goto LABEL_5;
  }
  else
  {
    v6 = 65922;
    if ( _bittest64(&v6, v5) )
    {
LABEL_5:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 88LL))(a1, a2, a3);
      return;
    }
  }
  sub_77F750((__int64)a1, a2, a3);
  v9 = a1[5];
  if ( v9 > 7 || (_DWORD)v9 )
  {
    v10 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 88LL);
    v11 = sub_798D40(a1) + 17304;
    v10(a1, a2, v11);
  }
  else
  {
    p_ptr = &ptr;
    ptr = v22;
    v13 = (__int64 *)&off_49DA340;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
    v15 = 0;
    v14 = 2;
    v17 = 0;
    v18 = 1;
    v16 = 0;
    sub_2623850(&v13, 0, 0, 0, v7, v8);
    (*(void (__fastcall **)(_QWORD *, __int64 **, __int64))(*a1 + 88LL))(a1, &v13, a3);
    if ( si128.m128i_i64[0] )
    {
      sub_26240F0(a2, ptr, si128.m128i_i64[0]);
    }
    else
    {
      v12 = *(void **)(a2 + 32);
      if ( *(_QWORD *)(a2 + 24) - (_QWORD)v12 <= 0xAu )
      {
        sub_26240F0(a2, "(anonymous)", 11);
      }
      else
      {
        qmemcpy(v12, "(anonymous)", 11);
        *(_QWORD *)(a2 + 32) += 11LL;
      }
    }
    v13 = &qword_4A6EA70[2];
    sub_2623770(&v13);
    if ( ptr != v22 )
      free(ptr);
  }
}

