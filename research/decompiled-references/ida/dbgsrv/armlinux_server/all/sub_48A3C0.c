/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48A3C0
// Address: 0x000000000048A3C0

//----- (000000000048A3C0) ----------------------------------------------------
__int64 __fastcall sub_48A3C0(char *a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 a4)
{
  unsigned int v7; // w21
  _BOOL4 v9; // w3
  unsigned __int8 *v10; // x0
  unsigned int v11; // w0
  const char *v12; // [xsp+48h] [xbp-1028h] BYREF
  void *ptr; // [xsp+50h] [xbp-1020h] BYREF
  __int64 v14; // [xsp+58h] [xbp-1018h]
  __int64 v15; // [xsp+60h] [xbp-1010h]
  unsigned __int8 v16[4096]; // [xsp+68h] [xbp-1008h] BYREF

  if ( a3 && *a3 )
  {
    v7 = a4;
    v9 = sub_48F628(a3);
    if ( v9 )
    {
      v7 = v9;
      sub_493350((unsigned __int64)a1, a3, a2);
    }
    else
    {
      ptr = nullptr;
      v14 = 0;
      v15 = 0;
      if ( (unsigned __int8)sub_4950A8("PATH", (__int64)&ptr)
        && (v10 = (unsigned __int8 *)sub_4930F8((char *)ptr, ":", &v12)) != nullptr )
      {
        while ( 1 )
        {
          if ( *v10 )
          {
            sub_48F278(a1, a2, v10, a3, 0);
            v11 = (unsigned __int8)sub_490268(a1);
            if ( v11 )
              break;
          }
          v10 = (unsigned __int8 *)sub_4930F8(nullptr, ":", &v12);
          if ( !v10 )
            goto LABEL_7;
        }
        v7 = v11;
      }
      else
      {
LABEL_7:
        if ( v7 )
        {
          sub_48F950((char *)v16, 0x1000u);
          sub_48F278(a1, a2, v16, a3, 0);
          v7 = (unsigned __int8)sub_490268(a1);
        }
      }
      if ( ptr )
      {
        v14 = 0;
        j__free(ptr);
      }
    }
  }
  else
  {
    return 0;
  }
  return v7;
}
