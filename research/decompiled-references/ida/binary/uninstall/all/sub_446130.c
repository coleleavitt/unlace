__int64 __fastcall sub_446130(
        __int64 a1,
        _BYTE *a2,
        int a3,
        char a4,
        __int64 a5,
        _BYTE *a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r15
  _BYTE *v12; // rbp
  _BYTE *v13; // rbx
  int v14; // r13d
  unsigned __int64 v15; // r14
  __int16 v16; // ax
  _BYTE *v17; // rsi
  _BYTE *v18; // rbx
  unsigned int v20; // [rsp+Ch] [rbp-4Ch]
  int v21; // [rsp+10h] [rbp-48h]
  int v22; // [rsp+18h] [rbp-40h]
  _WORD v23[25]; // [rsp+26h] [rbp-32h] BYREF

  v10 = (unsigned __int64)&a2[a3];
  v11 = v10;
  v12 = a2;
  v13 = a6;
  if ( (a4 & 2) == 0 )
    v11 = v10 - 3;
  v14 = 0;
  v22 = (int)a2;
  v21 = (int)a6;
  v20 = 0;
  v15 = (unsigned __int64)&a6[a7 - 2];
  while ( (unsigned __int64)v12 < v10 )
  {
    if ( (unsigned __int64)v12 > v11 && !(unsigned int)sub_49BD40(v12, (unsigned int)(v10 - (_DWORD)v12)) )
    {
      v20 = -1;
      break;
    }
    if ( (unsigned __int64)v13 > v15 )
    {
      v20 = -4;
      break;
    }
    LOBYTE(v16) = *v12;
    if ( *v12 > 0xBFu )
    {
      v17 = &v12[(int)sub_49BBC0(v12, v23)];
      v16 = v23[0];
    }
    else
    {
      v16 = (char)v16;
      v17 = v12 + 1;
      v23[0] = (char)v16;
    }
    *v13 = v16;
    v18 = v13 + 1;
    *v18 = HIBYTE(v16);
    v12 = v17;
    v13 = v18 + 1;
    ++v14;
  }
  *a8 = (_DWORD)v12 - v22;
  *a9 = (_DWORD)v13 - v21;
  *a10 = v14;
  return v20;
}

