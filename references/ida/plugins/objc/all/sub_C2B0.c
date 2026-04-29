__int64 __fastcall sub_C2B0(__int64 a1, const char *a2)
{
  unsigned int v2; // ebx
  const char *v5; // rax
  const char *v6; // rbp
  size_t v7; // rax
  size_t v8; // r14
  int v9; // ebp
  __int64 i; // rax
  __int64 *v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 next_seg; // rbx
  __int64 v16; // rdi
  __int64 v17; // rax
  char *v18; // rdi
  size_t v19; // rdx
  size_t v20; // [rsp+8h] [rbp-1130h]
  char *s2[2]; // [rsp+50h] [rbp-10E8h] BYREF
  __int128 v22; // [rsp+60h] [rbp-10D8h]
  __int64 v23; // [rsp+70h] [rbp-10C8h]
  __int128 v24; // [rsp+78h] [rbp-10C0h]
  __int64 v25; // [rsp+88h] [rbp-10B0h]
  __int128 v26; // [rsp+90h] [rbp-10A8h]
  __int128 v27; // [rsp+A0h] [rbp-1098h]
  __int128 v28; // [rsp+B0h] [rbp-1088h]
  __int64 v29; // [rsp+C0h] [rbp-1078h] BYREF
  __int128 v30; // [rsp+C8h] [rbp-1070h]
  __int64 v31; // [rsp+D8h] [rbp-1060h]
  int v32; // [rsp+E0h] [rbp-1058h]
  char v33; // [rsp+E8h] [rbp-1050h]
  char s1[4104]; // [rsp+F0h] [rbp-1048h] BYREF
  unsigned __int64 v35; // [rsp+10F8h] [rbp-40h]

  v2 = 0;
  v35 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 1824LL) & 2) == 0 )
    return v2;
  s2[0] = 0;
  v22 = 0;
  s2[1] = (char *)qvector_reserve();
  *(_QWORD *)&v22 = 5;
  strcpy(s2[1], "OBJC");
  v23 = 0;
  v25 = 0x186A000000000LL;
  v29 = 0;
  v31 = 0;
  v32 = -1;
  v33 = 0;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v30 = 0;
  v5 = (const char *)qbasename();
  v6 = v5;
  if ( v5 && (v7 = strlen(v5), (v8 = v7) != 0) )
  {
    v18 = s2[1];
    v19 = v7 + 1;
    if ( *((_QWORD *)&v22 + 1) < v7 + 1 )
    {
      v20 = v7 + 1;
      s2[1] = (char *)qvector_reserve();
      v19 = v20;
      v18 = s2[1];
    }
    *(_QWORD *)&v22 = v19;
    memmove(v18, v6, v8);
    s2[1][v8] = 0;
  }
  else
  {
    *(_QWORD *)&v22 = 0;
  }
  dbg_get_input_path();
  v9 = strcmp(s1, a2);
  for ( i = get_first_seg(); ; i = get_next_seg() )
  {
    next_seg = i;
    if ( !i )
      break;
    if ( !v9 )
    {
      while ( (*(_BYTE *)(next_seg + 44) & 0x10) != 0 )
      {
        rangeset_t_add();
        next_seg = get_next_seg();
        if ( !next_seg )
          goto LABEL_12;
      }
    }
    get_segm_name();
  }
LABEL_12:
  if ( !(_QWORD)v30 )
    goto LABEL_23;
  v16 = *(_QWORD *)(a1 + 40);
  if ( !*(_QWORD *)(v16 + 1808) )
    goto LABEL_31;
  if ( !(unsigned __int8)sub_13360(*(_QWORD *)(v16 + 1808)) )
    goto LABEL_23;
  v16 = *(_QWORD *)(a1 + 40);
  v11 = &v29;
  v17 = *(_QWORD *)(v16 + 1808);
  if ( !v17 )
  {
LABEL_31:
    if ( (unsigned __int8)sub_B130(v16, (int)&v29) )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 1808LL);
      goto LABEL_16;
    }
LABEL_23:
    sub_EC40((unsigned int)"No Objective-C info found in %s\n", (_DWORD)a2, (_DWORD)v11, v12, v13, v14);
    v2 = 0;
    goto LABEL_17;
  }
LABEL_16:
  sub_1D820(v17, (unsigned int)s2, (_DWORD)v11, v12, v13, v14);
  v2 = 1;
LABEL_17:
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  if ( s2[1] )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  return v2;
}
