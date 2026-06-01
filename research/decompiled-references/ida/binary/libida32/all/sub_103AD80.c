void __fastcall sub_103AD80(__int64 a1)
{
  char *v1; // rcx
  char *v2; // rsi

  v1 = (char *)&byte_22CD811;
  if ( *(_DWORD *)(a1 + 676) == 5 )
    v1 = "_";
  v2 = "e-m:w-p270:32:32-p271:32:32-p272:64:64-p:64:64-i32:32-i64:64-i128:128-n32:64-S128-Fn32";
  if ( *(_DWORD *)(a1 + 676) == 5 )
    v2 = "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-i128:128-n32:64-S128-Fn32";
  sub_1009A40((_QWORD *)a1, v2, strlen(v2), (__int64)v1);
}

