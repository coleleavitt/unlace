void __fastcall sub_222E9A0(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+8h] [rbp-40h]
  __int16 v9; // [rsp+20h] [rbp-28h]

  *(_QWORD *)a1 = off_2BEB0F8;
  v2 = *(unsigned __int8 *)(a1 + 504);
  if ( (_BYTE)v2 != 0xFF )
  {
    if ( (_BYTE)v2 != 1
      || (v9 = 261,
          v7 = *(_QWORD *)(a1 + 160),
          v8 = *(_QWORD *)(a1 + 168),
          sub_228BF70(&v7, 1),
          v6 = *(_QWORD *)(a1 + 312),
          v9 = 261,
          v7 = v6,
          v8 = *(_QWORD *)(a1 + 320),
          sub_228BF70(&v7, 1),
          sub_2296EA0(*(_QWORD *)(a1 + 312), *(_QWORD *)(a1 + 320)),
          v2 = *(unsigned __int8 *)(a1 + 504),
          (_BYTE)v2 != 0xFF) )
    {
      funcs_222E9D9[v2]();
    }
  }
  v3 = *(void **)(a1 + 312);
  if ( v3 != (void *)(a1 + 336) )
    free(v3);
  v4 = *(void **)(a1 + 160);
  if ( v4 != (void *)(a1 + 184) )
    free(v4);
  v5 = *(void **)(a1 + 8);
  if ( v5 != (void *)(a1 + 32) )
    free(v5);
}
