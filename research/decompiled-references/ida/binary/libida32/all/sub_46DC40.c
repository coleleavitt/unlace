__int64 __fastcall sub_46DC40(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // edx
  __int64 *v3; // rbp
  int v5; // r13d
  int v6; // r14d
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // esi
  unsigned int v11; // ecx
  unsigned int v12; // edi
  unsigned int v13; // edx
  int v15[2]; // [rsp+0h] [rbp-38h] BYREF
  void *v16; // [rsp+8h] [rbp-30h]
  __int64 v17; // [rsp+10h] [rbp-28h]
  int v18; // [rsp+18h] [rbp-20h]
  int v19; // [rsp+20h] [rbp-18h]
  int v20; // [rsp+28h] [rbp-10h]
  __int64 v21; // [rsp+30h] [rbp-8h]

  v2 = *a2;
  v16 = (void *)__readfsqword(0x28u);
  v3 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 1480LL);
  if ( v2 < a2[1] )
  {
    v5 = a1 + 64;
    v6 = a1 + 24;
    while ( 1 )
    {
      *(_QWORD *)v15 = 0;
      v7 = sub_3B8D10(v3, (unsigned int *)v15, v2);
      v10 = v15[0];
      v11 = *a2;
      if ( v15[0] < *a2 )
      {
        v15[0] = *a2;
        v10 = v11;
      }
      v12 = v15[1];
      v13 = a2[1];
      if ( v13 < v15[1] )
      {
        v15[1] = a2[1];
        v12 = v13;
      }
      if ( v12 < v10 )
        v15[1] = v10;
      if ( v11 >= v13 )
        break;
      if ( v7 )
      {
        if ( v7 != 1 )
        {
          if ( !under_debugger )
            interr(2052);
          goto LABEL_20;
        }
        rangeset_t_add(v5, (int)v15, v13, v11, v8, v9, v15[0], v16, v17, v18, v19, v20, v21);
      }
      else
      {
        rangeset_t_add(v6, (int)v15, v13, v11, v8, v9, v15[0], v16, v17, v18, v19, v20, v21);
      }
      v2 = sub_3B8950((__int64)v3, v15[0]);
      if ( v2 >= a2[1] )
        return 0;
    }
    if ( !under_debugger )
      interr(2051);
LABEL_20:
    BUG();
  }
  return 0;
}

