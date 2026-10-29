/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_483128
// Address: 0x0000000000483128

//----- (0000000000483128) ----------------------------------------------------
__int64 __fastcall sub_483128(__int64 result, __int64 a2)
{
  __int64 v3; // x20
  unsigned int v4; // w1
  int v7; // w0
  bool v8; // zf
  unsigned __int64 v10; // x23
  int v12; // w0
  unsigned __int64 v14; // x22
  unsigned __int64 v15; // x22
  __int64 v16; // x1
  const void *v17; // x25
  const void *v18; // x24
  void *v19; // x0
  const void *v20; // x24

  if ( result != a2 )
  {
    v3 = result;
    sub_482FB0(result, *(_DWORD *)(a2 + 20) & 0xFFFFFFF);
    v4 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
    if ( v4 == 5 )
    {
      if ( (*(_DWORD *)(v3 + 20) & 0xFFFFFFF) == 5 )
      {
        v16 = *(_QWORD *)(a2 + 32);
        *(_QWORD *)(v3 + 24) = *(_QWORD *)(a2 + 24);
        *(_QWORD *)(v3 + 32) = v16;
        goto LABEL_17;
      }
      if ( !under_debugger )
        sub_492270(3298);
    }
    else
    {
      if ( v4 > 5 )
      {
        if ( v4 > 0xA )
        {
          if ( v4 != 11 )
            goto LABEL_17;
          goto LABEL_19;
        }
        if ( v4 < 9 )
        {
          if ( v4 == 7 )
          {
            if ( (*(_DWORD *)(v3 + 20) & 0xFFFFFFF) != 7 )
            {
              if ( !under_debugger )
                sub_492270(3299);
              goto LABEL_40;
            }
            *(_DWORD *)(v3 + 24) = *(_DWORD *)(a2 + 24);
            *(_BYTE *)(v3 + 28) = *(_BYTE *)(a2 + 28);
            *(_QWORD *)(v3 + 32) = *(_QWORD *)(a2 + 32);
            if ( v3 + 40 != a2 + 40 )
            {
              v15 = *(_QWORD *)(a2 + 48);
              if ( v15 > 1 )
              {
                v20 = *(const void **)(a2 + 40);
                if ( v15 > *(_QWORD *)(v3 + 56) )
                  *(_QWORD *)(v3 + 40) = sub_491288(v3 + 40, *(void **)(v3 + 40), v15, 1u);
                *(_QWORD *)(v3 + 48) = v15;
                memmove(*(void **)(v3 + 40), v20, v15 - 1);
                *(_BYTE *)(*(_QWORD *)(v3 + 40) + v15 - 1) = 0;
              }
              else
              {
                *(_QWORD *)(v3 + 48) = 0;
              }
            }
            goto LABEL_17;
          }
          if ( v4 != 8 )
          {
LABEL_17:
            *(_DWORD *)v3 = *(_DWORD *)a2;
            *(_DWORD *)(v3 + 4) = *(_DWORD *)(a2 + 4);
            *(_QWORD *)(v3 + 8) = *(_QWORD *)(a2 + 8);
            result = *(unsigned __int8 *)(a2 + 16);
            *(_BYTE *)(v3 + 16) = result;
            return result;
          }
LABEL_19:
          if ( v4 != 1 && v4 != 11 && v4 != 8 )
            goto LABEL_41;
          v7 = *(_DWORD *)(v3 + 20) & 0xFFFFFFF;
          v8 = v7 == 1 || v7 == 11;
          if ( !v8 && v7 != 8 )
            goto LABEL_41;
          if ( v3 + 24 != a2 + 24 )
          {
            v10 = *(_QWORD *)(a2 + 32);
            if ( v10 > 1 )
            {
              v17 = *(const void **)(a2 + 24);
              if ( v10 > *(_QWORD *)(v3 + 40) )
                *(_QWORD *)(v3 + 24) = sub_491288(v3 + 24, *(void **)(v3 + 24), v10, 1u);
              *(_QWORD *)(v3 + 32) = v10;
              memmove(*(void **)(v3 + 24), v17, v10 - 1);
              *(_BYTE *)(*(_QWORD *)(v3 + 24) + v10 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(v3 + 32) = 0;
            }
          }
          *(_QWORD *)(v3 + 48) = *(_QWORD *)(a2 + 48);
          *(_QWORD *)(v3 + 56) = *(_QWORD *)(a2 + 56);
          *(_QWORD *)(v3 + 64) = *(_QWORD *)(a2 + 64);
          goto LABEL_17;
        }
        goto LABEL_43;
      }
      if ( v4 != 2 )
      {
        if ( v4 <= 2 )
        {
          if ( v4 != 1 )
            goto LABEL_17;
          goto LABEL_19;
        }
        if ( v4 == 3 )
        {
LABEL_43:
          if ( v4 - 9 <= 1 || v4 == 3 )
          {
            v12 = *(_DWORD *)(v3 + 20) & 0xFFFFFFF;
            if ( (unsigned int)(v12 - 9) <= 1 || v12 == 3 )
            {
              v14 = *(_QWORD *)(a2 + 32);
              if ( v14 > 1 )
              {
                v18 = *(const void **)(a2 + 24);
                v19 = *(void **)(v3 + 24);
                if ( v14 > *(_QWORD *)(v3 + 40) )
                {
                  v19 = sub_491288(v3 + 24, *(void **)(v3 + 24), v14, 1u);
                  *(_QWORD *)(v3 + 24) = v19;
                }
                *(_QWORD *)(v3 + 32) = v14;
                memmove(v19, v18, v14 - 1);
                *(_BYTE *)(*(_QWORD *)(v3 + 24) + v14 - 1) = 0;
              }
              else
              {
                *(_QWORD *)(v3 + 32) = 0;
              }
              goto LABEL_17;
            }
          }
          if ( !under_debugger )
            sub_492270(3297);
          goto LABEL_40;
        }
      }
      if ( ((v4 - 2) & 0xFFFFFFFD) == 0 && (((*(_DWORD *)(v3 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) == 0 )
      {
        *(_DWORD *)(v3 + 24) = *(_DWORD *)(a2 + 24);
        goto LABEL_17;
      }
      if ( !under_debugger )
        sub_492270(3296);
    }
    while ( 1 )
    {
LABEL_40:
      __break(0x3E8u);
LABEL_41:
      if ( !under_debugger )
        sub_492270(3295);
    }
  }
  return result;
}
// 4831C8: conditional instruction was optimized away because w1.4==4
// 52451C: using guessed type char under_debugger;
