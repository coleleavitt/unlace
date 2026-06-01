__int64 __fastcall sub_103B340(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // r8
  __int64 result; // rax
  char v11; // di
  char v12; // cl
  int v13; // edx
  bool v14; // zf
  _BOOL4 v15; // edx
  char v16; // dl
  __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+8h] [rbp-30h]
  __int64 v19; // [rsp+10h] [rbp-28h]
  __int64 v20; // [rsp+18h] [rbp-20h]
  char v21; // [rsp+20h] [rbp-18h]
  char v22; // [rsp+21h] [rbp-17h]
  char v23; // [rsp+22h] [rbp-16h]

  v9 = *(unsigned __int8 *)(a1 + 582);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  result = sub_2278960(a2, a3, &v17, a8, v9);
  if ( !(_BYTE)result )
    return result;
  if ( (*(_BYTE *)(a7 + 16) & 2) != 0 )
  {
    if ( v18 != 4 )
      return 0;
    if ( *(_DWORD *)v17 != 1701736302 )
      return 0;
    if ( v22 )
      return 0;
    v12 = v23;
    v11 = 0;
    if ( v23 )
      return 0;
  }
  else
  {
    v11 = v22;
    v12 = v23;
    if ( v18 == 8 )
    {
      v13 = *(_QWORD *)v17 == 0x6661656C2D6E6F6ELL;
      goto LABEL_7;
    }
    if ( v18 == 3 && *(_WORD *)v17 == 27745 )
    {
      v13 = 2;
      if ( *(_BYTE *)(v17 + 2) == 108 )
        goto LABEL_7;
    }
  }
  v13 = 0;
LABEL_7:
  v14 = v20 == 5;
  *(_DWORD *)a6 = v13;
  v15 = 1;
  if ( v14 )
    v15 = *(_DWORD *)v19 != 1701535585 || *(_BYTE *)(v19 + 4) != 121;
  *(_DWORD *)(a6 + 4) = v15;
  v16 = v21;
  *(_BYTE *)(a6 + 9) = v11;
  *(_BYTE *)(a6 + 8) = v16;
  *(_BYTE *)(a6 + 10) = v12;
  return result;
}

