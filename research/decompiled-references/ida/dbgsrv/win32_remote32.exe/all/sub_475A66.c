/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475A66
// Address: 0x00475A66

//----- (00475A66) --------------------------------------------------------
int __usercall sub_475A66@<eax>(int a1@<ebx>, int a2@<edi>, _DWORD *a3, __int64 a4, unsigned __int64 a5)
{
  int v5; // esi
  int v6; // ebx
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  int v14; // edx
  bool v15; // cc
  int v16; // esi
  unsigned __int64 v17; // [esp-10h] [ebp-3Ch]
  __int64 v18; // [esp-8h] [ebp-34h]
  int v19; // [esp+10h] [ebp-1Ch]
  int v20; // [esp+14h] [ebp-18h]
  int v21; // [esp+18h] [ebp-14h]
  char v22; // [esp+1Ch] [ebp-10h]
  __int64 v23; // [esp+20h] [ebp-Ch]
  __int64 v24; // [esp+20h] [ebp-Ch]
  int v25; // [esp+24h] [ebp-8h]

  v5 = sub_47631B(a1, a2, (int)a3);
  v21 = 2;
  v6 = 1;
  v19 = (int)*(&dword_4B7B38 + (v5 >> 6));
  v20 = 56 * (v5 & 0x3F);
  v22 = *(_BYTE *)(v20 + v19 + 41);
  if ( v22 != 1 )
    v21 = 1;
  LODWORD(v23) = a3[2];
  if ( !(_DWORD)v23 )
    return a4;
  HIDWORD(v23) = (*a3 - a3[1]) >> 31;
  v8 = (v23 + __PAIR64__((int)v23 >> 31, *a3 - a3[1])) >> 32;
  v24 = v23 + __PAIR64__((int)v23 >> 31, *a3 - a3[1]);
  v9 = v24;
  if ( *(char *)(v20 + v19 + 40) < 0 )
  {
    LODWORD(v11) = sub_474C96(1, v5, 0, 0, 2u);
    if ( v11 == a4 )
    {
      LODWORD(v12) = sub_475DB5((_WORD *)a3[1], a3[1] + v24, v22);
      HIDWORD(v12) = (unsigned __int64)(v24 + v12) >> 32;
      v9 = v24 + v12;
      if ( (a3[3] & 0x20) == 0 )
      {
LABEL_28:
        v10 = v21;
        v18 = (unsigned int)v21;
        HIDWORD(v17) = HIDWORD(v12);
        goto LABEL_29;
      }
      if ( v22 == 1 || v22 == 2 )
        v6 = 2;
    }
    else
    {
      v13 = sub_474C96(1, v5, a4, SHIDWORD(a4), 0);
      if ( (v14 & v13) == 0xFFFFFFFF )
        return -1;
      v15 = v24 < 0;
      if ( SHIDWORD(v24) <= 0
        && ((v25 = 512, v15) || (unsigned int)v24 <= 0x200)
        && (a3[3] & 0x40) != 0
        && (a3[3] & 0x100) == 0 )
      {
        HIDWORD(v12) = 0;
      }
      else
      {
        v12 = (int)a3[6];
        v25 = a3[6];
      }
      if ( (*((_BYTE *)&(*(&dword_4B7B38 + (v5 >> 6)))[1].LockSemaphore + v20) & 4) == 0 )
      {
        v9 = v25;
        goto LABEL_28;
      }
      if ( v22 == 1 || v22 == 2 )
        v6 = 2;
      v9 = v25;
    }
    HIDWORD(v12) = ((unsigned int)v6 + __PAIR64__(HIDWORD(v12), v9)) >> 32;
    v9 += v6;
    goto LABEL_28;
  }
  v10 = v21;
  v18 = (unsigned int)v21;
  HIDWORD(v17) = v8;
LABEL_29:
  LODWORD(v17) = v9;
  v16 = sub_462A90(v17, v18);
  return a4 + sub_462A90(a5, (unsigned int)v10) - v16;
}
// 475B17: variable 'v11' is possibly undefined
// 475B3E: variable 'v12' is possibly undefined
// 475B71: variable 'v14' is possibly undefined
