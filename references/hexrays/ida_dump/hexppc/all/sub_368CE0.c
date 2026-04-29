__int64 __fastcall sub_368CE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-8h] BYREF
  __int128 vars0; // [rsp+8h] [rbp+0h]
  __int64 vars10; // [rsp+18h] [rbp+10h]
  __int64 vars18; // [rsp+20h] [rbp+18h] BYREF
  __int64 vars20; // [rsp+28h] [rbp+20h] BYREF
  __int128 vars28; // [rsp+30h] [rbp+28h]
  __int64 vars38; // [rsp+40h] [rbp+38h]
  __int128 vars40; // [rsp+48h] [rbp+40h]
  char vars50; // [rsp+58h] [rbp+50h]
  unsigned __int64 vars60; // [rsp+68h] [rbp+60h]

  vars60 = __readfsqword(0x28u);
  vars50 = 16;
  v12 = 0;
  vars10 = 0;
  vars18 = 0;
  vars20 = 0;
  vars38 = 0;
  vars0 = 0;
  vars28 = 0;
  vars40 = 0;
  if ( !(unsigned __int8)get_tinfo_details(a2, 12, &v12) )
    goto LABEL_3;
  if ( !(_QWORD)vars0 )
    goto LABEL_3;
  v10 = v12;
  v11 = v12 + 80 * vars0;
  if ( v12 == v11 )
    goto LABEL_3;
  while ( (*(_BYTE *)(v10 + 72) & 2) == 0 )
  {
    v10 += 80;
    if ( v11 == v10 )
      goto LABEL_3;
  }
  if ( (get_tinfo_property(*(_QWORD *)(v10 + 64), 2) & 0xF) == 0xA )
  {
    *(_DWORD *)a1 = 0;
    copy_argloc(a1, v10);
  }
  else
  {
LABEL_3:
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
  }
  if ( vars38 )
  {
    *(_QWORD *)&vars40 = 0;
    qfree(vars38);
  }
  cleanup_argloc(&vars20);
  clear_tinfo_t(&vars18);
  v3 = v12;
  if ( v12 )
  {
    v4 = vars0;
    if ( (_QWORD)vars0 )
    {
      v5 = 0;
      do
      {
        v6 = (_QWORD *)(v3 + 80 * v5);
        clear_tinfo_t(v6 + 8);
        v7 = v6[5];
        if ( v7 )
        {
          v6[6] = 0;
          qfree(v7);
        }
        v8 = v6[2];
        if ( v8 )
        {
          v6[3] = 0;
          qfree(v8);
        }
        ++v5;
        cleanup_argloc(v6);
        v3 = v12;
      }
      while ( v4 != v5 );
    }
    *(_QWORD *)&vars0 = 0;
    qfree(v3);
  }
  return a1;
}
