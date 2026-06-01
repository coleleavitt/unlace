/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80E44
// Address: 0x0000000000080E44

//----- (0000000000080E44) ----------------------------------------------------
_QWORD *__fastcall sub_80E44(_QWORD *result, __int64 a2, unsigned __int8 a3, int a4)
{
  __int64 v4; // x9
  __int64 v5; // x9
  _QWORD *v6; // x19
  _BYTE *v8; // x8
  int v9; // w24
  unsigned int v10; // w21
  unsigned __int8 *v11; // x23
  void *v12; // x1
  __int64 v13; // x8
  __int64 v14; // x25
  int v15; // t1
  int v16; // t1

  v4 = result[7];
  if ( *(_QWORD *)(v4 + 56LL * a4 + 8) > (unsigned __int64)a3 )
  {
    v5 = *(_QWORD *)(v4 + 56LL * a4);
    v6 = result;
    if ( *(_QWORD *)(v5 + 24LL * a3 + 8) )
    {
      v8 = *(_BYTE **)(v5 + 24LL * a3);
      v9 = (unsigned __int8)*v8;
      if ( *v8 )
      {
        v10 = a4 - 1;
        v11 = v8 + 1;
        do
        {
          while ( (char)v9 < -1 )
          {
            result = (_QWORD *)sub_80E44(v6, a2, v9 ^ 0xFFFFFF80, v10);
            v16 = *v11++;
            v9 = v16;
            if ( !v16 )
              return result;
          }
          v12 = *(void **)a2;
          v13 = *(_QWORD *)(a2 + 8);
          if ( v13 )
            v14 = v13 - 1;
          else
            v14 = 0;
          if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v14 + 2) )
          {
            result = qvector_reserve((pthread_mutex_t *)a2, v12, v14 + 2, 1u);
            v12 = result;
            *(_QWORD *)a2 = result;
          }
          *(_QWORD *)(a2 + 8) = v14 + 2;
          *((_BYTE *)v12 + v14) = v9;
          *(_BYTE *)(*(_QWORD *)a2 + v14 + 1) = 0;
          v15 = *v11++;
          v9 = v15;
        }
        while ( v15 );
      }
    }
  }
  return result;
}
// F154B: using guessed type char byte_F154B;
