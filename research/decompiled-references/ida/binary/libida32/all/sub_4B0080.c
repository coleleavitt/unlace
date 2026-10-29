unsigned __int64 __fastcall sub_4B0080(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  char *v6; // rbx
  int v7; // r12d
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // ebp
  unsigned int v11; // ebx
  unsigned int v12; // r15d
  unsigned int v13; // r12d
  unsigned int v14; // edx
  __int64 v15; // rax
  char v17; // [rsp+0h] [rbp-8F8h]
  char v18; // [rsp+0h] [rbp-8F8h]
  unsigned int v19; // [rsp+20h] [rbp-8D8h]
  int v20; // [rsp+24h] [rbp-8D4h]
  char *v21; // [rsp+28h] [rbp-8D0h]
  unsigned int v22; // [rsp+30h] [rbp-8C8h] BYREF
  int v23; // [rsp+34h] [rbp-8C4h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-8C0h] BYREF
  unsigned int v25; // [rsp+3Ch] [rbp-8BCh] BYREF
  int v26; // [rsp+40h] [rbp-8B8h] BYREF
  __int128 v27; // [rsp+44h] [rbp-8B4h]
  _QWORD v28[128]; // [rsp+54h] [rbp-8A4h] BYREF
  int v29; // [rsp+454h] [rbp-4A4h]
  __int64 v30; // [rsp+458h] [rbp-4A0h]
  int v31; // [rsp+460h] [rbp-498h]
  char v32; // [rsp+470h] [rbp-488h] BYREF
  _BYTE v33[32]; // [rsp+490h] [rbp-468h] BYREF
  _DWORD v34[258]; // [rsp+4B0h] [rbp-448h] BYREF
  unsigned __int64 v35; // [rsp+8B8h] [rbp-40h]

  v6 = &v32;
  v35 = __readfsqword(0x28u);
  v7 = 65;
  do
  {
    while ( 1 )
    {
      qsnprintf((int)v6, 20, (int)"IDA view-%c", v7, a5, a6, v17);
      qsnprintf((int)v33, 20, (int)"IDA View-%c", v7, v8, v9, v18);
      netnode_check(&v22, v6, 0, 0);
      if ( (unsigned __int8)netnode_exist(&v22) )
        break;
      if ( ++v7 == 91 )
        return v35 - __readfsqword(0x28u);
    }
    v27 = 0;
    v26 = -1;
    v31 = -1;
    v29 = -1;
    v30 = 0;
    v23 = -1;
    netnode_check(&v23, v33, 0, 1);
    netnode_check(&v24, v33, 0, 0);
    v25 = v24;
    if ( (unsigned __int8)netnode_exist(&v25) )
    {
      *(_QWORD *)&v27 = (unsigned int)netnode_altval(v25, 1, 65);
      *((_QWORD *)&v27 + 1) = (unsigned int)netnode_altval(v25, 2, 65);
      v26 = v24;
      if ( netnode_supval(v24, (unsigned int)v27, v28, 1024, 83) <= 0 )
      {
        v28[0] = -1;
        v28[127] = -1;
        memset((char *)v28 + 4, 0xFFu, 8LL * (((unsigned int)v28 - ((unsigned int)v28 + 4) + 1024) >> 3));
        v27 = 0;
      }
    }
    v10 = netnode_altval(v22, 1, 65);
    v20 = v7;
    v19 = netnode_altval(v22, 2, 65);
    v21 = v6;
    v11 = 0;
    do
    {
      netnode_supval(v22, v11, v34, 1024, 83);
      v12 = v19;
      if ( v10 != v11 )
        v12 = 63;
      if ( v12 )
      {
        v13 = 0;
        do
        {
          v14 = v13 + 1;
          v15 = (int)v13;
          v13 += 2;
          LODWORD(v15) = v34[v15];
          v31 = -1;
          v29 = v34[v14];
          LOWORD(v30) = WORD1(v15);
          WORD1(v30) = BYTE1(v15);
          HIDWORD(v30) = (unsigned __int8)v15;
          sub_4B0020((__int64)&v26);
        }
        while ( v13 < v12 );
      }
      ++v11;
    }
    while ( v10 >= v11 );
    v6 = v21;
    v7 = v20 + 1;
  }
  while ( v20 != 90 );
  return v35 - __readfsqword(0x28u);
}

