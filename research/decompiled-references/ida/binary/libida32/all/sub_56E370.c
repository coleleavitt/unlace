unsigned __int64 __fastcall sub_56E370(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int32 v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned int v15; // eax
  _QWORD *v16; // r9
  unsigned int v17; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-20h]

  v5 = *(_QWORD *)(a2 + 40);
  v18 = __readfsqword(0x28u);
  v7 = a3;
  v8 = *(_QWORD *)(v5 + 1664);
  v9 = sub_56D600(v8, a3);
  if ( !v9 )
    goto LABEL_7;
  v11 = *(_DWORD *)(a1 + 12);
  v12 = *(unsigned int *)(a2 + 12);
  v13 = *(_QWORD *)(a1 + 32);
  v17 = v9;
  if ( !(unsigned __int8)sub_48D960(v13, &v17, v12, v11, 0) )
  {
    switch_dbctx(*(int *)(a2 + 8));
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 1664LL);
    v15 = sub_56D600(v8, a3);
    v7 = v15;
    if ( v15 )
    {
      sub_56DFC0(v16, v15, 0xFFFFFFFF);
      return v18 - __readfsqword(0x28u);
    }
LABEL_7:
    sub_56CD60(v8, v7, v10);
  }
  switch_dbctx(*(int *)(a1 + 8));
  sub_56DFC0(*(_QWORD **)(*(_QWORD *)(a1 + 40) + 1664LL), v17, a3);
  return v18 - __readfsqword(0x28u);
}

