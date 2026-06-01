/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B36E
// Address: 0x0046B36E

//----- (0046B36E) --------------------------------------------------------
char __thiscall sub_46B36E(int this, int a2)
{
  WCHAR *v3; // edi
  int v4; // ebx
  WCHAR v5; // ax
  _DWORD *v7; // [esp-4h] [ebp-20h]
  int v8; // [esp+Ch] [ebp-10h] BYREF
  _BYTE MultiByteStr[8]; // [esp+10h] [ebp-Ch] BYREF

  if ( *(_BYTE *)(this + 60) && *(int *)(this + 56) > 0 )
  {
    v3 = *(WCHAR **)(this + 52);
    v4 = 0;
    while ( 1 )
    {
      v7 = *(_DWORD **)(this + 8);
      v5 = *v3++;
      v8 = 0;
      if ( sub_4796DB(&v8, (__m128i *)MultiByteStr, 6u, v5, v7) || !v8 )
        break;
      sub_46B43F((int *)(this + 1096), (unsigned int)MultiByteStr, v8, (_DWORD *)(this + 24), this + 12);
      if ( ++v4 == *(_DWORD *)(this + 56) )
        return 1;
    }
    *(_DWORD *)(this + 24) = -1;
  }
  else
  {
    sub_46B43F((int *)(this + 1096), *(_DWORD *)(this + 52), *(_DWORD *)(this + 56), (_DWORD *)(this + 24), this + 12);
  }
  return 1;
}
