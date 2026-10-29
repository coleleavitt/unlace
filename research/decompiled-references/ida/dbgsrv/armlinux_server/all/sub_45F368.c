/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F368
// Address: 0x000000000045F368

//----- (000000000045F368) ----------------------------------------------------
void __fastcall __noreturn sub_45F368(
        struct _Unwind_Exception *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        int a15,
        __int64 a16)
{
  _QWORD *v16; // x19
  void *v18; // x0
  void *v19; // x0
  __int64 v20; // x24
  __int64 i; // x22
  char *v22; // x0
  char *v23; // x21
  void *v24; // x0
  void *v25; // x0

  v18 = (void *)v16[12];
  if ( v18 )
  {
    v16[13] = 0;
    j__free(v18);
  }
  v19 = (void *)v16[9];
  if ( v19 )
  {
    v16[10] = 0;
    j__free(v19);
  }
  if ( v16[6] )
  {
    v20 = v16[7];
    for ( i = 0; ; ++i )
    {
      v22 = (char *)v16[6];
      if ( v20 == i )
        break;
      v23 = &v22[56 * i];
      v24 = *((void **)v23 + 4);
      if ( v24 )
      {
        *((_QWORD *)v23 + 5) = 0;
        j__free(v24);
      }
      v25 = *((void **)v23 + 1);
      if ( v25 )
      {
        *((_QWORD *)v23 + 2) = 0;
        j__free(v25);
      }
    }
    v16[7] = 0;
    j__free(v22);
  }
  _Unwind_Resume(a1);
}
// 45F378: variable 'v16' is possibly undefined
