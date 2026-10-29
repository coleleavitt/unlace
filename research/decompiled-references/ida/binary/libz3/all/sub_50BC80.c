void __fastcall sub_50BC80(__int64 a1, const void *a2)
{
  unsigned int v3; // ebx
  unsigned int *i; // r15
  void *v5; // rax
  __int64 v6; // r12
  unsigned int v7; // r13d
  unsigned int v8; // r15d
  __int64 (__fastcall *v9)(__int64); // rax
  char v10; // al
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // esi
  __int64 *v16; // rdi
  unsigned int v17; // edx
  __int64 v18; // rsi
  unsigned int v19; // ecx
  __int64 v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // rsi
  __int64 v23; // rdi
  unsigned int v24; // r8d
  __int64 v25; // rsi
  __int64 (__fastcall *v26)(__int64, unsigned int, __int64 *); // rcx
  int v27; // edx
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 *v31; // r15
  char v33; // [rsp+2Fh] [rbp-49h] BYREF
  __int64 v34; // [rsp+30h] [rbp-48h] BYREF
  __int64 v35[8]; // [rsp+38h] [rbp-40h] BYREF

  v3 = 1;
  for ( i = *(unsigned int **)(a1 + 8); i; ++v3 )
  {
    if ( v3 >= *(i - 1) )
      break;
    v5 = __dynamic_cast(
           a2,
           (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
           (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation,
           0);
    v6 = (__int64)v5;
    if ( !v5 )
      __cxa_bad_cast();
    v7 = i[v3];
    v8 = *i;
    v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL);
    if ( v9 == sub_505930 )
      v10 = *(_BYTE *)(v6 + 56);
    else
      v10 = v9(v6);
    if ( !v10 )
    {
      v11 = v8;
      v12 = *(_QWORD *)(*(_QWORD *)(v6 + 120) + 16LL);
      do
      {
        v13 = v11;
        v11 = *(_DWORD *)(v12 + 4LL * v11);
      }
      while ( v13 != v11 );
      v14 = v7;
      do
      {
        v15 = v14;
        v14 = *(_DWORD *)(v12 + 4LL * v14);
      }
      while ( v15 != v14 );
      if ( v13 != v14 )
      {
        v16 = *(__int64 **)(v6 + 48);
        v17 = v7;
        do
        {
          v18 = v17;
          v19 = v17;
          v17 = *(_DWORD *)(v12 + 4LL * v17);
        }
        while ( v19 != v17 );
        v20 = *v16;
        v21 = v8;
        v22 = *v16 + 16 * v18;
        do
        {
          v23 = v21;
          v24 = v21;
          v21 = *(_DWORD *)(v12 + 4LL * v21);
        }
        while ( v24 != v21 );
        (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64, char *))(*(_QWORD *)v6 + 168LL))(
          &v34,
          v6,
          16 * v23 + v20,
          v22,
          &v33);
        if ( v33 )
          goto LABEL_22;
        LODWORD(v25) = v8;
        v26 = *(__int64 (__fastcall **)(__int64, unsigned int, __int64 *))(*(_QWORD *)v6 + 208LL);
        do
        {
          v27 = v25;
          v25 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v6 + 120) + 16LL) + 4LL * (unsigned int)v25);
        }
        while ( v27 != (_DWORD)v25 );
        if ( v26 == sub_4FF230 ? sub_4FF230(v6, v25, &v34) : (unsigned __int8)v26(v6, v25, &v34) )
        {
LABEL_22:
          *(_BYTE *)(v6 + 56) = 1;
        }
        else
        {
          sub_4F9300(*(_QWORD **)(v6 + 120), v8, v7);
          do
          {
            v29 = v8;
            v30 = v8;
            v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 120) + 16LL) + 4LL * v8);
          }
          while ( v30 != v8 );
          v31 = (__int64 *)(**(_QWORD **)(v6 + 48) + 16 * v29);
          sub_4FF560(v31, &v34);
          sub_4FF560(v31 + 1, v35);
        }
        if ( v35[0] )
          sub_186B220((void *)(v35[0] - 8));
        if ( v34 )
          sub_186B220((void *)(v34 - 8));
      }
    }
    i = *(unsigned int **)(a1 + 8);
  }
}

