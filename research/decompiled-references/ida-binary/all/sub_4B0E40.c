__int64 __fastcall sub_4B0E40(__int64 a1, __int16 a2, _QWORD *a3, unsigned __int64 a4)
{
  _QWORD *v6; // rbp
  _BYTE *v8; // rsi
  _QWORD *v9; // r8
  unsigned __int64 v10; // rdi
  char v11; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  _QWORD *v14; // r13
  const QT::QString *v15; // rsi
  void **v16; // rax
  void **v17; // r12
  void **v18; // r15
  char *v19; // rdi
  void **v20; // r13
  void **v21; // r14
  __int64 v22; // rax
  void **v23; // rax
  __int64 v24; // rax
  void *v25; // rsi
  void *ptr; // [rsp+0h] [rbp-88h] BYREF
  void *v27; // [rsp+8h] [rbp-80h]
  _QWORD *v28; // [rsp+38h] [rbp-50h]
  unsigned __int64 v29; // [rsp+40h] [rbp-48h]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( a2 )
  {
    v6 = qword_8D1C98;
    if ( qword_8D1C98 )
    {
      if ( *(_DWORD *)qword_8D1C98 != -1 )
        _InterlockedAdd((volatile signed __int32 *)qword_8D1C98, 1u);
      v8 = (_BYTE *)v6[4];
      if ( *v8 == 0xFF )
      {
        v10 = 0;
        do
        {
          if ( ++v10 == v6[2] )
          {
            v10 = 0;
            v9 = nullptr;
            goto LABEL_10;
          }
        }
        while ( v8[144 * (v10 >> 7) + (v10 & 0x7F)] == 0xFF );
        v9 = v6;
      }
      else
      {
        v9 = v6;
        v10 = 0;
      }
    }
    else
    {
      v9 = nullptr;
      v10 = 0;
    }
LABEL_10:
    v28 = nullptr;
    v11 = 0;
    v29 = 0;
    if ( !v9 )
      goto LABEL_17;
    while ( 1 )
    {
      v12 = v9[4];
      v13 = v10;
      do
      {
        if ( ++v13 == v9[2] )
        {
          v13 = 0;
          v14 = nullptr;
          goto LABEL_15;
        }
      }
      while ( *(_BYTE *)(v12 + 144 * (v13 >> 7) + (v13 & 0x7F)) == 0xFF );
      v14 = v9;
LABEL_15:
      a3 = v9;
      v11 = 1;
      v15 = (const QT::QString *)(*(_QWORD *)(144 * (v10 >> 7) + v12 + 128)
                                + 32LL * *(unsigned __int8 *)(144 * (v10 >> 7) + v12 + (v10 & 0x7F)));
      a4 = v10;
      if ( *((_WORD *)v15 + 12) == a2 )
        break;
      v9 = v14;
      v10 = v13;
      if ( !v14 )
      {
LABEL_17:
        if ( !v10 )
        {
          if ( v11 )
          {
            v28 = a3;
            v29 = a4;
          }
          sub_5360B0(a1, &unk_5C2F25, 1);
          goto LABEL_21;
        }
      }
    }
    v29 = v10;
    v28 = v9;
    QT::QString::toUtf8_helper((QT::QString *)&ptr, v15);
    v25 = v27;
    if ( !v27 )
      v25 = &QT::QByteArray::_empty;
    sub_5360B0(a1, v25, 1);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
LABEL_21:
    if ( v6 && *(_DWORD *)v6 != -1 && !_InterlockedSub((volatile signed __int32 *)v6, 1u) )
    {
      v16 = (void **)v6[4];
      if ( v16 )
      {
        v17 = &v16[18 * (_QWORD)*(v16 - 1)];
        if ( v16 == v17 )
        {
          v24 = 0;
        }
        else
        {
          v18 = v17 - 2;
          do
          {
            v19 = (char *)*v18;
            v20 = v17;
            v17 -= 18;
            if ( *v18 )
            {
              v21 = v17;
              if ( v17 == v18 )
                goto LABEL_36;
              do
              {
                v22 = *(unsigned __int8 *)v21;
                if ( (_BYTE)v22 != 0xFF )
                {
                  v23 = (void **)&v19[32 * v22];
                  if ( *v23 )
                  {
                    if ( !_InterlockedSub((volatile signed __int32 *)*v23, 1u) )
                      free(*v23);
                    v19 = (char *)*v18;
                  }
                }
                v21 = (void **)((char *)v21 + 1);
              }
              while ( v21 != v18 );
              if ( v19 )
LABEL_36:
                operator delete[](v19);
            }
            v18 -= 18;
          }
          while ( (void **)v6[4] != v17 );
          v24 = 144LL * (_QWORD)*(v20 - 19);
        }
        operator delete[](v17 - 1, v24 + 8);
      }
      operator delete(v6, 0x28u);
    }
  }
  else
  {
    sub_5360B0(a1, &unk_5C2F25, 1);
  }
  return a1;
}
