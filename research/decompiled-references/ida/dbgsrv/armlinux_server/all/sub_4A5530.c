/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5530
// Address: 0x00000000004A5530

//----- (00000000004A5530) ----------------------------------------------------
__int64 __fastcall sub_4A5530(__int64 a1)
{
  int v1; // w0
  __int64 v2; // x7
  int v3; // w1
  __int64 v4; // x2
  int v5; // w3
  __int64 v6; // x0
  int v7; // w0
  int v8; // w3
  int v9; // w4
  bool v10; // zf
  bool v11; // zf
  __int64 v12; // x4
  int v13; // w5
  __int64 v14; // x3
  __int64 result; // x0
  __int64 v16; // x3

  v1 = sub_4A5320((unsigned __int8 **)(a1 + 24));
  if ( v1 > 0 )
  {
    v3 = v1;
    v4 = *(_QWORD *)(v2 + 24);
    if ( *(_QWORD *)(v2 + 8) - v4 < v1 )
      goto LABEL_20;
    v5 = *(_DWORD *)(v2 + 16);
    v6 = v4 + v1;
    *(_QWORD *)(v2 + 24) = v6;
    if ( (v5 & 4) != 0 && *(_BYTE *)(v4 + v3) == 36 )
    {
      *(_QWORD *)(v2 + 24) = v6 + 1;
      v7 = *(_DWORD *)(v2 + 40);
      v8 = *(_DWORD *)(v2 + 44);
      if ( v3 > 9 )
        goto LABEL_6;
    }
    else
    {
      v7 = *(_DWORD *)(v2 + 40);
      v8 = *(_DWORD *)(v2 + 44);
      if ( v3 > 9 )
      {
LABEL_6:
        if ( *(_QWORD *)v4 == 0x5F4C41424F4C475FLL )
        {
          v9 = *(unsigned __int8 *)(v4 + 8);
          v10 = v9 == 46 || v9 == 95;
          v11 = v10 || v9 == 36;
          if ( v11 && *(_BYTE *)(v4 + 9) == 78 )
          {
            *(_DWORD *)(v2 + 80) = *(_DWORD *)(v2 + 80) + 22 - v3;
            if ( v8 > v7 )
            {
              v16 = *(_QWORD *)(v2 + 32);
              *(_DWORD *)(v2 + 40) = v7 + 1;
              result = v16 + 24LL * v7;
              *(_DWORD *)(result + 4) = 0;
              *(_DWORD *)result = 0;
              *(_QWORD *)(result + 8) = "(anonymous namespace)";
              *(_DWORD *)(result + 16) = 21;
              goto LABEL_19;
            }
            goto LABEL_20;
          }
        }
      }
    }
    if ( v8 > v7 )
    {
      v12 = *(_QWORD *)(v2 + 32);
      v13 = v7 + 1;
      v14 = 24LL * v7;
      result = v12 + v14;
      *(_DWORD *)(v12 + v14 + 4) = 0;
      *(_DWORD *)(v2 + 40) = v13;
      if ( v4 )
      {
        *(_DWORD *)(result + 4) = 0;
        *(_DWORD *)(v12 + v14) = 0;
        *(_QWORD *)(result + 8) = v4;
        *(_DWORD *)(result + 16) = v3;
LABEL_19:
        *(_QWORD *)(v2 + 72) = result;
        return result;
      }
    }
LABEL_20:
    result = 0;
    goto LABEL_19;
  }
  return 0;
}
// 4A5554: variable 'v2' is possibly undefined
