__int64 __fastcall sub_144740(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  int v3; // ecx
  char v4; // bp
  int v5; // r8d
  int v6; // r9d
  char v8; // [rsp+Fh] [rbp-59h]
  int v9; // [rsp+18h] [rbp-50h]
  int v10; // [rsp+1Ch] [rbp-4Ch]
  int v11; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a2 + 8) )
    return 0;
  v8 = 0;
  v2 = 0;
  do
  {
    while ( 1 )
    {
      v4 = getn_selector();
      if ( v4 )
      {
        v11 = v10;
        v12 = v9;
        if ( (unsigned int)sub_18BA90(1154, (unsigned int)&v12, (unsigned int)&v11, v3, v5, v6) )
          break;
      }
      if ( ++v2 >= *(_QWORD *)(a2 + 8) )
        goto LABEL_7;
    }
    ++v2;
    set_selector();
    v8 = v4;
  }
  while ( v2 < *(_QWORD *)(a2 + 8) );
LABEL_7:
  if ( !v8 )
    return 0;
  getinf();
  getinf();
  auto_mark_range();
  return 1;
}

