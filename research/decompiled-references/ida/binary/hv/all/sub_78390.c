__int64 __fastcall sub_78390(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  char v6; // al
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v8[1] = __readfsqword(0x28u);
  v5 = a3;
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, a2, a3);
  }
  else
  {
    if ( *(_QWORD *)(a1 + 48) )
    {
      v8[0] = a3;
      (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 56))(a1 + 32, v8);
    }
    v6 = sub_91C20(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), a2, v5);
  }
  if ( !v6 )
    return -1;
  return v5;
}

