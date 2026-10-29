unsigned __int64 __fastcall sub_6B23C0(__int64 a1, char a2)
{
  unsigned int v2; // eax
  unsigned int i; // ebx
  unsigned __int16 v4; // ax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  size_t v10; // rax
  __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-878h]
  __int64 v14; // [rsp+8h] [rbp-870h]
  unsigned __int16 v15; // [rsp+10h] [rbp-868h] BYREF
  unsigned __int16 v16; // [rsp+12h] [rbp-866h]
  unsigned __int16 v17; // [rsp+14h] [rbp-864h]
  char v18[1034]; // [rsp+16h] [rbp-862h] BYREF
  _BYTE v19[1043]; // [rsp+420h] [rbp-458h] BYREF
  _BYTE v20[5]; // [rsp+833h] [rbp-45h] BYREF
  unsigned __int64 v21; // [rsp+838h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v2 = netnode_supfirst(a1, (unsigned int)a2);
  if ( v2 != -1 )
  {
    for ( i = v2; i != -1; i = netnode_supnext((unsigned int)a1, i, (unsigned int)a2) )
    {
      if ( netnode_supval((unsigned int)a1, i, &v15, 1030, (unsigned int)a2) <= 0 )
        goto LABEL_3;
      v4 = v17;
      if ( v17 < v16 )
        v4 = v16;
      if ( v4 > 0x3FFu )
      {
LABEL_3:
        netnode_supdel((unsigned int)a1, i, (unsigned int)a2);
      }
      else
      {
        v5 = pack_dd(v19, v20, 1);
        v6 = pack_dw(v5, v20, v15);
        v7 = pack_dw(v6, v20, v16);
        v8 = pack_dw(v7, v20, v17);
        v9 = v17;
        v13 = v8;
        if ( v17 < v16 )
          v9 = v16;
        v14 = v9;
        v10 = strlen(&v18[v9]);
        v11 = pack_ds(v13, v20, v18, v10 + v14);
        netnode_supset((unsigned int)a1, i, v19, v11 - (_QWORD)v19, (unsigned int)a2);
      }
    }
  }
  return v21 - __readfsqword(0x28u);
}

