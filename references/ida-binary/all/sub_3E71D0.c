unsigned __int64 __fastcall sub_3E71D0(
        QT::QAbstractItemView *this,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const char *v11; // rsi
  __int64 v12; // rax
  _BYTE *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdi
  char *v16; // rbx
  unsigned __int64 v17; // r13
  _BYTE *v18; // rax
  double v19; // xmm4_8
  double v20; // xmm5_8
  signed __int64 v21; // r12
  __int64 v22; // [rsp+8h] [rbp-260h] BYREF
  _BYTE *v23; // [rsp+10h] [rbp-258h] BYREF
  __int128 v24; // [rsp+18h] [rbp-250h]
  _BYTE v25[520]; // [rsp+30h] [rbp-238h] BYREF
  unsigned __int64 v26; // [rsp+238h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  if ( *((_DWORD *)this + 279) != -1 )
  {
    if ( (unsigned __int8)netnode_inited(a2) )
    {
      qsnprintf(v25, 512, "$ watchview %d", *((_DWORD *)this + 279));
      netnode_check(&v22, v25, 0, 0);
      if ( v22 != -1 )
      {
        v11 = (const char *)&v23;
        v24 = 0;
        v23 = nullptr;
        v12 = netnode_qgetblob(v22, &v23, 1, 0, 87);
        v13 = v23;
        if ( v12 <= 0 || *v23 )
        {
          if ( !v23 )
            return v26 - __readfsqword(0x28u);
          goto LABEL_17;
        }
        v15 = *(_QWORD *)(QT::QAbstractItemView::model(this) + 32LL);
        if ( v15 )
        {
          v11 = nullptr;
          sub_3E2CD0((__int64 *)v15, nullptr, *(unsigned int *)(v15 + 24), v14, 0.0);
        }
        v13 = v23;
        v16 = v23 + 1;
        v17 = (unsigned __int64)&v23[v24 - 1];
        if ( (unsigned __int64)(v23 + 1) < v17 )
        {
          do
          {
            v21 = v17 - (_QWORD)v16;
            if ( !v16 )
              break;
            v11 = nullptr;
            v18 = memchr(v16, 0, v17 - (_QWORD)v16);
            if ( v18 )
            {
              v21 = v18 - v16;
              if ( v18 == v16 )
                break;
            }
            v11 = v16;
            sub_3E6EF0((__int64)this, v16, 0.0, a3, a4, a5, v19, v20, a8, a9);
            v16 += v21 + 1;
          }
          while ( (unsigned __int64)v16 < v17 );
          v13 = v23;
        }
        if ( v13 )
        {
LABEL_17:
          *(_QWORD *)&v24 = 0;
          qfree(v13, v11);
        }
      }
    }
  }
  return v26 - __readfsqword(0x28u);
}
