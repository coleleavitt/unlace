/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A7B64
// Address: 0x00000000000A7B64

//----- (00000000000A7B64) ----------------------------------------------------
__int64 __fastcall sub_A7B64(__int64 a1, __int64 a2)
{
  __int64 v2; // x20
  __int64 v3; // x21
  char v4; // w8
  bool v6; // zf
  socklen_t v7; // w8
  struct sockaddr *v8; // x1
  __int64 v9; // x0
  _DWORD *v10; // x0
  socklen_t addr_len; // [xsp+4h] [xbp-8Ch] BYREF
  char v13; // [xsp+8h] [xbp-88h] BYREF
  char v14; // [xsp+28h] [xbp-68h] BYREF
  __int64 v15; // [xsp+38h] [xbp-58h]

  v2 = a2;
  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 56);
    v4 = *(_BYTE *)(a2 + 100);
    *(_BYTE *)(a1 + 100) = v4;
    if ( v3 == -1 )
    {
      while ( 1 )
      {
        v6 = v4 == 0;
        v7 = v4 ? 28 : 16;
        addr_len = v7;
        v8 = (struct sockaddr *)(v6 ? &v14 : &v13);
        v9 = accept(*(_DWORD *)(v2 + 56), v8, &addr_len);
        LODWORD(v3) = v9;
        *(_QWORD *)(a1 + 56) = (int)v9;
        if ( (_DWORD)v9 == -1 )
        {
          v10 = (_DWORD *)__errno(v9);
          if ( *v10 != 4 )
            break;
        }
        if ( (_DWORD)v3 != -1 )
          goto LABEL_14;
        v4 = *(_BYTE *)(a1 + 100);
      }
      *(_QWORD *)(a1 + 88) = "accept";
      LODWORD(v2) = 0;
      *(_DWORD *)(a1 + 96) = *v10;
    }
    else
    {
LABEL_14:
      LODWORD(v2) = 1;
      fcntl(v3, 2, 1);
    }
  }
  return (unsigned int)v2;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
