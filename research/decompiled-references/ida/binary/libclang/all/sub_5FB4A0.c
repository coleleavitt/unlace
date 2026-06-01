__int64 __fastcall sub_5FB4A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // dl
  __int64 v7; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int64 *v14; // [rsp+0h] [rbp-488h] BYREF
  int v15; // [rsp+8h] [rbp-480h]
  __int128 v16; // [rsp+10h] [rbp-478h]
  __int64 v17; // [rsp+20h] [rbp-468h]
  char v18; // [rsp+28h] [rbp-460h]
  int v19; // [rsp+2Ch] [rbp-45Ch]
  void **p_ptr; // [rsp+30h] [rbp-458h]
  void *ptr; // [rsp+40h] [rbp-448h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-440h] BYREF
  _BYTE v23[1072]; // [rsp+58h] [rbp-430h] BYREF

  if ( !a1 )
    return sub_690460();
  v6 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)v6 - 16 <= 0x3E )
  {
    if ( v6 == 16 )
    {
      v14 = *(__int64 **)(a1 + 40);
      sub_C87500(&ptr, &v14);
      goto LABEL_5;
    }
    if ( v6 == 20 )
    {
      v9 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a1 + 40) & 7) != 0 )
        v9 = 0;
      return sub_6904A0(*(_QWORD *)(v9 + 16) + 16LL);
    }
    if ( v6 != 54 )
    {
      p_ptr = &ptr;
      ptr = v23;
      v14 = (__int64 *)&off_49DA340;
      *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3C7E250);
      v16 = 0;
      v15 = 2;
      v18 = 0;
      v19 = 1;
      v17 = 0;
      ((void (__fastcall *)(__int64 **, _QWORD, _QWORD, _QWORD, __int64, __int64))sub_2623850)(&v14, 0, 0, 0, a5, a6);
      sub_77A870(a1, &v14);
      v7 = sub_6905C0(*p_ptr, (size_t)p_ptr[1]);
      v14 = &qword_4A6EA70[2];
      sub_2623770(&v14);
      if ( ptr != v23 )
        free(ptr);
      return v7;
    }
    return sub_690460();
  }
  if ( v6 != 12 )
  {
    if ( v6 == 80 )
    {
      v13 = *(_QWORD *)(a1 + 40);
      if ( v13 )
      {
        sub_C92EC0(&ptr, v13, 0);
LABEL_5:
        v7 = sub_6905C0(ptr, n[0]);
        if ( ptr != &n[1] )
          operator delete(ptr, n[1] + 1);
        return v7;
      }
    }
    return sub_690460();
  }
  v10 = *(_QWORD *)(a1 + 48);
  if ( !v10 )
    return sub_690460();
  v11 = *(_QWORD *)(v10 + 40);
  v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v11 & 7) != 0 )
    v12 = 0;
  return sub_6905C0((void *)(*(_QWORD *)(v12 + 16) + 16LL), **(unsigned int **)(v12 + 16));
}

