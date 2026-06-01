unsigned __int64 __fastcall sub_418340(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  char v5; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(v2 + 328) != a2 )
  {
    *(_BYTE *)(v2 + 328) = a2;
    reg_int_op("ShowDeletedFiles", 1, *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 328LL), "Config");
    sub_417150(a1, (_BYTE *)&dword_0 + 1);
    v5 = *(_BYTE *)(*(_QWORD *)(a1 + 32) + 328LL);
    v4 = sub_5313F0(qword_8CAB28);
    if ( v4 )
      sub_537630(v4, 7, &v5);
  }
  return v6 - __readfsqword(0x28u);
}
