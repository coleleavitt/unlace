/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5038C
// Address: 0x0005038C

//----- (0005038C) --------------------------------------------------------
int __fastcall sub_5038C(int a1, int a2)
{
  int v4; // r2
  char v6; // r3
  char v7; // r1
  int v8; // r2
  int (__fastcall *v9)(int, _DWORD); // r7
  int v10; // r0
  int (__fastcall *v11)(int, int); // r3
  int v12; // [sp+0h] [bp-Ch]

  v4 = *(_DWORD *)(a1 + 592);
  switch ( *(_WORD *)(v4 + 12) )
  {
    case 2:
      v9 = *(int (__fastcall **)(int, _DWORD))(a1 + 80);
      if ( v9 )
        goto LABEL_7;
      v11 = *(int (__fastcall **)(int, int))(a1 + 84);
      if ( v11 )
        goto LABEL_12;
      *(_BYTE *)a2 = 1;
      *(_QWORD *)(a2 + 8) = 0;
      return sub_502C8(a1);
    case 3:
    case 5:
      v7 = *(_BYTE *)(v4 + 20);
      v8 = *(_DWORD *)(v4 + 16);
      *(_BYTE *)a2 = v7;
      *(_QWORD *)(a2 + 8) = v8;
      return sub_502C8(a1);
    case 8:
      v6 = *(_BYTE *)(v4 + 20);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v4 + 24);
      *(_BYTE *)a2 = v6;
      return sub_502C8(a1);
    case 0x28:
      return sub_502EC(a1, a2);
    default:
      v9 = *(int (__fastcall **)(int, _DWORD))(a1 + 80);
      if ( !v9 )
      {
        v11 = *(int (__fastcall **)(int, int))(a1 + 84);
        if ( !v11 )
          goto LABEL_13;
LABEL_12:
        *(_BYTE *)(a1 + 600) = 0;
        *(_DWORD *)(a1 + 604) = 0;
        if ( v11(a1, a1 + 600) )
LABEL_13:
          sub_4C0D8(a1);
        goto LABEL_9;
      }
LABEL_7:
      v10 = v9(a1, *(_DWORD *)(a1 + 108));
      if ( v10 )
      {
        if ( v10 != 34 )
          goto LABEL_13;
LABEL_9:
        *(_BYTE *)(a1 + 596) = 1;
        *(_BYTE *)a2 = 1;
        *(_QWORD *)(a2 + 8) = 0;
        return 0;
      }
      *(_BYTE *)a2 = 0;
      *(_QWORD *)(a2 + 8) = v12;
      return sub_502C8(a1);
  }
}
// 5045E: variable 'v12' is possibly undefined
