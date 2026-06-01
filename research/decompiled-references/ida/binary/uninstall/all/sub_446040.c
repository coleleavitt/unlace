__int64 __fastcall sub_446040(
        __int64 a1,
        unsigned __int16 *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  unsigned __int64 v10; // rax
  unsigned __int16 *v11; // rbx
  _BYTE *v12; // rbp
  unsigned __int64 v13; // r13
  int v14; // r12d
  unsigned __int64 v15; // r14
  unsigned __int16 v16; // dx
  unsigned int v18; // [rsp+Ch] [rbp-3Ch]
  int v19; // [rsp+10h] [rbp-38h]

  v10 = a3;
  v11 = a2;
  v12 = a6;
  v18 = 0;
  if ( (a3 & 1) != 0 )
  {
    v18 = -1;
    v10 = a3 & 0xFFFFFFFFFFFFFFFELL;
  }
  v13 = (unsigned __int64)a2 + v10;
  v14 = 0;
  v19 = (int)a6;
  v15 = (unsigned __int64)&a6[a7 - 3];
  if ( a2 < (unsigned __int16 *)((char *)a2 + v10) )
  {
    while ( (unsigned __int64)v12 <= v15 )
    {
      v16 = *v11;
      if ( (unsigned __int16)(*v11 - 1) > 0x7Eu )
        v12 += (int)sub_49BA90(v16, v12);
      else
        *v12++ = v16;
      ++v11;
      ++v14;
      if ( (unsigned __int64)v11 >= v13 )
        goto LABEL_8;
    }
    v18 = -4;
  }
LABEL_8:
  *a8 = (_DWORD)v11 - (_DWORD)a2;
  *a9 = (_DWORD)v12 - v19;
  *a10 = v14;
  return v18;
}

