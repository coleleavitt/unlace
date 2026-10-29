__int64 __fastcall sub_155FC30(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  unsigned int v5; // ebp
  __int64 v6; // rcx
  unsigned __int16 v7; // cx
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-68h] BYREF
  char v12; // [rsp+38h] [rbp-60h]
  char v13; // [rsp+39h] [rbp-5Fh]
  __int16 v14; // [rsp+3Ah] [rbp-5Eh]
  int v15; // [rsp+3Ch] [rbp-5Ch]
  __int128 v16; // [rsp+40h] [rbp-58h]
  __int128 v17; // [rsp+50h] [rbp-48h]
  void *ptr[2]; // [rsp+60h] [rbp-38h]
  __int128 v19; // [rsp+70h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v2 + 2944);
  if ( v3 >= *(unsigned int *)(v2 + 2912) )
    v4 = sub_14180A0(v2, 1u);
  else
    v4 = *(_QWORD *)(v2 + 2904) + 24 * v3;
  v5 = 0;
  v6 = *(_QWORD *)(v4 + 16);
  if ( (_WORD)v6 == 72 )
    return v5;
  v7 = v6 - 5;
  v17 = 0;
  *(_OWORD *)ptr = 0;
  v19 = 0;
  v11 = (__int64)off_2BB3CB0;
  LOBYTE(v8) = 0;
  v13 = 1;
  v14 = 257;
  v15 = 0;
  v16 = 0;
  if ( v7 <= 0x3Du )
    v8 = (0x20008000000E0001uLL >> v7) & 1;
  v12 = v8;
  v5 = 0;
  v9 = sub_1802970(*(_QWORD *)(a1 + 96), (__int64)&v11);
  if ( v9 <= 0xA )
  {
    LOBYTE(v5) = ((1LL << v9) & 0x690) != 0;
    if ( !HIDWORD(ptr[1]) )
      return v5;
  }
  else if ( !HIDWORD(ptr[1]) )
  {
    return v5;
  }
  free(ptr[0]);
  return v5;
}
