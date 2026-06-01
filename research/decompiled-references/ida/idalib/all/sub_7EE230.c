_QWORD *__fastcall sub_7EE230(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // rbx
  bool v5; // zf
  void (__fastcall *v7)(_QWORD *); // rax
  _QWORD v8[2]; // [rsp+8h] [rbp-80h] BYREF
  __int128 v9; // [rsp+18h] [rbp-70h]
  __int128 v10; // [rsp+30h] [rbp-58h]
  __int64 v11; // [rsp+40h] [rbp-48h] BYREF
  __int128 v12; // [rsp+48h] [rbp-40h]
  __int128 v13; // [rsp+58h] [rbp-30h]
  unsigned __int64 v14; // [rsp+68h] [rbp-20h]

  v8[0] = a1;
  v14 = __readfsqword(0x28u);
  v4 = (_QWORD *)operator new(0x98u);
  *((_BYTE *)v4 + 8) = 16;
  *v4 = &off_2B3B740;
  *((_DWORD *)v4 + 3) = 0;
  v4[2] = 0;
  v4[5] = 0;
  v10 = 0;
  *(_OWORD *)(v4 + 3) = 0;
  *((_OWORD *)v4 + 3) = 0;
  v8[1] = 0;
  v11 = 0;
  v9 = 0;
  v12 = 0;
  v13 = 0;
  sub_7DCEA0(v4 + 5, (__int64)&v11);
  v5 = v8[0] == 0;
  v4[10] = 0;
  *((_OWORD *)v4 + 4) = 0;
  v4[13] = 0;
  v4[16] = 0;
  *(_OWORD *)(v4 + 11) = 0;
  *((_OWORD *)v4 + 7) = 0;
  *(_OWORD *)(v4 + 17) = 0;
  if ( !v5 && !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD *, __int64, _QWORD))(*v4 + 24LL))(v4, v8, a2, a3) )
  {
    if ( v4 )
    {
      v7 = *(void (__fastcall **)(_QWORD *))(*v4 + 8LL);
      if ( v7 != sub_7DE6C0 )
      {
        v7(v4);
        return nullptr;
      }
      sub_7DE5C0(v4);
      operator delete(v4, 0x98u);
    }
    return nullptr;
  }
  return v4;
}
