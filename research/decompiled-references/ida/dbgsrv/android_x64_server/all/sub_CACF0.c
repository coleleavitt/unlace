/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CACF0
// Address: 0x00000000000CACF0

//----- (00000000000CACF0) ----------------------------------------------------
__int64 __fastcall sub_CACF0(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v7; // r14d
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v16[2]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v17[9]; // [rsp+10h] [rbp-48h] BYREF

  v17[2] = __readfsqword(0x28u);
  v7 = sub_CABB0((__int64)a1, a2, a3, a4);
  if ( a2 != a3 && !v7 )
  {
    v8 = a4 + a2;
    v17[0] = a2;
    v17[1] = a4 + a2;
    if ( a4 + a2 > a2 )
    {
      v9 = a1[1];
      if ( !v9 )
        goto LABEL_8;
      v10 = *a1;
      v11 = 0;
      v12 = 0;
      while ( 1 )
      {
        v13 = *(_QWORD *)(v10 + (v11 >> 28) + 8);
        if ( v13 >= a2 )
          break;
        ++v12;
        v11 += 0x100000000LL;
        if ( v12 >= v9 )
          goto LABEL_8;
      }
      v14 = *(_QWORD *)(v10 + 16 * (v11 >> 32));
      if ( v13 == v14 || v14 > a2 || v8 - 1 > v13 - 1 )
      {
LABEL_8:
        if ( !(_BYTE)under_debugger )
          interr(42);
        BUG();
      }
    }
    rangeset_t_sub((__int64)a1, v17);
    v16[0] = a3;
    v16[1] = a3 + a4;
    rangeset_t_add((__int64)a1, v16);
  }
  return v7;
}
// 158B40: using guessed type __int64 under_debugger;
