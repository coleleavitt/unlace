__int64 __fastcall sub_44EFC0(_QWORD *a1, void *a2, __int64 **a3, __int64 a4)
{
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  const char *v12; // rdx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v14; // [rsp+8h] [rbp-40h]
  void *v15; // [rsp+18h] [rbp-30h]
  __int64 v16; // [rsp+20h] [rbp-28h]
  int v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+30h] [rbp-18h]
  int v19; // [rsp+38h] [rbp-10h]
  __int64 v20; // [rsp+40h] [rbp-8h]

  v15 = (void *)__readfsqword(0x28u);
  if ( (sub_4F37A0(a1, a2) & 1) == 0 )
  {
    v7 = sub_3BE900(a1, (unsigned __int64)a2, 4);
    if ( (~(_WORD)v7 & 0x600) == 0
      && (v7 & 0x10000000) != 0
      && !(unsigned __int8)sub_44BDA0((__int64)a1, (__int64)a2, *(_QWORD *)(a4 + 8)) )
    {
      sub_5D4180((int)a1, (__int64)ptr, v14, SDWORD2(v14), v15, v16, v17, v18, v19, v20);
      set_abits(a2, 0x20000000);
    }
    ptr = (void *)(*(_QWORD *)(a4 + 8) + 1LL);
    v8 = ea2node(a2);
    netnode_supset(v8, 1, &ptr, 8, 65, v9);
    sub_3E2180(a1, *(_QWORD *)(a4 + 8), (unsigned __int64)a2, 0x13u);
    v10 = *(_QWORD *)(a4 + 24);
    v14 = 0;
    v11 = *(_QWORD *)(a4 + 8);
    ptr = nullptr;
    sub_44EC70((__int64)a1, (__int64)&ptr, v11, *(_QWORD *)(v10 + 24) == (_QWORD)a2, a3);
    v12 = haystack;
    if ( (_QWORD)v14 )
      v12 = (const char *)ptr;
    sub_44BB70(a1, a2, v12, 0, nullptr);
    if ( ptr )
    {
      *(_QWORD *)&v14 = 0;
      qfree(ptr);
    }
  }
  return (__int64)v15 - __readfsqword(0x28u);
}
