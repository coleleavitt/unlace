/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2F228
// Address: 0x0002F228

//----- (0002F228) --------------------------------------------------------
int __fastcall sub_2F228(int a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r0
  void *v6; // r0
  signed int v7; // r0
  size_t i; // r5
  int v9; // r0
  int v10; // r4
  size_t v11; // r3
  unsigned int v12; // r7
  void *v13; // r1
  size_t v14; // r6
  _DWORD *v15; // r0
  int v16; // r1
  int v17; // r5
  unsigned int v18; // r7
  void *v19; // r1
  _QWORD *v22; // [sp+Ch] [bp-88h]
  __int64 v23; // [sp+10h] [bp-84h]
  int v24; // [sp+18h] [bp-7Ch]
  int *v26; // [sp+24h] [bp-70h]
  _BYTE v28[100]; // [sp+2Ch] [bp-68h] BYREF
  int v29; // [sp+90h] [bp-4h]

  v29 = **(_DWORD **)(loc_2F3C8 + 193082);
  v24 = 1;
  v23 = qlseek(*(_DWORD *)(a1 + 364), 0, 1) - *(_QWORD *)(a1 + 368);
  v22 = (_QWORD *)(a1 + 368);
  v26 = (int *)(a1 + 364);
  v5 = qlseek(*(_DWORD *)(a1 + 364), *(_QWORD *)(a1 + 368) + __PAIR64__(a4, a3), 0);
  if ( ((unsigned int)v5 & HIDWORD(v5)) == 0xFFFFFFFF )
  {
    v24 = 0;
    sub_1DA58((int)a2, "bad offset %08x", a3);
  }
  else
  {
    v6 = (void *)*a2;
    if ( *a2 )
    {
      a2[1] = 0;
      qfree(v6);
      a2[2] = 0;
      *a2 = 0;
    }
    while ( 1 )
    {
      v7 = qlread(*v26, v28, 100);
      if ( v7 < 0 )
        break;
      i = 0;
      if ( v7 )
      {
        for ( i = 0; (int)i < v7; ++i )
        {
          if ( !v28[i] )
            break;
        }
      }
      v9 = a2[1];
      v10 = v9 - 1;
      if ( !v9 )
        v10 = 0;
      v11 = v10 + i;
      v12 = v10 + i + 1;
      v13 = (void *)*a2;
      if ( a2[2] < v12 )
      {
        v13 = qvector_reserve((int)a2, v13, v10 + i + 1, 1u);
        *a2 = v13;
        v11 = v10 + i;
      }
      a2[1] = v12;
      *((_BYTE *)v13 + v11) = 0;
      memmove((void *)(*a2 + v10), v28, i);
      if ( i < 0x64 )
        goto LABEL_21;
    }
    v14 = _strlen_chk("{truncated name}", 17);
    v15 = a2;
    v16 = a2[1];
    v17 = v16 - 1;
    if ( !v16 )
      v17 = 0;
    v18 = v17 + v14 + 1;
    v19 = (void *)*a2;
    if ( a2[2] < v18 )
    {
      v19 = qvector_reserve((int)a2, v19, v17 + v14 + 1, 1u);
      v15 = a2;
      *a2 = v19;
    }
    v15[1] = v18;
    v24 = 0;
    *((_BYTE *)v19 + v17 + v14) = 0;
    memmove((void *)(*v15 + v17), "{truncated name}", v14);
  }
LABEL_21:
  qlseek(*v26, *v22 + v23, 0);
  return v24;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
