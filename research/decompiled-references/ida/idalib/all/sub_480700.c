__int64 __fastcall sub_480700(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 *v6; // r14
  __int64 i; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  int v14; // r15d
  unsigned __int64 (__fastcall *v15)(__int64, __int64); // rax
  unsigned __int64 v16; // rcx
  __int64 *v18; // [rsp+0h] [rbp-88h]
  __int64 *v19; // [rsp+8h] [rbp-80h]
  __m128i v20; // [rsp+20h] [rbp-68h] BYREF
  __m128i v21; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v4 = *(int *)(a1 + 8);
  v22 = __readfsqword(0x28u);
  v18 = *(__int64 **)(switch_dbctx(v4) + 1672);
  v19 = *(__int64 **)(switch_dbctx(a2[2]) + 1672);
  v6 = (__int64 *)(**(_QWORD **)(a1 + 40) + 16 * a3);
  for ( i = *v6; ; i = v9 )
  {
    v20 = 0;
    v14 = sub_3BD970(v18, &v20, i);
    v21 = 0;
    if ( v14 != (unsigned int)sub_3BD970(v19, &v21, i) || v14 == -1 || *(_OWORD *)&v20 != *(_OWORD *)&v21 )
      break;
    v15 = *(unsigned __int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 176LL);
    if ( v15 == sub_47F590 )
    {
      v8 = switch_dbctx(*(int *)(a1 + 8));
      v9 = sub_3BD580(*(_QWORD *)(v8 + 1672), i);
      v10 = *(unsigned __int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 176LL);
      if ( v10 != sub_47F590 )
        goto LABEL_13;
    }
    else
    {
      v9 = v15(a1, i);
      v10 = *(unsigned __int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 176LL);
      if ( v10 != sub_47F590 )
      {
LABEL_13:
        v12 = v10((__int64)a2, i);
        v16 = v12;
        if ( v9 <= v12 )
          v16 = v9;
        if ( v16 >= v6[1] )
          return 0;
        goto LABEL_6;
      }
    }
    v11 = switch_dbctx(a2[2]);
    v12 = sub_3BD580(*(_QWORD *)(v11 + 1672), i);
    v13 = v12;
    if ( v9 <= v12 )
      v13 = v9;
    if ( v13 >= v6[1] )
      return 0;
LABEL_6:
    if ( v9 != v12 )
      return 1;
  }
  return 1;
}
