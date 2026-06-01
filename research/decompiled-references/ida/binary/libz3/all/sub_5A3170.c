_QWORD *__fastcall sub_5A3170(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int *a5, int *a6)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  _QWORD *v13; // rbx
  __int64 (__fastcall *v15)(__int64, _QWORD *); // rax
  char v16; // al
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, _QWORD *); // rax
  char v19; // bl
  char v21; // [rsp+Fh] [rbp-49h]
  _QWORD v22[8]; // [rsp+18h] [rbp-40h] BYREF

  v10 = *(_QWORD *)(a2 + 8);
  v11 = *(_QWORD *)(a3 + 8);
  if ( a1 == v10 )
  {
    if ( a1 == v11 )
    {
      v13 = (_QWORD *)sub_186B270(0x78u);
      sub_5A8BD0(v13, a2, a3, a4, a5, a6);
      return v13;
    }
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 40);
    if ( v10 != v12 )
    {
      if ( *(_DWORD *)(v10 + 32) != 1 )
        return nullptr;
      v15 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 24LL);
      v22[0] = 0;
      v16 = v15(v12, v22);
      if ( v22[0] )
      {
        v21 = v16;
        sub_186B220((void *)(v22[0] - 8LL));
        v16 = v21;
      }
      if ( !v16 )
        return nullptr;
    }
    if ( a1 == v11 )
    {
LABEL_16:
      v13 = (_QWORD *)sub_186B270(0x30u);
      sub_57F300(v13, (_QWORD **)(a2 + 16), (_QWORD **)(a3 + 16), a4, a5, a6);
      v13[4] = a1;
      *v13 = &off_1C520D0;
      v13[5] = 0;
      return v13;
    }
    v11 = *(_QWORD *)(a3 + 8);
  }
  v17 = *(_QWORD *)(a1 + 40);
  if ( v17 == v11 )
    goto LABEL_16;
  if ( *(_DWORD *)(v11 + 32) == 1 )
  {
    v18 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v17 + 24LL);
    v22[0] = 0;
    v19 = v18(v17, v22);
    if ( v22[0] )
      sub_186B220((void *)(v22[0] - 8LL));
    if ( v19 )
      goto LABEL_16;
  }
  return nullptr;
}

