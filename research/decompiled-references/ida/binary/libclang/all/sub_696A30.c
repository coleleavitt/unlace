void __fastcall sub_696A30(
        __int64 a1,
        int a2,
        __int64 a3,
        const char *a4,
        signed __int64 a5,
        unsigned __int8 a6,
        int a7,
        int a8,
        unsigned __int64 a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        unsigned __int8 a15)
{
  unsigned __int8 v18; // r9
  unsigned __int64 v19; // r8
  int v20; // eax

  v18 = 0;
  v19 = a9;
  if ( *(_WORD *)(a3 + 16) == 5 )
  {
    v20 = sub_C86980(*(_QWORD *)(a3 + 8));
    v19 = a9;
    v18 = v20 == 18;
  }
  sub_67BB20(*(_QWORD *)(a1 + 16), a2, a4, a5, v19, v18, a6, a15);
}

