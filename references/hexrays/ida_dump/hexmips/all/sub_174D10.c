__int64 __fastcall sub_174D10(_QWORD *a1, int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 (__fastcall *v7)(__int64, int); // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 i; // r15
  __int64 (__fastcall *v12)(__int64, int, int); // rax
  __int64 (__fastcall **v14)(); // [rsp+10h] [rbp-68h] BYREF
  __int64 v15; // [rsp+18h] [rbp-60h]
  __int64 v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-48h]
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v5 = a4;
  v19 = __readfsqword(0x28u);
  if ( a4 != a2 )
  {
    do
    {
      v7 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 104LL);
      v8 = v7 == sub_130110
         ? *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528LL) + 8LL * (int)v5) + 352LL)
         : v7((__int64)a1, v5);
      if ( v8 != 1 )
        return 0;
      v9 = a1[5];
      if ( (unsigned int)v5 >= *(_DWORD *)(v9 + 64) )
      {
        if ( !under_debugger )
          sub_37E160(52719);
        BUG();
      }
      for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 528) + 8LL * (unsigned int)v5) + 48LL);
            i != a5;
            i = *(_QWORD *)(i + 8) )
      {
        v15 = 0;
        v16 = 0;
        v17 = 0;
        v18 = 0;
        v14 = &off_4BE680;
        if ( (unsigned int)sub_11B560((_BYTE *)i, &v14) )
          return 0;
      }
      v12 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 120LL);
      if ( v12 == sub_16E690 )
        LODWORD(v5) = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528LL) + 8 * v5) + 344LL);
      else
        v5 = (int)v12((__int64)a1, v5, 0);
      a5 = 0;
    }
    while ( a2 != (_DWORD)v5 );
  }
  if ( a3 == a5 )
    return 0;
  while ( 1 )
  {
    v15 = 0;
    v16 = 0;
    v14 = &off_4BE680;
    v17 = 0;
    v18 = 0;
    if ( (unsigned int)sub_11B560((_BYTE *)a3, &v14) )
      break;
    a3 = *(_QWORD *)(a3 + 8);
    if ( a3 == a5 )
      return 0;
  }
  return 1;
}
