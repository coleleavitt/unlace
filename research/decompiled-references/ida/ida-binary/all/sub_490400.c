unsigned __int64 __fastcall sub_490400(__int64 a1, __int64 a2)
{
  int v2; // r8d
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  const char **v5; // rbx
  const char *v6; // rsi
  const char *v7; // rsi
  __int64 v9; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+8h] [rbp-50h]
  unsigned __int64 v11; // [rsp+10h] [rbp-48h] BYREF
  __int128 v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v2 = *(_DWORD *)a2;
  v13 = __readfsqword(0x28u);
  if ( v2 >= 0 && *(int *)(a2 + 4) >= 0 && *(_QWORD *)(a2 + 16) )
  {
    v3 = *(_QWORD *)(a2 + 8);
    v4 = *(_QWORD *)(a1 + 72);
    if ( HIDWORD(v3) == 0xFFFFFFFF )
    {
      v9 = -1;
      v10 = (unsigned int)v3;
      if ( (_DWORD)v3 )
        return v13 - __readfsqword(0x28u);
    }
    else
    {
      v9 = HIDWORD(*(_QWORD *)(a2 + 8));
      v10 = (unsigned int)v3;
    }
    v5 = *(const char ***)(v4 + 216);
    if ( !v5 )
      v5 = *(const char ***)(v4 + 208);
    v6 = *v5;
    LOBYTE(v12) = 0;
    v11 = -1;
    dirtree_resolve_cursor(&v11, v6, &v9);
    if ( v11 != -1 && (_BYTE)v12 && sub_487330((_QWORD *)(a1 + 8), v11) )
    {
      v11 = 0;
      v12 = 0;
      v7 = *v5;
      dirtree_get_abspath_by_cursor(&v11, *v5, &v9, 0);
      if ( (unsigned __int64)v12 > 1 )
      {
        v7 = (const char *)&v11;
        sub_4901A0(a1, (__int64)&v11, 0.0);
      }
      if ( v11 )
      {
        *(_QWORD *)&v12 = 0;
        qfree(v11, v7);
      }
    }
  }
  return v13 - __readfsqword(0x28u);
}
