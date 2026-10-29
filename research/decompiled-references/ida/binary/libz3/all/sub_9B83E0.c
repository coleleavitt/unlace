void __fastcall sub_9B83E0(__int64 a1)
{
  void *v1; // r13
  __int64 v2; // rax
  __int64 v3; // rdx
  char v4; // si
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 i; // rbp
  __int64 v10; // rdx
  __int64 v11; // r12
  int *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r12
  int *v15; // rax
  __int64 v16; // [rsp+8h] [rbp-60h]
  __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h]
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+28h] [rbp-40h]

  v17 = 1;
  v18 = 0;
  v19 = 1;
  v20 = 0;
  sub_182CBA0(qword_1C7F2C0, &v19);
  v1 = qword_1C7F2C0;
  LODWORD(v17) = *(_DWORD *)(a1 + 1600);
  v2 = *(_QWORD *)(a1 + 1608);
  *(_DWORD *)(a1 + 1600) = 1;
  v3 = v18;
  v18 = v2;
  LOBYTE(v2) = *(_BYTE *)(a1 + 1604);
  *(_QWORD *)(a1 + 1608) = v3;
  LOBYTE(v3) = v2 & 0xFC;
  v4 = *(_BYTE *)(a1 + 1620);
  BYTE4(v17) = v2 & 3;
  LODWORD(v2) = *(_DWORD *)(a1 + 1616);
  *(_BYTE *)(a1 + 1604) = v3;
  LODWORD(v19) = v2;
  v5 = *(_QWORD *)(a1 + 1624);
  *(_QWORD *)(a1 + 1624) = v20;
  v20 = v5;
  LOBYTE(v5) = BYTE4(v19);
  *(_DWORD *)(a1 + 1616) = 1;
  *(_BYTE *)(a1 + 1620) = v4 & 0xFC | v5 & 2;
  BYTE4(v19) = v4 & 1 | v4 & 2 | v5 & 0xFC;
  sub_182CBA0(v1, &v17);
  sub_182CBA0(v1, &v19);
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 )
  {
    v7 = *(unsigned int *)(v6 - 4);
    if ( (int)v7 > 0 )
    {
      v8 = 0;
      for ( i = 0; i != v7; ++i )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8 * i);
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * i);
        if ( v13 )
        {
          if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4 * i + 3) >> 4) & 3) == 2 )
          {
            v16 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8 * i);
            v15 = sub_9ACE50(a1, i);
            v13 = v16;
            v10 = (__int64)v15;
          }
          else
          {
            v10 = v8 + *(_QWORD *)(a1 + 728);
          }
          sub_9B8240(a1, v13 + 16, v10);
        }
        if ( v14 )
        {
          v11 = v14 + 16;
          if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4 * i + 3) >> 4) & 3) == 2 )
            v12 = sub_9ACE50(a1, i);
          else
            v12 = (int *)(v8 + *(_QWORD *)(a1 + 728));
          sub_9B8240(a1, (__int64)v12, v11);
        }
        v8 += 96;
      }
    }
  }
}

