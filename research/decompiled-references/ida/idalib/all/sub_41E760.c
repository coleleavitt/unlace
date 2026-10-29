__int64 __fastcall sub_41E760(__int64 a1, int *a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v6)(__int64); // rax
  unsigned __int64 *v7; // rax
  unsigned __int64 (__fastcall *v8)(__int64, unsigned __int64, int); // rax
  __int64 v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v16; // rdi
  void *v17; // [rsp+0h] [rbp-88h] BYREF
  __int128 v18; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+40h] [rbp-48h] BYREF
  __m128i si128; // [rsp+48h] [rbp-40h]
  __int64 v23; // [rsp+58h] [rbp-30h]
  __int64 v24; // [rsp+60h] [rbp-28h]
  unsigned __int64 v25; // [rsp+68h] [rbp-20h]

  v25 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v6 == sub_3DB7B0 )
    v7 = (unsigned __int64 *)(a2 + 4);
  else
    v7 = (unsigned __int64 *)v6((__int64)a2);
  if ( a3 < *v7 || a3 >= v7[1] )
    return a1;
  v8 = *(unsigned __int64 (__fastcall **)(__int64, unsigned __int64, int))(*(_QWORD *)a2 + 40LL);
  if ( v8 != sub_41BFE0 )
  {
    v14 = v8((__int64)a2, a3, 0);
LABEL_14:
    if ( a3 != v14 )
      return a1;
    goto LABEL_17;
  }
  v9 = *(_QWORD *)(switch_dbctx(a2[2]) + 1672);
  v10 = *(_QWORD **)(v9 + 2488);
  if ( !v10 )
    goto LABEL_13;
  v11 = (_QWORD *)(v9 + 2480);
  do
  {
    while ( 1 )
    {
      v12 = v10[2];
      v13 = v10[3];
      if ( v10[4] < a3 )
        break;
      v11 = v10;
      v10 = (_QWORD *)v10[2];
      if ( !v12 )
        goto LABEL_11;
    }
    v10 = (_QWORD *)v10[3];
  }
  while ( v13 );
LABEL_11:
  if ( (_QWORD *)(v9 + 2480) == v11 || a3 < v11[4] )
  {
LABEL_13:
    v14 = sub_41BA40(v9, a3);
    goto LABEL_14;
  }
LABEL_17:
  v16 = *(_QWORD *)(switch_dbctx(a2[2]) + 1672);
  v21 = 0;
  v23 = 0;
  v24 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  if ( (unsigned __int8)sub_41B800(v16, (__m128i *)&v21, a3) )
  {
    v17 = nullptr;
    v18 = 0;
    get_fixup_desc(&v17, a3, &v21);
    if ( (unsigned __int64)v18 > 1 )
      tag_remove(&v17, v17, 0);
    ptr = nullptr;
    v20 = 0;
    get_ea_diffpos_name(&ptr, a3);
    sub_35A790((char **)a1);
    if ( ptr )
    {
      *(_QWORD *)&v20 = 0;
      qfree(ptr);
    }
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v17);
    }
  }
  return a1;
}
