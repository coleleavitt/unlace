/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: base64_encode
// Address: 0x00000000000AD0DC

//----- (00000000000AD0DC) ----------------------------------------------------
__int64 __fastcall base64_encode(pthread_mutex_t *a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  __int64 result; // x0
  unsigned __int8 *v5; // x21
  unsigned __int64 v6; // x20
  unsigned int v7; // w23
  int v8; // w24
  unsigned __int64 v9; // x26
  unsigned int v10; // t1
  void *align; // x1
  __int64 v12; // x8
  char v13; // w28
  __int64 v14; // x27
  __int64 v15; // x9
  char v16; // w22
  __int64 v17; // x21
  _BYTE *v18; // x0
  unsigned int i; // w21
  void *v20; // x1
  __int64 v21; // x8
  __int64 v22; // x24

  result = 0;
  if ( a1 )
  {
    v5 = a2;
    if ( a2 )
    {
      v6 = a3;
      if ( (a3 & 0x8000000000000000LL) == 0 )
      {
        if ( a3 % 3 )
          v7 = (a3 % 3) ^ 3;
        else
          v7 = 0;
        if ( a3 )
        {
          v8 = 0;
          LODWORD(v9) = 0;
          do
          {
            v10 = *v5++;
            v8 += 8;
            v9 = (unsigned int)((_DWORD)v9 << 8) | (unsigned __int64)v10;
            if ( v8 >= 7 )
            {
              do
              {
                align = (void *)a1->__align;
                v12 = *(&a1->__align + 1);
                v8 -= 6;
                v13 = aAbcdefghijklmn[(v9 >> v8) & 0x3F];
                if ( v12 )
                  v14 = v12 - 1;
                else
                  v14 = 0;
                if ( *(&a1->__align + 2) < (unsigned __int64)(v14 + 2) )
                {
                  align = qvector_reserve(a1, align, v14 + 2, 1u);
                  a1->__align = (__int64)align;
                }
                *(&a1->__align + 1) = v14 + 2;
                *((_BYTE *)align + v14) = v13;
                *(_BYTE *)(a1->__align + v14 + 1) = 0;
              }
              while ( v8 > 6 );
            }
            --v6;
          }
          while ( v6 );
          if ( v8 )
          {
            v15 = *(&a1->__align + 1);
            v16 = aAbcdefghijklmn[((_DWORD)v9 << (6 - v8)) & 0x3FLL];
            if ( v15 )
              v17 = v15 - 1;
            else
              v17 = 0;
            if ( *(&a1->__align + 2) >= (unsigned __int64)(v17 + 2) )
            {
              v18 = (_BYTE *)a1->__align;
            }
            else
            {
              v18 = qvector_reserve(a1, (void *)a1->__align, v17 + 2, 1u);
              a1->__align = (__int64)v18;
            }
            *(&a1->__align + 1) = v17 + 2;
            v18[v17] = v16;
            *(_BYTE *)(a1->__align + v17 + 1) = 0;
          }
        }
        if ( v7 )
        {
          for ( i = 0; i < v7; ++i )
          {
            v20 = (void *)a1->__align;
            v21 = *(&a1->__align + 1);
            if ( v21 )
              v22 = v21 - 1;
            else
              v22 = 0;
            if ( *(&a1->__align + 2) < (unsigned __int64)(v22 + 2) )
            {
              v20 = qvector_reserve(a1, v20, v22 + 2, 1u);
              a1->__align = (__int64)v20;
            }
            *(&a1->__align + 1) = v22 + 2;
            *((_BYTE *)v20 + v22) = 61;
            *(_BYTE *)(a1->__align + v22 + 1) = 0;
          }
        }
        return 1;
      }
    }
  }
  return result;
}
