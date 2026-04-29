__int64 __fastcall sub_1C690(__int64 a1)
{
  char v2; // al
  __int64 v3; // rdi
  int v4; // ecx
  int v5; // esi
  int v6; // r8d
  int v7; // r9d
  __int64 v9; // rdi
  __int64 i; // rax
  const char *v11; // rdx
  __int64 v12; // r14
  const char **idati; // rax
  char *v14; // rdi
  const char *v15; // rsi
  __int64 v16; // rax
  const char *v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // [rsp+8h] [rbp-70h] BYREF
  const char *v20; // [rsp+10h] [rbp-68h] BYREF
  __int128 v21; // [rsp+18h] [rbp-60h]
  char *s1; // [rsp+30h] [rbp-48h] BYREF
  __int128 v23; // [rsp+38h] [rbp-40h]
  unsigned __int64 v24; // [rsp+48h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v2 = netnode_check(a1 + 2776, "$ dwarf mappings lut", 0, 1);
  v3 = *(_QWORD *)(a1 + 2776);
  if ( v2 )
  {
    s1 = (_BYTE *)(&dword_0 + 2);
    netnode_supset(v3, 0, &s1, 8, 65);
  }
  else
  {
    v5 = netnode_altval(v3, 0, 65);
    if ( v5 <= 1 )
    {
      if ( (debug & 0x400000) != 0 )
        sub_88B80((unsigned int)"Found mappings LUT with version: %d. Upgrading to %d\n", v5, 2, v4, v6, v7);
      if ( !netnode_altval(*(_QWORD *)(a1 + 2776), 1, 65) )
      {
        v9 = *(_QWORD *)(a1 + 2776);
        v21 = 0;
        v20 = nullptr;
        for ( i = netnode_qhashfirst(v9, &v20, 72); i > 0; i = netnode_qhashnext(*(_QWORD *)(a1 + 2776), &v20, v17, 72) )
        {
          v11 = src;
          s1 = nullptr;
          v23 = 0;
          if ( (_QWORD)v21 )
            v11 = v20;
          v12 = netnode_qhashstr(*(_QWORD *)(a1 + 2776), &s1, v11, 70);
          idati = (const char **)get_idati();
          if ( v12 <= 0 )
            goto LABEL_31;
          v14 = (char *)src;
          if ( (_QWORD)v23 )
            v14 = s1;
          if ( !strcmp(v14, *idati) )
          {
LABEL_31:
            v15 = src;
            if ( (_QWORD)v21 )
              v15 = v20;
            v16 = netnode_hashval_long(*(_QWORD *)(a1 + 2776), v15, 72);
            if ( v16 )
            {
              v18 = *(_QWORD *)(a1 + 2776);
              v19 = v16;
              netnode_supset(v18, 1, &v19, 8, 65);
              if ( s1 )
              {
                *(_QWORD *)&v23 = 0;
                qfree(s1);
              }
              break;
            }
          }
          if ( s1 )
          {
            *(_QWORD *)&v23 = 0;
            qfree(s1);
          }
          v17 = src;
          if ( (_QWORD)v21 )
            v17 = v20;
        }
        if ( v20 )
        {
          *(_QWORD *)&v21 = 0;
          qfree(v20);
        }
      }
      s1 = (_BYTE *)(&dword_0 + 2);
      netnode_supset(*(_QWORD *)(a1 + 2776), 0, &s1, 8, 65);
    }
  }
  return *(_QWORD *)(a1 + 2776);
}
