__int64 __fastcall sub_5083D0(__int64 *a1, _QWORD *a2, const char *a3, unsigned __int8 a4)
{
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned int v10; // r13d
  size_t v11; // rax
  __int64 v12; // r9
  int v13; // r15d
  __int64 v14; // rsi
  __int64 v15; // rdi
  const char *v16; // r14
  __int64 v17; // r9
  signed __int64 v18; // rcx
  __int64 v19; // r9
  char *v20; // r13
  unsigned int v22; // [rsp+Ch] [rbp-6Ch]
  __int64 v23; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v24[11]; // [rsp+20h] [rbp-58h] BYREF

  v24[3] = __readfsqword(0x28u);
  if ( !a2 || !a3 || !a1[4] )
    return 0;
  v22 = a4;
  sub_39ADA0(0x38u, *((unsigned int *)a1 + 10), a2, a3, a4);
  v8 = ea2node(*a2);
  v9 = v8;
  v10 = a4 == 0 ? 67 : 82;
  if ( !*a3 )
  {
    if ( netnode_supval(*a1, v8, 0, 0, v10) <= 0 )
      goto LABEL_20;
    v23 = sub_5082D0(*a1, v9, v10);
    if ( v23 != -1 )
      netnode_kill((int)&v23);
    if ( (unsigned __int8)netnode_supdel(*a1, v9, v10) )
      goto LABEL_20;
    return 0;
  }
  v11 = strlen(a3);
  if ( v11 > 0x3FE )
  {
    v23 = -1;
    v13 = 0;
    netnode_check(&v23, 0, 0, 1);
    v14 = v9;
    v15 = *a1;
    v16 = a3;
    v24[0] = 16909060;
    v24[1] = v23;
    netnode_supset(v15, v14, v24, 16, v10, v17);
    while ( 1 )
    {
      v20 = strchr(v16, 10);
      if ( !v20 )
        v20 = (char *)&v16[strlen(v16)];
      v18 = v20 - v16;
      if ( v20 == v16 )
        v16 = &byte_22F0C30;
      if ( !(unsigned __int8)netnode_supset(v23, v13, v16, v18, 83, v19) )
        return 0;
      if ( !*v20 )
        goto LABEL_20;
      ++v13;
      v16 = v20 + 1;
    }
  }
  if ( !(unsigned __int8)netnode_supset(*a1, v9, a3, v11 + 1, v10, v12) )
    return 0;
LABEL_20:
  sub_39ADA0(0x39u, *((unsigned int *)a1 + 10), a2, a3, v22);
  return 1;
}
