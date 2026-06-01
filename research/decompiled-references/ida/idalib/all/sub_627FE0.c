unsigned __int64 __fastcall sub_627FE0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r13
  int v5; // eax
  unsigned __int64 v6; // rbx
  bool v7; // cf
  char v8; // dl
  __int64 v9; // rax
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v1 = *(int *)(a1 + 8);
  v12 = __readfsqword(0x28u);
  v2 = switch_dbctx(v1);
  v3 = *(_QWORD *)(v2 + 1672);
  v4 = v3 + 2328;
  v5 = *(_DWORD *)(v3 + 2392);
  if ( v5 )
  {
    v6 = (unsigned int)(v5 - 1);
    do
    {
      while ( 1 )
      {
        v8 = sub_7BEFD0(v4, v2, &v11, (int)v6, 65);
        v9 = -1;
        if ( v8 )
          v9 = v11;
        v11 = v9;
        if ( sub_7BEB80(&v11, v2, 83) == -1 && sub_7BEB80(&v11, v2, 65) == -1 )
          break;
        v7 = v6-- == 0;
        if ( v7 )
          return v12 - __readfsqword(0x28u);
      }
      sub_627D10(v4, v2, v6);
      v7 = v6-- == 0;
    }
    while ( !v7 );
  }
  return v12 - __readfsqword(0x28u);
}
