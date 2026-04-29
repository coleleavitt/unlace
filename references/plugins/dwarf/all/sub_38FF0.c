__int64 __fastcall sub_38FF0(__int64 a1, __int64 a2)
{
  char v2; // al
  const char **v4; // rbx
  __int64 v5; // r13
  const char *v6; // rdi
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v10; // rax
  __int64 *v11; // rax
  const char *v12; // rbx
  __int64 *v13; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  const char *v17; // rsi
  _QWORD v18[9]; // [rsp+0h] [rbp-48h] BYREF

  v18[1] = __readfsqword(0x28u);
  v2 = *(_BYTE *)(a1 + 142);
  if ( v2 && v2 != 5 )
  {
    if ( v2 == 4 || !*(_QWORD *)(a1 + 64) )
      goto LABEL_11;
    v4 = (const char **)&off_CA740;
    v5 = *(_QWORD *)(a1 + 24);
    do
    {
      v6 = src;
      if ( v5 )
        v6 = *(const char **)(a1 + 16);
      if ( !strcmp(v6, *v4) )
      {
        v18[0] = 0xA74C2C19D15BCD06LL;
        v7 = sub_856E0(v18, a1 + 64);
        v8 = (__int64 *)sub_856E0(v7, a1 + 72);
        sub_349E0(a1, v8);
        goto LABEL_11;
      }
      v4 += 4;
    }
    while ( &byte_CABC0 != (char *)v4 );
    v18[0] = 0xA74C2C19D15BCD06LL;
    v10 = sub_856E0(v18, a1 + 64);
    v11 = (__int64 *)sub_856E0(v10, a1 + 72);
    sub_349E0(a1, v11);
    if ( (unsigned __int8)sub_38360(a1) )
    {
LABEL_11:
      sub_34840(a1, 4u);
      copy_tinfo_t(a2, a1 + 8);
      return 1;
    }
    if ( (debug & 0x400000) != 0 )
    {
      v12 = src;
      if ( *(_QWORD *)(a1 + 48) )
        v12 = *(const char **)(a1 + 40);
      v13 = sub_34340(a1);
      v17 = src;
      if ( v13[1] )
        v17 = (const char *)*v13;
      sub_88B80((unsigned int)"Error base type DIE %s storing type %s\n", (_DWORD)v17, (_DWORD)v12, v14, v15, v16);
    }
  }
  return 0;
}
