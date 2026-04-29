__int64 __fastcall sub_3F8AD0(__int64 a1, unsigned __int8 *a2, unsigned __int8 a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // r15
  int dtype_size; // ebx
  int v8; // r10d
  unsigned __int8 v9; // al
  __int64 v10; // rdx
  char v11; // al
  unsigned int v12; // ebx
  __int16 v14; // ax
  _QWORD v17[2]; // [rsp+20h] [rbp-60h] BYREF
  _DWORD v18[6]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-38h]

  v5 = a3;
  v19 = __readfsqword(0x28u);
  v17[0] = 0xFFFFFFFF00000000LL;
  v17[1] = 0;
  dtype_size = get_dtype_size(a3);
  v8 = dtype_size;
  if ( dtype_size <= 0 )
    goto LABEL_6;
  v9 = a2[1];
  if ( v9 != 7 )
  {
    if ( a3 <= 0x12u && (v10 = 294968, _bittest64(&v10, v5)) )
    {
      v11 = sub_11CDA0((__int64)v17, *(_QWORD *)(a1 + 832), a2 + 8, dtype_size);
      v8 = dtype_size;
      if ( !v11 )
      {
LABEL_6:
        v12 = 0;
        goto LABEL_10;
      }
    }
    else if ( v9 != 2
           || (v14 = *(_WORD *)(a1 + 48),
               v14 != 480 && (unsigned __int16)(v14 - 30) > 1u && (unsigned __int16)(v14 - 113) > 1u)
           && (LOBYTE(v14) = v14 & 0x7F, v14 != 344) )
    {
      sub_120630(
        (__int64)v17,
        *(_QWORD *)(a1 + 800),
        *(_QWORD *)(a1 + 40),
        a2,
        a4,
        dtype_size,
        *(_WORD *)(a1 + 48) == 497,
        -1);
      v8 = dtype_size;
    }
  }
  if ( !LOBYTE(v17[0]) )
    sub_120450((__int64)v17, *(_QWORD *)(a1 + 832), a4, v8, *(_QWORD *)(a1 + 40), *a2);
  v18[0] = 1;
  v18[1] = dtype_size;
  v18[2] = a5;
  sub_3F86E0(a1, 4u, (unsigned __int8 *)v17, nullptr, (__int64)v18);
  v12 = 1;
  sub_11C7E0((__int64)v18);
LABEL_10:
  sub_11C7E0((__int64)v17);
  return v12;
}
