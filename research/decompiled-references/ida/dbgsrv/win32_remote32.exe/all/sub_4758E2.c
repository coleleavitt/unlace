/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4758E2
// Address: 0x004758E2

//----- (004758E2) --------------------------------------------------------
int __usercall sub_4758E2@<eax>(int a1@<ebx>, int a2@<edi>, unsigned int *a3)
{
  int v4; // eax
  int v5; // edi
  __int64 v6; // rax
  int v7; // ebx
  int v8; // edi
  unsigned int *v9; // esi
  __int64 v10; // rax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // [esp+0h] [ebp-14h]
  int v14; // [esp+4h] [ebp-10h]
  int v15; // [esp+8h] [ebp-Ch]
  unsigned int v16; // [esp+Ch] [ebp-8h]
  char v17; // [esp+10h] [ebp-4h]

  if ( !a3 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return -1;
  }
  v4 = sub_47631B(a1, a2, (int)a3);
  v5 = v4;
  if ( (a3[2] & 0x80000000) != 0 )
    a3[2] = 0;
  LODWORD(v6) = sub_474C96(0, v4, 0, 0, 1u);
  v16 = HIDWORD(v6);
  v13 = v6;
  if ( v6 < 0 )
    return -1;
  if ( (a3[3] & 0xC0) == 0 )
    return v6 - a3[2];
  v15 = v5 >> 6;
  v14 = 56 * (v5 & 0x3F);
  v17 = *((_BYTE *)&(*(&dword_4B7B38 + (v5 >> 6)))[1].LockSemaphore + v14 + 1);
  v7 = (int)(*a3 - a3[1]) >> 31;
  v8 = *a3 - a3[1];
  if ( (a3[3] & 3) == 0 )
  {
    if ( (a3[3] & 4) != 0 )
      goto LABEL_17;
    *sub_46B984() = 22;
    return -1;
  }
  if ( v17 == 1 && (*((_BYTE *)&(*(&dword_4B7B38 + v15))[1].SpinCount + v14 + 1) & 2) != 0 )
    return sub_475C1F(v7, v8, a3, v6);
  if ( *((char *)&(*(&dword_4B7B38 + v15))[1].LockSemaphore + v14) < 0 )
  {
    v9 = a3;
    LODWORD(v10) = sub_475DB5((_WORD *)a3[1], *a3, v17);
    v7 = (v10 + __PAIR64__(v7, v8)) >> 32;
    v8 += v10;
    goto LABEL_18;
  }
LABEL_17:
  v9 = a3;
LABEL_18:
  v11 = v13;
  if ( v16 | v13 )
  {
    if ( (v9[3] & 1) != 0 )
      return sub_475A66(v7, v8, a3, __SPAIR64__(v16, v13), __PAIR64__(v7, v8));
    if ( v17 == 1 )
    {
      v12 = sub_462A90(__PAIR64__(v7, v8), 2);
      v11 = v13;
      v8 = v12;
    }
    v8 += v11;
  }
  return v8;
}
// 475931: variable 'v6' is possibly undefined
// 4759F0: variable 'v10' is possibly undefined
