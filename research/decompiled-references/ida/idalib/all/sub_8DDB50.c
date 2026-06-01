_BYTE *__fastcall sub_8DDB50(unsigned __int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rbx
  __int64 v4; // r12
  int v6; // eax
  void (__fastcall *v7)(void *); // rax
  _BYTE *v8; // rdi
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v9[1] = __readfsqword(0x28u);
  v2 = (_BYTE *)operator new(0x10u);
  v2[8] = 88;
  v3 = v2;
  *(_QWORD *)v2 = off_2B3EF68;
  v2[9] = 0;
  if ( a1 )
  {
    if ( __CFADD__(a1, a2) )
    {
      if ( !v2 )
        return nullptr;
    }
    else
    {
      v4 = a1 + a2;
      v9[0] = a1;
      v6 = unpack_dd(v9);
      if ( a1 < v9[0] )
      {
        v3[9] = v6 != 0;
        return v3;
      }
      if ( !v3 )
        return nullptr;
      v7 = *(void (__fastcall **)(void *))(*(_QWORD *)v3 + 8LL);
      if ( v7 != sub_8D5F40 )
      {
        v8 = v3;
        v3 = nullptr;
        ((void (__fastcall *)(_BYTE *, __int64))v7)(v8, v4);
        return v3;
      }
    }
    operator delete(v3, 0x10u);
    return nullptr;
  }
  return v3;
}
