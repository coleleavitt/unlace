__int64 __fastcall sub_9DF890(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rbp
  int v6; // eax
  unsigned int v7; // ebp
  unsigned int v9; // r13d
  bool v10; // al
  void *v11; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v12 = v4;
  v11 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v6 = *(_DWORD *)(v5 + 48);
  if ( !v6 || v6 == 2 )
  {
    if ( !*(_QWORD *)(v5 + 24) )
      goto LABEL_6;
LABEL_13:
    v9 = v12;
    if ( v12 <= 0x40 )
      v10 = v11 == nullptr;
    else
      v10 = v9 == (unsigned int)sub_2587400(&v11);
    if ( !v10 && !(unsigned __int8)sub_9D4C70(a1, a2, v5) )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( v6 == 3 || *(_QWORD *)(v5 + 32) || *(_QWORD *)v5 )
    goto LABEL_13;
LABEL_6:
  v7 = sub_943380(a1, a2, (__int64)&v11, v5, 0);
  if ( (_BYTE)v7 )
  {
    sub_9C74F0(a1);
    goto LABEL_8;
  }
LABEL_7:
  v7 = 0;
LABEL_8:
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  return v7;
}

