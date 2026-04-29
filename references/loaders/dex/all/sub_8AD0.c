__int64 __fastcall sub_8AD0(__int64 a1, unsigned int a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v5; // rcx
  const char *v7; // rdx
  __int64 v9; // rdx
  const char *v10; // rsi
  unsigned int v11; // [rsp+Ch] [rbp-3Ch]
  __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  char v13; // [rsp+1Fh] [rbp-29h] BYREF
  __int64 v14; // [rsp+20h] [rbp-28h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a3 + 8);
  if ( !v5 )
  {
    v7 = s1;
    return netnode_supset(a1, a2, v7, v5, a4);
  }
  if ( (unsigned __int64)(v5 - 1) <= 0x3FF )
  {
    v7 = *(const char **)a3;
    return netnode_supset(a1, a2, v7, v5, a4);
  }
  v11 = a4;
  v12 = -1;
  netnode_check(&v12, 0, 0, 1);
  v13 = 0;
  v14 = v12;
  netnode_supset(a1, a2, &v13, 9, v11);
  v9 = *(_QWORD *)(a3 + 8);
  v10 = s1;
  if ( v9 )
    v10 = *(const char **)a3;
  netnode_setblob(v12, v10, v9, 0, v11);
  return v15 - __readfsqword(0x28u);
}
