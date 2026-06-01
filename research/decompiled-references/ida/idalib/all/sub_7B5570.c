char *__fastcall sub_7B5570(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r13
  __int64 v5; // r15
  char v6; // al
  char v7; // r14
  char v8; // r12
  unsigned __int64 v9; // rsi
  int v10; // edx
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v16; // [rsp+8h] [rbp-50h] BYREF
  int v17[2]; // [rsp+10h] [rbp-48h] BYREF
  void *v18; // [rsp+18h] [rbp-40h]

  v18 = (void *)__readfsqword(0x28u);
  v3 = a2;
  if ( a3 )
  {
    v4 = a3;
    if ( a3 != a2 )
    {
      if ( a2 >= a3 )
      {
        if ( !under_debugger )
          interr(3073);
        goto LABEL_25;
      }
      v5 = a3 - 1;
LABEL_5:
      v16 = a2;
      v6 = sub_7B92A0(a1, &v16);
      *(_QWORD *)v17 = v5;
      v7 = v6;
      v8 = sub_7B91A0(a1, v17);
      while ( 1 )
      {
        v9 = v4;
        v10 = 1;
        while ( 1 )
        {
          v11 = v10 - 1;
          v12 = 1LL << (8 * (unsigned __int8)v10);
          v13 = v12 - 1;
          if ( v7 )
          {
            if ( v16 >= (v3 & -v12) )
              break;
          }
          if ( (v3 | v13) >= *(_QWORD *)v17 )
            break;
          v14 = v9 & -v12;
          if ( v16 >= v14 )
            break;
          if ( v8 && (v9 | v13) >= *(_QWORD *)v17 )
            v9 = v14;
          if ( ++v10 == 8 )
          {
            v11 = 7;
            break;
          }
        }
        if ( v4 < v9 )
          break;
        v3 = sub_7B5310((__int64)a1, (void *)v3, v9, v11);
        if ( v3 >= v4 )
          return (char *)v18 - __readfsqword(0x28u);
      }
      if ( !under_debugger )
        interr(2816);
LABEL_25:
      BUG();
    }
  }
  else
  {
    v5 = -2;
    *(_QWORD *)v17 = -1;
    v4 = -1;
    sub_7B3920(a1, (__int64 *)v17);
    if ( a2 != -1 )
      goto LABEL_5;
  }
  return (char *)v18 - __readfsqword(0x28u);
}
