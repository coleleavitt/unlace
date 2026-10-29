void __fastcall sub_50B2B0(__int64 a1, const void *a2)
{
  void *v2; // rax
  __int64 v3; // rbp
  unsigned int *v4; // rax
  unsigned int v5; // r12d
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(__int64); // rax
  char v8; // al
  unsigned int v9; // edx
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // esi
  __int64 *v14; // rdi
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned int v20; // ecx
  __int64 v21; // rdi
  unsigned int v22; // r8d
  __int64 v23; // rsi
  __int64 (__fastcall *v24)(__int64, unsigned int, __int64 *); // r8
  int v25; // edx
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 *v29; // rbx
  char v30; // [rsp+Fh] [rbp-39h] BYREF
  __int64 v31; // [rsp+10h] [rbp-38h] BYREF
  __int64 v32[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation,
         0);
  if ( !v2 )
    __cxa_bad_cast();
  v3 = (__int64)v2;
  switch ( *(_DWORD *)(a1 + 72) )
  {
    case 0:
    case 2:
      return;
    case 1:
      v4 = *(unsigned int **)(a1 + 64);
      v5 = v4[1];
      v6 = *v4;
      v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL);
      if ( v7 == sub_505930 )
        v8 = *(_BYTE *)(v3 + 56);
      else
        v8 = v7(v3);
      if ( !v8 )
      {
        v9 = v6;
        v10 = *(_QWORD *)(*(_QWORD *)(v3 + 120) + 16LL);
        do
        {
          v11 = v9;
          v9 = *(_DWORD *)(v10 + 4LL * v9);
        }
        while ( v11 != v9 );
        v12 = v5;
        do
        {
          v13 = v12;
          v12 = *(_DWORD *)(v10 + 4LL * v12);
        }
        while ( v13 != v12 );
        if ( v11 != v12 )
        {
          v14 = *(__int64 **)(v3 + 48);
          v15 = v5;
          do
          {
            v16 = v15;
            v17 = v15;
            v15 = *(_DWORD *)(v10 + 4LL * v15);
          }
          while ( v17 != v15 );
          v18 = *v14;
          v19 = *v14 + 16 * v16;
          v20 = v6;
          do
          {
            v21 = v20;
            v22 = v20;
            v20 = *(_DWORD *)(v10 + 4LL * v20);
          }
          while ( v22 != v20 );
          (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64, char *))(*(_QWORD *)v3 + 168LL))(
            &v31,
            v3,
            16 * v21 + v18,
            v19,
            &v30);
          if ( v30 )
            goto LABEL_16;
          LODWORD(v23) = v6;
          v24 = *(__int64 (__fastcall **)(__int64, unsigned int, __int64 *))(*(_QWORD *)v3 + 208LL);
          do
          {
            v25 = v23;
            v23 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v3 + 120) + 16LL) + 4LL * (unsigned int)v23);
          }
          while ( v25 != (_DWORD)v23 );
          if ( v24 == sub_4FF230 ? sub_4FF230(v3, v23, &v31) : (unsigned __int8)v24(v3, v23, &v31) )
          {
LABEL_16:
            *(_BYTE *)(v3 + 56) = 1;
          }
          else
          {
            sub_4F9300(*(_QWORD **)(v3 + 120), v6, v5);
            do
            {
              v27 = v6;
              v28 = v6;
              v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 120) + 16LL) + 4LL * v6);
            }
            while ( v28 != v6 );
            v29 = (__int64 *)(**(_QWORD **)(v3 + 48) + 16 * v27);
            sub_4FF560(v29, &v31);
            sub_4FF560(v29 + 1, v32);
          }
          if ( v32[0] )
            sub_186B220((void *)(v32[0] - 8));
          if ( v31 )
            sub_186B220((void *)(v31 - 8));
        }
      }
      break;
    case 3:
      sub_502890((__int64)v2, **(_DWORD **)(a1 + 64), *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL));
      break;
    case 4:
      sub_5029F0((__int64)v2, **(_DWORD **)(a1 + 64), *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL));
      break;
    case 5:
      sub_506680((__int64)v2);
      break;
    default:
      sub_1872CE0("");
      sub_1873130(114, 367);
  }
}

