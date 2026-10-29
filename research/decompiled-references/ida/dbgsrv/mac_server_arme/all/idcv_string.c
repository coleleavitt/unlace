/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_string
// Address: 0x00000001000336B0

//----- (00000001000336B0) ----------------------------------------------------
__int64 __fastcall idcv_string(
        unsigned __int8 *a1,
        int8x16x2_t a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  int v10; // w8
  size_t v12; // x20
  void *v13; // x0
  unsigned __int8 v14; // w20
  _BYTE *v15; // x0
  int v16; // w8
  char __s[1024]; // [xsp+8h] [xbp-428h] BYREF
  __int64 vars8; // [xsp+438h] [xbp+8h]

  if ( a1 )
  {
    while ( 1 )
    {
      v10 = *a1;
      if ( v10 != 10 )
        break;
      if ( !deref_idcv(a1, 2) )
      {
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        return get_qerrno();
      }
    }
    if ( *a1 > 6u )
    {
      if ( v10 == 7 )
        return 0;
      if ( v10 != 9 )
        goto LABEL_16;
      v14 = a1[8];
      *((_QWORD *)a1 + 2) = 0;
      *((_QWORD *)a1 + 3) = 0;
      *((_QWORD *)a1 + 1) = 0;
      v15 = qvector_reserve((_QWORD *)a1 + 1, nullptr, 2u, 1u);
      *((_QWORD *)a1 + 1) = v15;
      *((_QWORD *)a1 + 2) = 2;
      *v15 = v14;
      *(_BYTE *)(*((_QWORD *)a1 + 1) + 1LL) = 0;
    }
    else
    {
      if ( v10 != 2 )
      {
        if ( v10 != 3 )
          goto LABEL_16;
        realtoasc(__s, 0x400u, (unsigned __int16 *)a1 + 4, 50, a6, a7, a2, a8, a9);
        *((_QWORD *)a1 + 1) = 0;
        *((_QWORD *)a1 + 2) = 0;
        *((_QWORD *)a1 + 3) = 0;
        v12 = strlen(__s);
        v13 = nullptr;
        if ( v12 != -1 )
        {
          v13 = qvector_reserve((_QWORD *)a1 + 1, nullptr, v12 + 1, 1u);
          *((_QWORD *)a1 + 1) = v13;
        }
        *((_QWORD *)a1 + 2) = v12 + 1;
        goto LABEL_21;
      }
      __s[0] = a1[8];
      v16 = (unsigned __int8)__s[0];
      v12 = __s[0] != 0;
      *((_QWORD *)a1 + 2) = 0;
      *((_QWORD *)a1 + 3) = 0;
      *((_QWORD *)a1 + 1) = 0;
      if ( v16 )
      {
        v13 = qvector_reserve((_QWORD *)a1 + 1, nullptr, 2u, 1u);
        *((_QWORD *)a1 + 1) = v13;
        *((_QWORD *)a1 + 2) = 2;
LABEL_21:
        memmove(v13, __s, v12);
        *(_BYTE *)(*((_QWORD *)a1 + 1) + v12) = 0;
      }
    }
    *a1 = 7;
    return 0;
  }
LABEL_16:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return set_qerrno();
}
// 100033760: variable 'a6' is possibly undefined
// 100033760: variable 'a7' is possibly undefined
// 100033760: variable 'a2' is possibly undefined
// 100033760: variable 'a8' is possibly undefined
// 100033760: variable 'a9' is possibly undefined
