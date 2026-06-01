char *__fastcall sub_8E3B10(__int64 a1, __int64 a2, unsigned int a3)
{
  char *v4; // rax
  __int64 v5; // r14
  char *v6; // rbx
  void (__fastcall *v8)(char *); // rax
  char *v9; // rdi
  __int64 v10; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v12; // [rsp+18h] [rbp-C0h]
  __int64 v13; // [rsp+28h] [rbp-B0h]
  __int128 v14; // [rsp+30h] [rbp-A8h]
  __int64 v15; // [rsp+40h] [rbp-98h]
  __int128 v16; // [rsp+48h] [rbp-90h]
  __int64 v17; // [rsp+58h] [rbp-80h]
  __int128 v18; // [rsp+60h] [rbp-78h]
  __int64 v19; // [rsp+70h] [rbp-68h]
  __int128 v20; // [rsp+78h] [rbp-60h]
  __int128 v21; // [rsp+88h] [rbp-50h]
  unsigned __int64 v22; // [rsp+98h] [rbp-40h]

  v10 = a1;
  v22 = __readfsqword(0x28u);
  v4 = (char *)operator new(0xA0u);
  v11 = 0;
  v4[8] = 13;
  v5 = (__int64)(v4 + 16);
  v6 = v4;
  *(_QWORD *)v4 = &off_2B3E158;
  v21 = 0;
  v13 = 0;
  v15 = 0;
  v17 = 0;
  v19 = 0;
  v12 = 0;
  v14 = 0;
  v16 = 0;
  v18 = 0;
  v20 = 0;
  sub_8E39F0((__int64)(v4 + 16), (__int64)&v11);
  v6[152] = 0;
  sub_8E3880((__int64)&v11);
  if ( v10
    && !(*(unsigned __int8 (__fastcall **)(char *, __int64 *, __int64, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, &v10, a2, a3) )
  {
    if ( v6 )
    {
      v8 = *(void (__fastcall **)(char *))(*(_QWORD *)v6 + 8LL);
      if ( v8 != sub_8E3920 )
      {
        v9 = v6;
        v6 = nullptr;
        v8(v9);
        return v6;
      }
      *(_QWORD *)v6 = &off_2B3E158;
      sub_8E3880(v5);
      operator delete(v6, 0xA0u);
    }
    return nullptr;
  }
  return v6;
}
