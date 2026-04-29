__int64 __fastcall sub_1D17C0(__int64 a1, _DWORD *a2, __int64 a3)
{
  char *v4; // rax
  int v5; // eax
  int v6; // eax
  int v7; // [rsp+Ch] [rbp-18Ch] BYREF
  __int128 v8; // [rsp+10h] [rbp-188h] BYREF
  __int64 v9; // [rsp+20h] [rbp-178h]
  __int64 v10; // [rsp+28h] [rbp-170h]
  __int64 v11; // [rsp+30h] [rbp-168h]
  char v12; // [rsp+38h] [rbp-160h] BYREF
  _QWORD v13[4]; // [rsp+178h] [rbp-20h] BYREF

  v13[0] = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)a3 - 56) > 1 )
    return 0;
  v4 = &v12;
  v8 = -1;
  v9 = -1;
  v10 = 0;
  v11 = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 40;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *((_QWORD *)v4 - 2) = 0;
  }
  while ( v13 != (_QWORD *)v4 );
  if ( !(unsigned int)decode_insn(&v8, *(_QWORD *)(a3 + 24), a3, v13, 0, 0, 0.0) )
    return 0;
  v5 = sub_CF9B0(0x5Cu, &v7, &v8);
  if ( v5 <= 1 )
  {
    if ( v5 < 0 )
    {
      if ( v5 != -1 )
        goto LABEL_9;
      return 0;
    }
    if ( v5 )
    {
      v6 = sub_122530(a1, v7);
      if ( v6 != -1 )
      {
        *a2 = v6;
        return 1;
      }
    }
    return 0;
  }
  if ( (unsigned int)(v5 - 2) > 1 )
  {
LABEL_9:
    if ( !under_debugger )
      sub_3835A0(52525);
    BUG();
  }
  return 2;
}
