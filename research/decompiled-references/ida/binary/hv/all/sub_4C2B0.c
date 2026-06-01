_BYTE *__fastcall sub_4C2B0(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE *v3; // rbx
  unsigned __int64 v4; // rbp
  void (__fastcall *v6)(void *); // rax
  _BYTE *v7; // rdi
  unsigned __int64 v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  v2 = operator new(0x18u);
  *(_BYTE *)(v2 + 8) = 48;
  v3 = (_BYTE *)v2;
  *(_QWORD *)v2 = off_161B08;
  *(_DWORD *)(v2 + 12) = 0;
  *(_BYTE *)(v2 + 16) = 0;
  if ( a1 )
  {
    v8[0] = a1;
    v4 = a2 + a1;
    if ( __CFADD__(a2, a1) )
    {
      if ( !v2 )
        return nullptr;
    }
    else
    {
      if ( sub_4A460((_DWORD *)(v2 + 12), v8, v4) )
      {
        if ( v8[0] < v4 )
        {
          v3[16] = *(_BYTE *)v8[0];
          return v3;
        }
        v3[16] = 0;
      }
      if ( !v3 )
        return nullptr;
      v6 = *(void (__fastcall **)(void *))(*(_QWORD *)v3 + 8LL);
      if ( v6 != sub_3C360 )
      {
        v7 = v3;
        v3 = nullptr;
        v6(v7);
        return v3;
      }
    }
    operator delete(v3, 0x18u);
    return nullptr;
  }
  return v3;
}

