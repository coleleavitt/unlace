__int64 __fastcall sub_FEC30(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // edx
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rdi
  __int64 v8; // rax
  bool v9; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 == 28 || (v3 = 6, v2 == 34) )
  {
    v3 = 7;
    if ( !*(_BYTE *)(*(_QWORD *)a2 + 1248LL) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)a2 + 760LL);
      if ( *(_DWORD *)(v5 + 36) == 1 )
      {
        v6 = *(_DWORD *)(a1 + 12) == *(_DWORD *)(v5 + 40);
        v7 = *(_QWORD *)(a2 + 72);
        v9 = v6;
        v8 = sub_19DCF0(v7);
        if ( v8 )
          sub_19CC00(v8, 7, &v9);
        return 3;
      }
    }
  }
  return v3;
}

