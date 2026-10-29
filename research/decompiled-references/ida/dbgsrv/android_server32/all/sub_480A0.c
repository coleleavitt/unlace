/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480A0
// Address: 0x000480A0

//----- (000480A0) --------------------------------------------------------
int __fastcall sub_480A0(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r1
  int v4; // r2
  int v5; // r0
  int v6; // r0
  int v7; // r4
  unsigned __int8 *v8; // r6
  unsigned int v9; // r1
  int v10; // r0
  int v11; // r2
  void *v13; // [sp+10h] [bp-30h] BYREF
  int v14; // [sp+14h] [bp-2Ch]
  int v15; // [sp+18h] [bp-28h]
  void **v16; // [sp+20h] [bp-20h] BYREF
  unsigned __int8 v17[8]; // [sp+24h] [bp-1Ch] BYREF
  void *v18; // [sp+2Ch] [bp-14h]
  int v19; // [sp+30h] [bp-10h]
  int v20; // [sp+34h] [bp-Ch]
  int v21; // [sp+38h] [bp-8h]

  v14 = 0;
  v13 = nullptr;
  v15 = 0;
  v2 = (_DWORD *)sub_475EC((int)a1, (int *)&v13);
  if ( v2 )
  {
    v3 = a1[3];
    v4 = a1[4];
    v17[0] = 2;
    v21 = 0;
    v20 = 0;
    v19 = 0;
    v18 = nullptr;
    copy_idcv(v17, (unsigned __int8 *)(v3 + 24 * v4 - 24));
    v5 = a1[4];
    if ( v5 )
    {
      v6 = v5 - 1;
      a1[4] = v6;
      free_idcv((unsigned __int8 *)(a1[3] + 24 * v6));
    }
    if ( v17[0] == 5 )
    {
      sub_448A0((int)v18, v17);
    }
    else if ( v17[0] == 7 && v18 )
    {
      v19 = 0;
      qfree(v18);
      v20 = 0;
      v18 = nullptr;
    }
    v8 = (unsigned __int8 *)(a1[3] + 24 * a1[4] - 24);
    v9 = v2[4];
    if ( v9 )
    {
      while ( 1 )
      {
        v10 = sub_40FB8(a1[1], v9);
        v11 = *(_DWORD *)(v10 + 36);
        if ( v11 != -1 )
          break;
        v9 = *(_DWORD *)(v10 + 12);
        if ( !v9 )
          goto LABEL_15;
      }
      v7 = sub_47764((int)a1, v2, v11, (int)&v13, v8, 0);
    }
    else
    {
LABEL_15:
      v16 = &v13;
      sub_4DDA0((int)v17, (int)v2, (int)&v13, (int)&byte_B45D0, (int *)&v16);
      v7 = 1;
      copy_idcv((unsigned __int8 *)(*(_DWORD *)v17 + 32), v8);
    }
  }
  else
  {
    sub_468C4(a1);
    v7 = 0;
  }
  if ( v13 )
  {
    v14 = 0;
    qfree(v13);
    v15 = 0;
    v13 = nullptr;
  }
  return v7;
}
// B45D0: using guessed type char byte_B45D0;
