__int64 __fastcall sub_5397E0(
        __int64 a1,
        unsigned __int64 a2,
        const char *a3,
        int a4,
        const char *a5,
        __int64 a6,
        double a7)
{
  _QWORD *v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rsi
  _QWORD *v16; // rax
  _QWORD *v17; // rbp
  size_t v18; // rax
  size_t v19; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx
  void *v23; // rdi
  size_t v24; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 *v27[7]; // [rsp+10h] [rbp-38h] BYREF

  v27[1] = (unsigned __int64 *)__readfsqword(0x28u);
  if ( a2
    && QT::QCoreApplication::self
    && (v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 32LL))(QT::QCoreApplication::self + 2)) != nullptr )
  {
    v12 = sub_530FC0(v11, a2);
    if ( (unsigned __int8)sub_538BA0(a1, (QT::QAction **)v12, a3, a4, v13, v14, a7) )
    {
      if ( v12 && a5 )
      {
        v15 = *(_QWORD *)(v12 + 192);
        v16 = *(_QWORD **)(a1 + 64);
        v17 = (_QWORD *)(a1 + 56);
        v26 = v15;
        if ( !v16 )
          goto LABEL_8;
        do
        {
          while ( 1 )
          {
            v21 = v16[2];
            v22 = v16[3];
            if ( v16[4] < v15 )
              break;
            v17 = v16;
            v16 = (_QWORD *)v16[2];
            if ( !v21 )
              goto LABEL_17;
          }
          v16 = (_QWORD *)v16[3];
        }
        while ( v22 );
LABEL_17:
        if ( (_QWORD *)(a1 + 56) == v17 || v15 < v17[4] )
        {
LABEL_8:
          v27[0] = &v26;
          v17 = sub_534760((_QWORD *)(a1 + 48), v17, (__int64)&unk_5E5D70, v27);
        }
        v18 = strlen(a5);
        v19 = v18;
        if ( v18 )
        {
          v23 = (void *)v17[5];
          v24 = v18 + 1;
          if ( v17[7] < v18 + 1 )
          {
            v25 = qvector_reserve(v17 + 5, v17[5], v24, 1);
            v17[5] = v25;
            v23 = (void *)v25;
          }
          v17[6] = v24;
          memmove(v23, a5, v19);
          *(_BYTE *)(v17[5] + v19) = 0;
        }
        else
        {
          v17[6] = 0;
        }
      }
      return 1;
    }
  }
  else if ( (unsigned __int8)sub_538BA0(a1, nullptr, a3, a4, (__int64)a5, a6, a7) )
  {
    return 1;
  }
  return 0;
}
