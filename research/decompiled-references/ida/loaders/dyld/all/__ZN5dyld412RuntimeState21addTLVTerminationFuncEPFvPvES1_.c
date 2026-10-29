void __fastcall dyld4::RuntimeState::addTLVTerminationFunc(
        dyld4::RuntimeState *this,
        void (__fastcall *a2)(void *),
        void *a3)
{
  _QWORD *v6; // x22
  _QWORD *v7; // x23
  __int64 v8; // x8
  _QWORD *v9; // x21
  _QWORD *v10; // x8

  v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 15) + 64LL))(
                   *((_QWORD *)this + 15),
                   *((_QWORD *)this + 100));
  if ( !v6 )
  {
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 8LL))(
                     *((_QWORD *)this + 15),
                     128);
    __bzero(v6, 0x80u);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**((_QWORD **)this + 15) + 72LL))(
      *((_QWORD *)this + 15),
      *((_QWORD *)this + 100),
      v6);
  }
  do
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
  }
  while ( v6 );
  v8 = v7[1];
  if ( v8 == 7 )
  {
    v9 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 8LL))(
                     *((_QWORD *)this + 15),
                     128);
    __bzero(v9, 0x80u);
    *v7 = v9;
    v8 = v9[1];
    v7 = v9;
  }
  v7[1] = v8 + 1;
  v10 = &v7[2 * v8];
  v10[2] = a2;
  v10[3] = a3;
}
