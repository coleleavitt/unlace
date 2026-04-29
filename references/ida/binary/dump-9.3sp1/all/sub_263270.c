__int64 __fastcall sub_263270(__int128 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int128 *v5; // rbx
  char v6; // r13
  unsigned __int64 v7; // rax
  unsigned int v8; // ebx
  _BYTE *v10; // rax
  __int128 v11; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+10h] [rbp-B0h]
  __int128 v13; // [rsp+18h] [rbp-A8h]
  __int64 v14; // [rsp+28h] [rbp-98h]
  __int128 v15; // [rsp+30h] [rbp-90h]
  __int128 v16; // [rsp+40h] [rbp-80h]
  __int64 v17; // [rsp+70h] [rbp-50h]
  int v18; // [rsp+78h] [rbp-48h]
  __int64 v19; // [rsp+80h] [rbp-40h]
  char v20; // [rsp+88h] [rbp-38h]
  unsigned __int64 v21; // [rsp+98h] [rbp-28h]

  v5 = a1;
  v21 = __readfsqword(0x28u);
  v6 = a4;
  if ( !a1 )
    v5 = &v11;
  v20 = 0;
  v12 = 0;
  v14 = 0;
  v17 = 1;
  v18 = -1;
  v19 = 0;
  v11 = 0;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  *(_QWORD *)v5 = a3;
  if ( (unsigned int)sub_32D810(v5, a2, a3, a4) == -1 || (get_tinfo_property() & 0x3F) == 0xD && *(_QWORD *)v5 != 8 * a3 )
  {
    v8 = -1;
    goto LABEL_12;
  }
  if ( (*((_WORD *)v5 + 66) & 0x120) == 0 )
  {
    v7 = *((_QWORD *)v5 + 3);
    if ( v7 <= 1 )
    {
      if ( (v6 & 1) != 0 )
        goto LABEL_9;
      goto LABEL_21;
    }
    v10 = *((_BYTE **)v5 + 2);
    if ( *v10 != 95 || v10[1] != 95 || !get_tinfo_property() )
    {
LABEL_18:
      v8 = 1;
      goto LABEL_12;
    }
  }
  if ( (v6 & 1) != 0 )
  {
    if ( (*((_BYTE *)v5 + 132) & 0x20) == 0 )
    {
      v7 = *((_QWORD *)v5 + 3);
LABEL_9:
      v8 = v7 > 1;
      goto LABEL_12;
    }
    print_tinfo();
    goto LABEL_18;
  }
LABEL_21:
  v8 = 0;
LABEL_12:
  clear_tinfo_t();
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  return v8;
}
