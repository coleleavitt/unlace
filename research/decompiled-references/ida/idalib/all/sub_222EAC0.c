void __fastcall sub_222EAC0(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+8h] [rbp-40h]
  __int16 v9; // [rsp+20h] [rbp-28h]

  *a1 = off_2BEB0F8;
  v2 = *((unsigned __int8 *)a1 + 504);
  if ( (_BYTE)v2 != 0xFF )
  {
    if ( (_BYTE)v2 != 1
      || (v9 = 261,
          v7 = a1[20],
          v8 = a1[21],
          sub_228BF70(&v7, 1),
          v6 = a1[39],
          v9 = 261,
          v7 = v6,
          v8 = a1[40],
          sub_228BF70(&v7, 1),
          sub_2296EA0(a1[39], a1[40]),
          v2 = *((unsigned __int8 *)a1 + 504),
          (_BYTE)v2 != 0xFF) )
    {
      funcs_222E9D9[v2]();
    }
  }
  v3 = (_QWORD *)a1[39];
  if ( v3 != a1 + 42 )
    free(v3);
  v4 = (_QWORD *)a1[20];
  if ( v4 != a1 + 23 )
    free(v4);
  v5 = (_QWORD *)a1[1];
  if ( v5 != a1 + 4 )
    free(v5);
  operator delete(a1, 0x200u);
}
