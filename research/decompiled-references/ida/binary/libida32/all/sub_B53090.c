void __fastcall sub_B53090(_QWORD *a1, const __m128i *a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int8 v5; // cl
  __int64 v6; // rax
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-C8h] BYREF
  int v8; // [rsp+8h] [rbp-C0h]
  __int128 v9; // [rsp+10h] [rbp-B8h]
  __int64 v10; // [rsp+20h] [rbp-A8h]
  char v11; // [rsp+28h] [rbp-A0h]
  int v12; // [rsp+2Ch] [rbp-9Ch]
  void **p_ptr; // [rsp+30h] [rbp-98h]
  void *ptr; // [rsp+40h] [rbp-88h] BYREF
  __m128i si128; // [rsp+48h] [rbp-80h]
  _BYTE v16[112]; // [rsp+58h] [rbp-70h] BYREF

  v4 = a1[2] & 0xFFFFFFFFFFFFFFF8LL;
  if ( (a1[2] & 4) != 0 )
    v4 = *(_QWORD *)v4;
  v5 = *(_BYTE *)(v4 + 8) & 0x7F;
  if ( v5 <= 0x12u )
  {
    if ( ((1LL << v5) & 0x40182) == 0 )
      goto LABEL_5;
LABEL_9:
    (*(void (__fastcall **)(_QWORD *, const __m128i *, __int64))(*a1 + 88LL))(a1, a2, a3);
    return;
  }
  if ( ((v5 + 94) & 0x7Fu) <= 5 )
    goto LABEL_9;
LABEL_5:
  sub_B52800((__int64)a1, a2, a3);
  if ( a1[5] )
  {
    v6 = sub_B685F0(a1);
    (*(void (__fastcall **)(_QWORD *, const __m128i *, __int64))(*a1 + 88LL))(a1, a2, v6 + 17464);
  }
  else
  {
    v11 = 0;
    ptr = v16;
    p_ptr = &ptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
    v9 = 0;
    v7 = &off_2BC1F40;
    v8 = 2;
    v12 = 1;
    v10 = 0;
    sub_2257B70(&v7, 0, 0, 0);
    (*(void (__fastcall **)(_QWORD *, __int64 (__fastcall ***)(), __int64))(*a1 + 88LL))(a1, &v7, a3);
    if ( si128.m128i_i64[0] )
      sub_22581D0(a2, ptr, si128.m128i_i64[0]);
    else
      sub_971800((__int64)a2, "(anonymous)");
    v7 = (__int64 (__fastcall **)())&unk_2C4C288;
    sub_2257A60(&v7);
    if ( ptr != v16 )
      free(ptr);
  }
}

