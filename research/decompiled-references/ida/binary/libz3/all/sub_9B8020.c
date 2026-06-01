void __fastcall sub_9B8020(__int64 a1)
{
  void *v1; // r13
  __int64 v2; // rax
  __int64 v3; // rdx
  char v4; // si
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 i; // rbx
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+8h] [rbp-50h]
  __int64 v16; // [rsp+10h] [rbp-48h] BYREF
  __int64 v17; // [rsp+18h] [rbp-40h]

  v14 = 1;
  v15 = 0;
  v16 = 1;
  v17 = 0;
  sub_182CBA0(qword_1C7F2C0, &v16);
  v1 = qword_1C7F2C0;
  LODWORD(v14) = *(_DWORD *)(a1 + 1408);
  v2 = *(_QWORD *)(a1 + 1416);
  *(_DWORD *)(a1 + 1408) = 1;
  v3 = v15;
  v15 = v2;
  LOBYTE(v2) = *(_BYTE *)(a1 + 1412);
  *(_QWORD *)(a1 + 1416) = v3;
  LOBYTE(v3) = v2 & 0xFC;
  v4 = *(_BYTE *)(a1 + 1428);
  BYTE4(v14) = v2 & 3;
  LODWORD(v2) = *(_DWORD *)(a1 + 1424);
  *(_BYTE *)(a1 + 1412) = v3;
  LODWORD(v16) = v2;
  v5 = *(_QWORD *)(a1 + 1432);
  *(_QWORD *)(a1 + 1432) = v17;
  v17 = v5;
  LOBYTE(v5) = BYTE4(v16);
  *(_DWORD *)(a1 + 1424) = 1;
  *(_BYTE *)(a1 + 1428) = v4 & 0xFC | v5 & 2;
  BYTE4(v16) = v4 & 1 | v4 & 2 | v5 & 0xFC;
  sub_182CBA0(v1, &v14);
  sub_182CBA0(v1, &v16);
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 )
  {
    v7 = *(unsigned int *)(v6 - 4);
    if ( (int)v7 > 0 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8 * i);
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8 * i);
        if ( v12 )
        {
          if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 592) + 4 * i + 3) >> 4) & 3) == 2 )
            v9 = sub_999840(a1, i);
          else
            v9 = *(_QWORD *)(a1 + 600) + 32 * i;
          sub_9B7EA0(a1, v12 + 16, v9);
        }
        if ( v13 )
        {
          v10 = v13 + 16;
          if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 592) + 4 * i + 3) >> 4) & 3) == 2 )
            v11 = sub_999840(a1, i);
          else
            v11 = *(_QWORD *)(a1 + 600) + 32 * i;
          sub_9B7EA0(a1, v11, v10);
        }
      }
    }
  }
}

