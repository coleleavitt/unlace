bool __fastcall sub_1419E50(__int64 *a1, __int64 a2)
{
  int *v2; // rbp
  int *v3; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  int *v6; // rbx
  int *v7; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbx
  int *v11; // r15
  int v12; // edx
  __int64 v14; // [rsp+0h] [rbp-50h]
  __int64 v15; // [rsp+0h] [rbp-50h]

  if ( !(_DWORD)a2 )
    return 0;
  if ( !HIDWORD(a2) )
    return 0;
  v2 = (int *)a1[7];
  v14 = a1[1];
  v3 = (int *)a1[8];
  v4 = ((char *)v3 - (char *)v2) >> 3;
  if ( (char *)v3 - (char *)v2 <= 0 )
    goto LABEL_10;
  while ( 1 )
  {
    v5 = v4 >> 1;
    v6 = &v2[2 * (v4 >> 1)];
    if ( !sub_10246C0(v14, *v6, a2) )
      break;
    v2 = v6 + 2;
    v5 = v4 - v5 - 1;
    if ( v5 <= 0 )
      goto LABEL_9;
LABEL_6:
    v4 = v5;
  }
  if ( v5 )
    goto LABEL_6;
LABEL_9:
  v3 = (int *)a1[8];
LABEL_10:
  if ( v2 == v3 || sub_10246C0(a1[1], SHIDWORD(a2), *v2) )
    return 0;
  v7 = v2;
  v15 = a1[1];
  v8 = a1[8];
  v9 = (v8 - (__int64)v2) >> 3;
  if ( v8 - (__int64)v2 > 0 )
  {
    while ( 1 )
    {
      v10 = v9 >> 1;
      v11 = &v7[2 * (v9 >> 1)];
      if ( sub_10246C0(v15, SHIDWORD(a2), *v11) )
      {
        if ( !v10 )
        {
LABEL_18:
          v8 = a1[8];
          break;
        }
      }
      else
      {
        v7 = v11 + 2;
        v10 = v9 - v10 - 1;
        if ( v10 <= 0 )
          goto LABEL_18;
      }
      v9 = v10;
    }
  }
  v12 = 0;
  if ( v7 != (int *)v8 )
    v12 = v7[1];
  return v2[1] != v12;
}
