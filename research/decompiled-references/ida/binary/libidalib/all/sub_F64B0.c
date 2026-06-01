__int64 __fastcall sub_F64B0(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64, char); // rax
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  __int64 eah; // rdx
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned int v7; // r12d
  __int64 v8; // rbp
  __int64 flags; // r8
  __int64 v10; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-28h]
  __int64 v15; // [rsp+8h] [rbp-20h]
  __int64 v16; // [rsp+10h] [rbp-18h]
  __int64 v17; // [rsp+18h] [rbp-10h]

  v1 = *(__int64 (__fastcall **)(__int64, char))(*(_QWORD *)a1 + 416LL);
  if ( v1 == sub_F5830 )
  {
    v2 = sub_15D8D0(a1 + 440);
    v3 = sub_F5490(a1, *(_QWORD *)(v2 + 40));
  }
  else
  {
    v3 = v1(a1, 0);
  }
  eah = get_eah();
  v6 = 0x100000000LL;
  if ( *(_DWORD *)(eah + 24) == 8 )
    v6 = -1;
  if ( v3 < v6 )
  {
    v12 = getseg();
    if ( v12 )
    {
      v8 = *(_QWORD *)(v12 + 48);
      v7 = 1;
      v13 = sel2para();
    }
    else
    {
      v7 = 0;
      v8 = -1;
      v13 = v3 >> 4;
    }
    v10 = v3 - 16 * v13;
    flags = get_flags_ex();
  }
  else
  {
    v7 = 0;
    v8 = -1;
    flags = 0;
    v10 = -1;
    v3 = -1;
  }
  sub_F6310(&xmmword_252840, v3, v10, v8, flags, v5, v14, v15, v16, v17);
  return v7;
}

