__int64 __fastcall sub_CE500(
        __int64 a1,
        __m128i a2,
        double a3,
        __m128i a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // r13d
  __int64 **v15; // rbp
  __int64 *v16; // rcx
  __int64 *v17; // rdi
  __int64 *v18; // rbx
  unsigned int v19; // r15d
  __int64 v21[63]; // [rsp+0h] [rbp-1F8h] BYREF

  v21[55] = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 480);
  v10 = *(_QWORD *)(v9 + 768);
  if ( !*(_BYTE *)(v10 + 24) )
  {
    *(_BYTE *)(v10 + 24) = 1;
    v11 = *(_QWORD *)(v9 + 112);
    v12 = *(_DWORD *)(v11 + 80);
    if ( v12 == 8 )
    {
      if ( *(_DWORD *)(v11 + 84) == 8 )
        sub_CE420(v9, (__int64 **)off_4DC358, 1, a8);
    }
    else if ( v12 == 4 && *(_DWORD *)(v11 + 84) == 4 )
    {
      sub_CE420(v9, (__int64 **)off_4DC360, 4, a8);
    }
  }
  v13 = *(_QWORD *)(a1 + 64);
  if ( !*(_QWORD *)(v13 + 784) )
  {
    if ( !under_debugger )
      sub_383060(50057);
    BUG();
  }
  v14 = 0;
  v15 = *(__int64 ***)(*(_QWORD *)(a1 + 480) + 768LL);
  v16 = v15[1];
  v17 = *v15;
  v18 = *v15;
  if ( 8LL * (_QWORD)v16 )
  {
    while ( 1 )
    {
      if ( (*(_QWORD *)(*v18 + 1880) != 0) != (*(_QWORD *)(v13 + 800) != 0) )
        goto LABEL_9;
      sub_C3040((__int64)v21, *v18);
      v19 = sub_CC980((__int64)v21, a1, a2, a3, a4, a5);
      if ( !(_BYTE)v19 )
        break;
      sub_C0250((__int64)v21);
      v18 = *v15;
      v14 = v19;
      sub_C2850(v21);
      v17 = *v15;
      v16 = v15[1];
LABEL_10:
      if ( v18 == &v17[(_QWORD)v16] )
        return v14;
      v13 = *(_QWORD *)(a1 + 64);
    }
    sub_C2850(v21);
    v17 = *v15;
    v16 = v15[1];
LABEL_9:
    ++v18;
    goto LABEL_10;
  }
  return v14;
}
