__int64 __fastcall sub_2FD60(__int64 a1, int a2, bool a3)
{
  int v4; // edx
  int v5; // eax
  char v6; // r14
  __int64 v7; // rax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbx
  unsigned int v11; // ebx
  __int64 (__fastcall **v13)(); // [rsp+0h] [rbp-58h] BYREF
  char v14; // [rsp+8h] [rbp-50h]
  int v15; // [rsp+Ch] [rbp-4Ch]
  bool v16; // [rsp+10h] [rbp-48h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 248);
  v17 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a1 + 252);
  *(_DWORD *)(a1 + 252) = 0;
  if ( v4 )
  {
    v6 = 10;
    if ( v5 == 1 )
      v6 = 96;
    do
    {
      v7 = sub_2F5D0(a1, 0x5Fu, 0);
      v10 = v7;
      if ( a3 )
        a3 = (unsigned int)sub_2A6A0((_QWORD *)a1, v7, v6, (_BYTE *)(a1 + 288), v8, v9) == 0;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    }
    while ( *(_DWORD *)(a1 + 248) );
  }
  v16 = a3;
  v14 = 94;
  v15 = a2;
  v13 = off_1623A8;
  v11 = sub_2F8E0(a1, (unsigned __int8 *)&v13);
  nullsub_26(&v13);
  return v11;
}

