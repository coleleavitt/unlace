unsigned __int64 __fastcall sub_56EC00(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v4; // rax
  unsigned int v5; // r12d
  __int64 v6; // r15
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v13; // r14
  unsigned int v14; // r14d
  unsigned int v15; // eax
  __int64 v16; // rdi
  int v18; // [rsp+Ch] [rbp-5Ch]
  unsigned int v19; // [rsp+1Ch] [rbp-4Ch] BYREF
  unsigned int v20; // [rsp+20h] [rbp-48h] BYREF
  int v21; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 32);
  v22 = __readfsqword(0x28u);
  v5 = a4 + a2;
  if ( v4 )
  {
    v6 = a1 + 24;
    v9 = a1 + 24;
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v4 + 16);
        v11 = *(_QWORD *)(v4 + 24);
        if ( *(_DWORD *)(v4 + 32) < a2 )
          break;
        v9 = v4;
        v4 = *(_QWORD *)(v4 + 16);
        if ( !v10 )
          goto LABEL_6;
      }
      v4 = *(_QWORD *)(v4 + 24);
    }
    while ( v11 );
LABEL_6:
    if ( v6 != v9 && *(_DWORD *)(v9 + 32) < v5 )
    {
      v13 = *(_QWORD *)(a1 + 40);
      if ( (unsigned __int8)sub_3A0490(v13, a1 + 24, 153) )
        sub_3A07C0(a1 + 16, v13, v6);
      v19 = netnode_supfirst(*(unsigned int *)(a1 + 8), 65);
      v14 = v19;
      if ( v19 != -1 )
      {
        v18 = a3 - a2;
        do
        {
          v15 = netnode_altval(*(unsigned int *)(a1 + 8), v14, 65);
          if ( v15 >= v5 || v15 < a2 )
          {
            v20 = v15;
          }
          else
          {
            v16 = *(unsigned int *)(a1 + 8);
            v20 = v18 + v15;
            v21 = v18 + v15;
            netnode_supset(v16, v14, &v21, 4, 65);
          }
          sub_56DAE0((_QWORD *)(a1 + 16), &v20, &v19, 0x97u);
          v19 = netnode_supnext(*(unsigned int *)(a1 + 8), v14, 65);
          v14 = v19;
        }
        while ( v19 != -1 );
      }
    }
  }
  return v22 - __readfsqword(0x28u);
}

