/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E97C
// Address: 0x000000000004E97C

//----- (000000000004E97C) ----------------------------------------------------
unsigned __int64 __fastcall sub_4E97C(unsigned __int64 result, __int64 a2)
{
  unsigned int v2; // w8
  unsigned __int64 v3; // x19
  unsigned __int64 v4; // x8
  unsigned __int64 v5; // x10
  unsigned __int64 v6; // x9
  int v7; // w8
  unsigned int v8; // w20
  unsigned __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x9
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  unsigned __int64 v14; // x9

  if ( *(_BYTE *)(result + 168) )
  {
    if ( *(_QWORD *)(result + 40) <= (unsigned __int64)(unsigned int)a2 )
      return 0;
    else
      return *(_QWORD *)(result + 32) + ((unsigned __int64)(unsigned int)a2 << 6);
  }
  if ( !under_debugger )
    result = (unsigned __int64)interr(20099);
  __break(1u);
  v2 = *(unsigned __int16 *)(result + 54);
  v3 = result;
  *(_DWORD *)(result + 88) = 0;
  if ( v2 == 0xFFFF )
  {
    v4 = *(_QWORD *)(a2 + 288);
    if ( v4 > result || v4 + 96LL * *(_QWORD *)(a2 + 296) < result )
    {
      if ( under_debugger )
      {
LABEL_31:
        __break(1u);
        return sub_4EB14(result, a2);
      }
      result = (unsigned __int64)interr(20088);
    }
    else
    {
      v5 = *(_QWORD *)(a2 + 312);
      v6 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(result - v4) >> 5);
      if ( v6 >= v5 )
      {
        v7 = 2;
      }
      else
      {
        LODWORD(v5) = 0;
        v7 = 1;
      }
      v8 = v6 - v5;
      if ( v7 == 2 )
      {
        v9 = *(unsigned int *)(a2 + 208);
        if ( !(_DWORD)v9 )
          return sub_4EC28((__int64)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", v8);
      }
      else
      {
        v9 = *(unsigned int *)(a2 + 204);
        if ( !(_DWORD)v9 )
          return sub_4EC28((__int64)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", v8);
      }
      if ( *(_BYTE *)(a2 + 248) )
      {
        if ( *(_QWORD *)(a2 + 120) > v9 )
        {
          v10 = *(_QWORD *)(a2 + 112);
          if ( v10 + (v9 << 6) )
          {
            v11 = v10 + (v9 << 6);
            v12 = *(_QWORD *)(v11 + 24);
            if ( v12 )
            {
              v13 = *(_QWORD *)(v11 + 32);
              v14 = 4LL * v8;
              if ( v14 < v13 )
              {
                result = sub_4EB14(a2, v12 + v14);
                *(_DWORD *)(v3 + 88) = result;
                if ( (_DWORD)result )
                  return result;
              }
            }
          }
        }
        return sub_4EC28((__int64)"AUTOHIDE SESSION\nIllegal section indirect index for symbol %u", v8);
      }
    }
    if ( !under_debugger )
      result = (unsigned __int64)interr(20099);
    goto LABEL_31;
  }
  if ( v2 >> 8 <= 0xFE )
    *(_DWORD *)(result + 88) = v2;
  return result;
}
// 4EA5C: conditional instruction was optimized away because w8.4==1
// 4EA04: variable 'a2' is possibly undefined
// 168DF0: using guessed type char under_debugger;
