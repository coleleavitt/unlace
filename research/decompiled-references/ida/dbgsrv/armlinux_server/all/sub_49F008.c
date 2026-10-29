/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49F008
// Address: 0x000000000049F008

//----- (000000000049F008) ----------------------------------------------------
void sub_49F008()
{
  __int64 *v0; // x2
  __int64 v1; // x0
  int v2; // w1
  int v3; // w1

  v0 = (__int64 *)sub_49F288();
  v1 = *v0;
  if ( *v0 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(v1 + 80) - 0x474E5543432B2B00LL) > 1 )
    {
      *v0 = 0;
      _Unwind_DeleteException((struct _Unwind_Exception *)(v1 + 80));
    }
    else
    {
      v2 = *(_DWORD *)(v1 + 40);
      if ( v2 < 0 )
      {
        v3 = v2 + 1;
        if ( !v3 )
        {
          *v0 = *(_QWORD *)(v1 + 32);
          *(_DWORD *)(v1 + 40) = 0;
          return;
        }
      }
      else
      {
        v3 = v2 - 1;
        if ( !v3 )
        {
          *v0 = *(_QWORD *)(v1 + 32);
          _Unwind_DeleteException((struct _Unwind_Exception *)(v1 + 80));
          return;
        }
        if ( v3 == -1 )
          sub_49DBB0();
      }
      *(_DWORD *)(v1 + 40) = v3;
    }
  }
}
