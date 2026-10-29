/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A820
// Address: 0x000000000042A820

//----- (000000000042A820) ----------------------------------------------------
__int64 __fastcall sub_42A820(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r12
  int v6; // ebp
  __int64 v8; // r13
  int v9; // r13d
  unsigned __int64 v10; // rdx
  __int64 v11; // r12

  v2 = *(unsigned __int8 *)(a1 + 32);
  if ( !(_BYTE)v2 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(20082);
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = v4 + 56 * v3;
  if ( 56 * v3 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v4 + 8) )
      {
        v6 = strcmp(*(const char **)v4, "GNU");
        if ( !v6 && *(_DWORD *)(v4 + 48) == 3 )
          break;
      }
      v4 += 56;
      if ( v4 == v5 )
        return 0;
    }
    v8 = *(_QWORD *)(v4 + 32);
    if ( v8 )
    {
      v9 = v8 - 1;
      *(_QWORD *)(a2 + 8) = 0;
      v10 = 2 * v9;
      if ( *(_QWORD *)(a2 + 16) < v10 )
        *(_QWORD *)a2 = sub_481540(a2, *(void **)a2, v10, 1u);
      if ( v9 > 0 )
      {
        v11 = *(_QWORD *)(v4 + 32);
        if ( v11 )
        {
          v11 = 0;
          goto LABEL_15;
        }
        while ( 1 )
        {
          sub_42A760((void **)a2, "%02x", v6);
          if ( v9 <= (int)++v11 )
            break;
LABEL_15:
          v6 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 24) + v11);
        }
      }
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  else
  {
    return 0;
  }
  return v2;
}
// 4C94E1: using guessed type char byte_4C94E1;
