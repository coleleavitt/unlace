unsigned __int64 __fastcall sub_4C6CE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // rbx
  int v7; // r12d
  int v8; // r8d
  int v9; // r9d
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r15
  int v13; // r12d
  __int64 v14; // rax
  int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  __int64 v19; // [rsp+0h] [rbp-908h]
  int v20; // [rsp+24h] [rbp-8E4h]
  char *v21; // [rsp+28h] [rbp-8E0h]
  __int64 v22; // [rsp+30h] [rbp-8D8h] BYREF
  __int64 v23; // [rsp+38h] [rbp-8D0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-8C8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-8C0h] BYREF
  _BYTE v26[24]; // [rsp+50h] [rbp-8B8h] BYREF
  _BYTE v27[1024]; // [rsp+68h] [rbp-8A0h] BYREF
  __int64 v28; // [rsp+468h] [rbp-4A0h]
  __int64 v29; // [rsp+470h] [rbp-498h]
  __int64 v30; // [rsp+478h] [rbp-490h]
  char v31; // [rsp+480h] [rbp-488h] BYREF
  _BYTE v32[32]; // [rsp+4A0h] [rbp-468h] BYREF
  _DWORD v33[258]; // [rsp+4C0h] [rbp-448h] BYREF
  unsigned __int64 v34; // [rsp+8C8h] [rbp-40h]

  v6 = &v31;
  v34 = __readfsqword(0x28u);
  v7 = 65;
  do
  {
    while ( 1 )
    {
      qsnprintf((_DWORD)v6, 20, (unsigned int)"IDA view-%c", v7, a5, a6);
      qsnprintf((unsigned int)v32, 20, (unsigned int)"IDA View-%c", v7, v8, v9);
      netnode_check(&v22, v6, 0, 0);
      if ( (unsigned __int8)netnode_exist(&v22) )
        break;
      if ( ++v7 == 91 )
        return v34 - __readfsqword(0x28u);
    }
    *(_QWORD *)&v26[16] = 0;
    *(__m128i *)v26 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
    v30 = -1;
    v28 = -1;
    v29 = 0;
    v23 = -1;
    netnode_check(&v23, v32, 0, 1);
    netnode_check(&v24, v32, 0, 0);
    v25 = v24;
    if ( (unsigned __int8)netnode_exist(&v25) )
    {
      *(_QWORD *)&v26[8] = netnode_altval(v25, 1, 65);
      *(_QWORD *)&v26[16] = netnode_altval(v25, 2, 65);
      *(_QWORD *)v26 = v24;
      if ( netnode_supval(v24, *(_QWORD *)&v26[8], v27, 1024, 83) <= 0 )
      {
        memset(v27, 0xFFu, sizeof(v27));
        *(_OWORD *)&v26[8] = 0;
      }
    }
    v10 = netnode_altval(v22, 1, 65);
    v20 = v7;
    v19 = netnode_altval(v22, 2, 65);
    v21 = v6;
    v11 = 0;
    do
    {
      netnode_supval(v22, v11, v33, 1024, 83);
      v12 = v19;
      if ( v10 != v11 )
        v12 = 63;
      if ( v12 )
      {
        v13 = 0;
        v14 = 0;
        do
        {
          v15 = v33[v14];
          v16 = v13 + 1;
          v13 += 2;
          v30 = -1;
          v17 = (unsigned int)v33[v16];
          LOWORD(v29) = HIWORD(v15);
          WORD1(v29) = BYTE1(v15);
          v28 = v17;
          HIDWORD(v29) = (unsigned __int8)v15;
          sub_4C6C80((__int64)v26, v11, (unsigned __int8)v15, v17, a5, a6);
          v14 = v13;
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
  return v34 - __readfsqword(0x28u);
}
