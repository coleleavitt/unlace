__int64 __fastcall sub_3FA580(int *a1, char a2, char a3, double a4)
{
  __int64 v5; // r12
  __int64 v6; // rbp
  _DWORD *v7; // r13
  unsigned int v8; // r8d
  __int64 result; // rax
  int v10; // r15d
  char v11; // al
  int v12; // edx
  unsigned __int8 v13; // r14
  signed int v14; // eax
  unsigned __int16 v15; // ax
  int v16; // r9d
  __int64 v17; // [rsp-10h] [rbp-58h]
  __int64 v18; // [rsp+8h] [rbp-40h]

  v5 = *(_QWORD *)a1;
  v6 = a1[2];
  v7 = *(_DWORD **)(*(_QWORD *)a1 + 832LL);
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == 1 )
      v8 = v7[114];
    else
      v8 = v7[115];
  }
  else
  {
    v8 = v7[113];
  }
  a1[3] = v8;
  if ( !a2 || (result = sub_3FA4D0((__int64 *)a1), !(_BYTE)result) )
  {
    result = sub_3F9DC0(v5, v6, v8, a4);
    v10 = result;
    if ( a3 )
      goto LABEL_6;
    if ( v7[117] != (_DWORD)result )
      goto LABEL_6;
    result = 40 * v6;
    if ( (unsigned __int8)(*(_BYTE *)(v5 + 40 * v6 + 65) - 2) > 2u )
      goto LABEL_6;
    *(_QWORD *)(*(_QWORD *)a1 + 880LL) = *(_QWORD *)(v5 + 40);
    v18 = *(_QWORD *)a1;
    v11 = sub_3FA390(*(_QWORD *)a1, v5 + result + 64);
    v12 = *(_DWORD *)(v5 + 52);
    v13 = v11;
    v14 = 8;
    if ( (v12 & 0x1018) != 0x1010 )
    {
      if ( (v12 & 0x1008) == 0 || (v14 = 2, (v12 & 0x1018) == 0x1008) )
        v14 = 4;
    }
    sub_3F7E20(v18, 2u, v13, v10 + v7[21], v10, a1[3], v14);
    result = v17;
    v10 = a1[3];
    if ( *(int *)(*(_QWORD *)a1 + 892LL) < 0 )
      goto LABEL_6;
    if ( v13 == 15 )
      goto LABEL_6;
    result = 5 * v6;
    if ( *(_BYTE *)(v5 + 40 * v6 + 65) == 1 )
      goto LABEL_6;
    v15 = *(_WORD *)(v5 + 48);
    if ( v15 > 0x146u )
    {
      v16 = 2 * (v15 != 604) + 65;
    }
    else if ( v15 <= 0x10Cu )
    {
      v16 = (unsigned __int16)(v15 - 262) < 3u ? 65 : 67;
    }
    else
    {
      result = 1LL << ((unsigned __int8)v15 - 13);
      if ( (result & 0xC009249) != 0 )
      {
        v16 = 65;
      }
      else
      {
        v16 = 67;
        if ( (result & 0x240200000000000LL) != 0 )
        {
LABEL_6:
          a1[3] = v10;
          *((_BYTE *)a1 + 16) = 1;
          return result;
        }
      }
    }
    result = sub_1D6740(*(_QWORD *)a1, v13, 0xFu, v10, v10, v16);
    goto LABEL_6;
  }
  return result;
}
