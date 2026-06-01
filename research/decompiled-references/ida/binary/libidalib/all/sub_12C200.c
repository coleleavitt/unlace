__int64 __fastcall sub_12C200(_QWORD *a1, __int64 *a2)
{
  int v3; // r13d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v13; // rax
  __int64 v14; // [rsp+10h] [rbp-78h] BYREF
  __int128 v15; // [rsp+18h] [rbp-70h]
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+38h] [rbp-50h]
  unsigned __int64 v18; // [rsp+48h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  a2[1] = 0;
  if ( !a1[10] )
    return 0;
  v3 = 0;
  v4 = 0;
  do
  {
    while ( 1 )
    {
      v5 = a1[9];
      v14 = 0;
      v15 = 0;
      v6 = *(int *)(v5 + 4 * v4);
      v17 = 0;
      v16 = 0;
      v7 = sub_128CF0(&v14, &v16, a1[6] + 24 * v6);
      v8 = v14;
      v9 = v16;
      if ( v7 )
      {
        if ( (unsigned __int64)a2[1] <= 1 )
          sub_94440(a2);
        else
          sub_96630(a2);
        if ( v9 )
          qfree();
        if ( v8 )
          qfree();
        goto LABEL_9;
      }
      if ( v16 )
        qfree();
      if ( v8 )
        break;
LABEL_9:
      v4 = ++v3;
      if ( (unsigned __int64)v3 >= a1[10] )
        goto LABEL_15;
    }
    ++v3;
    qfree();
    v4 = v3;
  }
  while ( (unsigned __int64)v3 < a1[10] );
LABEL_15:
  v10 = a2[1];
  if ( v10 <= 1 )
    return 0;
  v11 = *a2;
  if ( a2[2] < v10 + 1 )
  {
    v13 = qvector_reserve();
    *a2 = v13;
    v11 = v13;
  }
  a2[1] = v10 + 1;
  *(_BYTE *)(v11 + v10 - 1) = 62;
  *(_BYTE *)(*a2 + v10) = 0;
  return 1;
}

