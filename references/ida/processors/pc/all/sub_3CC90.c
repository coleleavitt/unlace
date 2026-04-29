__int64 __fastcall sub_3CC90(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rdx
  __int64 v9; // r15
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned __int64 v17; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-60h]
  __int64 v19; // [rsp+20h] [rbp-58h]
  char v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a2 + 72);
  if ( v7 > 0xB )
  {
    v9 = *(_QWORD *)(a2 + 64);
    v11 = 0;
    v12 = v7 / 0xC - 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = v11 + ((v12 - v11) >> 1);
        sub_3CBB0((__int64)&v17, a2, v9 + 12 * v13, a4, a5, a6);
        v14 = v18;
        v15 = v19;
        if ( v20 )
        {
          *(_QWORD *)a1 = v17;
          *(_QWORD *)(a1 + 8) = v14;
          *(_QWORD *)(a1 + 16) = v15;
          *(_BYTE *)(a1 + 32) = 1;
          return a1;
        }
        if ( a3 >= v17 )
          break;
        v12 = v13 - 1;
        if ( v13 - 1 < v11 )
          goto LABEL_10;
      }
      if ( a3 < v18 )
        break;
      v11 = v13 + 1;
      if ( v12 < v13 + 1 )
      {
LABEL_10:
        *(_BYTE *)(a1 + 24) = 0;
        *(_BYTE *)(a1 + 32) = 0;
        return a1;
      }
    }
    *(_QWORD *)a1 = v17;
    *(_QWORD *)(a1 + 8) = v14;
    *(_QWORD *)(a1 + 16) = v15;
    *(_BYTE *)(a1 + 24) = 1;
    *(_BYTE *)(a1 + 32) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 32) = 0;
  }
  return a1;
}
