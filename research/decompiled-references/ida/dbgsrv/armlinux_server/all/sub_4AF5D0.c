/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AF5D0
// Address: 0x00000000004AF5D0

//----- (00000000004AF5D0) ----------------------------------------------------
__int64 __fastcall sub_4AF5D0(_BYTE *a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  _BYTE *v5; // x19
  int v7; // w23
  unsigned __int64 v8; // x21
  unsigned __int64 v9; // x24
  __int64 v10; // x25
  int v11; // w0
  int v12; // w1
  unsigned __int64 *v13; // x0
  int v14; // w0
  unsigned __int8 **v16; // x0
  __int64 v17; // x1
  int v18; // w0
  int v19; // t1

  v5 = a1;
  v7 = *(_DWORD *)(a4 + 24);
  v8 = (unsigned __int64)&a1[a2 - 1];
  v9 = *(_QWORD *)a4;
  v10 = *(_QWORD *)(a4 + 8);
LABEL_3:
  while ( 1 )
  {
    v11 = *a3;
    if ( !*a3 )
      break;
    while ( 1 )
    {
      if ( (unsigned __int64)v5 >= v8 )
LABEL_17:
        sub_4AF4D0(a1, (__int64)v5);
      if ( v11 != 37 )
        goto LABEL_2;
      v12 = a3[1];
      if ( v12 == 115 )
      {
        if ( v7 < 0 )
        {
          if ( v7 + 8 <= 0 )
          {
            v16 = (unsigned __int8 **)(v10 + v7);
            v7 += 8;
          }
          else
          {
            v16 = (unsigned __int8 **)v9;
            v7 += 8;
            v9 = (v9 + 15) & 0xFFFFFFFFFFFFFFF8LL;
          }
        }
        else
        {
          v16 = (unsigned __int8 **)v9;
          v9 = (v9 + 15) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v17 = (__int64)*v16;
        v18 = **v16;
        if ( v18 )
        {
          while ( 1 )
          {
            *v5++ = v18;
            v19 = *(unsigned __int8 *)++v17;
            LOBYTE(v18) = v19;
            if ( !v19 )
              break;
            if ( (_BYTE *)v8 == v5 )
              sub_4AF4D0(a1, v8);
          }
        }
        a3 += 2;
        goto LABEL_3;
      }
      if ( v12 != 122 )
        break;
      if ( a3[2] != 117 )
        goto LABEL_2;
      if ( v7 < 0 )
      {
        if ( v7 + 8 <= 0 )
        {
          v13 = (unsigned __int64 *)(v10 + v7);
          v7 += 8;
        }
        else
        {
          v13 = (unsigned __int64 *)v9;
          v7 += 8;
          v9 = (v9 + 15) & 0xFFFFFFFFFFFFFFF8LL;
        }
      }
      else
      {
        v13 = (unsigned __int64 *)v9;
        v9 = (v9 + 15) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v14 = sub_4AF548(v5, v8 - (_QWORD)v5, *v13);
      if ( v14 <= 0 )
        goto LABEL_17;
      a3 += 3;
      v5 += v14;
      v11 = *a3;
      if ( !*a3 )
        goto LABEL_16;
    }
    if ( v12 == 37 )
      ++a3;
LABEL_2:
    *v5 = v11;
    ++a3;
    ++v5;
  }
LABEL_16:
  *v5 = 0;
  return (unsigned int)((_DWORD)v5 - (_DWORD)a1);
}
