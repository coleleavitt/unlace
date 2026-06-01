/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472B94
// Address: 0x00472B94

//----- (00472B94) --------------------------------------------------------
int __usercall sub_472B94@<eax>(int a1@<ebx>, int a2@<edi>, int a3)
{
  char v3; // al
  int v4; // edi
  int v5; // edx
  int v6; // ebx
  int v8; // eax
  int v9; // edx
  WCHAR WideCharStr; // [esp+Ch] [ebp-4h] BYREF

  v3 = *((_BYTE *)&(*(&dword_4B7B38 + (a3 >> 6)))[1].LockSemaphore + 56 * (a3 & 0x3F));
  if ( (v3 & 0x48) == 0 && v3 < 0 )
  {
    v4 = sub_474CB1(a1, a2, a3, -1, -1, 2u);
    v6 = v5;
    if ( (v5 & v4) == 0xFFFFFFFF )
    {
      if ( *sub_46B971() != 131 )
        return *sub_46B984();
    }
    else
    {
      WideCharStr = 0;
      if ( !sub_473D17(v4, a3, (__int16 *)&WideCharStr, 1u)
        && WideCharStr == 26
        && sub_472FD5(a3, __SPAIR64__(v6, v4)) == -1 )
      {
        return *sub_46B984();
      }
      v8 = sub_474CB1(v6, v4, a3, 0, 0, 0);
      if ( (v9 & v8) == 0xFFFFFFFF )
        return *sub_46B984();
    }
  }
  return 0;
}
// 472BCE: variable 'v5' is possibly undefined
// 472C2D: variable 'v9' is possibly undefined
