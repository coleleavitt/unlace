/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93798
// Address: 0x00093798

//----- (00093798) --------------------------------------------------------
unsigned __int8 *__fastcall sub_93798(int a1, int a2, int a3, int *a4)
{
  __int64 v5; // r0
  unsigned __int8 **v6; // r2
  unsigned __int8 *result; // r0
  int *v8; // r3
  int v9; // r2
  int v10; // r2
  int v11; // r8
  __int64 v12; // r0
  __int64 v13; // kr00_8
  int v14; // r3
  int v15; // r6
  _DWORD v16[2]; // [sp+4h] [bp-24h] BYREF

  v5 = *(_QWORD *)a1;
  v6 = (unsigned __int8 **)(HIDWORD(v5) - v5);
  if ( HIDWORD(v5) == (_DWORD)v5 )
    return sub_92B28((__int64 *)a1, _stack_chk_guard, (int)v6, a4);
  a4 = (int *)*(unsigned __int8 *)v5;
  if ( a4 != (int *)((char *)&dword_48 + 2) )
  {
    if ( a4 == &dword_4C )
    {
      if ( (unsigned int)v6 < 2 || *(_BYTE *)(v5 + 1) != 90 )
        return sub_95B00((unsigned __int8 **)a1, _stack_chk_guard, (int)v6, &dword_4C);
      *(_DWORD *)a1 = v5 + 2;
      result = (unsigned __int8 *)sub_9251C(a1, 90, v6);
      goto LABEL_16;
    }
    if ( a4 == &dword_58 )
    {
      *(_DWORD *)a1 = v5 + 1;
      result = sub_948A0(a1);
LABEL_16:
      if ( !result )
        return nullptr;
      v13 = *(_QWORD *)a1;
      if ( (_DWORD)v13 == HIDWORD(v13) || *(_BYTE *)v13 != 69 )
        return nullptr;
      *(_DWORD *)a1 = v13 + 1;
      return result;
    }
    return sub_92B28((__int64 *)a1, _stack_chk_guard, (int)v6, a4);
  }
  v8 = *(int **)(a1 + 12);
  v9 = *(_DWORD *)(a1 + 8);
  LODWORD(v5) = v5 + 1;
  *(_DWORD *)a1 = v5;
  v10 = (int)v8 - v9;
  v11 = v10 >> 2;
  while ( 1 )
  {
    if ( (_DWORD)v5 != HIDWORD(v5) )
    {
      HIDWORD(v5) = *(unsigned __int8 *)v5;
      if ( HIDWORD(v5) == 69 )
        break;
    }
    v16[0] = sub_93798(a1, SHIDWORD(v5), v10, v8);
    if ( !v16[0] )
      return nullptr;
    LODWORD(v12) = a1 + 8;
    HIDWORD(v12) = v16;
    sub_938C4(v12);
    v5 = *(_QWORD *)a1;
  }
  *(_DWORD *)a1 = v5 + 1;
  sub_9392E(v16, a1, v11);
  result = (unsigned __int8 *)sub_93AC6(a1 + 368, 16);
  v14 = v16[0];
  v15 = v16[1];
  *(_DWORD *)result = &off_DC5F0;
  *((_DWORD *)result + 1) = 16843036;
  *((_DWORD *)result + 2) = v14;
  *((_DWORD *)result + 3) = v15;
  return result;
}
// 93820: variable 'v10' is possibly undefined
// 93820: variable 'v8' is possibly undefined
// 48: using guessed type int dword_48;
// 4C: using guessed type int dword_4C;
// 58: using guessed type int dword_58;
// DC5F0: using guessed type _UNKNOWN *off_DC5F0;
