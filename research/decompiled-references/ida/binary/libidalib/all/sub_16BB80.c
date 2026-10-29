__int64 __fastcall sub_16BB80(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // edx
  int v8; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-10h]

  v2 = *(_BYTE *)(a1 + 992) == 0;
  v9 = __readfsqword(0x28u);
  if ( v2 )
  {
    v4 = 0;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 480) )
    {
      sub_158B30(a1);
      return sub_16BC30(a1, a2);
    }
    v4 = 0;
    if ( *(_DWORD *)(a1 + 472) == 1 )
      v4 = *(_QWORD *)(a1 + 856);
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 96LL))(v4, 0);
  v6 = 0;
  if ( *(_QWORD *)(v5 + 16) > 1u )
  {
    v8 = tag_strlen();
    sub_16B660(a1, (unsigned __int64)&v8, 0);
    return 1;
  }
  return v6;
}

