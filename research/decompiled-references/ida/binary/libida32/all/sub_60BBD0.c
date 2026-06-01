unsigned __int64 __fastcall sub_60BBD0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r13
  int v5; // eax
  unsigned __int64 v6; // rbx
  bool v7; // cf
  char v8; // dl
  int v9; // eax
  int v11; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v1 = *(int *)(a1 + 8);
  v12 = __readfsqword(0x28u);
  v2 = switch_dbctx(v1);
  v3 = *(_QWORD *)(v2 + 1480);
  v4 = v3 + 2240;
  v5 = *(_DWORD *)(v3 + 2304);
  if ( v5 )
  {
    v6 = (unsigned int)(v5 - 1);
    do
    {
      while ( 1 )
      {
        v8 = sub_79BBD0(v4, v2, &v11, (unsigned int)v6, 65);
        v9 = -1;
        if ( v8 )
          v9 = v11;
        v11 = v9;
        if ( (unsigned int)sub_79B7E0(&v11, v2, 83) == -1 && (unsigned int)sub_79B7E0(&v11, v2, 65) == -1 )
          break;
        v7 = v6-- == 0;
        if ( v7 )
          return v12 - __readfsqword(0x28u);
      }
      sub_60B910(v4, v2, v6);
      v7 = v6-- == 0;
    }
    while ( !v7 );
  }
  return v12 - __readfsqword(0x28u);
}

