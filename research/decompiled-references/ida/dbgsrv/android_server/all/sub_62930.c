/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62930
// Address: 0x0000000000062930

//----- (0000000000062930) ----------------------------------------------------
__int64 __fastcall sub_62930(__int64 a1, __int64 a2)
{
  _QWORD *v4; // x0
  __int64 v5; // x22
  _QWORD *v6; // x21
  size_t v7; // x20
  void *v8; // x0
  _DWORD *v9; // x21
  _QWORD *v10; // x0
  __int64 v11; // x22
  _QWORD *v12; // x21
  size_t v13; // x20
  _DWORD *v14; // x21
  _QWORD *v15; // x0
  void *v16; // x0

  if ( a1 != a2 )
  {
    sub_62860((int *)a1);
    switch ( *(_DWORD *)a2 )
    {
      case 1:
        v4 = operator new(0x18u);
        v5 = *(_QWORD *)(a2 + 16);
        v4[1] = 0;
        v4[2] = 0;
        *v4 = 0;
        v6 = v4;
        v7 = *(_QWORD *)(v5 + 8);
        if ( v7 )
        {
          v8 = qalloc_or_throw(*(_QWORD *)(v5 + 8));
          *v6 = v8;
          v6[2] = v7;
          memcpy(v8, *(const void **)v5, v7);
          v6[1] = v7;
        }
        *(_QWORD *)(a1 + 16) = v6;
        return a1;
      case 2:
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
        goto LABEL_9;
      case 3:
      case 4:
LABEL_9:
        v14 = operator new(0x20u);
        *v14 = 0;
        v14[6] = 0;
        sub_62930();
        *(_QWORD *)(a1 + 16) = v14;
        v15 = qalloc_or_throw(24);
        v11 = *(_QWORD *)(a2 + 8);
        v15[1] = 0;
        v15[2] = 0;
        *v15 = 0;
        v12 = v15;
        v13 = *(_QWORD *)(v11 + 8);
        if ( v13 )
          goto LABEL_10;
        goto LABEL_11;
      case 5:
        v9 = operator new(0x20u);
        *v9 = 0;
        v9[6] = 0;
        sub_62930();
        *(_QWORD *)(a1 + 16) = v9;
        v10 = operator new(0x18u);
        v11 = *(_QWORD *)(a2 + 8);
        v10[1] = 0;
        v10[2] = 0;
        *v10 = 0;
        v12 = v10;
        v13 = *(_QWORD *)(v11 + 8);
        if ( v13 )
        {
LABEL_10:
          v16 = qalloc_or_throw(*(_QWORD *)(v11 + 8));
          *v12 = v16;
          v12[2] = v13;
          memcpy(v16, *(const void **)v11, v13);
          v12[1] = v13;
        }
LABEL_11:
        *(_QWORD *)(a1 + 8) = v12;
        break;
      default:
        return a1;
    }
  }
  return a1;
}
