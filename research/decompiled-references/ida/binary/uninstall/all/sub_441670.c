__int64 __fastcall sub_441670(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v6; // edx
  int v8; // eax
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rdi
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdi
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  int v16; // [rsp+Ch] [rbp-4Ch] BYREF
  _BYTE v17[32]; // [rsp+10h] [rbp-48h] BYREF

  if ( (unsigned int)(a3 - 2) <= 1 )
  {
    v8 = sub_440900(a2, *(_QWORD *)(a4 + 8), (__int64)v17, nullptr, &v15, &v16);
    v6 = 1;
    if ( !v8 )
    {
      v9 = 0;
      if ( a3 == 3 )
      {
        v14 = *(_QWORD *)(a4 + 16);
        v9 = *(_QWORD *)(v14 + 8);
        if ( !v9 )
          v9 = sub_47B3B0(v14);
      }
      v10 = sub_46EEB0(0, 0);
      while ( !v16 )
      {
        if ( !v9 )
          goto LABEL_11;
        v11 = *(_QWORD *)(v15 + 8);
        if ( !v11 )
          v11 = sub_47B3B0(v15);
        if ( (unsigned int)sub_49EAC0(v11, v9) )
LABEL_11:
          sub_46FBF0(a2, v10, v15);
        sub_440A10((__int64)v17, nullptr, &v15, &v16, v12, v13);
      }
      sub_4409E0((__int64)v17);
      sub_48AFD0(a2, v10);
      return 0;
    }
  }
  else
  {
    sub_458930(a2, 1, a4, "dictionary ?pattern?");
    return 1;
  }
  return v6;
}

