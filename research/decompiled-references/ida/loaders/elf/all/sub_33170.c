__int64 __fastcall sub_33170(__int64 a1, __int64 *a2, const char *a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rcx
  unsigned __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // r12d
  __int64 v9; // r15
  __int64 qword; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int dword; // r8d
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-490h]
  unsigned int v19; // [rsp+10h] [rbp-488h]
  __int64 v20; // [rsp+10h] [rbp-488h]
  __int64 v21; // [rsp+18h] [rbp-480h]
  _QWORD v23[3]; // [rsp+30h] [rbp-468h] BYREF
  int v24; // [rsp+48h] [rbp-450h]
  _BYTE v25[1032]; // [rsp+50h] [rbp-448h] BYREF
  unsigned __int64 v26; // [rsp+458h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( *a2 <= 0 )
    return v26 - __readfsqword(0x28u);
  v3 = a2[2];
  if ( !v3 )
    return v26 - __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 608);
  v6 = 4;
  if ( *(_BYTE *)(a1 + 617) )
    v6 = 8;
  v7 = v5 + a2[1];
  v8 = 0;
  if ( v3 < v6 )
    return v26 - __readfsqword(0x28u);
  v18 = *(_QWORD *)(a1 + 608);
  v21 = v5 + a2[1];
  while ( (unsigned __int8)is_loaded(v7) )
  {
    if ( *(_BYTE *)(a1 + 617) )
    {
      v9 = v7 + 8;
      qword = get_qword(v7);
      if ( (unsigned __int64)(qword - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v20 = qword;
        create_data(v7, 805306368, 8, -1);
        a2 = (_QWORD *)(&stru_3F0 + 16);
        qsnprintf(v25, 1024, "");
        v16 = v20;
        if ( v25[0] )
        {
          a2 = (__int64 *)v25;
          set_cmt(v7, v25, 0);
          v16 = v20;
        }
        if ( !(v18 + v16) )
          goto LABEL_16;
        v24 = 137;
        goto LABEL_23;
      }
LABEL_9:
      v3 -= v6;
      v7 = v9;
      if ( v3 < v6 )
        break;
    }
    else
    {
      v9 = v7 + 4;
      dword = get_dword(v7, a2, v11, v12, v13);
      if ( dword - 1 > 0xFFFFFFFD )
        goto LABEL_9;
      v19 = dword;
      create_data(v7, 0x20000000, 4, -1);
      a2 = (_QWORD *)(&stru_3F0 + 16);
      qsnprintf(v25, 1024, "");
      v15 = v19;
      if ( v25[0] )
      {
        a2 = (__int64 *)v25;
        set_cmt(v7, v25, 0);
        v15 = v19;
      }
      if ( !(v18 + v15) )
        goto LABEL_16;
      v24 = 130;
LABEL_23:
      v17 = *(_QWORD *)(a1 + 608);
      a2 = nullptr;
      v23[0] = -1;
      v23[2] = 0;
      v23[1] = v17;
      op_offset_ex(v7, 0, v23);
LABEL_16:
      v3 -= v6;
      ++v8;
      v7 = v9;
      if ( v3 < v6 )
        break;
    }
  }
  if ( !v8 )
    return v26 - __readfsqword(0x28u);
  return sub_E890(v21, 1u, (__int64)"ELF %s Function Table", a3);
}

