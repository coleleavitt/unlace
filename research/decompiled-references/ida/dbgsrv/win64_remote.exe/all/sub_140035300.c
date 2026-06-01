/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140035300
// Address: 0x0000000140035300

//----- (0000000140035300) ----------------------------------------------------
__int64 __fastcall sub_140035300(const char *a1, int a2, const void *a3, size_t a4)
{
  unsigned __int8 v8; // bp
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  _QWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rbp
  char *v13; // rdx
  size_t j; // rcx
  size_t i; // rcx
  char v17; // [rsp+20h] [rbp-28h] BYREF
  void *v18; // [rsp+28h] [rbp-20h]

  v8 = 0;
  v9 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  v18 = qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  v10 = sub_14002DA30();
  v11 = sub_14002C9D0((__int64)v10, a1);
  if ( v11 != -1 )
  {
    v12 = *(_QWORD *)(*v10 + 8 * v11);
    if ( a4 >= *(_QWORD *)(v12 + 40) )
    {
      if ( a4 <= *(_QWORD *)(v12 + 40) )
      {
LABEL_16:
        memcpy(*(void **)(v12 + 32), a3, a4);
        sub_14002CE40((_QWORD *)(v12 + 32));
        *(_DWORD *)(v12 + 24) = a2;
        *(_DWORD *)(v12 + 136) = 0;
        v8 = 1;
        goto LABEL_17;
      }
      v13 = *(char **)(v12 + 32);
      if ( &v17 < v13 || &v17 >= &v13[*(_QWORD *)(v12 + 48)] )
      {
        if ( a4 > *(_QWORD *)(v12 + 48) )
          *(_QWORD *)(v12 + 32) = sub_14005ABE0(v12 + 32, v13, a4, 1u);
        for ( i = *(_QWORD *)(v12 + 40); i < a4; ++i )
          *(_BYTE *)(i + *(_QWORD *)(v12 + 32)) = 0;
      }
      else
      {
        if ( a4 > *(_QWORD *)(v12 + 48) )
          *(_QWORD *)(v12 + 32) = sub_14005ABE0(v12 + 32, v13, a4, 1u);
        for ( j = *(_QWORD *)(v12 + 40); j < a4; ++j )
          *(_BYTE *)(j + *(_QWORD *)(v12 + 32)) = 0;
      }
    }
    *(_QWORD *)(v12 + 40) = a4;
    goto LABEL_16;
  }
LABEL_17:
  sub_14005D6D0(v9);
  return v8;
}
