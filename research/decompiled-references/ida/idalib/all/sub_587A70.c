unsigned __int64 __fastcall sub_587A70(__int64 a1, __int64 a2, void *a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int32 v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned int v15; // eax
  __int64 *v16; // r9
  unsigned int v17; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-20h]

  v5 = *(_QWORD *)(a2 + 40);
  v6 = (unsigned __int64)a3;
  v18 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(v5 + 1856);
  v9 = (unsigned int)sub_587160(v8, (unsigned __int64)a3);
  if ( !v9 )
    goto LABEL_7;
  v11 = *(_DWORD *)(a1 + 12);
  v12 = *(unsigned int *)(a2 + 12);
  v13 = *(_QWORD *)(a1 + 32);
  v17 = v9;
  if ( !(unsigned __int8)sub_4A2760(v13, &v17, v12, v11, 0) )
  {
    switch_dbctx(*(int *)(a2 + 8));
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 1856LL);
    v15 = (unsigned int)sub_587160(v8, (unsigned __int64)a3);
    v6 = v15;
    if ( v15 )
    {
      sub_587860(v16, v15, (void *)0xFFFFFFFFFFFFFFFFLL);
      return v18 - __readfsqword(0x28u);
    }
LABEL_7:
    sub_586870(v8, v6, v10);
  }
  switch_dbctx(*(int *)(a1 + 8));
  sub_587860(*(__int64 **)(*(_QWORD *)(a1 + 40) + 1856LL), v17, a3);
  return v18 - __readfsqword(0x28u);
}
