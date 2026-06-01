__int64 __fastcall sub_506E00(__int64 ***a1, unsigned __int64 a2)
{
  __int64 **v2; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 **v6; // rdx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r8
  __int64 **v9; // r10
  unsigned __int64 *v10; // rdx
  __int64 v12; // rax
  __int64 **v13; // rdi
  __int64 **v14; // rdx

  v2 = *a1;
  v4 = 2LL * (_QWORD)a1[1];
  v5 = (__int64)&(*a1)[v4];
  if ( a2 == -1 )
    return v5;
  v6 = a1[3];
  if ( v6 != (__int64 **)v5 )
  {
    v7 = (*v6)[1];
    v8 = **v6;
    if ( a2 < v7 )
    {
      if ( v6 == v2 || a2 >= v8 )
        return (__int64)a1[3];
      v5 = (__int64)a1[3];
      if ( a2 >= (*(v6 - 2))[1] )
        return v5;
    }
    else if ( v7 == a2 )
    {
      v9 = v6 + 2;
      if ( v6 + 2 == (__int64 **)v5 )
        return (__int64)v9;
      v10 = (unsigned __int64 *)v6[2];
      if ( *v10 < v8 || *v10 == v8 && a2 >= v10[1] )
      {
        if ( !under_debugger )
          interr(2100);
        BUG();
      }
      if ( a2 < v10[1] )
      {
        a1[3] = v9;
        return (__int64)v9;
      }
    }
  }
  v12 = (v4 * 8) >> 4;
  v13 = v2;
  while ( v12 > 0 )
  {
    while ( 1 )
    {
      v14 = &v13[2 * (v12 >> 1)];
      if ( a2 < (*v14)[1] )
        break;
      v13 = v14 + 2;
      v12 = v12 - 1 - (v12 >> 1);
      if ( v12 <= 0 )
        goto LABEL_20;
    }
    v12 >>= 1;
  }
LABEL_20:
  a1[3] = v13;
  return (__int64)v13;
}
