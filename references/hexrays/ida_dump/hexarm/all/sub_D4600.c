__int64 __fastcall sub_D4600(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // r14d
  _QWORD *v6; // r13
  unsigned int v9; // eax
  __int64 v10; // rax
  unsigned int tinfo_size; // eax
  unsigned int v12; // eax
  __int64 v13; // r12
  unsigned int v14; // ecx
  __int64 v15; // r13
  int v16; // eax
  int v17; // r8d
  unsigned int v18; // eax
  unsigned int v19; // r15d
  int v20; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // [rsp+18h] [rbp-80h] BYREF
  __int64 v25; // [rsp+20h] [rbp-78h] BYREF
  __int64 v26; // [rsp+28h] [rbp-70h]
  __int64 v27; // [rsp+30h] [rbp-68h]
  __int64 v28; // [rsp+40h] [rbp-58h] BYREF
  __int64 v29; // [rsp+48h] [rbp-50h]
  __int64 v30; // [rsp+50h] [rbp-48h]
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)a3 - 3) <= 1 )
  {
    v6 = (_QWORD *)(a3 + 80);
    v4 = sub_D40C0(a1, a2, a3, (_QWORD *)(a3 + 80));
    if ( !(_BYTE)v4 )
    {
      v24 = 0;
      copy_tinfo_t(&v24, v6);
      if ( a4 )
      {
LABEL_21:
        clear_tinfo_t(&v24);
        return v4;
      }
      v9 = *(_DWORD *)(a1 + 72);
      if ( v9 <= 0x10 )
        v9 = getinf(99);
      if ( v9 == 176 )
      {
        if ( (unsigned __int64)getinf(88) <= 0x397 )
        {
          if ( !(unsigned __int8)getinf_flag(3, 4) )
            goto LABEL_21;
          netnode_check(&v28, "$ golang", 0, 0);
          v19 = netnode_altval(v28, 0, 65);
          if ( v19 <= 0x74 )
            goto LABEL_21;
          v20 = *(_DWORD *)(get_ph() + 4);
          if ( v20 )
          {
            v21 = (unsigned int)(v20 - 13);
            if ( (unsigned int)v21 > 0x3B )
              goto LABEL_21;
            v22 = 0x800000000000005LL;
            if ( !_bittest64(&v22, v21) || v19 == 117 )
              goto LABEL_21;
          }
        }
      }
      else if ( v9 == 256 )
      {
        goto LABEL_21;
      }
      if ( (unsigned __int8)sub_36ED90(a1, a2, a3) )
      {
        v18 = sub_D40C0(a1, a2, a3, v6);
        if ( (_BYTE)v18 )
        {
          v4 = v18;
          goto LABEL_21;
        }
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 80) + 606LL) & 0x10) != 0
        || (get_tinfo_property(*(_QWORD *)(a3 + 80), 2) & 0xF) == 0xB )
      {
        if ( *(int *)(a3 + 88) <= 4 )
        {
          v10 = 9;
          goto LABEL_14;
        }
      }
      else
      {
        v23 = *(_DWORD *)(a1 + 72);
        if ( v23 <= 0x10 )
          v23 = getinf(99);
        if ( v23 != 176 && v23 != 256 || *(int *)(a3 + 88) <= 8 )
        {
          sub_1EF8F0(a3, &v24);
          goto LABEL_21;
        }
      }
      v10 = 25;
LABEL_14:
      v28 = v10;
      sub_1EF8F0(a3, &v28);
      clear_tinfo_t(&v28);
      if ( !(unsigned __int8)sub_D40C0(a1, a2, a3, v6) )
      {
        sub_1EF8F0(a3, *(_QWORD *)(a1 + 80) + 264LL);
        if ( !(unsigned __int8)sub_D40C0(a1, a2, a3, v6) )
        {
          if ( !under_debugger )
            sub_3835A0(52368);
          BUG();
        }
      }
      sub_1F4970(a2, -1, a3);
      *(_DWORD *)(a3 + 24) |= 0x400u;
      v27 = 0;
      v30 = 0;
      tinfo_size = get_tinfo_size(0, v24, 0);
      v25 = 0;
      v26 = 0;
      v12 = sub_D25E0(a1, &v25, (__int64 *)a3, tinfo_size, 0);
      v13 = v25;
      v4 = v12;
      if ( (_BYTE)v12 )
      {
        v14 = *(_DWORD *)(a3 + 88);
        v15 = v26;
        v28 = 0;
        v29 = 0;
        v16 = sub_D25E0(a1, &v28, (__int64 *)a3, v14, 0);
        LOBYTE(v17) = v29 == v15;
        v4 = v16 & v17;
        if ( v28 )
          qfree(v28);
      }
      if ( v13 )
        qfree(v13);
      goto LABEL_21;
    }
  }
  return 1;
}
