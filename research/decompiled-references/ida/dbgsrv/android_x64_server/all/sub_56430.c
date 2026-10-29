/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56430
// Address: 0x0000000000056430

//----- (0000000000056430) ----------------------------------------------------
__int64 __fastcall sub_56430(
        __int64 a1,
        unsigned __int8 **a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        _DWORD *a6)
{
  unsigned __int8 *v6; // rax
  unsigned __int8 *v10; // rsi
  __int64 v11; // rdx
  char v12; // bl
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // ecx
  int v17; // ecx
  char *v18; // rax
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int64 result; // rax
  size_t v24; // [rsp+0h] [rbp-68h] BYREF
  char *v25; // [rsp+8h] [rbp-60h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v27; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+28h] [rbp-40h] BYREF
  int v29; // [rsp+30h] [rbp-38h]
  char v30; // [rsp+34h] [rbp-34h]
  unsigned __int64 v31; // [rsp+38h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  v6 = *a2;
  v25 = (char *)v6;
  if ( (unsigned __int64)v6 >= a3 )
  {
    LODWORD(a4) = 0;
    return (unsigned int)a4;
  }
  *(_OWORD *)ptr = 0;
  v27 = 0;
  v10 = v6 + 1;
  v25 = (char *)(v6 + 1);
  v11 = *v6;
  v12 = *v6 & 0xC0;
  if ( v12 == (char)0x80 )
  {
    v30 = 0x80;
    LODWORD(v28) = v11 & 0x3F;
    if ( unpack_xleb128((__int64 *)((char *)&v28 + 4), 32, 0, &v25, a3) )
    {
      v29 = HIDWORD(v28) * *(_DWORD *)(a4 + 88);
      goto LABEL_27;
    }
LABEL_14:
    LODWORD(a4) = 0;
    goto LABEL_28;
  }
  if ( v12 == -64 )
  {
    v30 = -64;
    LODWORD(v28) = v11 & 0x3F;
    goto LABEL_27;
  }
  if ( v12 != 64 )
  {
    v30 = *v6;
    LODWORD(a4) = 0;
    switch ( v11 )
    {
      case 0LL:
      case 10LL:
      case 11LL:
      case 28LL:
        goto LABEL_27;
      case 2LL:
        v16 = *v10;
        LODWORD(v28) = v16;
        if ( a6 )
        {
          v17 = *a6 + v16;
          *a6 = v17;
          HIDWORD(v28) = v17;
          v18 = (char *)(v6 + 2);
LABEL_26:
          v25 = v18;
          goto LABEL_27;
        }
        if ( !(_BYTE)under_debugger )
          interr(20142);
        return result;
      case 3LL:
        v19 = (v6[-a5 + 2] << 8) | v6[a5 + 1];
        LODWORD(v28) = v19;
        if ( a6 )
        {
          v20 = *a6 + v19;
          *a6 = v20;
          HIDWORD(v28) = v20;
          v18 = (char *)(v6 + 3);
          goto LABEL_26;
        }
        if ( !(_BYTE)under_debugger )
          interr(20142);
        return result;
      case 4LL:
        if ( a5 )
        {
          v15 = (v6[1] << 24) | (v6[2] << 16) | (v6[3] << 8);
          v10 = v6 + 4;
        }
        else
        {
          v15 = (v6[4] << 24) | (v6[3] << 16) | (v6[2] << 8);
        }
        v21 = v15 | *v10;
        LODWORD(v28) = v21;
        if ( a6 )
        {
          v22 = *a6 + v21;
          *a6 = v22;
          HIDWORD(v28) = v22;
          v18 = (char *)(v6 + 5);
          goto LABEL_26;
        }
        if ( !(_BYTE)under_debugger )
          interr(20142);
        break;
      case 5LL:
      case 9LL:
      case 12LL:
      case 20LL:
        if ( unpack_xleb128((__int64 *)((char *)&v28 + 4), 32, 0, &v25, a3) )
          goto LABEL_13;
        goto LABEL_14;
      case 6LL:
      case 7LL:
      case 8LL:
      case 13LL:
      case 14LL:
      case 46LL:
LABEL_13:
        if ( !unpack_xleb128(&v28, 32, 0, &v25, a3) )
          goto LABEL_14;
        goto LABEL_27;
      case 15LL:
        if ( !unpack_xleb128((__int64 *)&v24, 64, 0, &v25, a3) )
          goto LABEL_14;
        sub_56350((__int64)ptr, v25, v24);
        v25 += v24;
        goto LABEL_27;
      default:
        goto LABEL_28;
    }
    BUG();
  }
  v30 = 64;
  v13 = v11 & 0x3F;
  LODWORD(v28) = v13;
  if ( !a6 )
    goto LABEL_14;
  v14 = *a6 + v13;
  *a6 = v14;
  HIDWORD(v28) = v14;
LABEL_27:
  sub_5CFA0(a1, (__int64)ptr);
  *a2 = (unsigned __int8 *)v25;
  LOBYTE(a4) = 1;
LABEL_28:
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v27 = 0;
  }
  return (unsigned int)a4;
}
// 158B40: using guessed type __int64 under_debugger;
