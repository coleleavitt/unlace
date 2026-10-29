/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D8D5
// Address: 0x0047D8D5

//----- (0047D8D5) --------------------------------------------------------
int __usercall sub_47D8D5@<eax>(int a1@<ebx>, UINT a2, char a3, int a4, void **a5)
{
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  int v8; // esi
  int v9; // ebx
  _DWORD *v10; // ecx
  UINT v11; // [esp-14h] [ebp-28h]
  volatile signed __int32 ***v12[2]; // [esp+0h] [ebp-14h] BYREF
  UINT v13; // [esp+8h] [ebp-Ch] BYREF
  int v14; // [esp+Ch] [ebp-8h] BYREF

  sub_47D9E9(a1, (int *)a4, a5);
  v13 = sub_47D67F(a2);
  if ( v13 == *(_DWORD *)(*(_DWORD *)(a4 + 72) + 4) )
    return 0;
  v6 = sub_479531(0x220u);
  v7 = v6;
  if ( v6 )
  {
    qmemcpy(v6, *(const void **)(a4 + 72), 0x220u);
    v7 = v6;
    v11 = v13;
    *v6 = 0;
    v8 = sub_47DAE4(v11, (int)v6);
    if ( v8 != -1 )
    {
      if ( !a3 )
        sub_477E1F();
      v9 = _InterlockedDecrement(*(volatile signed __int32 **)(a4 + 72));
      if ( !v9 && *(int **)(a4 + 72) != dword_4B62D8 )
        sub_479216(*(LPVOID *)(a4 + 72));
      *v7 = 1;
      v10 = v7;
      v7 = nullptr;
      *(_DWORD *)(a4 + 72) = v10;
      if ( (dword_4B6858 & *(_DWORD *)(a4 + 848)) == 0 )
      {
        v12[0] = (volatile signed __int32 ***)&a4;
        v12[1] = (volatile signed __int32 ***)&a5;
        v13 = 5;
        v14 = 5;
        sub_47D571(v9, 0, &v14, v12, (int *)&v13);
        if ( a3 )
          off_4B60E4 = (int (*)[22])*a5;
      }
      goto LABEL_7;
    }
    *sub_46B984() = 22;
  }
  v8 = -1;
LABEL_7:
  sub_479216(v7);
  return v8;
}
// 4B60E4: using guessed type int (*off_4B60E4)[22];
// 4B62D8: using guessed type int dword_4B62D8[22];
// 4B6858: using guessed type int dword_4B6858;
