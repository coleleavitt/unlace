unsigned __int64 __fastcall sub_3A1110(__int64 a1)
{
  __int64 v1; // r13
  char *v4; // r12
  __int64 v5; // rbx
  unsigned int v6; // ebp
  unsigned int v7; // r15d
  _QWORD **v8; // rbp
  void *v9; // rdi
  unsigned int v10; // esi
  unsigned int i; // r15d
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // esi
  unsigned int j; // ebx
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // esi
  unsigned int k; // ebx
  unsigned int v20; // eax
  __int64 v21; // [rsp+0h] [rbp-C8h]
  unsigned int v22; // [rsp+1Ch] [rbp-ACh] BYREF
  unsigned int v23; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v24; // [rsp+24h] [rbp-A4h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+28h] [rbp-A0h]
  int v26; // [rsp+38h] [rbp-90h] BYREF
  void *v27; // [rsp+40h] [rbp-88h]
  int *v28; // [rsp+48h] [rbp-80h]
  int *v29; // [rsp+50h] [rbp-78h]
  __int64 v30; // [rsp+58h] [rbp-70h]
  __int128 v31; // [rsp+60h] [rbp-68h]
  int v32; // [rsp+70h] [rbp-58h]
  __int64 v33; // [rsp+78h] [rbp-50h]
  char v34; // [rsp+80h] [rbp-48h]
  unsigned __int64 v35; // [rsp+88h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1344);
  if ( !*(_DWORD *)(v1 + 92) )
  {
    v21 = v1 + 72;
    v4 = (char *)dword_2389780;
    netnode_check(v1 + 72, "$ Auto", 0, 1);
    v5 = v1 + 144;
    netnode_check(v1 + 76, "$ auto type callees", 0, 1);
    netnode_check(v1 + 88, "$ auto tail parents", 0, 1);
    netnode_check(v1 + 80, "$ hindering addrs", 0, 1);
    netnode_check(v1 + 84, "$ postponed lastinsn", 0, 1);
    while ( 1 )
    {
      v6 = *(_DWORD *)v4;
      v7 = sub_79B3A0(v21, a1, *(unsigned int *)v4, 65);
      if ( v7
        || (v28 = &v26,
            v29 = &v26,
            v23 = -1,
            v26 = 0,
            v27 = nullptr,
            v30 = 0,
            v32 = -1,
            v25 = &off_2AFCBA8,
            v33 = a1,
            v34 = 0,
            v31 = -1,
            netnode_check(&v23, 0, 0, 1),
            v34 = 1,
            v22 = v23,
            sub_79B440(v21, a1, v6, &v22, 4, 65),
            v8 = (_QWORD **)v27,
            v7 = v23,
            v25 = &off_2AFCB78,
            !v27) )
      {
        if ( *(_BYTE *)(v5 + 80) )
          goto LABEL_5;
      }
      else
      {
        do
        {
          sub_39B900(v8[3]);
          v9 = v8;
          v8 = (_QWORD **)v8[2];
          operator delete(v9, 0x28u);
        }
        while ( v8 );
        if ( *(_BYTE *)(v5 + 80) )
          goto LABEL_5;
      }
      *(_DWORD *)(v5 - 16) = v7;
      v10 = *(_DWORD *)(v5 + 60);
      *(_BYTE *)(v5 + 80) = 1;
      sub_3A0FD0(v5, v10);
      for ( i = sub_79B7E0(v5 - 16, *(_QWORD *)(v5 + 72), 65); i != -1; i = sub_79B840(
                                                                              v5 - 16,
                                                                              *(_QWORD *)(v5 + 72),
                                                                              i,
                                                                              65) )
      {
        v12 = sub_79B3A0(v5 - 16, *(_QWORD *)(v5 + 72), i, 65);
        if ( i >= v12 )
        {
          v23 = i;
          v24 = v12;
          sub_39ED20((_QWORD *)v5, &v23, &v24, *(_DWORD *)(v5 + 48));
        }
      }
LABEL_5:
      v4 += 4;
      v5 += 104;
      if ( v4 == "$ bptsgrps" )
      {
        if ( !*(_BYTE *)(v1 + 1680) )
        {
          v13 = *(_DWORD *)(v1 + 80);
          *(_BYTE *)(v1 + 1680) = 1;
          v14 = *(_DWORD *)(v1 + 1660);
          *(_DWORD *)(v1 + 1584) = v13;
          sub_3A0FD0(v1 + 1600, v14);
          for ( j = sub_79B7E0(v1 + 1584, *(_QWORD *)(v1 + 1672), 65);
                j != -1;
                j = sub_79B840(v1 + 1584, *(_QWORD *)(v1 + 1672), j, 65) )
          {
            v16 = sub_79B3A0(v1 + 1584, *(_QWORD *)(v1 + 1672), j, 65);
            if ( j >= v16 )
            {
              v23 = j;
              v24 = v16;
              sub_39ED20((_QWORD *)(v1 + 1600), &v23, &v24, *(_DWORD *)(v1 + 1648));
            }
          }
        }
        if ( !*(_BYTE *)(v1 + 1784) )
        {
          v17 = *(_DWORD *)(v1 + 84);
          *(_BYTE *)(v1 + 1784) = 1;
          v18 = *(_DWORD *)(v1 + 1764);
          *(_DWORD *)(v1 + 1688) = v17;
          sub_3A0FD0(v1 + 1704, v18);
          for ( k = sub_79B7E0(v1 + 1688, *(_QWORD *)(v1 + 1776), 65);
                k != -1;
                k = sub_79B840(v1 + 1688, *(_QWORD *)(v1 + 1776), k, 65) )
          {
            v20 = sub_79B3A0(v1 + 1688, *(_QWORD *)(v1 + 1776), k, 65);
            if ( k >= v20 )
            {
              v23 = k;
              v24 = v20;
              sub_39ED20((_QWORD *)(v1 + 1704), &v23, &v24, *(_DWORD *)(v1 + 1752));
            }
          }
        }
        *(_DWORD *)(v1 + 116) = 0;
        *(_DWORD *)(v1 + 92) = 1;
        *(_DWORD *)(*(_QWORD *)(a1 + 1480) + 2120LL) = -1;
        *(_BYTE *)(v1 + 120) = 0;
        sub_39C870((unsigned int *)v1, 1);
        sub_365330();
      }
    }
  }
  return v35 - __readfsqword(0x28u);
}

