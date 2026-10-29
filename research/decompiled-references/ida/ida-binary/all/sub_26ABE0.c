unsigned __int64 __fastcall sub_26ABE0(double a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 *v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 i; // rbx
  QT::QRegularExpression *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+8h] [rbp-40h]
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  if ( !(unsigned __int8)qgetenv("IDA_NO_SHARED_HISTORY", 0)
    && (unsigned __int8)netnode_inited(a1)
    && ((a4 & 8) != 0 || (unsigned int)reg_int_op("EnableHistorySharing", 0, 1, 0)) )
  {
    sub_26A8A0(&v19, a3, v6, v7);
    v8 = (__int64 *)unk_8CAC18;
    if ( !unk_8CAC18 )
    {
      v18 = operator new(0x18u);
      a1 = 0.0;
      *(_QWORD *)v18 = 0;
      v8 = (__int64 *)v18;
      unk_8CAC18 = v18;
      *(_OWORD *)(v18 + 8) = 0;
    }
    sub_196C20(v8, &v19);
    v9 = v19;
    if ( v19 )
    {
      v10 = v20;
      if ( v20 )
      {
        v11 = 0;
        do
        {
          v12 = (__int64 *)(v9 + 48 * v11);
          v13 = v12[3];
          if ( v13 )
          {
            v12[4] = 0;
            a1 = qfree(v13, (const char *)&v19);
          }
          v14 = *v12;
          if ( *v12 )
          {
            v15 = v12[1];
            if ( v15 )
            {
              for ( i = 0; i != v15; ++i )
              {
                v17 = (QT::QRegularExpression *)(v14 + 8 * i);
                QT::QRegularExpression::~QRegularExpression(v17);
                v14 = *v12;
              }
            }
            v12[1] = 0;
            a1 = qfree(v14, (const char *)&v19, a1);
          }
          ++v11;
          v9 = v19;
        }
        while ( v10 != v11 );
      }
      v20 = 0;
      qfree(v9, (const char *)&v19);
    }
  }
  return v21 - __readfsqword(0x28u);
}
