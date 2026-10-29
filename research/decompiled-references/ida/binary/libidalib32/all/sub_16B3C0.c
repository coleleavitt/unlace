__int64 __fastcall sub_16B3C0(__int64 a1, int a2)
{
  __int64 v3; // rdi
  int v4; // eax
  unsigned int v5; // edx
  int v7; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  if ( a2 == 1 )
  {
    v4 = 0;
    goto LABEL_7;
  }
  if ( !*(_BYTE *)(a1 + 984) )
  {
    v3 = 0;
    goto LABEL_6;
  }
  if ( *(_QWORD *)(a1 + 480) )
  {
    v3 = 0;
    if ( *(_DWORD *)(a1 + 472) == 1 )
      v3 = *(_QWORD *)(a1 + 848);
LABEL_6:
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 128LL))(v3, 1);
    v5 = 0;
    if ( v4 < 0 )
      return v5;
LABEL_7:
    v7 = v4;
    sub_16ACA0(a1, 0, (unsigned __int64)&v7);
    return 1;
  }
  sub_1582F0(a1);
  return sub_16B470();
}

