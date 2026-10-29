unsigned __int64 __fastcall sub_3A57D0(__int64 a1)
{
  __int64 v1; // r13
  char *v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r15
  _QWORD **v8; // rbp
  void *v9; // rdi
  unsigned int v10; // esi
  unsigned __int64 i; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // esi
  unsigned __int64 j; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // esi
  unsigned __int64 k; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-C8h]
  __int64 v22; // [rsp+18h] [rbp-B0h] BYREF
  unsigned __int64 v23; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v24[2]; // [rsp+28h] [rbp-A0h] BYREF
  int v25; // [rsp+38h] [rbp-90h] BYREF
  void *v26; // [rsp+40h] [rbp-88h]
  int *v27; // [rsp+48h] [rbp-80h]
  int *v28; // [rsp+50h] [rbp-78h]
  __int64 v29; // [rsp+58h] [rbp-70h]
  __int128 v30; // [rsp+60h] [rbp-68h]
  int v31; // [rsp+70h] [rbp-58h]
  __int64 v32; // [rsp+78h] [rbp-50h]
  char v33; // [rsp+80h] [rbp-48h]
  unsigned __int64 v34; // [rsp+88h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1536);
  if ( !*(_DWORD *)(v1 + 120) )
  {
    v21 = v1 + 80;
    v4 = (char *)dword_23AD7A0;
    netnode_check(v1 + 80, "$ Auto", 0, 1);
    v5 = v1 + 176;
    netnode_check(v1 + 88, "$ auto type callees", 0, 1);
    netnode_check(v1 + 112, "$ auto tail parents", 0, 1);
    netnode_check(v1 + 96, "$ hindering addrs", 0, 1);
    netnode_check(v1 + 104, "$ postponed lastinsn", 0, 1);
    while ( 1 )
    {
      v6 = *(int *)v4;
      v7 = sub_7BE710(v21, a1, v6, 65);
      if ( v7
        || (v27 = &v25,
            v28 = &v25,
            v23 = -1,
            v25 = 0,
            v26 = nullptr,
            v29 = 0,
            v31 = -1,
            v24[0] = (__int64)&off_2B25CE8,
            v32 = a1,
            v33 = 0,
            v30 = -1,
            netnode_check(&v23, 0, 0, 1),
            v33 = 1,
            v22 = v23,
            sub_7BE7C0(v21, a1, v6, &v22, 8, 65),
            v8 = (_QWORD **)v26,
            v7 = v23,
            v24[0] = (__int64)&off_2B25CB8,
            !v26) )
      {
        if ( *(_BYTE *)(v5 + 80) )
          goto LABEL_5;
      }
      else
      {
        do
        {
          sub_3A0680(v8[3]);
          v9 = v8;
          v8 = (_QWORD **)v8[2];
          operator delete(v9, 0x30u);
        }
        while ( v8 );
        if ( *(_BYTE *)(v5 + 80) )
          goto LABEL_5;
      }
      *(_QWORD *)(v5 - 16) = v7;
      v10 = *(_DWORD *)(v5 + 60);
      *(_BYTE *)(v5 + 80) = 1;
      sub_3A5690(v5, v10);
      for ( i = sub_7BEB80(v5 - 16, *(_QWORD *)(v5 + 72), 65); i != -1; i = sub_7BEBF0(
                                                                              v5 - 16,
                                                                              *(_QWORD *)(v5 + 72),
                                                                              i,
                                                                              65) )
      {
        v12 = sub_7BE710(v5 - 16, *(_QWORD *)(v5 + 72), i, 65);
        if ( i >= v12 )
        {
          v23 = i;
          v24[0] = v12;
          sub_3A3720((_QWORD *)v5, (__int64 *)&v23, v24, *(_DWORD *)(v5 + 48));
        }
      }
LABEL_5:
      v4 += 4;
      v5 += 104;
      if ( v4 == "$ bptsgrps" )
      {
        if ( !*(_BYTE *)(v1 + 1712) )
        {
          v13 = *(_QWORD *)(v1 + 96);
          *(_BYTE *)(v1 + 1712) = 1;
          v14 = *(_DWORD *)(v1 + 1692);
          *(_QWORD *)(v1 + 1616) = v13;
          sub_3A5690(v1 + 1632, v14);
          for ( j = sub_7BEB80(v1 + 1616, *(_QWORD *)(v1 + 1704), 65);
                j != -1;
                j = sub_7BEBF0(v1 + 1616, *(_QWORD *)(v1 + 1704), j, 65) )
          {
            v16 = sub_7BE710(v1 + 1616, *(_QWORD *)(v1 + 1704), j, 65);
            if ( j >= v16 )
            {
              v23 = j;
              v24[0] = v16;
              sub_3A3720((_QWORD *)(v1 + 1632), (__int64 *)&v23, v24, *(_DWORD *)(v1 + 1680));
            }
          }
        }
        if ( !*(_BYTE *)(v1 + 1816) )
        {
          v17 = *(_QWORD *)(v1 + 104);
          *(_BYTE *)(v1 + 1816) = 1;
          v18 = *(_DWORD *)(v1 + 1796);
          *(_QWORD *)(v1 + 1720) = v17;
          sub_3A5690(v1 + 1736, v18);
          for ( k = sub_7BEB80(v1 + 1720, *(_QWORD *)(v1 + 1808), 65);
                k != -1;
                k = sub_7BEBF0(v1 + 1720, *(_QWORD *)(v1 + 1808), k, 65) )
          {
            v20 = sub_7BE710(v1 + 1720, *(_QWORD *)(v1 + 1808), k, 65);
            if ( k >= v20 )
            {
              v23 = k;
              v24[0] = v20;
              sub_3A3720((_QWORD *)(v1 + 1736), (__int64 *)&v23, v24, *(_DWORD *)(v1 + 1784));
            }
          }
        }
        *(_DWORD *)(v1 + 120) = 1;
        *(_DWORD *)(v1 + 148) = 0;
        *(_QWORD *)(*(_QWORD *)(a1 + 1672) + 2208LL) = -1;
        *(_BYTE *)(v1 + 152) = 0;
        sub_3A1430((unsigned int *)v1, 1);
        sub_368890();
      }
    }
  }
  return v34 - __readfsqword(0x28u);
}
