/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4FA40
// Address: 0x000000000004FA40

//----- (000000000004FA40) ----------------------------------------------------
__int64 __fastcall sub_4FA40(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  bool v8; // dl
  __int64 v9; // r14
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rdi

  *(_DWORD *)(a1 + 88) = 0;
  result = *(unsigned __int16 *)(a1 + 54);
  if ( (_DWORD)result != 0xFFFF )
  {
    if ( (unsigned int)result <= 0xFEFF )
      *(_DWORD *)(a1 + 88) = result;
    return result;
  }
  v4 = *(_QWORD *)(a2 + 288);
  if ( v4 > a1 || v4 + 96LL * *(_QWORD *)(a2 + 296) < a1 )
    goto LABEL_21;
  v5 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a1 - v4) >> 5);
  v6 = *(_QWORD *)(a2 + 312);
  v7 = 0;
  v8 = v5 < v6;
  if ( v5 >= v6 )
    v7 = *(_QWORD *)(a2 + 312);
  v9 = v5 - v7;
  if ( v8 )
  {
    if ( v8 )
    {
      v10 = *(unsigned int *)(a2 + 204);
      if ( !*(_DWORD *)(a2 + 204) )
        return sub_4FCD0((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", (unsigned int)v9);
      goto LABEL_14;
    }
LABEL_21:
    if ( !(_BYTE)under_debugger )
      interr(20088);
LABEL_25:
    BUG();
  }
  v10 = *(unsigned int *)(a2 + 208);
  if ( !*(_DWORD *)(a2 + 208) )
    return sub_4FCD0((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", (unsigned int)v9);
LABEL_14:
  if ( !*(_BYTE *)(a2 + 248) )
  {
    if ( !(_BYTE)under_debugger )
      interr(20099);
    goto LABEL_25;
  }
  if ( *(_QWORD *)(a2 + 120) <= v10 )
    return sub_4FCD0((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", (unsigned int)v9);
  v11 = *(_QWORD *)(a2 + 112);
  v12 = v10 << 6;
  if ( !(v12 + v11) )
    return sub_4FCD0((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", (unsigned int)v9);
  v13 = *(_QWORD *)(v11 + v12 + 24);
  if ( !v13 )
    return sub_4FCD0((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", (unsigned int)v9);
  v14 = (4 * v9) & 0x3FFFFFFFCLL;
  if ( v14 >= *(_QWORD *)(v11 + v12 + 32) )
    return sub_4FCD0((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", (unsigned int)v9);
  result = sub_4FBA0(a2, v14 + v13);
  *(_DWORD *)(a1 + 88) = result;
  if ( !(_DWORD)result )
    return sub_4FCD0((int)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", (unsigned int)v9);
  return result;
}
// 158B40: using guessed type __int64 under_debugger;
