/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431F80
// Address: 0x0000000000431F80

//----- (0000000000431F80) ----------------------------------------------------
__int64 __fastcall sub_431F80(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  int v3; // eax
  void **v5; // rbp
  _BYTE *v6; // rax
  void *v7; // rsi
  void *v8; // rax

  v1 = *(_QWORD *)(a1 + 232);
  v2 = *(unsigned int *)(*(_QWORD *)(a1 + 224) + 4 * v1 - 4);
  if ( v1 )
    *(_QWORD *)(a1 + 232) = v1 - 1;
  v3 = *(_DWORD *)(a1 + 208);
  if ( v3 - 4 == (_DWORD)v2 )
  {
    if ( (unsigned __int8)sub_4310D0(a1, 5u) == 0xAB )
    {
      v5 = *(void ***)(a1 + 200);
      *(_BYTE *)(a1 + 212) = -85;
      v6 = v5[1];
      v7 = *v5;
      if ( v5[2] < v6 + 1 )
      {
        v8 = sub_481540((__int64)v5, v7, (unsigned __int64)(v6 + 1), 1u);
        *v5 = v8;
        v7 = v8;
        v6 = v5[1];
      }
      v6[(_QWORD)v7] = -85;
      v5[1] = (char *)v5[1] + 1;
      ++*(_DWORD *)(a1 + 208);
      sub_4313E0(a1, 0);
      sub_4313E0(a1, 0);
      return 0;
    }
    else
    {
      sub_4311A0(a1);
      return 0;
    }
  }
  else
  {
    sub_438BA0(*(__int64 **)(a1 + 200), v2, v3 - 4 - v2);
    *(_BYTE *)(a1 + 212) = -1;
    return 0;
  }
}
