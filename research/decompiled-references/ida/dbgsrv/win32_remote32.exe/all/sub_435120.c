/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_435120
// Address: 0x00435120

//----- (00435120) --------------------------------------------------------
int __userpurge sub_435120@<eax>(int a1@<ecx>, int a2@<ebx>, int a3, char a4)
{
  bool v5; // zf
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  int v10; // eax
  const char *v11; // eax
  __int8 *v12; // eax
  __int8 *v13; // edx
  __int8 *v14; // ecx
  __int8 v15; // al
  __int8 *v16; // edi
  int v17; // [esp-4h] [ebp-44h]
  int v18; // [esp-4h] [ebp-44h]
  int v19; // [esp+0h] [ebp-40h]
  __int8 *v20; // [esp+Ch] [ebp-34h]
  _OWORD v21[2]; // [esp+10h] [ebp-30h] BYREF
  int v22; // [esp+3Ch] [ebp-4h]

  sub_4383D0(a1);
  if ( !a3 )
  {
    v5 = *(_DWORD *)(a1 + 284) == 0;
    *(_BYTE *)(a1 + 320) = 0;
    if ( v5 )
    {
      v6 = sub_4627C2(0x20u);
      v7 = v6;
      v22 = 0;
      if ( v6 )
      {
        *v6 = 0;
        v6[1] = 0;
        v6[2] = 0;
        v8 = sub_4627C2(0x30u);
        *v8 = v8;
        v8[1] = v8;
        v7[1] = v8;
        v7[3] = 0;
        v7[4] = 0;
        v7[5] = 0;
        v7[6] = 7;
        v7[7] = 8;
        *v7 = 1065353216;
        v17 = v7[1];
        LOBYTE(v22) = 2;
        sub_40B9C0((int)(v7 + 3), 0x10u, v17);
      }
      else
      {
        v7 = nullptr;
      }
      v22 = -1;
      *(_DWORD *)(a1 + 284) = v7;
    }
    if ( sub_437030(a1, a2, (_DWORD **)off_48D0E8) )
    {
      if ( !byte_4B6B30 && (a4 & 1) == 0 )
        return 0;
      if ( sub_437030(a1, a2, (_DWORD **)off_48D1C0) )
      {
        if ( byte_4B6B30 )
        {
          v10 = dword_4B46FC;
          if ( dword_4B46FC == -1 )
          {
            dword_4B46FC = (unsigned __int8)((_DWORD (__cdecl *)(int))off_4B46B0)(53);
            off_4B46B0(52, &xmmword_4B6BE8, 32, v18, v19);
            v10 = dword_4B46FC;
          }
          if ( v10 )
          {
            sub_431BE0(a1, a2, "__QT__", "1", 0, 0, nullptr);
            v11 = "__GUI__";
          }
          else
          {
            v11 = "__TXT__";
          }
          sub_431BE0(a1, a2, v11, "1", 0, 0, nullptr);
          sub_431BE0(a1, a2, "__IDA_VERSION__", (const char *)&xmmword_4B6BE8, 0, 0, nullptr);
          v21[0] = xmmword_4B6BE8;
          v21[1] = xmmword_4B6BF8;
          v12 = sub_464F10((char *)v21, 0x2Eu);
          v13 = v12;
          if ( v12 )
          {
            v14 = v12 + 1;
            v20 = v12 + 1;
            do
            {
              v15 = *v14;
              v16 = v13;
              *v13++ = *v14++;
            }
            while ( v15 );
            if ( (unsigned int)(v14 - v20 - 1) <= 1 )
            {
              *v16 = 48;
              *v13 = 0;
            }
          }
          sub_431BE0(a1, a2, "__IDAVER__", (const char *)v21, 0, 0, nullptr);
        }
        return 0;
      }
    }
    return sub_45C9E0();
  }
  *(_DWORD *)(a1 + 284) = a3;
  *(_BYTE *)(a1 + 320) = 1;
  return 0;
}
// 435276: variable 'v18' is possibly undefined
// 435276: variable 'v19' is possibly undefined
// 48D0E8: using guessed type char *off_48D0E8[24];
// 48D1C0: using guessed type char *off_48D1C0[4];
// 4B46B0: using guessed type _DWORD (__cdecl *off_4B46B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 4B46FC: using guessed type int dword_4B46FC;
// 4B6B30: using guessed type char byte_4B6B30;
// 4B6BE8: using guessed type __int128 xmmword_4B6BE8;
// 4B6BF8: using guessed type __int128 xmmword_4B6BF8;
