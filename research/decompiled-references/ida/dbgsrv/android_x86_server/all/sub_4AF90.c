/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AF90
// Address: 0x0004AF90

//----- (0004AF90) --------------------------------------------------------
int *__cdecl sub_4AF90(int *a1, int *a2)
{
  int *v2; // edi
  _DWORD *v3; // edi
  int v4; // eax
  size_t v5; // esi
  void *v6; // eax
  int *v7; // eax
  _DWORD *v8; // edi
  int v9; // eax
  _DWORD *v10; // edi
  int v11; // eax
  size_t v12; // esi
  _DWORD *v13; // edi
  int v14; // eax
  void *v15; // eax
  const void **v17; // [esp+18h] [ebp-14h]
  const void **v18; // [esp+18h] [ebp-14h]

  v2 = a1;
  if ( a1 != a2 )
  {
    sub_4AEB0(a1);
    switch ( *a2 )
    {
      case 1:
        v3 = operator new(0xCu);
        v4 = a2[2];
        *v3 = 0;
        v3[1] = 0;
        v3[2] = 0;
        v5 = *(_DWORD *)(v4 + 4);
        if ( v5 )
        {
          v17 = (const void **)v4;
          v6 = qalloc_or_throw(v5);
          *v3 = v6;
          v3[2] = v5;
          memcpy(v6, *v17, v5);
          v3[1] = v5;
        }
        v7 = a1;
        a1[2] = (int)v3;
        goto LABEL_12;
      case 2:
        a1[3] = a2[3];
        goto LABEL_9;
      case 3:
      case 4:
LABEL_9:
        v13 = operator new(0x10u);
        v14 = a2[2];
        *v13 = 0;
        v13[3] = 0;
        sub_4AF90(v13, v14);
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
        *v8 = 0;
        v8[3] = 0;
        sub_4AF90(v8, v9);
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
          v18 = (const void **)v11;
          v15 = qalloc_or_throw(v12);
          *v10 = v15;
          v10[2] = v12;
          memcpy(v15, *v18, v12);
          v10[1] = v12;
        }
LABEL_11:
        v7 = a1;
        a1[1] = (int)v10;
LABEL_12:
        v2 = v7;
        break;
      default:
        return v2;
    }
  }
  return v2;
}
