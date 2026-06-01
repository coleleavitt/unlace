void __fastcall clang_getPresumedLocation(
        _QWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        double a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        unsigned int a10)
{
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  int v14; // [rsp+Ch] [rbp-2Ch]
  int v15; // [rsp+10h] [rbp-28h]

  if ( (a8 & 1) == 0 && a10 && a8 && (sub_CAE550(&v13, a8, a10, 1), v13) )
  {
    if ( a1 )
    {
      *a1 = sub_6904A0(v13);
      a1[1] = v11;
    }
    if ( a2 )
      *a2 = v14;
    if ( a3 )
      *a3 = v15;
  }
  else
  {
    if ( a1 )
    {
      *a1 = sub_690460(a4);
      a1[1] = v12;
    }
    if ( a2 )
      *a2 = 0;
    if ( a3 )
      *a3 = 0;
  }
}

