__int64 __fastcall sub_CA300(_QWORD *a1, __m128i a2, double a3, __m128i a4, double a5)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rax
  unsigned int v11; // r13d
  __int64 **v12; // rbp
  __int64 *v13; // rcx
  __int64 *v14; // rdi
  __int64 *v15; // rbx
  unsigned int v16; // r15d
  _QWORD v18[63]; // [rsp+0h] [rbp-1F8h] BYREF

  v18[55] = __readfsqword(0x28u);
  v6 = a1[60];
  v7 = *(_QWORD *)(v6 + 768);
  if ( !*(_BYTE *)(v7 + 24) )
  {
    *(_BYTE *)(v7 + 24) = 1;
    v8 = *(_QWORD *)(v6 + 112);
    v9 = *(_DWORD *)(v8 + 80);
    if ( v9 == 8 )
    {
      if ( *(_DWORD *)(v8 + 84) == 8 )
        sub_CA220(v6, (__int64 **)off_4BCAD8, 1);
    }
    else if ( v9 == 4 && *(_DWORD *)(v8 + 84) == 4 )
    {
      sub_CA220(v6, (__int64 **)off_4BCAE0, 4);
    }
  }
  v10 = a1[8];
  if ( !*(_QWORD *)(v10 + 784) )
  {
    if ( !under_debugger )
      sub_37E160(50057);
    BUG();
  }
  v11 = 0;
  v12 = *(__int64 ***)(a1[60] + 768LL);
  v13 = v12[1];
  v14 = *v12;
  v15 = *v12;
  if ( 8LL * (_QWORD)v13 )
  {
    while ( 1 )
    {
      if ( (*(_QWORD *)(*v15 + 1880) != 0) != (*(_QWORD *)(v10 + 800) != 0) )
        goto LABEL_9;
      sub_BEE40((__int64)v18, *v15);
      v16 = sub_C8780((__int64)v18, a1, a2, a3, a4, a5);
      if ( !(_BYTE)v16 )
        break;
      sub_BC050((__int64)v18);
      v15 = *v12;
      v11 = v16;
      sub_BE650(v18);
      v14 = *v12;
      v13 = v12[1];
LABEL_10:
      if ( v15 == &v14[(_QWORD)v13] )
        return v11;
      v10 = a1[8];
    }
    sub_BE650(v18);
    v14 = *v12;
    v13 = v12[1];
LABEL_9:
    ++v15;
    goto LABEL_10;
  }
  return v11;
}
