__int64 __fastcall sub_1809200(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v20; // rax
  __int64 *i; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // rax

  v3 = sub_F6AC00(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v3 )
  {
    v8 = *(_QWORD *)(v3 + 32);
    if ( v8 )
    {
      if ( (*(_BYTE *)(v8 + 29) & 1) != 0 )
      {
        v20 = sub_B8C3D0(v8, a2, v4, v5, v6, v7);
        v4 = *v20;
        v5 = *v20 + 8LL * *((unsigned int *)v20 + 2);
        if ( *v20 < v5 )
        {
          v32 = (__int64 *)*v20;
          while ( 1 )
          {
            v4 = *v32;
            if ( *(_WORD *)(*v32 + 36) == 172 )
              break;
            if ( (__int64 *)v5 == ++v32 )
              goto LABEL_4;
          }
          if ( (__int64 *)v5 != v32 )
            return 1;
        }
        else if ( v4 != v5 )
        {
          if ( *(_WORD *)(*(_QWORD *)v5 + 36LL) == 172 )
            return 1;
          for ( i = (__int64 *)(v5 + 8); ; ++i )
          {
            v5 = (unsigned __int64)i;
            if ( (__int64 *)v4 == i )
              break;
            v22 = *i;
            if ( *(_WORD *)(v22 + 36) == 172 )
              return 1;
          }
        }
      }
    }
  }
LABEL_4:
  v9 = sub_1804350(a2, a2, v4, v5);
  v14 = v9;
  if ( v9 )
  {
    if ( !sub_F62670(v9, nullptr, v10, v11, v12, v13)
      && !(unsigned __int8)sub_1809010((__int64 *)(a1 + 248), v14, v15, v16, v17, v18) )
    {
      v27 = sub_F60F10(v14, v14, v23, v24, v25, v26);
      return sub_1804B40((__int64)v27, v14, v28, v29, v30, v31);
    }
    return 1;
  }
  return 0;
}
