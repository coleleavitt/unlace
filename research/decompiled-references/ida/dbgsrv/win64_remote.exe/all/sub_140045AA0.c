/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140045AA0
// Address: 0x0000000140045AA0

//----- (0000000140045AA0) ----------------------------------------------------
char __fastcall sub_140045AA0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, unsigned __int64 a5)
{
  int v5; // ebp
  unsigned __int8 *v6; // r15
  _BYTE *v7; // r12
  __int64 v8; // rdx
  _BYTE *v9; // rbx
  int v10; // r14d
  int v11; // esi
  char v12; // di
  char v13; // al
  bool v14; // zf
  bool v15; // zf
  __int64 v17; // [rsp+60h] [rbp+8h]
  __int64 v18; // [rsp+68h] [rbp+10h]

  v17 = a1;
  v5 = 0;
  v6 = (unsigned __int8 *)(a4 + *a3);
  if ( a3[4] )
    v7 = (_BYTE *)(a4 + a3[3]);
  else
    v7 = nullptr;
  if ( !a5 )
    return 1;
  v8 = a2 - (_QWORD)v7;
  v9 = v7;
  v18 = v8;
  while ( 1 )
  {
    v10 = *(_DWORD *)(a1 + 32);
    v11 = *v6;
    v12 = v9[v8];
    if ( (v10 & 1) == 0 )
    {
      v12 = toupper((unsigned __int8)v9[v8]);
      v13 = toupper(v11);
      v8 = v18;
      LOBYTE(v11) = v13;
      a1 = v17;
    }
    if ( v7 )
    {
      if ( (v10 & 0x20) != 0 )
      {
        v14 = ((unsigned __int8)(v11 ^ v12) & *v9) == 0;
        goto LABEL_16;
      }
      if ( v7 == (_BYTE *)255 )
        v15 = (_BYTE)v11 == 0xFF;
      else
        v15 = *v9 == 0;
      if ( v15 )
        goto LABEL_17;
    }
    v14 = v12 == (char)v11;
LABEL_16:
    if ( !v14 )
      return 0;
LABEL_17:
    ++v5;
    ++v9;
    ++v6;
    if ( v5 >= a5 )
      return 1;
  }
}
