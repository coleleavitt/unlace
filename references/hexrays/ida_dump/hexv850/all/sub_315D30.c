unsigned __int64 __fastcall sub_315D30(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  bool v4; // zf
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ebp
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rbp
  _QWORD *v18; // r13
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21[2]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v22; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v23; // [rsp+38h] [rbp-F0h]
  __int64 v24[2]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 *v25; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v26; // [rsp+68h] [rbp-C0h]
  __int64 v27; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v28; // [rsp+88h] [rbp-A0h]
  __int64 v29; // [rsp+98h] [rbp-90h]
  __int64 v30; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-80h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-78h]
  __int64 v33; // [rsp+C0h] [rbp-68h]
  __int128 v34; // [rsp+C8h] [rbp-60h]
  char v35; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v36; // [rsp+E8h] [rbp-40h]

  v3 = -1;
  v36 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 4) & 0x40) != 0 )
    v3 = *(_QWORD *)(a1 + 144);
  if ( *(_BYTE *)(a1 + 320) )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 72) - 208) <= 0x2F )
    {
      v14 = *(_QWORD *)(a1 + 328);
      if ( (_BYTE)v14 )
      {
        v27 = 0;
        v29 = 0;
        v30 = 0;
        v31 = 0;
        v33 = 0;
        v35 = 16;
        v28 = 0;
        v32 = 0;
        v34 = 0;
        if ( (unsigned __int8)get_tinfo_details(v14, 12, &v27) && (v29 & 0x200) != 0 )
          v3 = -1;
        if ( v33 )
        {
          *(_QWORD *)&v34 = 0;
          qfree(v33);
        }
        cleanup_argloc(&v31);
        clear_tinfo_t(&v30);
        v15 = v27;
        if ( v27 )
        {
          v16 = v28;
          if ( (_QWORD)v28 )
          {
            v17 = 0;
            do
            {
              v18 = (_QWORD *)(v15 + 80 * v17);
              clear_tinfo_t(v18 + 8);
              v19 = v18[5];
              if ( v19 )
              {
                v18[6] = 0;
                qfree(v19);
              }
              v20 = v18[2];
              if ( v20 )
              {
                v18[3] = 0;
                qfree(v20);
              }
              ++v17;
              cleanup_argloc(v18);
              v15 = v27;
            }
            while ( v16 != v17 );
          }
          *(_QWORD *)&v28 = 0;
          qfree(v15);
        }
      }
    }
  }
  sub_1BF730((__int64)&v27, *(_QWORD *)(a1 + 1496), v3);
  v4 = *(_QWORD *)(a1 + 464) == 0;
  v21[0] = 0;
  v21[1] = 0;
  v22 = 0;
  v23 = 0;
  if ( v4 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 0x30) == 0 )
    {
      v12 = 0;
      goto LABEL_30;
    }
LABEL_53:
    if ( !under_debugger )
      sub_37CFE0(51871);
    goto LABEL_61;
  }
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = *(_QWORD *)(a1 + 432) + 104LL * *(int *)(*(_QWORD *)(a1 + 456) + 4 * v6);
    *(_QWORD *)(a2 + 64) = v7;
    if ( (*(_BYTE *)(v7 + 25) & 1) == 0 )
      sub_315C60(a2, 0xC6DAu);
    if ( !(unsigned __int8)sub_1E96A0((unsigned __int8 *)a1) )
    {
      v26 = 0;
      v24[0] = 0;
      v24[1] = 0;
      v25 = nullptr;
      sub_1BE600(v7, a1, v24, 0);
      if ( (unsigned __int8)sub_5FD00(v24, v21) || (unsigned __int8)sub_312BB0((unsigned __int64 **)&v25, (__int64)&v22) )
        sub_315C60(a2, 0xC6D8u);
      sub_5F800(v21, v24);
      sub_3113F0(&v22, &v25);
      if ( (unsigned int)(*(_DWORD *)(a1 + 72) - 208) <= 0x2F
        && *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 656LL) > *(_DWORD *)(a1 + 464)
        && !(unsigned __int8)sub_1BF7D0(&v27, (_DWORD *)v7, (_QWORD *)(v7 + 80), *(_DWORD *)(v7 + 88)) )
      {
        sub_315C60(a2, 0xC76Du);
      }
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v25);
      }
      qfree(v24[0]);
    }
    ++v5;
    v8 = *(_QWORD *)(a1 + 464);
    v6 = v5;
  }
  while ( v5 < v8 );
  if ( (*(_BYTE *)(a1 + 4) & 0x30) == 0 )
    goto LABEL_27;
  if ( !(_DWORD)v8 )
    goto LABEL_53;
  v9 = sub_1386C0((_QWORD *)a1, 0);
  v10 = *(_DWORD *)(v9 + 24);
  v11 = v9;
  if ( (v10 & 0x20) == 0 && (!*(_QWORD *)(v9 + 40) || strcmp(*(const char **)(v9 + 32), "this")) )
  {
    if ( !under_debugger )
      sub_37CFE0(51872);
    goto LABEL_61;
  }
  if ( (v10 & 0x40) == 0 )
  {
    if ( (get_tinfo_property(*(_QWORD *)(v11 + 80), 2) & 0xF) == 0xA )
    {
      v10 = *(_DWORD *)(v11 + 24);
      goto LABEL_26;
    }
    if ( !under_debugger )
      sub_37CFE0(51873);
LABEL_61:
    BUG();
  }
LABEL_26:
  if ( (v10 & 0x8000) == 0 )
  {
    if ( !under_debugger )
      sub_37CFE0(51887);
    goto LABEL_61;
  }
LABEL_27:
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  v12 = v21[0];
LABEL_30:
  qfree(v12);
  if ( v29 )
  {
    v30 = 0;
    qfree(v29);
  }
  qfree(v28);
  return v36 - __readfsqword(0x28u);
}
