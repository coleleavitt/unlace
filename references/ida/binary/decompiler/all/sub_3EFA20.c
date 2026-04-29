__int64 __fastcall sub_3EFA20(int *a1, char a2, char a3)
{
  __int64 v4; // r12
  __int64 v5; // rbp
  _DWORD *v6; // r13
  unsigned int v7; // r8d
  __int64 result; // rax
  unsigned int v9; // r15d
  char v10; // al
  int v11; // edx
  unsigned __int8 v12; // r14
  signed int v13; // eax
  unsigned __int16 v14; // ax
  __int64 v15; // r9
  __int64 v16; // [rsp-10h] [rbp-58h]
  __int64 v17; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)a1;
  v5 = a1[2];
  v6 = *(_DWORD **)(*(_QWORD *)a1 + 832LL);
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 1 )
      v7 = v6[114];
    else
      v7 = v6[115];
  }
  else
  {
    v7 = v6[113];
  }
  a1[3] = v7;
  if ( !a2 || (result = sub_3EF970((__int64 *)a1), !(_BYTE)result) )
  {
    result = sub_3EF260(v4, v5, v7);
    v9 = result;
    if ( a3 )
      goto LABEL_6;
    if ( v6[117] != (_DWORD)result )
      goto LABEL_6;
    result = 40 * v5;
    if ( (unsigned __int8)(*(_BYTE *)(v4 + 40 * v5 + 65) - 2) > 2u )
      goto LABEL_6;
    *(_QWORD *)(*(_QWORD *)a1 + 880LL) = *(_QWORD *)(v4 + 40);
    v17 = *(_QWORD *)a1;
    v10 = sub_3EF830(*(_QWORD *)a1, v4 + result + 64);
    v11 = *(_DWORD *)(v4 + 52);
    v12 = v10;
    v13 = 8;
    if ( (v11 & 0x1018) != 0x1010 )
    {
      if ( (v11 & 0x1008) == 0 || (v13 = 2, (v11 & 0x1018) == 0x1008) )
        v13 = 4;
    }
    sub_3ED260(v17, 2u, v12, v9 + v6[21], (int)v9, a1[3], v13);
    result = v16;
    v9 = a1[3];
    if ( *(int *)(*(_QWORD *)a1 + 892LL) < 0 )
      goto LABEL_6;
    if ( v12 == 15 )
      goto LABEL_6;
    result = 5 * v5;
    if ( *(_BYTE *)(v4 + 40 * v5 + 65) == 1 )
      goto LABEL_6;
    v14 = *(_WORD *)(v4 + 48);
    if ( v14 > 0x146u )
    {
      v15 = 2 * (unsigned int)(v14 != 604) + 65;
    }
    else if ( v14 <= 0x10Cu )
    {
      v15 = (unsigned __int16)(v14 - 262) < 3u ? 65 : 67;
    }
    else
    {
      result = 1LL << ((unsigned __int8)v14 - 13);
      if ( (result & 0xC009249) != 0 )
      {
        v15 = 65;
      }
      else
      {
        v15 = 67;
        if ( (result & 0x240200000000000LL) != 0 )
        {
LABEL_6:
          a1[3] = v9;
          *((_BYTE *)a1 + 16) = 1;
          return result;
        }
      }
    }
    result = sub_1D3BC0(*(_QWORD *)a1, v12, 15, v9, v9, v15);
    goto LABEL_6;
  }
  return result;
}
