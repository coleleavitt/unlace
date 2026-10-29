unsigned __int64 __fastcall sub_8BA4F0(__int64 **a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 *v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // r14
  bool v8; // r8
  __int64 *v9; // rcx
  __int64 v10; // r9
  __int64 *v11; // rdx
  __int64 *v12; // rsi
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rdx

  if ( a3 < a2 )
  {
    if ( !under_debugger )
      interr(1167);
    BUG();
  }
  v3 = a1[3];
  v4 = a3 - a2;
  v5 = a2 - a3;
  v8 = a2 != a3;
  if ( !v3 )
  {
    v15 = *a1;
    v14 = **a1;
    if ( v14 == a3 || !v8 )
      goto LABEL_16;
    if ( !*((_BYTE *)a1 + 100) )
      goto LABEL_15;
    goto LABEL_20;
  }
  v9 = a1[2];
  v10 = 2LL * (_QWORD)v3;
  v11 = &v9[3 * (_QWORD)v3];
  v12 = v11 - 3;
  if ( v9 == v11 )
    v12 = a1[11];
  if ( !(v12[2] - a3 + 4 * (v12[1] - *v12)) || !v8 )
    goto LABEL_9;
  if ( *((_BYTE *)a1 + 100) )
  {
LABEL_20:
    sub_8BCDF0(*a1);
    v3 = a1[3];
    if ( v3 )
    {
      v9 = a1[2];
      v10 = 2LL * (_QWORD)v3;
      goto LABEL_8;
    }
    v15 = *a1;
LABEL_15:
    v14 = *v15;
    goto LABEL_16;
  }
LABEL_8:
  v11 = &v9[(_QWORD)v3 + v10];
LABEL_9:
  v13 = v11 - 3;
  if ( v9 == v11 )
    v13 = a1[11];
  v14 = v13[2] + 4 * (v13[1] - *v13);
LABEL_16:
  if ( v5 <= 0 || !__CFADD__(v14, v5) )
    sub_8B9D60((__int64)a1, a2 - a3 + v14);
  return v4;
}
