__int64 __fastcall sub_843D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r12d
  __int64 ash; // rdx
  const char *v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rcx
  unsigned __int8 v8; // al
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // [rsp-10h] [rbp-28h]

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 328LL))(a1);
  result = tag_strlen();
  v3 = result;
  if ( result )
  {
    ash = get_ash();
    v5 = "near";
    if ( (*(_QWORD *)(a2 + 16) & 2LL) != 0 )
      v5 = "far";
    if ( (*(_BYTE *)(ash + 328) & 8) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 584);
      v7 = (unsigned int)(unsigned __int8)getinf() - 4;
      if ( (int)v7 <= 0 )
        v7 = 1;
      result = sub_7DAF0(a1, 0, (__int64)&unk_91BD1, v7, 32, v6, v5);
    }
    else
    {
      v8 = getinf();
      v9 = 1;
      v10 = v8 - v3;
      if ( v10 > 0 )
        v9 = (unsigned int)v10;
      sub_7DAF0(a1, 0, (__int64)&unk_91BE2, *(_QWORD *)(a1 + 584), v9, 32, v5);
      result = v11;
    }
    *(_DWORD *)(a1 + 144) |= 0x2000u;
  }
  return result;
}
