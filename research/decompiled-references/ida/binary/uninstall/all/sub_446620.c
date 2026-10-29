__int64 __fastcall sub_446620(
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
  int v16; // edx
  unsigned int v18; // [rsp+Ch] [rbp-4Ch]
  int v19; // [rsp+10h] [rbp-48h]
  __int16 v21[25]; // [rsp+26h] [rbp-32h] BYREF

  v10 = (unsigned __int64)&a2[a3];
  v11 = v10;
  v12 = a6;
  v13 = a2;
  v18 = 0;
  if ( (a4 & 2) == 0 )
    v11 = v10 - 3;
  v14 = 0;
  v19 = (int)a6;
  v15 = (unsigned __int64)&a6[a7 - 1];
  while ( (unsigned __int64)v13 < v10 )
  {
    if ( (unsigned __int64)v13 > v11 && !(unsigned int)sub_49BD40(v13, (unsigned int)(v10 - (_DWORD)v13)) )
    {
      v18 = -1;
      break;
    }
    if ( *v13 > 0xBFu )
    {
      v16 = sub_49BBC0(v13, v21);
    }
    else
    {
      v16 = 1;
      v21[0] = (char)*v13;
    }
    if ( v21[0] > 0xFFu )
    {
      if ( (a4 & 4) != 0 )
      {
        v18 = -3;
        break;
      }
      v21[0] = 63;
    }
    if ( (unsigned __int64)v12 > v15 )
    {
      v18 = -4;
      break;
    }
    ++v14;
    *v12++ = v21[0];
    v13 += v16;
  }
  *a8 = (_DWORD)v13 - (_DWORD)a2;
  *a9 = (_DWORD)v12 - v19;
  *a10 = v14;
  return v18;
}

