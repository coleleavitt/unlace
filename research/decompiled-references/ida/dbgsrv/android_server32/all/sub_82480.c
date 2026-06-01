/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82480
// Address: 0x00082480

//----- (00082480) --------------------------------------------------------
int __fastcall sub_82480(int a1, int *a2, int a3, int a4)
{
  int v6; // r5
  int v7; // r1
  char v8; // r0
  int v9; // r0
  int v10; // r6
  int v11; // r7
  _DWORD *v13; // r3
  unsigned int v14; // r0
  unsigned int v15; // r6
  unsigned int v16[2]; // [sp+8h] [bp-2Ch] BYREF
  unsigned int v17; // [sp+10h] [bp-24h] BYREF
  int v18; // [sp+14h] [bp-20h]
  int v19; // [sp+18h] [bp-1Ch]
  int v20; // [sp+1Ch] [bp-18h]
  char v21; // [sp+20h] [bp-14h]
  int v22; // [sp+24h] [bp-10h]
  int v23; // [sp+28h] [bp-Ch]
  int v24; // [sp+2Ch] [bp-8h]
  int v25; // [sp+30h] [bp-4h]

  if ( a4 )
  {
    v6 = nullsub_34(a4);
    v7 = *a2;
    v8 = 0;
    v18 = 0;
    v17 = 0;
    v19 = 0;
    v20 = v7;
    if ( v7 != -1 )
      v8 = must_journal();
    v21 = v8;
    v9 = a2[1];
    v16[0] = a2[2];
    v16[1] = v16[0] + v9;
    sub_825AC(&v17, v16);
    if ( !a3 )
    {
      v13 = (_DWORD *)v17;
      v14 = v17 + 12 * v18;
      if ( 12 * v18 )
      {
        v15 = v14 - 12;
        if ( v14 - 12 > v17 )
        {
          do
          {
            v24 = v13[2];
            v23 = v13[1];
            v22 = *v13;
            *((_BYTE *)v13 + 8) = *(_BYTE *)(v15 + 8);
            v13[1] = *(_DWORD *)(v15 + 4);
            *v13 = *(_DWORD *)v15;
            *(_BYTE *)(v15 + 8) = v24;
            *(_DWORD *)(v15 + 4) = v23;
            *(_DWORD *)v15 = v22;
            v15 -= 12;
            v13 += 3;
          }
          while ( (unsigned int)v13 < v15 );
        }
      }
    }
    v10 = v17;
    if ( 12 * v18 )
    {
      v11 = 12 * v18;
      do
      {
        if ( *(unsigned __int8 *)(v10 + 8) == a3 )
          rangeset_t_sub(v6, (unsigned int *)v10);
        else
          rangeset_t_add(v6, v10);
        v11 -= 12;
        v10 += 12;
      }
      while ( v11 );
      v10 = v17;
    }
    if ( v10 )
    {
      v18 = 0;
      qfree((void *)v10);
      v19 = 0;
      v17 = 0;
    }
  }
  return _stack_chk_guard - v25;
}
// 70600: using guessed type int __fastcall nullsub_34(_DWORD);
