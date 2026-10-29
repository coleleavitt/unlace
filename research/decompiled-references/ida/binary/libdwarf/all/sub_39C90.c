__int64 __fastcall sub_39C90(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        __int16 *a5,
        unsigned __int64 a6,
        unsigned __int16 a7,
        __int64 a8)
{
  __int64 result; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v16; // r10
  __int64 v17; // r10
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int16 v25; // ax
  unsigned __int64 v28; // [rsp+18h] [rbp-80h]
  __int64 v29; // [rsp+20h] [rbp-78h]
  __int64 v30; // [rsp+20h] [rbp-78h]
  __int64 v31; // [rsp+28h] [rbp-70h]
  __int64 v32; // [rsp+30h] [rbp-68h]
  __int64 v33; // [rsp+38h] [rbp-60h]
  _QWORD v34[9]; // [rsp+50h] [rbp-48h] BYREF

  result = 0xFFFFFFFFLL;
  v10 = *(_QWORD *)(a1 + 1528);
  v34[1] = __readfsqword(0x28u);
  if ( a6 < v10 )
  {
    v13 = 2 * a7 + 2;
    if ( v10 < v13 )
    {
LABEL_22:
      _dwarf_error(a1, a8, 194);
      return 1;
    }
    v14 = *(_QWORD *)(a1 + 1520);
    v34[0] = 0;
    if ( __CFADD__(a7, v14 + a6) )
      goto LABEL_16;
    v28 = v10 + v14;
    if ( v10 + v14 >= a7 + v14 + a6 )
    {
      v33 = a7 + v14 + a6;
      v29 = v14 + a6;
      (*(void (__fastcall **)(_QWORD *, unsigned __int64))(a1 + 8296))(v34, v14 + a6);
      v16 = v34[0];
      v34[0] = 0;
      if ( __CFADD__(a7, v33) )
        goto LABEL_16;
      if ( v28 >= (unsigned __int64)a7 + v33 )
      {
        v32 = v16;
        (*(void (__fastcall **)(_QWORD *, __int64))(a1 + 8296))(v34, v33);
        v17 = v32;
        v18 = v34[0];
        v19 = v34[0] | v32;
        if ( !(v34[0] | v32) )
        {
          v24 = v29 + v13 - 2;
          v25 = 0;
          goto LABEL_20;
        }
        v20 = 0xFFFFFFFFLL;
        if ( a7 == 8 )
          v20 = -1;
        if ( v32 == v20 )
        {
          v24 = v29 + v13 - 2;
          v19 = 0;
          v25 = 6;
          goto LABEL_20;
        }
        v21 = 2 * a7;
        LOWORD(v34[0]) = 0;
        v22 = v29 + v21;
        if ( v29 + v13 >= v29 + v21 )
        {
          if ( v28 >= v29 + v13 )
          {
            v31 = v29 + v13;
            v30 = v18;
            (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v34, v22, 2);
            v19 = LOWORD(v34[0]);
            v23 = *(_QWORD *)(a1 + 1528);
            if ( LOWORD(v34[0]) < v23 && v23 >= v13 + LOWORD(v34[0]) + a6 )
            {
              v24 = v31;
              v18 = v30;
              v25 = 7;
              v17 = v32;
LABEL_20:
              *a5 = v25;
              *a3 = v17;
              *a4 = v18;
              *(_WORD *)(a2 + 16) = 1;
              *(_QWORD *)a2 = v19;
              *(_QWORD *)(a2 + 8) = v24;
              *(_QWORD *)(a2 + 24) = v24 - *(_QWORD *)(a1 + 1520);
              return 0;
            }
            goto LABEL_22;
          }
          goto LABEL_21;
        }
LABEL_16:
        _dwarf_error_string(a1, a8, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
        return 1;
      }
    }
LABEL_21:
    _dwarf_error_string(a1, a8, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
    return 1;
  }
  return result;
}

