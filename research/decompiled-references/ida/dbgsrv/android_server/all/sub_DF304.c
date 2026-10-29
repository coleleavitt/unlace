/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DF304
// Address: 0x00000000000DF304

//----- (00000000000DF304) ----------------------------------------------------
char *__fastcall sub_DF304(__int64 a1, char *a2)
{
  unsigned __int8 *v2; // x8
  unsigned __int8 *v3; // x9
  unsigned __int8 *v6; // x10
  unsigned __int8 *v7; // x24
  unsigned __int64 v8; // x9
  _QWORD *v9; // x26
  __int64 v10; // x8
  _QWORD *v11; // x9
  _QWORD *v12; // x0
  char *v13; // x10
  __int16 v14; // w8
  char v15; // w9
  char *v16; // x10
  unsigned __int8 *v17; // x25

  v3 = *(unsigned __int8 **)a1;
  v2 = *(unsigned __int8 **)(a1 + 8);
  if ( *(unsigned __int8 **)a1 != v2 )
  {
    while ( *v3 == 66 )
    {
      *(_QWORD *)a1 = v3 + 1;
      if ( v2 == v3 + 1 || (unsigned int)v3[1] - 48 > 9 )
        return nullptr;
      v6 = v3 + 2;
      *(_QWORD *)a1 = v3 + 2;
      v7 = v6;
      v8 = v3[1] - 48LL;
      if ( v2 != v6 )
      {
        while ( (unsigned int)*v6 - 48 < 0xA )
        {
          *(_QWORD *)a1 = v6 + 1;
          v8 = *v6++ + 10 * v8 - 48;
          v7 = v6;
          if ( v2 == v6 )
            goto LABEL_10;
        }
        v7 = v6;
      }
LABEL_10:
      if ( v2 - v7 < v8 )
        return nullptr;
      v17 = &v7[v8];
      *(_QWORD *)a1 = &v7[v8];
      if ( v7 == &v7[v8] )
        return nullptr;
      v9 = *(_QWORD **)(a1 + 4832);
      v11 = v9 + 1;
      v10 = v9[1];
      if ( (unsigned __int64)(v10 + 48) >= 0xFF0 )
      {
        v12 = (_QWORD *)operator new[](0x1000u);
        v10 = 0;
        *v12 = v9;
        v12[1] = 0;
        v11 = v12 + 1;
        v9 = v12;
        *(_QWORD *)(a1 + 4832) = v12;
      }
      *v11 = v10 + 48;
      v13 = (char *)v9 + v10;
      v14 = *(_WORD *)(a2 + 9);
      v15 = a2[11];
      *((_QWORD *)v13 + 2) = off_162888;
      v16 = v13 + 16;
      v16[8] = 8;
      *((_QWORD *)v16 + 2) = a2;
      *((_QWORD *)v16 + 3) = v7;
      *((_QWORD *)v16 + 4) = v17;
      *(_WORD *)(v16 + 9) = v14;
      v16[11] = v15;
      v3 = *(unsigned __int8 **)a1;
      v2 = *(unsigned __int8 **)(a1 + 8);
      a2 = v16;
      if ( *(unsigned __int8 **)a1 == v2 )
        return v16;
    }
  }
  return a2;
}
// 162888: using guessed type __int64 (__fastcall *off_162888[7])();
