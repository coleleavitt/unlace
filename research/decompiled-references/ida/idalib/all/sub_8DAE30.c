_QWORD *__fastcall sub_8DAE30(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r13
  void (__fastcall *v7)(_QWORD *); // rax
  __int64 v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v8[0] = a1;
  v4 = (_QWORD *)operator new(0x88u);
  *((_BYTE *)v4 + 8) = 111;
  v5 = v4;
  *(_OWORD *)(v4 + 3) = 0;
  *((_OWORD *)v4 + 3) = 0;
  *(_OWORD *)(v4 + 9) = 0;
  *v4 = &off_2B3F3B8;
  v4[2] = 0;
  v4[5] = 0;
  v4[8] = 0;
  v4[11] = 0;
  v4[14] = 0;
  *((_OWORD *)v4 + 6) = 0;
  *(_OWORD *)(v4 + 15) = 0;
  if ( a1 && !(unsigned __int8)sub_8E6990(v4, v8, a2, a3) )
  {
    if ( v4 )
    {
      v7 = *(void (__fastcall **)(_QWORD *))(*v4 + 8LL);
      if ( v7 == sub_8D9F80 )
      {
        sub_8D9E30(v4);
        operator delete(v4, 0x88u);
      }
      else
      {
        v7(v4);
      }
    }
    return nullptr;
  }
  return v5;
}
