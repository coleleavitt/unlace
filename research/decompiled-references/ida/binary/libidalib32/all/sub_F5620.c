__int64 __fastcall sub_F5620(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64, char); // rax
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // r9
  int v5; // r12d
  unsigned int v6; // r13d
  unsigned int v7; // ebp
  __int64 flags; // r8
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // [rsp+0h] [rbp-28h]
  __int64 v13; // [rsp+8h] [rbp-20h]
  __int64 v14; // [rsp+10h] [rbp-18h]
  __int64 v15; // [rsp+18h] [rbp-10h]

  v1 = *(__int64 (__fastcall **)(__int64, char))(*(_QWORD *)a1 + 416LL);
  if ( v1 == sub_F4A00 )
  {
    v2 = sub_15CFF0(a1 + 440);
    v3 = sub_F4670(a1, *(_QWORD *)(v2 + 40));
  }
  else
  {
    v3 = v1(a1, 0);
  }
  get_eah();
  if ( v3 == -1 )
  {
    v5 = -1;
    v6 = -1;
    v7 = 0;
    flags = 0;
  }
  else
  {
    v10 = getseg();
    if ( v10 )
    {
      v5 = *(_DWORD *)(v10 + 28);
      v7 = 1;
      v11 = sel2para();
    }
    else
    {
      v7 = 0;
      v5 = -1;
      v11 = v3 >> 4;
    }
    v6 = v3 - 16 * v11;
    flags = get_flags_ex();
  }
  sub_F5490((__int64)&xmmword_2516A0, v3, v6, v5, flags, v4, v12, v13, v14, v15);
  return v7;
}

