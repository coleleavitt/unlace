unsigned __int64 __fastcall sub_186620(_QWORD *a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx
  char v7; // al
  __int64 v8; // rsi
  __int64 v10; // [rsp+0h] [rbp-858h] BYREF
  __int128 v11; // [rsp+8h] [rbp-850h]
  char v12[1024]; // [rsp+20h] [rbp-838h] BYREF
  _BYTE v13[1032]; // [rsp+420h] [rbp-438h] BYREF
  unsigned __int64 v14; // [rsp+828h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( a2 < 0 || (unsigned __int64)a2 >= a1[26] )
  {
    if ( !under_debugger )
      interr();
    goto LABEL_17;
  }
  v3 = *(_QWORD *)(a1[64] + 8LL * a2);
  v4 = 72LL * a2;
  (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v3 + 176LL))(v3, v12, 1024);
  (*(void (__fastcall **)(_QWORD, _BYTE *, __int64))(**(_QWORD **)(a1[25] + v4) + 96LL))(
    *(_QWORD *)(a1[25] + v4),
    v13,
    1024);
  v5 = a1[25];
  v10 = 0;
  v11 = 0;
  v6 = v4 + v5;
  v7 = *(_BYTE *)(v6 + 52);
  if ( v7 != 70 )
  {
    if ( v7 == 102 )
    {
      v8 = sub_9DAF0(*(_DWORD *)(v6 + 48) != 0, (__int64)v13, (__int64)"%s", v12);
      goto LABEL_6;
    }
    if ( !under_debugger )
      interr();
LABEL_17:
    BUG();
  }
  if ( !(unsigned __int8)sub_177E80((__int64)&v10, (__int64)v13, (__int64)"%s", v12) )
    goto LABEL_8;
  v8 = v10;
LABEL_6:
  if ( v8 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1[25] + v4) + 104LL))(*(_QWORD *)(a1[25] + v4));
LABEL_8:
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return v14 - __readfsqword(0x28u);
}

