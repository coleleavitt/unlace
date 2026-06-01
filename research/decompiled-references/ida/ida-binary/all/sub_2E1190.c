__int64 __fastcall sub_2E1190(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned int v7; // ebp
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  int v13; // [rsp+Ch] [rbp-8Ch] BYREF
  __int64 v14; // [rsp+10h] [rbp-88h] BYREF
  __int128 v15; // [rsp+18h] [rbp-80h]
  char v16[56]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 40);
  v17 = __readfsqword(0x28u);
  v4 = sub_27DC40(a1, v3);
  if ( v4 == -1 )
  {
    return 0;
  }
  else
  {
    v5 = v4;
    if ( sub_27D410(v4) )
    {
      return (unsigned int)-1;
    }
    else
    {
      sub_1E96E0((QT::QObject *)v16, a3, a1, 0);
      v14 = 0;
      v13 = -1;
      v15 = 0;
      generate_disassembly(&v14, &v13, v5, 0x7FFFFFFF, 0);
      v6 = v14;
      v7 = (unsigned __int16)v13;
      if ( v14 )
      {
        v8 = v15;
        if ( (_QWORD)v15 )
        {
          v9 = 0;
          do
          {
            v10 = (__int64 *)(v6 + 24 * v9);
            v11 = *v10;
            if ( *v10 )
            {
              v10[1] = 0;
              qfree(v11, (const char *)&v13);
              v6 = v14;
            }
            ++v9;
          }
          while ( v8 != v9 );
        }
        *(_QWORD *)&v15 = 0;
        qfree(v6, (const char *)&v13);
      }
      sub_1E98C0((QT::QObject *)v16);
    }
  }
  return v7;
}
