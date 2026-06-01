_QWORD *__fastcall sub_7C85B0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // rbx
  void (__fastcall *v6)(_QWORD *); // rax
  __int64 v7; // [rsp+8h] [rbp-70h] BYREF
  __int64 v8; // [rsp+10h] [rbp-68h] BYREF
  __int128 v9; // [rsp+18h] [rbp-60h]
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  __int128 v11; // [rsp+38h] [rbp-40h]
  unsigned __int64 v12; // [rsp+48h] [rbp-30h]

  v7 = a1;
  v12 = __readfsqword(0x28u);
  v10 = 0;
  v4 = (_QWORD *)operator new(0x70u);
  *((_BYTE *)v4 + 8) = 48;
  *v4 = &off_2B11DA0;
  v4[2] = 0;
  v4[5] = 0;
  v4[8] = 0;
  *(_OWORD *)(v4 + 3) = 0;
  *((_OWORD *)v4 + 3) = 0;
  *(_OWORD *)(v4 + 9) = 0;
  v8 = 0;
  v11 = 0;
  v9 = 0;
  sub_7BC640(v4 + 8, &v8);
  v4[11] = 0;
  *((_OWORD *)v4 + 6) = 0;
  sub_7BC640(v4 + 11, &v10);
  if ( v7 && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *, __int64, _QWORD))(*v4 + 24LL))(v4, &v7, a2, a3) )
  {
    if ( v4 )
    {
      v6 = *(void (__fastcall **)(_QWORD *))(*v4 + 8LL);
      if ( v6 != sub_7BB900 )
      {
        v6(v4);
        return nullptr;
      }
      sub_7BB760(v4);
      operator delete(v4, 0x70u);
    }
    return nullptr;
  }
  return v4;
}

