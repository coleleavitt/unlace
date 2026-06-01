__int64 __fastcall sub_7C91F0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, char **, __int64); // r8
  void (__fastcall *v6)(_QWORD *); // rax
  __int64 v8; // rdi
  int v9[2]; // [rsp+8h] [rbp-B0h] BYREF
  void *v10; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v11; // [rsp+18h] [rbp-A0h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int128 v13; // [rsp+38h] [rbp-80h]
  __int64 v14; // [rsp+48h] [rbp-70h] BYREF
  __int128 v15; // [rsp+50h] [rbp-68h]
  __int64 v16; // [rsp+60h] [rbp-58h]
  __int128 v17; // [rsp+68h] [rbp-50h]
  unsigned __int64 v18; // [rsp+78h] [rbp-40h]

  *(_QWORD *)v9 = a1;
  v18 = __readfsqword(0x28u);
  v10 = nullptr;
  v4 = operator new(0x58u);
  v14 = 0;
  ptr = nullptr;
  v11 = 0;
  v13 = 0;
  v15 = 0;
  sub_7BC640(&v14, &v10);
  *(_BYTE *)(v4 + 8) = 34;
  *(_QWORD *)v4 = &off_2B11B00;
  v17 = 0;
  v16 = 0;
  sub_7C6210(v4 + 16, (__int64)&ptr);
  sub_7B1430((__int64)&ptr);
  if ( *(_QWORD *)v9 )
  {
    v5 = *(__int64 (__fastcall **)(__int64, char **, __int64))(*(_QWORD *)v4 + 24LL);
    if ( v5 == sub_7C9180 )
    {
      ptr = *(void **)v9;
      if ( !__CFADD__(a2, *(_QWORD *)v9) && (unsigned __int8)sub_7C8E40((__int64 *)(v4 + 16), (char **)&ptr, a2) )
        return v4;
    }
    else if ( ((unsigned __int8 (__fastcall *)(__int64, int *, __int64, _QWORD))v5)(v4, v9, a2, a3) )
    {
      return v4;
    }
    if ( v4 )
    {
      v6 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v4 + 8LL);
      if ( v6 != sub_7BC740 )
      {
        v8 = v4;
        v4 = 0;
        v6((_QWORD *)v8);
        return v4;
      }
      *(_QWORD *)v4 = &off_2B11B00;
      sub_7B1430(v4 + 16);
      operator delete((void *)v4, 0x58u);
    }
    return 0;
  }
  return v4;
}

