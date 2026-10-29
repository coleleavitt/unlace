unsigned __int64 __fastcall sub_3D0A60(__int64 *a1, void *a2, unsigned int a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 v7; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v13; // rbx
  unsigned int v14; // [rsp+4h] [rbp-44h] BYREF
  void *v15; // [rsp+8h] [rbp-40h] BYREF
  __int64 v16; // [rsp+18h] [rbp-30h] BYREF
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-20h]

  v15 = a2;
  v14 = a3;
  v18 = __readfsqword(0x28u);
  if ( a3 )
  {
    if ( (unsigned __int8)sub_3CF6A0(a1 + 185, &v15, &v14, 0xCu) )
    {
      v13 = *a1;
      v17 = ea2node(v15);
      v16 = a3;
      sub_7BE7C0(&v17, v13, 8, &v16, 8, 65);
    }
  }
  else
  {
    v4 = (_QWORD *)a1[187];
    v5 = a1 + 186;
    v7 = (__int64)v5;
    if ( v4 )
    {
      do
      {
        while ( 1 )
        {
          v9 = v4[2];
          v10 = v4[3];
          if ( v4[4] >= (unsigned __int64)a2 )
            break;
          v4 = (_QWORD *)v4[3];
          if ( !v10 )
            goto LABEL_7;
        }
        v7 = (__int64)v4;
        v4 = (_QWORD *)v4[2];
      }
      while ( v9 );
LABEL_7:
      if ( v5 != (_QWORD *)v7 && (unsigned __int64)a2 >= *(_QWORD *)(v7 + 32) )
      {
        sub_3BAC70((__int64)(a1 + 185), v7, 13);
        v11 = *a1;
        v17 = ea2node(a2);
        sub_7BE850(&v17, v11, 8, 65);
      }
    }
  }
  return v18 - __readfsqword(0x28u);
}
