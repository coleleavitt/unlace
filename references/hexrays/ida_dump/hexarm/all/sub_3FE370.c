__int64 *__fastcall sub_3FE370(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, char a5, double a6)
{
  __int64 v6; // r14
  __int64 *v8; // r12
  _BYTE *v11; // rcx
  __int64 v12; // rax
  char v13; // dl
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+8h] [rbp-40h] BYREF
  __int16 v17; // [rsp+10h] [rbp-38h]
  char v18; // [rsp+12h] [rbp-36h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v6 = a2;
  v8 = (__int64 *)a1;
  v19 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a2 + 745) )
  {
    a2 = 0;
    a1 = 2005;
    sub_CF9B0(0x7D5u, 0, 0, 0, 1, 0, 0);
    *(_BYTE *)(v6 + 745) = 1;
  }
  if ( (a5 & 0x10) != 0 )
  {
    *v8 = 0;
    a2 = v6;
    if ( (unsigned __int8)sub_3FDEB0(v8, v6, (__int64)"poly%dx%d_t", 8 * a4, a3 / a4) )
      return v8;
    a1 = (__int64)v8;
    a5 |= 1u;
    clear_tinfo_t(v8);
  }
  if ( a3 > 8 || a3 != a4 )
  {
    if ( (a5 & 2) != 0 )
    {
      if ( a4 == 16 )
      {
        if ( !under_debugger )
          sub_3835A0(0xC879u, a2, a6);
        goto LABEL_34;
      }
      v11 = &unk_42E5E8;
      goto LABEL_9;
    }
    if ( (a5 & 1) != 0 )
    {
      v11 = &unk_42E5EC;
      if ( a4 != 16 )
      {
LABEL_9:
        if ( a4 > 8 || (a4 & (a4 - 1)) != 0 )
          sub_3EAF00(a6, a1, a2);
        v12 = a4 >> 1;
        if ( a4 >= 5 )
          v12 = 3;
        v13 = v11[v12];
LABEL_14:
        v17 = 0;
        v15 = 0;
        v16 = 0;
        v18 = 48;
        if ( (unsigned __int8)sub_32A8C0((__int64)&v15, a3, v13, 0, 1u) )
        {
          *v8 = 0;
          copy_tinfo_t(v8, &v16);
          clear_tinfo_t(&v16);
          return v8;
        }
        if ( !under_debugger )
          sub_3835A0(0xC870u, a3, a6);
LABEL_34:
        BUG();
      }
    }
    else
    {
      v11 = &unk_42E5F0;
      if ( a4 != 16 )
        goto LABEL_9;
    }
    if ( a3 != 16 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC87Au, a2, a6);
      goto LABEL_34;
    }
    v13 = 38;
    goto LABEL_14;
  }
  if ( (a5 & 2) != 0 )
    sub_32C480(v8, v6, a3);
  else
    sub_32C760(v8, v6, a3, (a5 & 1) + 1);
  return v8;
}
