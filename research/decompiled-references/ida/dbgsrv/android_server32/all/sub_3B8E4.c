/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B8E4
// Address: 0x0003B8E4

//----- (0003B8E4) --------------------------------------------------------
int *__fastcall sub_3B8E4(int *a1, int *a2)
{
  _DWORD *v4; // r6
  int v5; // r7
  size_t v6; // r5
  void *v7; // r0
  _DWORD *v8; // r6
  int v9; // r1
  _DWORD *v10; // r6
  int v11; // r7
  size_t v12; // r5
  _DWORD *v13; // r6
  int v14; // r1
  void *v15; // r0

  if ( a1 != a2 )
  {
    sub_3B850(a1);
    switch ( *a2 )
    {
      case 1:
        v4 = operator new(0xCu);
        v5 = a2[2];
        *v4 = 0;
        v4[1] = 0;
        v4[2] = 0;
        v6 = *(_DWORD *)(v5 + 4);
        if ( v6 )
        {
          v7 = qalloc_or_throw(*(_DWORD *)(v5 + 4));
          v4[2] = v6;
          *v4 = v7;
          qmemcpy(v7, *(const void **)v5, v6);
          v4[1] = v6;
        }
        a1[2] = (int)v4;
        return a1;
      case 2:
        a1[3] = a2[3];
        goto LABEL_9;
      case 3:
      case 4:
LABEL_9:
        v13 = operator new(0x10u);
        v14 = a2[2];
        v13[3] = 0;
        *v13 = 0;
        sub_3B8E4(v13, v14);
        a1[2] = (int)v13;
        v10 = qalloc_or_throw(12);
        v11 = a2[1];
        *v10 = 0;
        v10[1] = 0;
        v10[2] = 0;
        v12 = *(_DWORD *)(v11 + 4);
        if ( v12 )
          goto LABEL_10;
        goto LABEL_11;
      case 5:
        v8 = operator new(0x10u);
        v9 = a2[2];
        v8[3] = 0;
        *v8 = 0;
        sub_3B8E4(v8, v9);
        a1[2] = (int)v8;
        v10 = operator new(0xCu);
        v11 = a2[1];
        *v10 = 0;
        v10[1] = 0;
        v10[2] = 0;
        v12 = *(_DWORD *)(v11 + 4);
        if ( v12 )
        {
LABEL_10:
          v15 = qalloc_or_throw(*(_DWORD *)(v11 + 4));
          v10[2] = v12;
          *v10 = v15;
          qmemcpy(v15, *(const void **)v11, v12);
          v10[1] = v12;
        }
LABEL_11:
        a1[1] = (int)v10;
        break;
      default:
        return a1;
    }
  }
  return a1;
}
