/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B028
// Address: 0x0003B028

//----- (0003B028) --------------------------------------------------------
_DWORD *__fastcall sub_3B028(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v4; // r0
  int v5; // r7
  _DWORD *v6; // r6
  size_t v7; // r5
  _DWORD *v8; // r0
  _DWORD *v9; // r6
  _DWORD *v10; // r0
  int v11; // r7
  _DWORD *v12; // r6
  size_t v13; // r5
  _DWORD *v15; // r0
  _DWORD *v16; // r6
  _DWORD *v17; // r0
  void *v18; // r0
  void *v19; // r0

  if ( a1 != a2 )
  {
    sub_3AFA4(a1);
    switch ( *a2 )
    {
      case 1:
        v4 = sub_805CC(0xCu);
        v5 = a2[2];
        v4[2] = 0;
        v6 = v4;
        *v4 = 0;
        v4[1] = 0;
        v7 = *(_DWORD *)(v5 + 4);
        if ( v7 )
        {
          v19 = sub_77E84(*(_DWORD *)(v5 + 4));
          *v6 = v19;
          v6[2] = v7;
          memcpy(v19, *(const void **)v5, v7);
          v6[1] = v7;
        }
        a1[2] = v6;
        return a1;
      case 2:
        a1[3] = a2[3];
        goto LABEL_8;
      case 3:
      case 4:
LABEL_8:
        v8 = sub_805CC(0x10u);
        *v8 = 0;
        v9 = v8;
        v8[3] = 0;
        sub_3B028();
        a1[2] = v9;
        v10 = sub_77E84(12);
        v11 = a2[1];
        v10[2] = 0;
        v12 = v10;
        *v10 = 0;
        v10[1] = 0;
        v13 = *(_DWORD *)(v11 + 4);
        if ( !v13 )
          goto LABEL_9;
        goto LABEL_12;
      case 5:
        v15 = sub_805CC(0x10u);
        *v15 = 0;
        v16 = v15;
        v15[3] = 0;
        sub_3B028();
        a1[2] = v16;
        v17 = sub_805CC(0xCu);
        v11 = a2[1];
        v17[2] = 0;
        v12 = v17;
        *v17 = 0;
        v17[1] = 0;
        v13 = *(_DWORD *)(v11 + 4);
        if ( v13 )
        {
LABEL_12:
          v18 = sub_77E84(*(_DWORD *)(v11 + 4));
          *v12 = v18;
          v12[2] = v13;
          memcpy(v18, *(const void **)v11, v13);
          v12[1] = v13;
          a1[1] = v12;
        }
        else
        {
LABEL_9:
          a1[1] = v12;
        }
        break;
      default:
        return a1;
    }
  }
  return a1;
}
