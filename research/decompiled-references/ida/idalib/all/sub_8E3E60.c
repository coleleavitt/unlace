_BYTE *__fastcall sub_8E3E60(__int64 a1, __int64 a2, unsigned int a3)
{
  _BYTE *v4; // rax
  __int64 v5; // r14
  _BYTE *v6; // rbx
  void (__fastcall *v8)(_BYTE *); // rax
  _BYTE *v9; // rdi
  __int64 v10; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v12; // [rsp+18h] [rbp-A0h]
  __int64 v13; // [rsp+28h] [rbp-90h]
  __int128 v14; // [rsp+30h] [rbp-88h]
  __int64 v15; // [rsp+40h] [rbp-78h]
  __int128 v16; // [rsp+48h] [rbp-70h]
  __int64 v17; // [rsp+58h] [rbp-60h]
  __int128 v18; // [rsp+60h] [rbp-58h]
  __int64 v19; // [rsp+70h] [rbp-48h]
  unsigned __int64 v20; // [rsp+78h] [rbp-40h]

  v10 = a1;
  v20 = __readfsqword(0x28u);
  v4 = (_BYTE *)operator new(0x80u);
  v19 = 0;
  v4[8] = 34;
  v5 = (__int64)(v4 + 16);
  v6 = v4;
  *(_QWORD *)v4 = &off_2B3E548;
  v11 = 0;
  v13 = 0;
  v15 = 0;
  v17 = 0;
  v12 = 0;
  v14 = 0;
  v16 = 0;
  v18 = 0;
  sub_8E3D80((__int64)(v4 + 16), (__int64)&v11);
  v6[120] = 0;
  sub_8E3CF0((__int64)&v11);
  if ( v10
    && !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64 *, __int64, _QWORD))(*(_QWORD *)v6 + 24LL))(
          v6,
          &v10,
          a2,
          a3) )
  {
    if ( v6 )
    {
      v8 = *(void (__fastcall **)(_BYTE *))(*(_QWORD *)v6 + 8LL);
      if ( (char *)v8 != (char *)sub_8DF530 )
      {
        v9 = v6;
        v6 = nullptr;
        v8(v9);
        return v6;
      }
      *(_QWORD *)v6 = &off_2B3E548;
      sub_8E3CF0(v5);
      operator delete(v6, 0x80u);
    }
    return nullptr;
  }
  return v6;
}
