__int64 __fastcall sub_6D530(
        unsigned int *a1,
        unsigned __int8 *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // ebp
  __int64 (__fastcall *v11)(__int64, unsigned __int8, __int64); // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  unsigned int *v19; // rbp
  __int64 v20; // rbx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 v23; // [rsp+8h] [rbp-30h]
  unsigned __int64 v24; // [rsp+18h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  sub_6E490(&ptr, a2[8]);
  (*(void (__fastcall **)(unsigned __int8 *, void **, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, &ptr, a1[27]);
  v10 = a2[8];
  v11 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)a1 + 16LL);
  if ( v11 != sub_6CF10 )
  {
    v12 = v11((__int64)a1, a2[8], (__int64)&ptr);
    goto LABEL_4;
  }
  if ( !v23 || !(unsigned int)sub_6DB60(a1, &ptr) )
  {
    v12 = sub_6E2E0(a1, v10);
LABEL_4:
    v19 = (unsigned int *)v12;
    goto LABEL_5;
  }
  v19 = nullptr;
LABEL_5:
  v20 = sub_6D410((__int64)a1, v19, v13, v14, v15, v16, a3, a4, a5, a6, v17, v18, a9, a10);
  j__free(v19);
  if ( ptr )
  {
    v23 = 0;
    j__free(ptr);
  }
  return v20;
}

