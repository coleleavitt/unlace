__int64 __fastcall sub_C91CB0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // eax
  _QWORD v8[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = sub_CC2440(a1[158], *(_QWORD *)(a2 + 8));
  if ( !BYTE4(v2) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 14
      && (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 48LL))(a1, a2) )
    {
      return sub_C91A90((__int64)a1, a2, v4, v5);
    }
    return 0;
  }
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 48LL))(a1, a2);
  if ( !(_BYTE)result )
    return 0;
  if ( (_DWORD)v2 != 10 )
  {
    v8[0] = a2 | 4;
    if ( (_DWORD)v2 == 13 )
    {
      return sub_CE30E0(a1, v8);
    }
    else if ( (_DWORD)v2 == 12 )
    {
      v6 = sub_CC2430(a1[158]);
      v7 = sub_BDA860(a2, v6);
      return sub_CDC0D0(a1, v7, v8);
    }
    else
    {
      return sub_D0BD20(a1, (unsigned int)v2, 10, v8);
    }
  }
  return result;
}

