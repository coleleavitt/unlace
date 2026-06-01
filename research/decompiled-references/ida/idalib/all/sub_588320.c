unsigned __int64 __fastcall sub_588320(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // r15
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v13; // r13
  __int64 v14; // r15
  char *v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v19; // [rsp+8h] [rbp-60h]
  char *v20; // [rsp+18h] [rbp-50h] BYREF
  char *v21; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v4 = (_QWORD *)a1[4];
  v22 = __readfsqword(0x28u);
  v5 = a4 + a2;
  if ( v4 )
  {
    v6 = (__int64)(a1 + 3);
    v9 = a1 + 3;
    do
    {
      while ( 1 )
      {
        v10 = v4[2];
        v11 = v4[3];
        if ( v4[4] < a2 )
          break;
        v9 = v4;
        v4 = (_QWORD *)v4[2];
        if ( !v10 )
          goto LABEL_6;
      }
      v4 = (_QWORD *)v4[3];
    }
    while ( v11 );
LABEL_6:
    if ( v9 != (_QWORD *)v6 && v9[4] < v5 )
    {
      v13 = a1[5];
      if ( (unsigned __int8)sub_3CD340(v13, (__int64)(a1 + 3), 153) )
        sub_3D7370((__int64)(a1 + 2), v13, v6);
      v14 = netnode_supfirst(a1[1], 65);
      if ( v14 != -1 )
      {
        v19 = a3 - a2;
        do
        {
          v15 = (char *)netnode_altval(a1[1], v14, 65);
          if ( (unsigned __int64)v15 >= v5 || (unsigned __int64)v15 < a2 )
          {
            v20 = v15;
          }
          else
          {
            v17 = a1[1];
            v20 = &v15[v19];
            v21 = &v15[v19];
            netnode_supset(v17, v14, &v21, 8, 65, v16);
          }
          LODWORD(v21) = v14;
          sub_587660(a1 + 2, (void **)&v20, (unsigned int *)&v21, 0x97u);
          v14 = netnode_supnext(a1[1], v14, 65);
        }
        while ( v14 != -1 );
      }
    }
  }
  return v22 - __readfsqword(0x28u);
}
