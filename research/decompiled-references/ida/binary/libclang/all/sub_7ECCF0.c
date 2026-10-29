__int64 __fastcall sub_7ECCF0(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 *v11; // r12
  unsigned __int64 v12; // rax
  __int64 *v13; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-40h]

  v6 = (__int64 *)(a2 + 24);
  v7 = *(unsigned int *)(a2 + 16);
  v8 = a2 + v7 * 8 + 24;
  if ( v8 != a2 + 24 )
  {
    v9 = a2;
    while ( 1 )
    {
      a2 = *v6;
      if ( !(unsigned __int8)sub_7EBA80(a1, *v6) )
        return 0;
      if ( (__int64 *)v8 == ++v6 )
      {
        v7 = *(unsigned int *)(v9 + 16);
        v6 = (__int64 *)(v9 + v7 * 8 + 24);
        break;
      }
    }
  }
  v13 = v6;
  v11 = &v6[v7];
  v12 = 0;
  v14 = 0;
LABEL_8:
  if ( v11 != v6 )
  {
LABEL_9:
    if ( (v12 & 3) != 0 )
      v6 = (__int64 *)sub_ACE280(&v13, a2, a3, a4, a5, a6);
    do
    {
      a2 = *v6;
      if ( !(unsigned __int8)sub_7EBA80(a1, *v6) )
        return 0;
      v12 = v14;
      if ( (v14 & 3) != 0 )
      {
        if ( v14 <= 3 )
        {
          a2 = 1;
          sub_ACE0F0(&v13, 1);
        }
        else
        {
          sub_ACE150(&v13);
        }
        v6 = v13;
        v12 = v14;
        goto LABEL_8;
      }
      a3 = v13;
      v6 = v13 + 1;
      v13 = v6;
    }
    while ( v11 != v6 );
  }
  if ( v12 )
    goto LABEL_9;
  return 1;
}

