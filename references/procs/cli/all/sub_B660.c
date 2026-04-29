__int64 __fastcall sub_B660(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  __int64 v4; // r14
  __int64 v5; // rax
  int v6; // r8d
  unsigned __int8 *v7; // r15
  unsigned int v10; // eax
  unsigned int v11; // r13d
  __int64 v12; // rax
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // r12d
  unsigned __int64 v22; // r13
  int v23; // ebp
  unsigned __int8 *v24; // rax
  const char *v25; // r8
  unsigned __int8 v26; // [rsp+7h] [rbp-4E1h]
  __int64 v27; // [rsp+18h] [rbp-4D0h]
  unsigned __int8 *v28; // [rsp+28h] [rbp-4C0h] BYREF
  _BYTE v29[12]; // [rsp+30h] [rbp-4B8h] BYREF
  int v30; // [rsp+3Ch] [rbp-4ACh]
  __int64 v31; // [rsp+40h] [rbp-4A8h] BYREF
  __int128 v32; // [rsp+48h] [rbp-4A0h]
  __int64 v33; // [rsp+60h] [rbp-488h] BYREF
  __int128 v34; // [rsp+68h] [rbp-480h]
  const char *v35; // [rsp+80h] [rbp-468h] BYREF
  __int128 v36; // [rsp+88h] [rbp-460h]
  char v37; // [rsp+A0h] [rbp-448h] BYREF
  unsigned __int8 v38; // [rsp+A1h] [rbp-447h] BYREF
  unsigned __int8 v39; // [rsp+A2h] [rbp-446h]
  unsigned __int8 v40; // [rsp+A3h] [rbp-445h]
  unsigned __int8 v41; // [rsp+A4h] [rbp-444h]
  unsigned __int64 v42; // [rsp+4A8h] [rbp-40h]

  v2 = a2;
  v42 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 616);
  v28 = nullptr;
  v5 = netnode_supval(*(_QWORD *)(v4 + 144), a2, &v37, 1024, 100);
  if ( v5 < 0 )
    return 0;
  v7 = (unsigned __int8 *)(&v37 + v5);
  if ( &v37 >= &v37 + v5 || !(_DWORD)v5 )
    return 0;
  v26 = 0;
  if ( &v38 >= v7 )
    return v26;
  v10 = v5 - 1;
  if ( (v38 & 0x80u) == 0 )
  {
    if ( !v10 )
      return v26;
    v11 = v38;
    v12 = 1;
    goto LABEL_10;
  }
  if ( (v38 & 0xC0) == 0x80 )
  {
    if ( v10 <= 1 )
      return v26;
    v12 = 2;
    v11 = v39 | (v38 << 8) & 0x3F00;
    goto LABEL_10;
  }
  if ( (v38 & 0xE0) != 0xC0 || v10 <= 3 )
    return 0;
  v11 = (v38 << 24) & 0x1F000000 | v41 | (v40 << 8) | (v39 << 16);
  v12 = 4;
LABEL_10:
  v28 = &v38 + v12;
  v13 = &v31;
  v31 = 0;
  v32 = 0;
  v26 = sub_65F0(a1, &v31, &v28, (unsigned __int64)v7, v6);
  if ( v26 )
  {
    v18 = *(_QWORD *)(v4 + 144);
    v33 = 0;
    v34 = 0;
    v19 = netnode_altval(v18, v2, 65);
    v13 = &v33;
    netnode_qgetblob(v19, &v33, 4, 0, 65);
    if ( v11 )
    {
      v20 = v11;
      v21 = 1;
      v22 = 0;
      v23 = a2 & 0xFFFFFF;
      v27 = v20;
      do
      {
        v24 = v28;
        if ( v28 >= v7 )
          break;
        do
        {
          if ( (*v24 & 0x40) == 0 )
            break;
          v28 = ++v24;
        }
        while ( v7 != v24 );
        v13 = &v31;
        sub_65F0(a1, &v31, &v28, (unsigned __int64)v7, v16);
        if ( v22 < (unsigned __int64)v34 )
        {
          if ( v23 )
          {
            v13 = (__int64 *)*(unsigned int *)(v33 + 4 * v22);
            if ( netnode_supval(*(_QWORD *)(v4 + 144), v13, v29, 16, 97) > 0 && (v29[9] & 0x10) != 0 )
            {
              v36 = 0;
              v35 = nullptr;
              sub_9490(a1, (__int64 *)&v35, v30, *(_DWORD *)(v33 + 4 * v22));
              v25 = (const char *)&unk_15584;
              if ( (_QWORD)v36 )
                v25 = v35;
              v13 = (_QWORD *)&byte_4;
              if ( (unsigned __int8)sub_4D60(a1, 4, (__int64)".param [%d] = %s", v21, v25) )
              {
                if ( v35 )
                {
                  v13 = nullptr;
                  *(_QWORD *)&v36 = 0;
                  qfree(v35, 0, v14, v15, v16, v17);
                }
                v26 = 0;
                break;
              }
              if ( v35 )
              {
                *(_QWORD *)&v36 = 0;
                qfree(v35, 4, v14, v15, v16, v17);
              }
            }
          }
        }
        ++v22;
        ++v21;
      }
      while ( v22 != v27 );
    }
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v33, v13, v14, v15, v16, v17);
    }
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31, v13, v14, v15, v16, v17);
  }
  return v26;
}
