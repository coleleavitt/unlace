unsigned __int64 __fastcall sub_3D9BA0(__int64 **a1)
{
  int v1; // eax
  int v2; // eax
  __int64 *v3; // rbp
  int v4; // r12d
  __int64 v5; // rbx
  _BYTE *v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  _BYTE *v14; // rax
  char v15; // si
  __int64 *i; // [rsp+0h] [rbp-A8h]
  __int64 *v17; // [rsp+0h] [rbp-A8h]
  __int64 v18; // [rsp+10h] [rbp-98h]
  unsigned int v19; // [rsp+18h] [rbp-90h]
  int v20; // [rsp+1Ch] [rbp-8Ch]
  _BYTE v21[8]; // [rsp+28h] [rbp-80h] BYREF
  void *ptr; // [rsp+30h] [rbp-78h] BYREF
  __int128 v23; // [rsp+38h] [rbp-70h]
  _BYTE v24[2]; // [rsp+50h] [rbp-58h] BYREF
  _WORD v25[8]; // [rsp+52h] [rbp-56h] BYREF
  _BYTE v26[6]; // [rsp+62h] [rbp-46h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v1 = *((_DWORD *)a1 + 60);
  v27 = __readfsqword(0x28u);
  v20 = v1 & 0x4000000;
  v2 = sub_3E8930(**a1);
  v3 = a1[11];
  v4 = v2;
  for ( i = &v3[(_QWORD)a1[12]]; i != v3; ++v3 )
  {
    v5 = *v3;
    if ( (int)get_custom_data_type_ids(v24, *v3) > 0 )
    {
      v6 = v25;
      do
      {
        if ( !*(_WORD *)v6 )
          *(_WORD *)v6 = v4;
        v6 += 2;
      }
      while ( v6 != v26 );
      set_custom_data_type_ids(v5, v24);
    }
  }
  v7 = a1[14];
  v17 = &v7[(_QWORD)a1[15]];
  while ( v17 != v7 )
  {
    while ( 1 )
    {
      v9 = *v7;
      v10 = **a1;
      v11 = *v7;
      v23 = 0;
      ptr = nullptr;
      v12 = *(_QWORD *)(v10 + 1872);
      if ( sub_5302B0(v12, &ptr, v11) <= 0 )
        break;
      v8 = sub_530470(v12, v21, ptr);
      if ( ptr )
      {
        *(_QWORD *)&v23 = 0;
        qfree(ptr);
      }
      if ( !v8 || *(_QWORD *)v8 != v9 )
        goto LABEL_20;
      v19 = *(_DWORD *)(v8 + 24);
      v18 = v19;
      if ( ((v19 & 0x600) != 0x400 || (v19 & 0xF0000000) != 0xD0000000) && !(unsigned __int8)is_custfmt(v19, 15) )
        goto LABEL_20;
      if ( (int)get_custom_data_type_ids(v24, v9) <= 0 )
        goto LABEL_20;
      if ( !v4 )
        goto LABEL_19;
      v14 = v25;
      v15 = 0;
      do
      {
        if ( !*(_WORD *)v14 )
        {
          *(_WORD *)v14 = v4;
          v15 = 1;
        }
        v14 += 2;
      }
      while ( v26 != v14 );
      if ( v15 )
      {
        set_custom_data_type_ids(v9, v24);
        if ( !v20 )
        {
LABEL_33:
          if ( v25[0] > 0 )
            v18 = v19 | 0xD00000;
          if ( v25[1] > 0 )
            v18 |= 0xD000000uLL;
          if ( *(_DWORD *)(v8 + 24) != v18 )
            *(_DWORD *)(v8 + 24) = v18;
        }
      }
      else
      {
LABEL_19:
        if ( !v20 )
          goto LABEL_33;
      }
LABEL_20:
      if ( v17 == ++v7 )
        return v27 - __readfsqword(0x28u);
    }
    if ( !ptr )
      goto LABEL_20;
    *(_QWORD *)&v23 = 0;
    ++v7;
    qfree(ptr);
  }
  return v27 - __readfsqword(0x28u);
}
