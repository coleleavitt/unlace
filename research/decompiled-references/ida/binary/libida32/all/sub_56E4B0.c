__int64 __fastcall sub_56E4B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // rdx
  _QWORD *v11; // r9
  unsigned __int64 (__fastcall *v12)(__int64, __int64, unsigned int); // rax
  unsigned int v13; // eax
  __int32 v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdi
  unsigned int v17; // eax
  _QWORD *v18; // r9
  unsigned int v20; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-30h]

  v5 = *(int *)(a1 + 8);
  v21 = __readfsqword(0x28u);
  switch_dbctx(v5);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 1664LL);
  v8 = (unsigned int)a3;
  v9 = sub_56D600(v7, a3);
  if ( !v9 )
    goto LABEL_10;
  sub_56DFC0(v11, v9, 0xFFFFFFFF);
  v12 = *(unsigned __int64 (__fastcall **)(__int64, __int64, unsigned int))(*(_QWORD *)a1 + 80LL);
  if ( v12 == sub_56E370 )
  {
    v8 = (unsigned int)a3;
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 1664LL);
    v13 = sub_56D600(v7, a3);
    if ( v13 )
    {
      v14 = *(_DWORD *)(a1 + 12);
      v15 = *(unsigned int *)(a2 + 12);
      v16 = *(_QWORD *)(a1 + 32);
      v20 = v13;
      if ( (unsigned __int8)sub_48D960(v16, &v20, v15, v14, 0) )
      {
        switch_dbctx(*(int *)(a1 + 8));
        sub_56DFC0(*(_QWORD **)(*(_QWORD *)(a1 + 40) + 1664LL), v20, a3);
        return v21 - __readfsqword(0x28u);
      }
      switch_dbctx(*(int *)(a2 + 8));
      v7 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 1664LL);
      v17 = sub_56D600(v7, a3);
      v8 = v17;
      if ( v17 )
      {
        sub_56DFC0(v18, v17, 0xFFFFFFFF);
        return v21 - __readfsqword(0x28u);
      }
    }
LABEL_10:
    sub_56CD60(v7, v8, v10);
  }
  return v12(a1, a2, a3);
}

