__int64 __fastcall sub_6B27E0(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v4; // eax
  _DWORD *v5; // rcx
  unsigned int v6; // eax
  int *v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // ebp
  unsigned int j; // r15d
  unsigned int v12; // eax
  unsigned __int16 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int i; // ebp
  unsigned int v19; // r12d
  __int16 v20; // r13
  int v21; // eax
  bool v22; // cf
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  char *v27; // rdi
  unsigned int v28; // [rsp+0h] [rbp-B8h]
  unsigned int v29; // [rsp+0h] [rbp-B8h]
  __int64 v30; // [rsp+4h] [rbp-B4h]
  unsigned int v31; // [rsp+4h] [rbp-B4h]
  unsigned int v32; // [rsp+Ch] [rbp-ACh]
  __int64 v33; // [rsp+18h] [rbp-A0h] BYREF
  char *s1; // [rsp+20h] [rbp-98h] BYREF
  __int128 v35; // [rsp+28h] [rbp-90h]
  __int64 idati; // [rsp+40h] [rbp-78h] BYREF
  const char *v37; // [rsp+48h] [rbp-70h]
  __int16 v38; // [rsp+50h] [rbp-68h]
  _BYTE v39[13]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v40[5]; // [rsp+6Dh] [rbp-4Bh] BYREF
  _BYTE v41[6]; // [rsp+72h] [rbp-46h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( a2 == 2 )
  {
    v6 = *a3;
    if ( (unsigned int)*a3 > 0x2F )
    {
      v7 = *((int **)a3 + 1);
      *((_QWORD *)a3 + 1) = v7 + 2;
    }
    else
    {
      v7 = (int *)(*((_QWORD *)a3 + 2) + v6);
      *a3 = v6 + 8;
    }
    v8 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 764LL);
    if ( *v7 <= 699 )
    {
      if ( v8 == 13 )
      {
        netnode_check(&idati, " $arm", 0, 0);
        netnode_supdel_all((unsigned int)idati, 82);
        netnode_supdel_all((unsigned int)idati, 66);
        for ( i = netnode_supfirst((unsigned int)idati, 70); i != -1; i = netnode_supnext((unsigned int)idati, i, 70) )
        {
          v19 = node2ea(i);
          v20 = netnode_altval((unsigned int)idati, i, 70);
          if ( v20 )
          {
            v21 = netnode_altval((unsigned int)idati, i, 102);
            v22 = v21 == 0;
            v23 = v21 - 1;
            if ( v22 )
              v23 = ~v19;
            v31 = idati;
            v29 = v23;
            v24 = pack_dd(v39, v40, 1);
            v25 = pack_dw(v24, v40, (unsigned __int16)(v20 - 1));
            v26 = pack_dd(v25, v40, v29);
            netnode_supset(v31, v19, v39, v26 - (_QWORD)v39, 326);
          }
        }
        netnode_supdel_all((unsigned int)idati, 102);
        v8 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 764LL);
      }
      if ( !v8 )
      {
        netnode_check(&s1, "$ vmm functions", 0, 0);
        for ( j = netnode_supfirst((unsigned int)s1, 98); j != -1; j = netnode_supnext((unsigned int)s1, j, 98) )
        {
          if ( netnode_supval((unsigned int)s1, j, &idati, 12, 98) == 12 )
          {
            v12 = node2ea(j);
            v13 = (unsigned __int16)v37;
            v28 = v12;
            v30 = idati;
            v32 = (unsigned int)s1;
            v14 = pack_dd(v39, v41, 1);
            v15 = pack_dd(v14, v41, (unsigned int)v30);
            v16 = pack_dd(v15, v41, HIDWORD(v30));
            v17 = pack_dw(v16, v41, v13);
            netnode_supset(v32, v28, v39, v17 - (_QWORD)v39, 354);
          }
        }
        sub_6B23C0((unsigned int)s1, 86);
        sub_6B23C0((unsigned int)s1, 87);
        v8 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 764LL);
      }
    }
    if ( v8 == 12 )
    {
      netnode_check(&v33, "$ mips", 0, 0);
      if ( !(unsigned int)netnode_altval((unsigned int)v33, 4294967292LL, 65) )
      {
        netnode_check(&idati, "$ got", 0, 0);
        if ( (unsigned __int8)netnode_exist(&idati) )
        {
          v9 = netnode_altval((unsigned int)idati, 0, 65);
          if ( (unsigned int)node2ea((unsigned int)(v9 - 1)) != -1 )
          {
            netnode_check(&s1, "$ got", 0, 0);
            v10 = netnode_altval((unsigned int)s1, 0xFFFFFFFFLL, 65);
            netnode_supdel((unsigned int)s1, 0xFFFFFFFFLL, 65);
            LODWORD(idati) = v10;
            netnode_supset((unsigned int)v33, 4294967292LL, &idati, 4, 65);
          }
        }
      }
    }
  }
  else if ( a2 == 11 && *(_DWORD *)(*(_QWORD *)(a1 + 16) + 764LL) == 12 )
  {
    v4 = *a3;
    if ( (unsigned int)*a3 > 0x2F )
    {
      v5 = *((_DWORD **)a3 + 1);
      *((_QWORD *)a3 + 1) = v5 + 2;
    }
    else
    {
      v5 = (_DWORD *)(*((_QWORD *)a3 + 2) + v4);
      *a3 = v4 + 8;
    }
    if ( *v5 && (getinf(57) & 0xF) == 6 && !(unsigned __int8)getinf_flag(3, 4) )
    {
      v33 = 0;
      s1 = nullptr;
      v35 = 0;
      get_abi_name(&s1);
      if ( (_QWORD)v35 && (v27 = s1, !strcmp(s1, "eabi32")) )
      {
        v38 = 0;
        v37 = "__va_list_tag";
        idati = get_idati(v27, "eabi32");
        create_tinfo(&v33, 61, 61, &idati);
        lower_type(0, &v33, 0, 0);
      }
      else
      {
        get_stock_tinfo(&v33, 7);
      }
      save_tinfo(&v33, 0, 0, "__builtin_va_list", 5);
      if ( s1 )
      {
        *(_QWORD *)&v35 = 0;
        qfree(s1);
      }
      clear_tinfo_t(&v33);
    }
    setinf_flag(67, 4, 1);
  }
  return 0;
}

