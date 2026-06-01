void __fastcall sub_1396130(__int64 a1, unsigned int a2, __int64 a3)
{
  char *v5; // rsi
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-F8h] BYREF
  int v7; // [rsp+8h] [rbp-F0h]
  __int128 v8; // [rsp+10h] [rbp-E8h]
  __int64 v9; // [rsp+20h] [rbp-D8h]
  char v10; // [rsp+28h] [rbp-D0h]
  int v11; // [rsp+2Ch] [rbp-CCh]
  void **p_ptr; // [rsp+30h] [rbp-C8h]
  void *ptr; // [rsp+40h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-B0h]
  _BYTE v15[160]; // [rsp+58h] [rbp-A0h] BYREF

  sub_FC5CB0((_DWORD *)a1, a2);
  ptr = v15;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8090);
  sub_FCA320(a3, &ptr);
  p_ptr = &ptr;
  v7 = 2;
  v10 = 0;
  v11 = 1;
  v9 = 0;
  v8 = 0;
  v6 = &off_2BEBEE0;
  sub_227B8B0(&v6, 0, 0, 0);
  v5 = (char *)*(unsigned int *)(a3 + 8);
  if ( (_DWORD)v5 )
    sub_1361E30(
      *(_QWORD **)(a1 + 32),
      v5,
      *(__int64 (__fastcall ***)())(*(_QWORD *)a3 + 64LL),
      a2,
      (char *)*p_ptr,
      (__int64)p_ptr[1],
      *(void **)(*(_QWORD *)(a3 + 48) + 416LL),
      *(unsigned int *)(*(_QWORD *)(a3 + 48) + 424LL),
      *(int **)(*(_QWORD *)(a3 + 48) + 528LL),
      *(unsigned int *)(*(_QWORD *)(a3 + 48) + 536LL),
      a3 & 0xFFFFFFFFFFFFFFFBLL);
  v6 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v6);
  if ( ptr != v15 )
    free(ptr);
}
