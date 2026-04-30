__int64 __fastcall sel_chooser_t__::vfunc_12(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  int v3; // ecx
  char v4; // bp
  int v5; // r8d
  int v6; // r9d
  __int64 v8; // rbx
  __int64 v9; // rax
  char v10; // [rsp+Fh] [rbp-69h]
  __int64 v11; // [rsp+18h] [rbp-60h] BYREF
  __int64 v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v14[9]; // [rsp+30h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  if ( !a2[1] )
    return 0;
  v10 = 0;
  v2 = 0;
  do
  {
    while ( 1 )
    {
      v4 = getn_selector(&v11, &v12, *(unsigned int *)(*a2 + 8 * v2));
      if ( v4 )
      {
        v13 = v12;
        v14[0] = v11;
        if ( (unsigned int)sub_507F10(1154, (unsigned int)v14, (unsigned int)&v13, v3, v5, v6) )
          break;
      }
      if ( ++v2 >= a2[1] )
        goto LABEL_7;
    }
    ++v2;
    set_selector(v14[0], v13);
    v10 = v4;
  }
  while ( v2 < a2[1] );
LABEL_7:
  if ( !v10 )
    return 0;
  v8 = getinf(20);
  v9 = getinf(19);
  auto_mark_range(v9, v8, 40);
  return 1;
}
