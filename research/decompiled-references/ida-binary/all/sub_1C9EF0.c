int *__fastcall sub_1C9EF0(int a1, __int64 a2, __int64 a3, double a4, __m128 a5)
{
  __int64 v6; // rax
  int *v7; // rbx
  _DWORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r14
  void *v15; // rdi
  __int64 v16; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+4h] [rbp-84h] BYREF
  void *v21; // [rsp+8h] [rbp-80h]
  __int64 v22; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-70h]
  char v24; // [rsp+20h] [rbp-68h]
  _QWORD v25[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v26; // [rsp+40h] [rbp-48h]
  int *v27; // [rsp+48h] [rbp-40h]
  unsigned __int64 v28; // [rsp+58h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  if ( !qword_8CD748 || !a2 )
    return nullptr;
  v6 = operator new(0x18u);
  *(_QWORD *)(v6 + 8) = a2;
  v7 = (int *)v6;
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = a1;
  *(_QWORD *)(v6 + 16) = a3;
  QT::QReadWriteLock::tryLockForWrite(&qword_8CAEF0, 0x7FFFFFFFFFFFFFFFLL, 0x100000000LL);
  v25[0] = register_timer;
  v25[1] = 0;
  v26 = 0;
  v27 = v7;
  sub_4797E0(v25, 0, 0);
  v20 = *v7;
  if ( qword_8CAEF8 )
  {
    if ( *(_DWORD *)qword_8CAEF8 <= 1u )
    {
      sub_1C9B60((__int64)&v22, (_QWORD *)qword_8CAEF8, &v20);
      v18 = *(_QWORD *)(v22 + 32) + 144 * (v23 >> 7);
      v19 = *(_QWORD *)(v18 + 128) + 16LL * *(unsigned __int8 *)(v18 + (v23 & 0x7F));
      if ( !v24 )
        *(_DWORD *)v19 = v20;
      *(_QWORD *)(v19 + 8) = v7;
      goto LABEL_27;
    }
    v21 = (void *)qword_8CAEF8;
    if ( *(_DWORD *)qword_8CAEF8 != -1 )
      _InterlockedAdd((volatile signed __int32 *)qword_8CAEF8, 1u);
    v8 = (_DWORD *)qword_8CAEF8;
    if ( qword_8CAEF8 )
    {
      if ( *(_DWORD *)qword_8CAEF8 <= 1u )
        goto LABEL_13;
      goto LABEL_12;
    }
  }
  else
  {
    v21 = nullptr;
  }
  v8 = nullptr;
LABEL_12:
  qword_8CAEF8 = (__int64)sub_1C8D00(v8, a4, a5);
  v8 = (_DWORD *)qword_8CAEF8;
LABEL_13:
  sub_1C9B60((__int64)&v22, v8, &v20);
  v9 = *(_QWORD *)(v22 + 32) + 144 * (v23 >> 7);
  v10 = *(_QWORD *)(v9 + 128) + 16LL * *(unsigned __int8 *)(v9 + (v23 & 0x7F));
  if ( !v24 )
    *(_DWORD *)v10 = v20;
  *(_QWORD *)(v10 + 8) = v7;
  if ( v21 )
  {
    if ( *(_DWORD *)v21 != -1 && !_InterlockedSub((volatile signed __int32 *)v21, 1u) )
    {
      v11 = v21;
      if ( v21 )
      {
        v12 = *((_QWORD *)v21 + 4);
        if ( v12 )
        {
          v13 = v12 + 144LL * *(_QWORD *)(v12 - 8);
          if ( v12 == v13 )
          {
            v16 = 0;
          }
          else
          {
            do
            {
              v14 = v13;
              v15 = *(void **)(v13 - 16);
              v13 -= 144;
              if ( v15 )
                operator delete[](v15);
            }
            while ( v11[4] != v13 );
            v16 = 144LL * *(_QWORD *)(v14 - 152);
          }
          operator delete[]((void *)(v13 - 8), v16 + 8);
        }
        operator delete(v11, 0x28u);
      }
    }
  }
LABEL_27:
  QT::QReadWriteLock::unlock((QT::QReadWriteLock *)&qword_8CAEF0);
  v25[0] = &off_86FF78;
  qsem_free(v26);
  return v7;
}
