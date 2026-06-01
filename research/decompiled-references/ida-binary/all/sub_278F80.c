unsigned __int64 __fastcall sub_278F80(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v6; // rdi
  __int64 v7; // rbp
  __int64 (__fastcall *v8)(__int64, unsigned __int8); // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v15; // rax
  _QWORD *merge_handlers; // rax
  __int64 v17; // [rsp+0h] [rbp-38h]
  int v18; // [rsp+8h] [rbp-30h]
  int v19[2]; // [rsp+10h] [rbp-28h] BYREF
  int v20[2]; // [rsp+18h] [rbp-20h]
  int v21; // [rsp+20h] [rbp-18h]
  int v22; // [rsp+28h] [rbp-10h]
  __int64 v23; // [rsp+30h] [rbp-8h]

  *(_QWORD *)v20 = __readfsqword(0x28u);
  v18 = a1;
  if ( a1 )
    ++*(_DWORD *)(a1 + 132);
  v6 = *(_QWORD **)(a1 + 112);
  *(_QWORD *)v19 = -1;
  v7 = v6[15];
  v8 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*v6 + 32LL);
  if ( v8 == merge_handler_t__::vfunc_4 )
    merge_handler_perform_merging(v6, a2);
  else
    ((void (__fastcall *)(_QWORD *, _QWORD, __int64, __int64, int *, __int64))v8)(v6, a2, a3, a4, v19, a5);
  v9 = *(_QWORD *)(a1 + 112);
  if ( *(_QWORD *)(v9 + 128) == -1 || *(_QWORD *)(v9 + 104) )
  {
    v10 = sub_4A0300((void *)"Progress", v17, v18, v19[0], v20[0], v21, v22, v23);
    if ( v10 )
      sub_4A4600(v10, 0, 7, 0);
    v11 = sub_2780D0(a1, *(_QWORD *)(a1 + 120), 49);
    if ( v11 != -1 )
      sub_278850(a1, v11, 49, 0, 1);
  }
  else
  {
    if ( *(_QWORD *)v19 == v7 )
    {
      v15 = sub_4A0300((void *)"Progress", v17, v18, v19[0], v20[0], v21, v22, v23);
    }
    else
    {
      if ( *(_QWORD *)v19 < *(_QWORD *)(get_merge_handlers(0) + 8) )
      {
        merge_handlers = (_QWORD *)get_merge_handlers(0);
        sub_278930(a1, *(_QWORD *)(*merge_handlers + 8LL * *(_QWORD *)v19));
        goto LABEL_11;
      }
      *(_QWORD *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 120) = -1;
      *(_DWORD *)(a1 + 128) = 0;
      v15 = sub_4A0300((void *)"Progress", v17, v18, v19[0], v20[0], v21, v22, v23);
    }
    if ( v15 )
      sub_4A4600(v15, 0, 7, 0);
  }
LABEL_11:
  v12 = operator new(0x18u);
  *(_QWORD *)v12 = 5;
  *(_OWORD *)(v12 + 8) = 0;
  sub_2787D0(a1, v12);
  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 132))-- == 1 && (*(_BYTE *)(a1 + 128) & 1) == 0 )
      sub_278550(a1);
  }
  return *(_QWORD *)v20 - __readfsqword(0x28u);
}
