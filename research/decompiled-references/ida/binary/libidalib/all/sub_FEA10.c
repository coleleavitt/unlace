__int64 __fastcall sub_FEA10(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // edx
  __int64 v5; // rcx
  int v6; // edx
  char v7; // al
  __int64 v8; // rdi
  __int64 v9; // rax
  char v10; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 == 28 || (v3 = 6, v2 == 34) )
  {
    v3 = 7;
    if ( !*(_BYTE *)(*(_QWORD *)a2 + 1248LL) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)a2 + 760LL);
      v6 = *(_DWORD *)(a1 + 12);
      v7 = *(_BYTE *)(v5 + 32);
      if ( v6 != -1 )
      {
        if ( v7 )
          v7 = 0;
        else
          v7 = *(_DWORD *)(v5 + 28) == v6;
      }
      v8 = *(_QWORD *)(a2 + 72);
      v10 = v7;
      v9 = sub_19DCF0(v8);
      if ( v9 )
        sub_19CC00(v9, 7, &v10);
      return 3;
    }
  }
  return v3;
}

