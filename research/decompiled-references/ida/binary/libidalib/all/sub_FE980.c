__int64 __fastcall sub_FE980(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // edx
  __int64 v5; // rdi
  __int64 v6; // rax
  char v7; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 == 28 || (v3 = 6, v2 == 34) )
  {
    v3 = 7;
    if ( !*(_BYTE *)(*(_QWORD *)a2 + 1248LL) )
    {
      v5 = *(_QWORD *)(a2 + 72);
      v7 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 + 760LL) + 44LL);
      v6 = sub_19DCF0(v5);
      if ( v6 )
        sub_19CC00(v6, 7, &v7);
      return 3;
    }
  }
  return v3;
}

