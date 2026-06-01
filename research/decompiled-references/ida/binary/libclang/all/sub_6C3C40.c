__int64 __fastcall sub_6C3C40(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebp
  __int64 *v9; // [rsp+0h] [rbp-188h] BYREF
  int v10; // [rsp+8h] [rbp-180h]
  __int128 v11; // [rsp+10h] [rbp-178h]
  __int64 v12; // [rsp+20h] [rbp-168h]
  char v13; // [rsp+28h] [rbp-160h]
  int v14; // [rsp+2Ch] [rbp-15Ch]
  void **p_ptr; // [rsp+30h] [rbp-158h]
  void *ptr; // [rsp+40h] [rbp-148h] BYREF
  __m128i si128; // [rsp+48h] [rbp-140h]
  _BYTE v18[304]; // [rsp+58h] [rbp-130h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 2152) + 8LL);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 17288) + 340LL) > 9u )
    v4 = sub_A633A0(a1, v3, 0);
  else
    v4 = sub_A37140(a1, v3, 0);
  p_ptr = &ptr;
  ptr = v18;
  v9 = (__int64 *)&off_49DA340;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E210);
  v11 = 0;
  v10 = 2;
  v13 = 0;
  v14 = 1;
  v12 = 0;
  sub_2623850(&v9, 0, 0, 0, v5, v6);
  (*(void (__fastcall **)(__int64, __int64, __int64 **))(*(_QWORD *)v4 + 104LL))(v4, a2, &v9);
  v7 = sub_25D5270(ptr, si128.m128i_i64[0]);
  v9 = &qword_4A6EA70[2];
  sub_2623770(&v9);
  if ( ptr != v18 )
    free(ptr);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v7;
}

