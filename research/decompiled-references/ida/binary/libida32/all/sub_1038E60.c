__int64 __fastcall sub_1038E60(__int64 *a1, __int64 *a2, _BYTE *a3, signed __int64 a4)
{
  __int64 v6; // r15
  signed __int64 v7; // r12
  _BYTE *v8; // r13
  unsigned int v9; // eax
  int v10; // eax
  __int64 result; // rax
  __int64 *v12; // [rsp+0h] [rbp-98h]
  __int64 *v13[17]; // [rsp+10h] [rbp-88h] BYREF

  v6 = *a1;
  if ( a4 )
  {
    v7 = a4 - 1;
    v8 = a3 + 1;
  }
  else
  {
    v8 = a3;
    v7 = 0;
  }
  sub_1038E20(v13, (__int64 *)(*(_QWORD *)(v6 + 480) + 8LL * *(unsigned int *)(v6 + 488)), 1);
  v12 = v13[0];
  v9 = sub_2220DF0(v8, v7);
  v10 = sub_2221120(v6 + 480, v8, v7, v9);
  if ( v10 == -1 )
    sub_1038E20(v13, (__int64 *)(*(_QWORD *)(v6 + 480) + 8LL * *(unsigned int *)(v6 + 488)), 1);
  else
    sub_1038E20(v13, (__int64 *)(*(_QWORD *)(v6 + 480) + 8LL * v10), 1);
  result = 0;
  if ( v12 != v13[0] )
  {
    sub_FA3370((__int64)v13, *a2, 0, 819);
    sub_AC84E0((unsigned __int8 **)v13, a3, a4);
    sub_AC6300((__int64)v13);
    return 1;
  }
  return result;
}

