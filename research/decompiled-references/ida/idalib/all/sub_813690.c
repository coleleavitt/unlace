__int64 __fastcall sub_813690(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r12
  int v6; // r15d
  int v7; // r14d
  __int16 v8; // r10
  _WORD *v9; // rax
  __int16 v10; // dx
  unsigned int v11; // ebx
  char *v13; // rdi
  __int64 (__fastcall *v14)(__int64); // rax
  __int64 v15; // rax
  int v16; // [rsp+8h] [rbp-180h]
  __int64 v17; // [rsp+10h] [rbp-178h] BYREF
  int v18; // [rsp+18h] [rbp-170h]
  char *s1; // [rsp+20h] [rbp-168h] BYREF
  __int128 v20; // [rsp+28h] [rbp-160h]
  _DWORD v21[66]; // [rsp+40h] [rbp-148h] BYREF
  unsigned __int64 v22; // [rsp+148h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( *(_QWORD *)(*a1 + 1504LL) < a2 )
  {
    return 0;
  }
  else
  {
    v3 = a2;
    if ( (debug & 4) != 0 )
      sub_3879F0();
    v4 = a1[1];
    if ( (*(_BYTE *)(v4 + 16) & 4) != 0 )
    {
      v16 = 2;
      v5 = 256;
      v6 = 256;
    }
    else
    {
      v16 = 1;
      v5 = 128;
      v6 = 128;
    }
    s1 = nullptr;
    v7 = 0;
    v20 = 0;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v4 + 16) & 2) != 0 && (get_flags_ex(v3, 4) & 0x4000) != 0 && get_ea_name(&s1, v3, 512, 0) > 0 )
      {
        v13 = (char *)haystack;
        if ( (_QWORD)v20 )
          v13 = s1;
        if ( !strcmp(v13, (const char *)(a1[1] + 22LL)) )
          break;
      }
      if ( get_bytes(v21, v5, v3, 0, 0) == v5 )
      {
        v8 = sub_813280(v21, v6);
        if ( (debug & 4) != 0 )
          sub_3879F0();
        if ( (v9 = (_WORD *)a1[1], v9[10] == v8)
          || (v10 = v9[8], (v10 & 8) != 0) && *(_WORD *)((char *)v9 + 35) == v8
          || (v10 & 0x20) != 0 && *(_WORD *)((char *)v9 + 43) == v8 )
        {
          if ( (debug & 4) != 0 )
            sub_3879F0();
          set_name(v3, v9 + 11);
          del_items(*(_QWORD *)(*a1 + 1504LL) & (v3 + v16), 0, 1, 0);
          v14 = sub_8131B0;
          if ( v16 == 1 )
            v14 = sub_8131D0;
          ((void (__fastcall *)(__int64, _QWORD, _QWORD))v14)(v3, v7 + (v16 << 8), 0);
          v15 = num_flag();
          set_op_type(v3, v15, 0);
          v18 = 0;
          v17 = 0x800000000LL;
          set_array_parameters(v3, &v17);
          break;
        }
      }
      if ( v7 )
      {
        v11 = 0;
        goto LABEL_21;
      }
      v7 = 1;
      v3 = *(_QWORD *)(*a1 + 1504LL) & (v3 - v16);
      v4 = a1[1];
    }
    v11 = 1;
LABEL_21:
    if ( s1 )
    {
      *(_QWORD *)&v20 = 0;
      qfree(s1);
    }
  }
  return v11;
}
