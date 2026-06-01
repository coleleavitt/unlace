/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433FC0
// Address: 0x00433FC0

//----- (00433FC0) --------------------------------------------------------
unsigned int __userpurge sub_433FC0@<eax>(
        int a1@<ecx>,
        __m128i a2@<xmm0>,
        __int8 *a3,
        int a4,
        unsigned __int8 *a5,
        char a6,
        char a7)
{
  int v7; // ebx
  unsigned int result; // eax
  __int8 *v10; // esi
  int v11; // eax
  int v12; // edi
  int v13; // ebx
  unsigned __int8 *v14; // eax
  __int8 *v15; // eax
  char v16; // al
  unsigned __int8 *v17; // edi
  char v18; // al
  unsigned __int8 *v19; // ecx
  int *v20; // eax
  const CHAR *v21; // eax
  unsigned int v23; // [esp+1Ch] [ebp-110h]
  char v24; // [esp+20h] [ebp-10Ch]
  _WORD v25[130]; // [esp+24h] [ebp-108h] BYREF

  v7 = a4;
  v23 = (*(_DWORD *)(a1 + 196) >> 2) & 0xFFFFFF01;
  v24 = (*(_DWORD *)(a1 + 196) & 4) != 0;
  if ( !sub_4567D0(a5) )
  {
    v10 = nullptr;
    if ( a7 || a6 != 34 )
    {
      v11 = a1;
    }
    else
    {
      v10 = sub_4332E0(a2, a3, a4, *(unsigned __int8 **)(a1 + 156), (int)a5, v24);
      v11 = a1;
      v12 = *(_DWORD *)(a1 + 144) - 1;
      if ( v10 )
        return (unsigned int)v10;
      v13 = 24 * v12;
      while ( v12 >= 0 )
      {
        v14 = *(unsigned __int8 **)(v13 + *(_DWORD *)(v11 + 140));
        if ( v14 )
          sub_4565E0(v25, 0x104u, v14);
        else
          sub_4566A0(v13, a2, (char *)v25, 260);
        sub_45AD20((char *)v25, 47, 92);
        v15 = sub_4569C0(a3, a4, (char *)v25, a5, 0);
        v10 = v15;
        if ( (_BYTE)v23 )
          v16 = sub_437610(v13, a3, a4);
        else
          v16 = sub_457B00(v15);
        --v12;
        if ( v16 )
        {
          v13 -= 24;
          if ( v10 )
            return (unsigned int)v10;
          v11 = a1;
        }
        else
        {
          v11 = a1;
          v10 = nullptr;
          v13 -= 24;
        }
      }
      v7 = a4;
    }
    v17 = nullptr;
    if ( a7 )
    {
      v18 = sub_4565E0(v25, 0x104u, *(unsigned __int8 **)(v11 + 156));
      v19 = (unsigned __int8 *)v25;
      if ( !v18 )
        v19 = nullptr;
      v17 = v19;
    }
    v20 = off_4B46B4();
    v21 = sub_434370(v20, a3, v7, (int)a5, v17, v24);
    if ( v21 )
      return (unsigned int)v21;
    return (unsigned int)v10;
  }
  result = sub_45ACB0((unsigned int)a3, (char *)a5, a4);
  v10 = (__int8 *)result;
  if ( !(_BYTE)v23 )
    return result;
  if ( !sub_437610(a4, a3, a4) )
    return 0;
  return (unsigned int)v10;
}
// 4B46B4: using guessed type int *(*off_4B46B4)();
