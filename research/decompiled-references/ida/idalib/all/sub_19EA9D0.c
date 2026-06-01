__int64 __fastcall sub_19EA9D0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 *v6; // r9
  __int64 v7; // r12
  unsigned __int8 v8; // al
  __int64 v9; // rcx
  void (__fastcall *v10)(__int64, __m128i *, _QWORD *, __int64); // r15
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  _DWORD *v14; // rdx
  __m128i *v15; // rdi
  __int64 v16; // rax
  _BYTE *v17; // rdx
  _QWORD v18[2]; // [rsp+0h] [rbp-88h] BYREF
  __m128i v19; // [rsp+10h] [rbp-78h] BYREF
  __int128 v20; // [rsp+20h] [rbp-68h]
  _DWORD *v21; // [rsp+30h] [rbp-58h]
  char v22; // [rsp+38h] [rbp-50h]
  int v23; // [rsp+3Ch] [rbp-4Ch]
  __int64 v24; // [rsp+40h] [rbp-48h]

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v24 = a1;
  v19.m128i_i64[0] = (__int64)&off_2BEBE68;
  v19.m128i_i32[2] = 0;
  v22 = 0;
  v23 = 1;
  v21 = nullptr;
  v20 = 0;
  sub_227B8B0(&v19, 0, 0, 0);
  v7 = *a2;
  v8 = *(_BYTE *)(*a2 + 28) & 0x7F;
  v9 = (unsigned int)v8 - 34;
  if ( (unsigned int)v9 > 5 )
  {
    if ( v8 == 8 )
    {
      v14 = v21;
      if ( *((_QWORD *)&v20 + 1) - (_QWORD)v21 > 6u )
      {
        *v21 = 1869373992;
        v15 = &v19;
        *((_WORD *)v14 + 2) = 27491;
        *((_BYTE *)v14 + 6) = 32;
        v21 = (_DWORD *)((char *)v21 + 7);
      }
      else
      {
        v15 = (__m128i *)sub_227BF10(&v19, "(block ", 7);
      }
      v16 = sub_227B910(v15, *(unsigned int *)(v7 + 116));
      v17 = *(_BYTE **)(v16 + 32);
      if ( *(_BYTE **)(v16 + 24) == v17 )
      {
        sub_227BF10(v16, ")", 1);
      }
      else
      {
        *v17 = 41;
        ++*(_QWORD *)(v16 + 32);
      }
    }
    else if ( (unsigned int)v8 - 18 <= 0x3F )
    {
      sub_B76F90((_QWORD *)v7, &v19);
    }
  }
  else
  {
    v10 = *(void (__fastcall **)(__int64, __m128i *, _QWORD *, __int64))(*(_QWORD *)v7 + 96LL);
    v11 = sub_16043A0(*(_QWORD **)(a3 + 248), *(_QWORD **)(a3 + 240), v8, v9, v5, v6);
    v18[1] = v12;
    v18[0] = v11;
    v10(v7, &v19, v18, 1);
  }
  v19.m128i_i64[0] = (__int64)&off_2BEBE68;
  sub_227B7A0(&v19);
  return a1;
}
