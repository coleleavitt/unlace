__int64 __fastcall sub_3494C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v7; // r12d
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  int v15; // [rsp+8h] [rbp-30h]
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v7 = a4;
  if ( (unsigned __int8)sub_331080(a2, a2, a3, a4, a5) )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 128LL))(a3);
    v9 = (_QWORD *)a1[2];
    v15 = v7;
    v14 = v8;
    v10 = a1 + 1;
    if ( !v9 )
      goto LABEL_3;
    do
    {
      while ( 1 )
      {
        v12 = v9[2];
        v13 = v9[3];
        if ( v9[4] < v8 )
          break;
        v10 = v9;
        v9 = (_QWORD *)v9[2];
        if ( !v12 )
          goto LABEL_8;
      }
      v9 = (_QWORD *)v9[3];
    }
    while ( v13 );
LABEL_8:
    if ( a1 + 1 == v10 || v8 < v10[4] )
LABEL_3:
      sub_349350(a1, v10, (__int64)&v14);
  }
  return 0;
}
