__int64 sub_10ADE0()
{
  __int64 v0; // rdi
  __int64 *v1; // r14
  TMenuItem *v2; // rbx
  bool v3; // zf
  __int64 v4; // rax
  unsigned __int16 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rsi
  __int16 v8; // ax
  unsigned __int16 *v9; // rbx
  unsigned __int16 *v10; // rsi
  unsigned __int16 *v11; // r14
  _WORD *v12; // rdx
  __int64 v13; // rdi
  _QWORD *module_data; // [rsp+8h] [rbp-78h]
  __int64 v16; // [rsp+10h] [rbp-70h]
  _QWORD *v17; // [rsp+18h] [rbp-68h]
  __int64 v18; // [rsp+20h] [rbp-60h]
  __int64 v19; // [rsp+28h] [rbp-58h]
  __int64 v20; // [rsp+30h] [rbp-50h]
  __int128 v21; // [rsp+38h] [rbp-48h]

  v0 = (unsigned int)dword_2530D8;
  v20 = 0;
  v21 = 0;
  module_data = (_QWORD *)get_module_data();
  v1 = *(__int64 **)(*module_data + 40LL);
  v16 = *v1;
  if ( *v1 )
  {
    v19 = 0;
    v18 = 0;
    v17 = nullptr;
    v16 = 0;
    while ( 1 )
    {
      v5 = sub_199DB0(v0);
      v6 = v21;
      v7 = v20;
      if ( *((_QWORD *)&v21 + 1) < (unsigned __int64)(v21 + 1) )
      {
        v20 = qvector_reserve();
        v7 = v20;
        v6 = v21;
      }
      *(_WORD *)(v7 + 2 * v6) = v5;
      *(_QWORD *)&v21 = v21 + 1;
      v2 = (TMenuItem *)operator new(0x28u);
      TMenuItem::TMenuItem(v2, *(const char **)(v1[v19] + 8), v5, 0, *(_WORD *)(v1[v19] + 16), nullptr, nullptr);
      if ( v16 )
        *v17 = v2;
      else
        v16 = (__int64)v2;
      v0 = 8;
      v3 = (unsigned __int8)getinf() == (_DWORD)v19;
      v4 = v18;
      if ( v3 )
        v4 = (__int64)v2;
      v3 = v1[++v19] == 0;
      v18 = v4;
      if ( v3 )
        break;
      v17 = v2;
    }
  }
  else
  {
    v18 = 0;
  }
  v8 = sub_104F60(v16, v18);
  v9 = (unsigned __int16 *)v20;
  v10 = (unsigned __int16 *)(v20 + 2 * v21);
  v11 = v10;
  if ( (unsigned __int16 *)v20 != v10 )
  {
    v12 = (_WORD *)v20;
    while ( v8 != *v12 )
    {
      if ( v10 == ++v12 )
        goto LABEL_19;
    }
    if ( (__int64)v12 - v20 >= 0 )
    {
      set_target_assembler();
      sub_108A90(966, *(_QWORD *)(module_data[1] + 8LL));
      v9 = (unsigned __int16 *)v20;
      v11 = (unsigned __int16 *)(v20 + 2 * v21);
      if ( (unsigned __int16 *)v20 == v11 )
        goto LABEL_21;
    }
    do
    {
LABEL_19:
      v13 = *v9++;
      sub_199E00(v13);
    }
    while ( v11 != v9 );
    v11 = (unsigned __int16 *)v20;
  }
LABEL_21:
  if ( v11 )
    qfree();
  return 1;
}

