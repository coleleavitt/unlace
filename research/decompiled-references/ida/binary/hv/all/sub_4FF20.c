_QWORD *__fastcall sub_4FF20(char *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 *v5; // r14
  _QWORD *v6; // rbx
  __int64 (__fastcall *v7)(__int64, char **, __int64); // r8
  void (__fastcall *v8)(_QWORD *); // rax
  _QWORD *v10; // rdi
  char *v11; // [rsp+8h] [rbp-B0h] BYREF
  char *v12; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v13; // [rsp+18h] [rbp-A0h]
  __int64 v14; // [rsp+28h] [rbp-90h]
  __int128 v15; // [rsp+30h] [rbp-88h]
  __int64 v16; // [rsp+40h] [rbp-78h]
  __int128 v17; // [rsp+48h] [rbp-70h]
  __int64 v18; // [rsp+58h] [rbp-60h]
  __int128 v19; // [rsp+60h] [rbp-58h]
  __int64 v20; // [rsp+70h] [rbp-48h]
  unsigned __int64 v21; // [rsp+78h] [rbp-40h]

  v11 = a1;
  v21 = __readfsqword(0x28u);
  v4 = operator new(0x78u);
  v20 = 0;
  *(_BYTE *)(v4 + 8) = 39;
  v5 = (__int64 *)(v4 + 16);
  v6 = (_QWORD *)v4;
  *(_QWORD *)v4 = &off_161958;
  v12 = nullptr;
  v14 = 0;
  v16 = 0;
  v18 = 0;
  v13 = 0;
  v15 = 0;
  v17 = 0;
  v19 = 0;
  sub_4A1F0(v4 + 16, (__int64)&v12);
  sub_1A780((__int64)&v12);
  if ( v11 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, char **, __int64))(*v6 + 24LL);
    if ( v7 == sub_4F930 )
    {
      v12 = v11;
      if ( !__CFADD__(a2, v11) && (unsigned __int8)sub_4F790(v5, &v12, a2) )
        return v6;
    }
    else if ( ((unsigned __int8 (__fastcall *)(_QWORD *, char **, __int64, _QWORD))v7)(v6, &v11, a2, a3) )
    {
      return v6;
    }
    if ( v6 )
    {
      v8 = *(void (__fastcall **)(_QWORD *))(*v6 + 8LL);
      if ( v8 != sub_45A20 )
      {
        v10 = v6;
        v6 = nullptr;
        v8(v10);
        return v6;
      }
      *v6 = &off_161958;
      sub_1A780((__int64)v5);
      operator delete(v6, 0x78u);
    }
    return nullptr;
  }
  return v6;
}

