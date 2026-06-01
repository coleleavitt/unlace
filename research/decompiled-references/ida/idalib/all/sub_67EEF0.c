unsigned __int64 __fastcall sub_67EEF0(__int64 a1, char *a2, unsigned __int64 a3)
{
  char v3; // al
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rbp
  char v7; // al
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  char v12; // al
  __int64 v14; // rdx
  char *v15; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v15 = a2;
  v16 = a3;
  v3 = is_cvt64(a1, a2, a3);
  v4 = v16;
  if ( v3 )
  {
    v6 = (unsigned int)unpack_dd(&v15);
    if ( v6 == 0xFFFFFFFFLL )
      v6 = -1;
  }
  else
  {
    v6 = unpack_dq(&v15);
  }
  *(_QWORD *)a1 = v6;
  v7 = is_cvt64(&v15, v4, v5);
  v8 = v16;
  if ( v7 )
  {
    v9 = (unsigned int)v6 + (unsigned int)unpack_dd(&v15);
    v10 = -1;
    if ( v9 == 0xFFFFFFFFLL )
      v9 = -1;
  }
  else
  {
    v9 = v6 + unpack_dq(&v15);
  }
  *(_QWORD *)(a1 + 8) = v9;
  if ( (unsigned __int8)is_cvt64(&v15, v8, v10) )
  {
    v14 = (unsigned int)unpack_dd(&v15);
    v11 = v14 - 1;
    if ( v14 == 0xFFFFFFFFLL )
      v11 = -2;
  }
  else
  {
    v11 = unpack_dq(&v15) - 1;
  }
  *(_QWORD *)(a1 + 16) = v11;
  v12 = 0;
  if ( (unsigned __int64)v15 < v16 )
    v12 = *v15;
  *(_BYTE *)(a1 + 24) = v12;
  return v17 - __readfsqword(0x28u);
}
