/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8522C
// Address: 0x0008522C

//----- (0008522C) --------------------------------------------------------
int __fastcall sub_8522C(_DWORD *a1)
{
  unsigned __int8 *v1; // r2
  int v3; // r7
  int v4; // r3
  int v5; // r1
  int *v6; // r5
  int v7; // r8
  int *v8; // r0
  unsigned __int8 *v9; // r3
  int *v10; // r12
  int v11; // r2
  unsigned __int8 *v12; // r3
  int v13; // r0
  int result; // r0
  int v15; // [sp+4h] [bp-4h] BYREF

  v1 = (unsigned __int8 *)a1[3];
  v3 = a1[11];
  v4 = *v1;
  if ( v4 != 69 )
  {
    v5 = 0;
    v15 = 0;
    v6 = &v15;
    while ( 1 )
    {
      switch ( v4 )
      {
        case 'I':
        case 'J':
          v10 = (int *)sub_852F0(a1, v5);
          goto LABEL_6;
        case 'L':
          v10 = sub_86A40((int)a1);
          goto LABEL_6;
        case 'X':
          v7 = a1[13];
          a1[3] = v1 + 1;
          a1[13] = 1;
          v8 = sub_84DC0((int)a1);
          v9 = (unsigned __int8 *)a1[3];
          v10 = v8;
          a1[13] = v7;
          v11 = *v9;
          v12 = v9 + 1;
          if ( v11 != 69 )
            return 0;
          a1[3] = v12;
LABEL_6:
          if ( !v10 )
            return 0;
          v13 = sub_84094((int)a1, 47, (unsigned int)v10);
          *v6 = v13;
          v6 = (int *)(v13 + 12);
          if ( !v13 )
            return 0;
          v1 = (unsigned __int8 *)a1[3];
          v4 = *v1;
          if ( v4 == 69 )
          {
            result = v15;
            a1[3] = v1 + 1;
            a1[11] = v3;
            return result;
          }
          break;
        default:
          v10 = sub_85668((int)a1);
          goto LABEL_6;
      }
    }
  }
  a1[3] = v1 + 1;
  return sub_84094((int)a1, 47, 0);
}
// 852C0: variable 'v5' is possibly undefined
