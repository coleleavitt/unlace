unsigned __int64 __fastcall sub_896BF0(__int64 **a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 *v4; // rdx
  __int64 v5; // r14
  unsigned __int64 v7; // r12
  bool v8; // r8
  __int64 *v9; // rcx
  __int64 *v10; // rax
  __int64 *v11; // rsi
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // rdx

  if ( a3 < a2 )
  {
    if ( !under_debugger )
      interr(1167);
    BUG();
  }
  v4 = a1[3];
  v5 = a2 - a3;
  v7 = a3 - a2;
  v8 = a2 != a3;
  if ( !v4 )
  {
    v14 = *a1;
    v13 = **a1;
    if ( v13 == a3 || a2 == a3 )
      goto LABEL_16;
    if ( !*((_BYTE *)a1 + 92) )
      goto LABEL_15;
    goto LABEL_20;
  }
  v9 = a1[2];
  v10 = &v9[2 * (_QWORD)v4];
  v11 = v10 - 2;
  if ( v9 == v10 )
    v11 = a1[10];
  if ( !(v11[1] - a3 + 4LL * (unsigned int)(*((_DWORD *)v11 + 1) - *(_DWORD *)v11)) || !v8 )
    goto LABEL_9;
  if ( *((_BYTE *)a1 + 92) )
  {
LABEL_20:
    sub_8990B0(*a1);
    v4 = a1[3];
    if ( v4 )
    {
      v9 = a1[2];
      goto LABEL_8;
    }
    v14 = *a1;
LABEL_15:
    v13 = *v14;
    goto LABEL_16;
  }
LABEL_8:
  v10 = &v9[2 * (_QWORD)v4];
LABEL_9:
  v12 = v10 - 2;
  if ( v9 == v10 )
    v12 = a1[10];
  v13 = v12[1] + 4LL * (unsigned int)(*((_DWORD *)v12 + 1) - *(_DWORD *)v12);
LABEL_16:
  if ( v5 <= 0 || !__CFADD__(v13, v5) )
    sub_8962A0((__int64)a1, a2 - a3 + v13);
  return v7;
}

