__int64 __fastcall sub_87EF80(__int64 *a1)
{
  __int64 v1; // rax
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  _DWORD *v5; // rbp
  std::ios_base *v6; // r13
  _DWORD *i; // r15
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 j; // rbp
  __int64 v16; // rax
  __int64 v17; // rax
  int **v18; // r12
  char v20[8]; // [rsp+8h] [rbp-90h] BYREF
  int *v21; // [rsp+10h] [rbp-88h] BYREF
  int v22; // [rsp+18h] [rbp-80h]
  __int128 v23; // [rsp+20h] [rbp-78h]
  __int128 v24; // [rsp+30h] [rbp-68h]
  __int64 v25; // [rsp+40h] [rbp-58h]
  __int16 v26; // [rsp+48h] [rbp-50h]
  __int64 v27; // [rsp+50h] [rbp-48h]

  v1 = sub_374300(a1[9], *(_QWORD *)(a1[10] + 24) + 3904LL, (__int64)&qword_18D6CD0);
  v5 = (_DWORD *)a1[94];
  v6 = (std::ios_base *)v1;
  if ( v5 )
  {
    for ( i = &v5[*(v5 - 1)]; i != v5; ++v5 )
    {
      while ( 1 )
      {
        v11 = a1[10];
        v12 = *(_QWORD *)(v11 + 2328);
        v13 = *v5 >> 1;
        if ( v12 )
        {
          if ( (unsigned int)v13 < *(_DWORD *)(v12 - 4) )
          {
            v8 = *(_QWORD *)(v12 + 8 * v13);
            v9 = *(_QWORD *)(v11 + 144);
            if ( v8 )
              break;
          }
        }
        sub_E5EBF0(v6, 0);
        if ( i == ++v5 )
          goto LABEL_12;
      }
      if ( (*v5 & 1) == 0 || (v8 = sub_15EC2C0(*(_QWORD *)(v11 + 144), *(_QWORD *)(v12 + 8 * v13))) != 0 )
      {
        ++*(_DWORD *)(v8 + 8);
        sub_E5EBF0(v6, v8);
        if ( (*(_DWORD *)(v8 + 8))-- == 1 )
          sub_15D7BC0(v9, v8);
      }
      else
      {
        sub_E5EBF0(v6, 0);
      }
    }
  }
LABEL_12:
  v14 = a1[97];
  if ( v14 )
  {
    for ( j = v14 + 16LL * *(unsigned int *)(v14 - 4); j != v14; v14 += 16 )
    {
      v16 = sub_15E1B70(a1[9]);
      sub_E5EBF0(v6, v16);
    }
  }
  v17 = a1[9];
  v18 = &v21;
  v26 = 0;
  v21 = &off_1C4C9C8;
  v22 = 0;
  v25 = 0;
  v27 = v17;
  v23 = 0;
  v24 = 0;
  sub_18561B0((unsigned int)v20, 1000, (unsigned int)&v21, v2, v3, v4);
  LOBYTE(v18) = (unsigned int)sub_E60CB0(v6, 0, 0) != 1;
  sub_1856400(v20);
  v21 = &off_1C4C9C8;
  if ( (_BYTE)v26 )
    sub_18296D0(v27);
  if ( HIBYTE(v26) )
    sub_1829760(v27);
  (**(void (__fastcall ***)(std::ios_base *))v6)(v6);
  sub_186B220(v6);
  return (unsigned int)v18;
}

