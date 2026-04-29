unsigned __int64 __fastcall sub_8C9A0(__int64 a1, __int64 a2)
{
  int v4; // r13d
  int v5; // r14d
  __int64 v6; // r12
  int v7; // edx
  __int64 v8; // rdi
  int v9; // r14d
  __int64 v10; // r12
  int v11; // edx
  __int64 v12; // rdi
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // r15
  char *v16; // rsi
  __int64 v17; // rax
  unsigned int v19; // esi
  _BYTE v20[8]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v21[8]; // [rsp+18h] [rbp-40h] BYREF

  v21[0] = __readfsqword(0x28u);
  sub_8BC40(a2, 2, "callinfo.role");
  sub_7BEA0((__int64 *)a2, *(_DWORD *)(a1 + 284));
  if ( *(_DWORD *)(a1 + 284) == 13 )
  {
    v19 = sub_326890(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(a1 + 24) + 84LL),
            0);
    return sub_7BEA0((__int64 *)a2, v19);
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 48);
    sub_8BC40(a2, 2, "callinfo.callee");
    sub_7C130((__int64 *)a2, *(_QWORD *)a1 - *(_QWORD *)(a2 + 40));
    sub_8BC40(a2, 2, "callinfo.solid_args");
    sub_7BEA0((__int64 *)a2, *(_DWORD *)(a1 + 8));
    sub_8BC40(a2, 2, "callinfo.call_spd");
    sub_7BEA0((__int64 *)a2, *(_DWORD *)(a1 + 12));
    sub_8BC40(a2, 2, "callinfo.stkargs_top");
    sub_7BEA0((__int64 *)a2, *(_DWORD *)(a1 + 16));
    sub_8BC40(a2, 2, "callinfo.cc");
    sub_7BEA0((__int64 *)a2, *(_DWORD *)(a1 + 20));
    sub_8BC40(a2, 2, "callinfo.args");
    sub_7BEA0((__int64 *)a2, *(_DWORD *)(a1 + 32));
    if ( *(_QWORD *)(a1 + 32) )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = v5++;
        sub_8C210(a2, 4, v7);
        v8 = 5 * v6;
        v6 = v5;
        sub_8D2E0(*(_QWORD *)(a1 + 24) + 16 * v8, a2);
      }
      while ( (unsigned __int64)v5 < *(_QWORD *)(a1 + 32) );
    }
    sub_8BC40(a2, 2, "callinfo.retregs");
    sub_7BEA0((__int64 *)a2, *(_DWORD *)(a1 + 56));
    if ( *(_QWORD *)(a1 + 56) )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        v11 = v9++;
        sub_8C210(a2, 4, v11);
        v12 = v10;
        v10 = v9;
        sub_8CE90(*(_QWORD *)(a1 + 48) + 16 * v12, a2);
      }
      while ( (unsigned __int64)v9 < *(_QWORD *)(a1 + 56) );
    }
    sub_8BC40(a2, 2, "callinfo.return_type");
    sub_7C310((__int64 *)a2, (_BYTE *)(a1 + 72));
    sub_8BC40(a2, 2, "callinfo.return_argloc");
    sub_7DFD0((__int64 *)a2);
    sub_8BC40(a2, 2, "callinfo.return_regs");
    sub_7C9D0(a1 + 96, (__int64 *)a2);
    sub_7C780(a1 + 112, (__int64 *)a2);
    if ( (unsigned __int8)sub_76C00(v4, 3, 0x88u) )
    {
      sub_8BC40(a2, 2, "callinfo.spoiled");
      sub_7C9D0(a1 + 136, (__int64 *)a2);
      sub_7C780(a1 + 152, (__int64 *)a2);
    }
    if ( (unsigned __int8)sub_76C00(v4, 3, 0xB0u) )
    {
      sub_8BC40(a2, 2, "callinfo.pass_regs");
      sub_7C9D0(a1 + 176, (__int64 *)a2);
      sub_7C780(a1 + 192, (__int64 *)a2);
    }
    if ( (unsigned __int8)sub_76C00(v4, 3, 0xD8u) )
    {
      sub_8BC40(a2, 2, "callinfo.visible_memory");
      sub_7C780(a1 + 216, (__int64 *)a2);
    }
    sub_8BC40(a2, 2, "callinfo.dead_regs");
    sub_7C9D0(a1 + 240, (__int64 *)a2);
    sub_7C780(a1 + 256, (__int64 *)a2);
    sub_8BC40(a2, 2, "callinfo.flags");
    sub_7BEA0((__int64 *)a2, *(_DWORD *)(a1 + 280));
    sub_8BC40(a2, 2, "callinfo.fti_attrs");
    sub_7BEA0((__int64 *)a2, *(_DWORD *)(a1 + 296));
    if ( *(_QWORD *)(a1 + 296) )
    {
      v13 = 0;
      v14 = 0;
      do
      {
        v15 = *(_QWORD *)(a1 + 288) + 48 * v14;
        sub_8C210(a2, 4, v13);
        sub_8BC40(a2, 4, "fti_attrs.key");
        v16 = (char *)s1;
        if ( *(_QWORD *)(v15 + 8) )
          v16 = *(char **)v15;
        ++v13;
        sub_7C200((__int64 *)a2, v16);
        sub_8BC40(a2, 4, "fti_attrs.value");
        v17 = pack_dd(v20, v21, *(unsigned int *)(v15 + 32));
        sub_7BD20((__int64 *)a2, (__int64)v20, v17 - (_QWORD)v20);
        sub_7BD20((__int64 *)a2, *(_QWORD *)(v15 + 24), *(_QWORD *)(v15 + 32));
        v14 = v13;
      }
      while ( (unsigned __int64)v13 < *(_QWORD *)(a1 + 296) );
    }
    return v21[0] - __readfsqword(0x28u);
  }
}
