__int64 __fastcall sub_88E800(_QWORD *a1, __int64 a2, int a3, int a4, __int64 a5)
{
  int v8; // eax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // [rsp+0h] [rbp-78h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  int v17; // [rsp+32h] [rbp-46h]
  __int16 v18; // [rsp+36h] [rbp-42h]
  int v19[2]; // [rsp+38h] [rbp-40h]

  *(_QWORD *)v19 = __readfsqword(0x28u);
  v14 = (_QWORD *)sub_889800((__int64)a1, a2);
  if ( !v14 || !a1[54] && !(unsigned __int8)sub_88AE60((__int64)a1, (char **)a5, a3) )
    return 0;
  v8 = sub_88BB90((__int64)a1, a2, a3, (__int64 *)a5);
  if ( v8 == 2 )
  {
    if ( !*(_QWORD *)(a5 + 8) )
      sub_88BE00();
    sub_88BE00();
  }
  if ( v8 == 4 )
    sub_375400();
  if ( v8 )
  {
    if ( (debug & 0x200) != 0 )
    {
      sub_88B2E0((__int64)&ptr, (int *)a2);
      sub_383DA0();
    }
    return 0;
  }
  v10 = a1[56];
  v11 = a1[55];
  v17 = *(_DWORD *)a2;
  v18 = *(_WORD *)(a2 + 4);
  if ( a1[57] < (unsigned __int64)(v10 + 1) )
  {
    v13 = qvector_reserve(a1 + 55, v11, v10 + 1, 6);
    v10 = a1[56];
    a1[55] = v13;
    v11 = v13;
  }
  v12 = v11 + 6 * v10;
  *(_DWORD *)v12 = v17;
  *(_WORD *)(v12 + 4) = v18;
  ++a1[56];
  sub_88CC80((__int64)a1, v14, 0, a4, a2);
  return 1;
}

