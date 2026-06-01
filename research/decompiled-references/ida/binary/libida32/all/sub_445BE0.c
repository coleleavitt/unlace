__int64 __fastcall sub_445BE0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rbp
  unsigned __int64 edm_by_tid; // r15
  __int64 *tinfo_property; // rax
  unsigned __int8 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  char v12; // dl
  unsigned int tinfo_property4; // ebx
  __int64 v15; // rax
  unsigned int tinfo_tid; // [rsp+4h] [rbp-84h] BYREF
  __int64 v17; // [rsp+8h] [rbp-80h] BYREF
  void *v18; // [rsp+10h] [rbp-78h] BYREF
  __int128 v19; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+28h] [rbp-60h]
  __int128 v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+40h] [rbp-48h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v5 = a4;
  v23 = __readfsqword(0x28u);
  switch_dbctx(*(int *)(a1 + 4LL * (int)a3 + 16));
  v19 = 0;
  v18 = nullptr;
  ptr = nullptr;
  v17 = 0;
  v21 = 0;
  edm_by_tid = get_edm_by_tid(&v17, &v18);
  if ( edm_by_tid == -1
    || (tinfo_tid = get_tinfo_tid(&v17, 0), (tinfo_property = (__int64 *)get_tinfo_property(v17, 310)) == nullptr) )
  {
    clear_tinfo_t(&v17);
LABEL_12:
    tinfo_property4 = -1;
    goto LABEL_13;
  }
  v8 = 0;
  if ( edm_by_tid < tinfo_property[1] )
  {
    v9 = *tinfo_property;
    v10 = *(_QWORD *)(v9 + 56 * edm_by_tid + 48);
    if ( edm_by_tid )
    {
      v11 = v9 + 56 * edm_by_tid;
      do
      {
        v12 = *(_QWORD *)(v9 + 48) == v10;
        v9 += 56;
        v8 += v12;
      }
      while ( v9 != v11 );
    }
  }
  clear_tinfo_t(&v17);
  if ( !(unsigned __int8)sub_4867E0(a1, &tinfo_tid, a3, (unsigned int)v5, 1) )
    goto LABEL_12;
  switch_dbctx(*(int *)(a1 + 4 * v5 + 16));
  v17 = 0;
  if ( !(unsigned __int8)get_type_by_tid(&v17, tinfo_tid)
    || (v15 = get_tinfo_property4(v17, 294, 0, v22, -1, v8), v15 == -1)
    && (v15 = get_tinfo_property4(v17, 294, 0, v22, -1, 0), v15 == -1) )
  {
    tinfo_property4 = -1;
  }
  else
  {
    tinfo_property4 = get_tinfo_property4(v17, 299, v15, 0, 0, 0);
  }
  clear_tinfo_t(&v17);
LABEL_13:
  if ( ptr )
  {
    *(_QWORD *)&v21 = 0;
    qfree(ptr);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  return tinfo_property4;
}

