__int64 __fastcall sub_F0AD60(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  char *v9; // rsi
  __int64 v10; // rdi
  _BYTE *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v19[32]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v20; // [rsp+30h] [rbp-28h]

  v9 = *(char **)(a2 + 16);
  if ( v9 )
    sub_F05430(a1, v9, a3, a4, a5, a6, a7);
  else
    sub_F049C0(a1);
  v10 = *a1;
  if ( (*(_BYTE *)(a2 + 24) & 1) != 0 )
  {
    sub_995540(v10, "->");
  }
  else
  {
    v11 = *(_BYTE **)(v10 + 32);
    if ( *(_QWORD *)(v10 + 24) <= (unsigned __int64)v11 )
    {
      sub_227BA10(v10, 46);
    }
    else
    {
      *(_QWORD *)(v10 + 32) = v11 + 1;
      *v11 = 46;
    }
  }
  v12 = *a1;
  if ( *(_QWORD *)(a2 + 32) )
  {
    sub_E90250(*(_QWORD *)(a2 + 32), *a1, (const __m128i *)(a1 + 3), 0, 1);
    v12 = *a1;
  }
  sub_995540(v12, "~");
  v13 = *(_QWORD *)(a2 + 64);
  if ( v13 )
  {
    if ( (v13 & 4) != 0 )
    {
      v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v14 )
        return sub_9954E0(*a1, (const void *)(*(_QWORD *)(v14 + 16) + 16LL), **(unsigned int **)(v14 + 16));
    }
  }
  v16 = sub_C94110(a2);
  v17 = *a1;
  v18 = v16;
  v20 = 257;
  return sub_F74830(&v18, v17, a1 + 3, v19, 0);
}
