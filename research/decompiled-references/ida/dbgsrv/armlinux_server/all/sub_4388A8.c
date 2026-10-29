/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4388A8
// Address: 0x00000000004388A8

//----- (00000000004388A8) ----------------------------------------------------
__int64 __fastcall sub_4388A8(__int64 a1, char *a2, unsigned __int8 a3, int a4)
{
  int v6; // w22
  __int64 v8; // x2
  __int64 result; // x0
  unsigned __int8 v10; // w1
  bool v11; // zf
  __int64 v12; // x22
  __int64 v13; // x1
  _BYTE *v14; // x0
  __int64 (__fastcall ***v15)(_QWORD, char *); // x0
  unsigned __int64 v16; // x0
  char v17; // w1
  unsigned int v18; // [xsp+34h] [xbp-Ch] BYREF

  v6 = a3;
  v8 = sub_437FB8((__int64 *)a1, a2, (int *)&v18);
  if ( v18 == 3 )
  {
    if ( v6 )
      v17 = -39;
    else
      v17 = -43;
    sub_436F60(a1, v17, v8);
    goto LABEL_11;
  }
  if ( v18 > 3 )
  {
    if ( v18 != 5 )
    {
      if ( v18 >= 5 )
      {
        if ( v18 == 6 )
        {
          result = 53;
          if ( v6 )
            return result;
          sub_436CF8(a1, a2, 0);
          v12 = *(_QWORD *)(a1 + 200);
          *(_BYTE *)(a1 + 212) = -82;
          v13 = *(_QWORD *)(v12 + 8);
          if ( (unsigned __int64)(v13 + 1) > *(_QWORD *)(v12 + 16) )
          {
            v14 = sub_491288(v12, *(void **)v12, v13 + 1, 1u);
            *(_QWORD *)v12 = v14;
            v13 = *(_QWORD *)(v12 + 8);
          }
          else
          {
            v14 = *(_BYTE **)v12;
          }
          v14[v13] = -82;
          ++*(_QWORD *)(v12 + 8);
          ++*(_DWORD *)(a1 + 208);
          goto LABEL_11;
        }
        if ( !under_debugger )
          sub_492270(271);
        __break(0x3E8u);
      }
      if ( v6 )
      {
        result = 1611;
        if ( dword_520194 > 0 )
        {
          result = sub_437338(a1, a2);
          if ( !(_DWORD)result )
            goto LABEL_11;
        }
      }
      else
      {
        result = 1610;
        if ( dword_520190 > 0 )
        {
          result = sub_437290(a1, a2);
          if ( !(_DWORD)result )
            goto LABEL_11;
        }
      }
      return result;
    }
    goto LABEL_21;
  }
  if ( v18 == 1 )
  {
    if ( v6 )
      v10 = 64;
    else
      v10 = 96;
    goto LABEL_10;
  }
  if ( v18 <= 1 )
  {
LABEL_21:
    v15 = *(__int64 (__fastcall ****)(_QWORD, char *))(a1 + 416);
    if ( !v15 || (v16 = (**v15)(v15, a2), v16 == -1) )
    {
      sub_486A58(0, a2);
      return 53;
    }
    else
    {
      sub_437490(a1, v16);
      return 0;
    }
  }
  if ( !v6 )
  {
    v10 = 112;
LABEL_10:
    sub_4370A8(a1, v10, v8);
LABEL_11:
    result = 0;
    if ( a4 )
      return sub_4381F0(a1, a4);
    return result;
  }
  result = 1539;
  v10 = 80;
  if ( *(_QWORD *)(a1 + 184) )
    v11 = v8 == 0;
  else
    v11 = 0;
  if ( !v11 )
    goto LABEL_10;
  return result;
}
// 520190: using guessed type int dword_520190;
// 520194: using guessed type int dword_520194;
// 52451C: using guessed type char under_debugger;
