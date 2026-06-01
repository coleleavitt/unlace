__int64 __fastcall sub_209EAD0(__int64 *a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx

  v4 = a2[2];
  v5 = a3[2];
  v6 = a4[2];
  v7 = *a1;
  if ( v4 >= v5 )
  {
    if ( v4 >= v6 )
    {
      if ( v5 >= v6 )
        goto LABEL_3;
LABEL_5:
      *a1 = *a4;
      v12 = a4[1];
      *a4 = v7;
      v13 = a1[1];
      a1[1] = v12;
      v14 = a4[2];
      a4[1] = v13;
      result = a1[2];
      a1[2] = v14;
      a4[2] = result;
      return result;
    }
  }
  else
  {
    if ( v5 < v6 )
    {
LABEL_3:
      *a1 = *a3;
      v8 = a3[1];
      *a3 = v7;
      v9 = a1[1];
      a1[1] = v8;
      v10 = a3[2];
      a3[1] = v9;
      result = a1[2];
      a1[2] = v10;
      a3[2] = result;
      return result;
    }
    if ( v4 < v6 )
      goto LABEL_5;
  }
  *a1 = *a2;
  v15 = a2[1];
  *a2 = v7;
  v16 = a1[1];
  a1[1] = v15;
  v17 = a2[2];
  a2[1] = v16;
  result = a1[2];
  a1[2] = v17;
  a2[2] = result;
  return result;
}
