/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100023B90
// Address: 0x0000000100023B90

//----- (0000000100023B90) ----------------------------------------------------
void *__fastcall sub_100023B90(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  void *result; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  void *v6; // r15
  __int64 v7; // rdx
  _QWORD *v8; // r15
  unsigned __int64 v9; // r8
  __int64 v10; // rdx

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 > a2 )
  {
LABEL_2:
    *(_QWORD *)(a1 + 8) = a2;
    return result;
  }
  if ( v4 < a2 )
  {
    result = *(void **)a1;
    v5 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)a1 <= (unsigned __int64)a3 && *(_QWORD *)a1 + 8 * v5 > (unsigned __int64)a3 )
    {
      v6 = (void *)*a3;
      if ( v5 < a2 )
      {
        *(_QWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 8u);
        v4 = *(_QWORD *)(a1 + 8);
      }
      result = (void *)(v4 - a2);
      if ( v4 < a2 )
      {
        v7 = ((_BYTE)a2 - (_BYTE)v4) & 3;
        if ( (((_BYTE)a2 - (_BYTE)v4) & 3) != 0 )
        {
          do
          {
            *(_QWORD *)(*(_QWORD *)a1 + 8 * v4++) = v6;
            --v7;
          }
          while ( v7 );
        }
        if ( (unsigned __int64)result <= 0xFFFFFFFFFFFFFFFCLL )
        {
          do
          {
            *(_QWORD *)(*(_QWORD *)a1 + 8 * v4) = v6;
            *(_QWORD *)(*(_QWORD *)a1 + 8 * v4 + 8) = v6;
            *(_QWORD *)(*(_QWORD *)a1 + 8 * v4 + 16) = v6;
            result = *(void **)a1;
            *(_QWORD *)(*(_QWORD *)a1 + 8 * v4 + 24) = v6;
            v4 += 4LL;
          }
          while ( a2 != v4 );
        }
      }
    }
    else
    {
      if ( v5 < a2 )
      {
        v8 = a3;
        result = qvector_reserve(a1, *(void **)a1, a2, 8u);
        a3 = v8;
        *(_QWORD *)a1 = result;
        v4 = *(_QWORD *)(a1 + 8);
      }
      v9 = v4 - a2;
      if ( v4 < a2 )
      {
        result = (void *)*a3;
        v10 = ((_BYTE)a2 - (_BYTE)v4) & 3;
        if ( (((_BYTE)a2 - (_BYTE)v4) & 3) != 0 )
        {
          do
          {
            *(_QWORD *)(*(_QWORD *)a1 + 8 * v4++) = result;
            --v10;
          }
          while ( v10 );
        }
        if ( v9 <= 0xFFFFFFFFFFFFFFFCLL )
        {
          do
          {
            *(_QWORD *)(*(_QWORD *)a1 + 8 * v4) = result;
            *(_QWORD *)(*(_QWORD *)a1 + 8 * v4 + 8) = result;
            *(_QWORD *)(*(_QWORD *)a1 + 8 * v4 + 16) = result;
            *(_QWORD *)(*(_QWORD *)a1 + 8 * v4 + 24) = result;
            v4 += 4LL;
          }
          while ( a2 != v4 );
        }
      }
    }
    goto LABEL_2;
  }
  return result;
}
