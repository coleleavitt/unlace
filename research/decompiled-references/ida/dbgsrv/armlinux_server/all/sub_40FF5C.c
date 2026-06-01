/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40FF5C
// Address: 0x000000000040FF5C

//----- (000000000040FF5C) ----------------------------------------------------
void __fastcall __noreturn sub_40FF5C(struct _Unwind_Exception *a1)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 v3; // x21
  void *v5; // x1
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0
  void *v9; // x0

  v5 = *(void **)(v1 + 2144);
  if ( v5 )
  {
    *(_QWORD *)(v1 + 2152) = 0;
    j__free(v5);
  }
  v6 = *(void **)(v1 + 2120);
  if ( v6 )
  {
    *(_QWORD *)(v1 + 2128) = 0;
    j__free(v6);
  }
  sub_40E5E8(v1 + 2056, *(_QWORD **)(v1 + 2072));
  v7 = *(void **)(v1 + 2008);
  if ( v7 )
  {
    *(_QWORD *)(v1 + 2016) = 0;
    j__free(v7);
  }
  v8 = *(void **)(v1 + 1984);
  if ( v8 )
  {
    *(_QWORD *)(v1 + 1992) = 0;
    j__free(v8);
  }
  v9 = *(void **)(v1 + 1960);
  if ( v9 )
  {
    *(_QWORD *)(v1 + 1968) = 0;
    j__free(v9);
  }
  sub_40E6C0(v1 + 1912, *(_QWORD **)(v1 + 1928));
  sub_40E630(v1 + 1864, *(_QWORD *)(v1 + 1880));
  sub_40E5E8(v1 + 1816, *(_QWORD **)(v1 + 1832));
  sub_40AC40(v3);
  sub_40AC40(v2);
  *(_QWORD *)v1 = off_51E058;
  sub_40FA70(v1);
  _Unwind_Resume(a1);
}
// 40FF64: variable 'v1' is possibly undefined
// 40FFEC: variable 'v3' is possibly undefined
// 40FFF4: variable 'v2' is possibly undefined
// 51E058: using guessed type __int64 (__fastcall *off_51E058[4])();
