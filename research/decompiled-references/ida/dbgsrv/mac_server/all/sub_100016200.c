/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100016200
// Address: 0x0000000100016200

//----- (0000000100016200) ----------------------------------------------------
__int64 __fastcall sub_100016200(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // r8
  unsigned __int64 v6; // r11
  __int64 v7; // r10
  unsigned __int64 v8; // rbx
  unsigned int v9; // r10d

  result = 32 * a2[1];
  if ( result )
  {
    v3 = *a2;
    result += *a2;
    v4 = *(_QWORD *)(a1 + 528);
    v5 = *(_QWORD *)(a1 + 536);
    do
    {
      if ( (v5 & 0x7FFFFFFFFFFFFFFLL) != 0 )
      {
        v6 = *(_QWORD *)(v3 + 16);
        v7 = 0;
        while ( 1 )
        {
          v8 = v6 - *(_QWORD *)(v4 + v7);
          if ( v6 >= *(_QWORD *)(v4 + v7) && v8 <= *(_QWORD *)(v4 + v7 + 8) )
            break;
          v7 += 32;
          if ( 32 * v5 == v7 )
            goto LABEL_3;
        }
        if ( *(_QWORD *)(v4 + v7 + 16) + v8 != -1 )
        {
          v9 = *(_DWORD *)(v3 + 24);
          if ( v9 > *(_DWORD *)(a1 + 768) )
            *(_DWORD *)(a1 + 768) = v9;
        }
      }
LABEL_3:
      v3 += 32;
    }
    while ( v3 != result );
  }
  return result;
}
