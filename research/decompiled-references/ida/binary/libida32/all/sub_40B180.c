__int64 __fastcall sub_40B180(__int64 a1, int *a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v6)(__int64); // rax
  unsigned __int64 *v7; // rax
  __int64 (__fastcall *v8)(__int64, unsigned int, int); // rax
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __m128i v17; // [rsp+0h] [rbp-88h] BYREF
  __int64 v18; // [rsp+10h] [rbp-78h]
  void *v19; // [rsp+20h] [rbp-68h] BYREF
  __int128 v20; // [rsp+28h] [rbp-60h]
  void *ptr; // [rsp+40h] [rbp-48h] BYREF
  __int128 v22; // [rsp+48h] [rbp-40h]
  unsigned __int64 v23; // [rsp+58h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v6 == sub_3D58E0 )
    v7 = (unsigned __int64 *)(a2 + 4);
  else
    v7 = (unsigned __int64 *)v6((__int64)a2);
  if ( a3 < *v7 || a3 >= v7[1] )
    return a1;
  v8 = *(__int64 (__fastcall **)(__int64, unsigned int, int))(*(_QWORD *)a2 + 40LL);
  if ( v8 != sub_408D40 )
  {
    v9 = v8((__int64)a2, a3, 0);
LABEL_15:
    if ( a3 == v9 )
    {
      v15 = *(_QWORD *)(switch_dbctx(a2[2]) + 1480);
      v17.m128i_i64[0] = 0;
      v17.m128i_i64[1] = 0xFFFFFFFF00000000LL;
      v18 = 0;
      if ( (unsigned __int8)sub_408580(v15, &v17, a3) )
      {
        v20 = 0;
        v19 = nullptr;
        get_fixup_desc(&v19, (unsigned int)a3, &v17);
        if ( (unsigned __int64)v20 > 1 )
          tag_remove();
        ptr = nullptr;
        v22 = 0;
        get_ea_diffpos_name(&ptr, (unsigned int)a3);
        sub_3573A0((char **)a1);
        if ( ptr )
        {
          *(_QWORD *)&v22 = 0;
          qfree(ptr);
        }
        if ( v19 )
        {
          *(_QWORD *)&v20 = 0;
          qfree(v19);
        }
      }
    }
    return a1;
  }
  v9 = (unsigned int)a3;
  v10 = *(_QWORD *)(switch_dbctx(a2[2]) + 1480);
  v11 = *(_QWORD *)(v10 + 2376);
  if ( !v11 )
    goto LABEL_13;
  v12 = v10 + 2368;
  do
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v11 + 16);
      v14 = *(_QWORD *)(v11 + 24);
      if ( *(_DWORD *)(v11 + 32) < (unsigned int)a3 )
        break;
      v12 = v11;
      v11 = *(_QWORD *)(v11 + 16);
      if ( !v13 )
        goto LABEL_11;
    }
    v11 = *(_QWORD *)(v11 + 24);
  }
  while ( v14 );
LABEL_11:
  if ( v12 == v10 + 2368 || (unsigned int)a3 < *(_DWORD *)(v12 + 32) )
LABEL_13:
    v9 = (unsigned int)sub_4087C0(v10, a3);
  if ( (_DWORD)v9 != -1 )
    goto LABEL_15;
  return a1;
}

