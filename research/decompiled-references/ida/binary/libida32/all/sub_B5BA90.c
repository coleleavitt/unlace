__int64 __fastcall sub_B5BA90(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v10; // [rsp+0h] [rbp-10h] BYREF

  if ( *(char *)(a1 + 28) < 0 )
    return 0;
  v1 = sub_B54070(a1);
  LODWORD(v3) = 1;
  if ( v1 == 1 )
    return (unsigned int)v3;
  LODWORD(v3) = 0;
  if ( !v1 || v1 == 2 || v1 == 4 )
    return (unsigned int)v3;
  v4 = (_QWORD *)sub_B59840(a1, 1, 0, v2);
  v10 = v4;
  if ( v4 && (unsigned __int8)sub_B5B8B0(v4, &v10, v5, v6, v7, v8) && v10 )
    return (v10[10] >> 16) & 1LL;
  return 1;
}

