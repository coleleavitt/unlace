/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001D550
// Address: 0x000000010001D550

//----- (000000010001D550) ----------------------------------------------------
unsigned __int64 __fastcall sub_10001D550(__int64 a1, unsigned __int64 a2, unsigned __int8 *a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int8 v6; // r15
  __int64 v7; // rdx
  unsigned __int8 *v8; // r15
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
    result = *(_QWORD *)a1;
    v5 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)a1 <= (unsigned __int64)a3 && *(_QWORD *)a1 + v5 > (unsigned __int64)a3 )
    {
      v6 = *a3;
      if ( v5 < a2 )
      {
        *(_QWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 1u);
        v4 = *(_QWORD *)(a1 + 8);
      }
      result = v4 - a2;
      if ( v4 < a2 )
      {
        v7 = ((_BYTE)a2 - (_BYTE)v4) & 3;
        if ( (((_BYTE)a2 - (_BYTE)v4) & 3) != 0 )
        {
          do
          {
            *(_BYTE *)(*(_QWORD *)a1 + v4++) = v6;
            --v7;
          }
          while ( v7 );
        }
        if ( result <= 0xFFFFFFFFFFFFFFFCLL )
        {
          do
          {
            *(_BYTE *)(*(_QWORD *)a1 + v4) = v6;
            *(_BYTE *)(*(_QWORD *)a1 + v4 + 1) = v6;
            *(_BYTE *)(*(_QWORD *)a1 + v4 + 2) = v6;
            result = *(_QWORD *)a1;
            *(_BYTE *)(*(_QWORD *)a1 + v4 + 3) = v6;
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
        result = (unsigned __int64)qvector_reserve(a1, *(void **)a1, a2, 1u);
        a3 = v8;
        *(_QWORD *)a1 = result;
        v4 = *(_QWORD *)(a1 + 8);
      }
      v9 = v4 - a2;
      if ( v4 < a2 )
      {
        result = *a3;
        v10 = ((_BYTE)a2 - (_BYTE)v4) & 3;
        if ( (((_BYTE)a2 - (_BYTE)v4) & 3) != 0 )
        {
          do
          {
            *(_BYTE *)(*(_QWORD *)a1 + v4++) = result;
            --v10;
          }
          while ( v10 );
        }
        if ( v9 <= 0xFFFFFFFFFFFFFFFCLL )
        {
          do
          {
            *(_BYTE *)(*(_QWORD *)a1 + v4) = result;
            *(_BYTE *)(*(_QWORD *)a1 + v4 + 1) = result;
            *(_BYTE *)(*(_QWORD *)a1 + v4 + 2) = result;
            *(_BYTE *)(*(_QWORD *)a1 + v4 + 3) = result;
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
