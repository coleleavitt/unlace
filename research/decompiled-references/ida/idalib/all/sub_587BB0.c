__int64 __fastcall sub_587BB0(__int64 a1, __int64 a2, void *a3)
{
  __int64 v5; // rdi
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 *v11; // r9
  unsigned __int64 (__fastcall *v12)(__int64, __int64, void *); // rax
  unsigned int v13; // eax
  __int32 v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdi
  unsigned int v17; // eax
  __int64 *v18; // r9
  unsigned int v20; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-20h]

  v5 = *(int *)(a1 + 8);
  v21 = __readfsqword(0x28u);
  switch_dbctx(v5);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 1856LL);
  v8 = (unsigned __int64)a3;
  v9 = (unsigned int)sub_587160(v7, (unsigned __int64)a3);
  if ( !v9 )
    goto LABEL_10;
  sub_587860(v11, v9, (void *)0xFFFFFFFFFFFFFFFFLL);
  v12 = *(unsigned __int64 (__fastcall **)(__int64, __int64, void *))(*(_QWORD *)a1 + 80LL);
  if ( v12 == sub_587A70 )
  {
    v8 = (unsigned __int64)a3;
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 1856LL);
    v13 = (unsigned int)sub_587160(v7, (unsigned __int64)a3);
    if ( v13 )
    {
      v14 = *(_DWORD *)(a1 + 12);
      v15 = *(unsigned int *)(a2 + 12);
      v16 = *(_QWORD *)(a1 + 32);
      v20 = v13;
      if ( (unsigned __int8)sub_4A2760(v16, &v20, v15, v14, 0) )
      {
        switch_dbctx(*(int *)(a1 + 8));
        sub_587860(*(__int64 **)(*(_QWORD *)(a1 + 40) + 1856LL), v20, a3);
        return v21 - __readfsqword(0x28u);
      }
      switch_dbctx(*(int *)(a2 + 8));
      v7 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 1856LL);
      v17 = (unsigned int)sub_587160(v7, (unsigned __int64)a3);
      v8 = v17;
      if ( v17 )
      {
        sub_587860(v18, v17, (void *)0xFFFFFFFFFFFFFFFFLL);
        return v21 - __readfsqword(0x28u);
      }
    }
LABEL_10:
    sub_586870(v7, v8, v10);
  }
  return v12(a1, a2, a3);
}
