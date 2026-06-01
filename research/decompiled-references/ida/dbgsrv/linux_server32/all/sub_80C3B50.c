/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C3B50
// Address: 0x080C3B50

//----- (080C3B50) --------------------------------------------------------
_DWORD *__usercall sub_80C3B50@<eax>(_DWORD *a1@<eax>, unsigned int a2@<edx>)
{
  _DWORD *v2; // ebp
  int v4; // esi
  unsigned int v5; // ebx
  int v6; // edx
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // edi
  char *v11; // eax
  unsigned int v12; // edx
  int v14; // eax
  int v15; // eax
  int v16; // [esp-10h] [ebp-38h]
  int v17; // [esp-Ch] [ebp-34h]
  int v18; // [esp-8h] [ebp-30h]

  v2 = a1;
  if ( a2 > 0x10FFFF )
  {
LABEL_21:
    *v2 = 0;
    return v2;
  }
  else
  {
    v4 = 0;
    v5 = 13312;
    v6 = 3200;
    v7 = 3200;
    while ( 1 )
    {
      v8 = v7 + ((unsigned int)v7 >> 31);
      v9 = v7 / 2;
      if ( v8 <= 0x18FF )
      {
        v10 = 1114112;
        if ( v9 != 3199 )
          v10 = dword_80E04E0[3 * v9 + 3];
        if ( a2 >= v5 && a2 < v10 )
          break;
      }
      if ( v5 >= a2 )
      {
        v6 = v9 - 1;
        v15 = 3199;
        if ( v6 <= 3199 )
          v15 = v6;
        if ( v15 < v4 )
        {
LABEL_20:
          v2 = a1;
          goto LABEL_21;
        }
      }
      else
      {
        v4 = v9 + 1;
        v14 = 3199;
        if ( v6 <= 3199 )
          v14 = v6;
        if ( v14 < v4 )
          goto LABEL_20;
      }
      v7 = v4 + v6;
      v5 = dword_80E04E0[(v4 + v6) / 2 + ((v4 + v6 + ((unsigned int)(v4 + v6) >> 31)) & 0xFFFFFFFE)];
    }
    v11 = (char *)&qword_811CFF4 + 12 * v9 - 248596;
    v12 = *((_DWORD *)v11 + 1);
    if ( !*((_DWORD *)v11 + 2) )
      v12 += a2 - v5;
    if ( v12 > 0x1D51 )
    {
      if ( !byte_811F8A1 )
        sub_80CFF40(1519, v16, v17, v18);
      JUMPOUT(0x8051EBB);
    }
    *a1 = *((_DWORD *)&qword_811CFF4 + v12 - 52549);
    return a1;
  }
}
// 80C3C87: control flows out of bounds to 8051EBB
// 80C3C99: variable 'v16' is possibly undefined
// 80C3C99: variable 'v17' is possibly undefined
// 80C3C99: variable 'v18' is possibly undefined
// 80E04E0: using guessed type int dword_80E04E0[3];
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811F8A1: using guessed type char byte_811F8A1;
