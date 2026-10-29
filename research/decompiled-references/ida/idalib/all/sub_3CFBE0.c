unsigned __int64 __fastcall sub_3CFBE0(_QWORD *a1, void *a2, unsigned int a3)
{
  unsigned __int64 v5; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // [rsp+4h] [rbp-34h] BYREF
  void *v13; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v14; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v13 = a2;
  v12 = a3;
  v15 = __readfsqword(0x28u);
  v5 = -1;
  if ( a2 != (void *)-1LL )
    v5 = sub_3B9DC0(a1, (__int64)a2);
  v14 = v5;
  if ( v12 )
  {
    if ( (unsigned __int8)sub_3CF6A0(a1 + 191, &v13, &v12, 7u) )
      sub_7BE7C0(&v14, *a1, 37, &v12, 4, 83);
  }
  else
  {
    v7 = (_QWORD *)a1[193];
    v8 = a1 + 192;
    if ( v7 )
    {
      v9 = (__int64)(a1 + 192);
      do
      {
        while ( 1 )
        {
          v10 = v7[2];
          v11 = v7[3];
          if ( v7[4] >= (unsigned __int64)a2 )
            break;
          v7 = (_QWORD *)v7[3];
          if ( !v11 )
            goto LABEL_12;
        }
        v9 = (__int64)v7;
        v7 = (_QWORD *)v7[2];
      }
      while ( v10 );
LABEL_12:
      if ( v8 != (_QWORD *)v9 && (unsigned __int64)a2 >= *(_QWORD *)(v9 + 32) )
      {
        sub_3BAC70((__int64)(a1 + 191), v9, 8);
        sub_7BE850(&v14, *a1, 37, 83);
      }
    }
  }
  return v15 - __readfsqword(0x28u);
}
