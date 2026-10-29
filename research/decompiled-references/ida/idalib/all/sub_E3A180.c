unsigned __int64 __fastcall sub_E3A180(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  _BYTE v13[104]; // [rsp-68h] [rbp-68h] BYREF

  v3 = *(_QWORD *)(a3 + 40);
  if ( (v3 & 7) != 0 || (result = v3 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    result = 0;
    if ( (*(_BYTE *)(a3 + 68) & 1) == 0 )
    {
      v5 = sub_F63270(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL));
      v10 = sub_B7E900(v5, a2, v6, v7, v8, v9);
      if ( v10 )
      {
LABEL_6:
        result = sub_E3A180(a1, a2, v10);
        if ( result )
          return result;
        while ( 1 )
        {
          v11 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v10 = v11;
          if ( !v11 )
            break;
          if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_6;
        }
      }
      v12 = sub_E39F30(*(_QWORD *)(a2 + 32), 4, "cannot mangle this unnamed union NTTP yet", 41);
      sub_FC70B0(v13, a2, a1, v12);
      sub_AEA040((__int64)v13);
      return 0;
    }
  }
  return result;
}
