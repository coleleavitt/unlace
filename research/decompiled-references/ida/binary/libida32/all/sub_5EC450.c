__int64 __fastcall sub_5EC450(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v5; // r12
  void *v6; // rdi
  _BYTE *v8; // rbx
  unsigned int v9; // r13d
  char v10; // r14
  char *v11; // r15
  int v12; // r15d
  __int64 v13; // r13
  __int64 idati; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  void *v17; // [rsp+8h] [rbp-78h] BYREF
  __int128 v18; // [rsp+10h] [rbp-70h]
  _QWORD v19[2]; // [rsp+28h] [rbp-58h] BYREF
  __int16 v20; // [rsp+38h] [rbp-48h]
  unsigned __int64 v21; // [rsp+40h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 16);
  v21 = __readfsqword(0x28u);
  v18 = 0;
  v17 = nullptr;
  v5 = *(_QWORD *)(v3 + 1480);
  if ( (get_tinfo_property(*a3, 2) & 0xF) != 0xA )
    goto LABEL_2;
  v19[0] = get_tinfo_property(*a3, 9);
  if ( (get_tinfo_property(v19[0], 2) & 0x3F) != 0xD )
    goto LABEL_8;
  if ( (v19[0] & 0x100) == 0 )
    goto LABEL_8;
  if ( !get_tinfo_pdata(&v17, v19[0], 2) )
    goto LABEL_8;
  v8 = v17;
  if ( !v17 )
    goto LABEL_8;
  if ( *(_BYTE *)v17 != 72 )
    goto LABEL_8;
  v9 = *((char *)v17 + 1);
  v10 = *((_BYTE *)v17 + 1);
  if ( v9 > 0x7F )
    goto LABEL_8;
  v11 = (char *)v17 + 1;
  while ( isupper(v9) || v9 - 48 <= 9 )
  {
    v9 = *++v11;
    v10 = v9;
    if ( v9 > 0x7F )
      goto LABEL_8;
  }
  if ( v10 != 95 || v11[1] != 95 || v11[2] )
  {
LABEL_8:
    clear_tinfo_t(v19);
LABEL_2:
    v6 = v17;
    goto LABEL_3;
  }
  v12 = (_DWORD)v11 - (_DWORD)v8;
  v13 = v12;
  if ( v12 )
  {
    v15 = v18;
    v16 = v12 + 1LL;
    if ( (unsigned __int64)v18 < v13 + 1 )
    {
      if ( *((_QWORD *)&v18 + 1) < v16 )
      {
        v17 = (void *)qvector_reserve(&v17, v8, v13 + 1, 1);
        v8 = v17;
        v15 = v18;
      }
      memset(&v8[v15], 0, v16 - v15);
      *(_QWORD *)&v18 = v13 + 1;
      v8 = v17;
    }
    else if ( v16 != (_QWORD)v18 )
    {
      *(_QWORD *)&v18 = v13 + 1;
    }
    v8[v13] = 0;
  }
  else
  {
    *(_QWORD *)&v18 = 0;
    qfree(v8);
    v17 = nullptr;
    *((_QWORD *)&v18 + 1) = 0;
  }
  clear_tinfo_t(v19);
  if ( !v17 )
  {
    *(_DWORD *)(a2 + 56) |= 1u;
    return 0;
  }
  idati = *(_QWORD *)(v5 + 8);
  v19[1] = v17;
  v20 = 0;
  if ( !idati )
    idati = get_idati(v19, 0);
  v19[0] = idati;
  create_tinfo(a2, 61, 61, v19);
  *(_DWORD *)(a2 + 56) |= 1u;
  v6 = v17;
LABEL_3:
  if ( v6 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v6);
  }
  return 0;
}

