__int64 __fastcall sub_21EC00(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v4; // rdx
  int *v5; // rbx
  __int64 v6; // rcx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdi
  unsigned int v11; // esi
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rax
  _DWORD *v16; // r15
  _DWORD *v17; // rbx
  int v18; // ecx
  _DWORD *v19; // r14
  int v20; // ebp
  int v21; // r9d
  int v22; // edx
  int v23; // r9d
  _DWORD *v24; // [rsp+0h] [rbp-98h]
  _QWORD v25[2]; // [rsp+10h] [rbp-88h] BYREF
  _DWORD *v26; // [rsp+20h] [rbp-78h] BYREF
  __int128 v27; // [rsp+28h] [rbp-70h]
  _DWORD *v28; // [rsp+40h] [rbp-58h] BYREF
  __int128 v29; // [rsp+48h] [rbp-50h]
  unsigned __int64 v30; // [rsp+58h] [rbp-40h]

  v2 = *(__int64 **)(a1 + 88);
  v30 = __readfsqword(0x28u);
  v4 = *v2;
  v27 = 0;
  v26 = nullptr;
  v5 = (int *)(v4 + 104LL * *(int *)(a2 + 44));
  v6 = v4 + 104LL * *(int *)(*(_QWORD *)(a1 + 16) + 480LL);
  sub_1BCF40(v5, (__int64 *)&v26, v5[22], v6, *(_DWORD *)(v6 + 88), 1);
  if ( !(_QWORD)v27 )
  {
LABEL_2:
    v10 = *(_QWORD *)(a1 + 16);
    if ( !*(_BYTE *)(v10 + 320) )
    {
LABEL_3:
      v11 = 0;
      goto LABEL_4;
    }
    if ( (*(_BYTE *)(a2 + 48) & 4) != 0 )
    {
      sub_329B90(v10, -1, 25, v7, v8, v9);
      goto LABEL_3;
    }
    if ( !under_debugger )
      sub_37B760(52849);
LABEL_37:
    BUG();
  }
  v25[0] = 0;
  v25[1] = 0;
  sub_328120(a2 + 24, v25);
  v13 = v5[22];
  v14 = *(_DWORD *)(a2 + 40);
  v28 = nullptr;
  v29 = 0;
  sub_1BCF40(v5, (__int64 *)&v28, v13, (__int64)v25, v14, 1);
  v15 = v29;
  if ( !(_QWORD)v29 )
  {
    if ( !under_debugger )
      sub_37B760(52660);
    goto LABEL_37;
  }
  v16 = v26;
  v17 = v28;
  v24 = &v26[6 * v27];
  if ( v24 == v26 )
  {
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28);
    }
    cleanup_argloc(v25);
    goto LABEL_2;
  }
  LOBYTE(v11) = 0;
  while ( 1 )
  {
    v18 = v16[4];
    v19 = &v17[6 * v15];
    v20 = v18 + *v16;
    if ( v19 != v17 )
    {
      while ( 1 )
      {
        v21 = v17[4];
        v22 = v18;
        if ( v21 >= v18 )
          v22 = v17[4];
        v23 = *v17 + v21;
        if ( v23 > v20 )
          v23 = v20;
        if ( v22 >= v23 )
        {
          v17 += 6;
          if ( v19 == v17 )
            goto LABEL_22;
        }
        else
        {
          sub_21E1B0(
            a1,
            *(_DWORD *)(a2 + 44),
            *(_DWORD *)(*(_QWORD *)(a1 + 16) + 480LL),
            v22,
            v22 + v16[5] - v18,
            v23 - v22);
          v17 += 6;
          LOBYTE(v11) = 1;
          if ( v19 == v17 )
          {
LABEL_22:
            v17 = v28;
            break;
          }
        }
        v18 = v16[4];
      }
    }
    v16 += 6;
    if ( v24 == v16 )
      break;
    v15 = v29;
  }
  if ( v17 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v17);
  }
  cleanup_argloc(v25);
  v11 = (unsigned __int8)v11;
  if ( !(_BYTE)v11 )
    goto LABEL_2;
LABEL_4:
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
    return (unsigned __int8)v11;
  }
  return v11;
}
