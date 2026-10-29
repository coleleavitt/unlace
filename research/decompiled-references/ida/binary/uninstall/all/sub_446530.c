__int64 __fastcall sub_446530(
        __int64 a1,
        unsigned __int8 *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  unsigned __int64 v10; // r13
  unsigned __int8 *v11; // rbx
  int v12; // r12d
  _BYTE *v13; // rbp
  int v14; // r15d
  unsigned __int64 v15; // r14
  __int16 v16; // dx
  __int64 v18; // rdi
  unsigned int v19; // [rsp+Ch] [rbp-3Ch]

  v10 = (unsigned __int64)&a2[a3];
  v11 = a2;
  v12 = 0;
  v13 = a6;
  v14 = (int)a6;
  v19 = 0;
  v15 = (unsigned __int64)&a6[a7 - 3];
  if ( (unsigned __int64)a2 < v10 )
  {
    while ( (unsigned __int64)v13 <= v15 )
    {
      v16 = *v11;
      if ( (unsigned __int16)(v16 - 1) > 0x7Eu )
      {
        v18 = *v11++;
        ++v12;
        v13 += (int)sub_49BA90(v18, v13);
      }
      else
      {
        *v13 = v16;
        ++v11;
        ++v13;
        ++v12;
      }
      if ( (unsigned __int64)v11 >= v10 )
        goto LABEL_6;
    }
    v19 = -4;
  }
LABEL_6:
  *a8 = (_DWORD)v11 - (_DWORD)a2;
  *a9 = (_DWORD)v13 - v14;
  *a10 = v12;
  return v19;
}

