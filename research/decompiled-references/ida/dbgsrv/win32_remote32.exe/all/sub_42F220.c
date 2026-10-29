/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42F220
// Address: 0x0042F220

//----- (0042F220) --------------------------------------------------------
char __userpurge sub_42F220@<al>(__m128i a1@<xmm0>, char *a2, int a3, unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // esi
  int *v5; // eax
  unsigned int v6; // ebx
  _DWORD *v7; // edi
  _DWORD *v8; // ecx
  _DWORD v10[3]; // [esp+10h] [ebp-1Ch] BYREF
  char v11; // [esp+1Fh] [ebp-Dh]
  int v12; // [esp+28h] [ebp-4h]
  unsigned __int8 v13; // [esp+3Ch] [ebp+10h]

  v4 = dword_4B6B40;
  v10[2] = dword_4B6B40;
  sub_4562D0(dword_4B6B40);
  v12 = 0;
  v5 = off_4B46B4();
  sub_437A40(v5, nullptr, 0);
  v6 = a4;
  v11 = 0;
  v13 = a4 & 1;
  v7 = sub_428030();
  if ( sub_438660(v6, (int)v7, a1, v7[4], a2) )
  {
    sub_42DAC0(v6, a1, (_DWORD *)v7[4], -1, 0, a3);
  }
  else
  {
    v10[0] = &off_48BE8C;
    v10[1] = -1;
    v8 = v10;
    if ( (v6 & 2) == 0 )
      v8 = nullptr;
    v6 >>= 2;
    LOBYTE(v6) = (v6 & 1) == 0;
    v11 = sub_42CA10((int)v7, v6, (int)v8, a3, v6);
  }
  sub_438BA0(v6, (int)v7, v7[4], v13);
  v12 = 1;
  sub_4562F0(v4);
  return v11;
}
// 48BE8C: using guessed type _UNKNOWN *off_48BE8C;
// 4B46B4: using guessed type int *(*off_4B46B4)();
