__int64 *__fastcall sub_47DA20(__int64 a1, __int64 *a2, unsigned int a3, int a4)
{
  __int64 v6; // rdi
  _QWORD *v8; // r14
  int v9; // r8d
  int v10; // r9d
  unsigned int v12; // eax
  __int64 v13; // [rsp+8h] [rbp-A0h] BYREF
  _BYTE v14[88]; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-40h]

  v6 = *(int *)(a1 + 4LL * a4 + 16);
  v15 = __readfsqword(0x28u);
  v8 = *(_QWORD **)(switch_dbctx(v6) + 1480);
  v13 = 0;
  sub_6141A0(*v8, 26, &v13, 8);
  if ( a3 < (unsigned int)v13 || a3 >= HIDWORD(v13) )
    goto LABEL_3;
  if ( (unsigned __int8)sub_6994A0(v8, a2, a3) )
    return (__int64 *)(v15 - __readfsqword(0x28u));
  LODWORD(v13) = sub_3B90A0(v8, a3);
  if ( sub_79BD30(&v13, *v8, a2) > 0 )
    return (__int64 *)(v15 - __readfsqword(0x28u));
  v12 = sub_47D940(a1, a3, a4);
  if ( v12 == -1 || !(unsigned __int8)sub_6994A0(v8, a2, v12) )
  {
LABEL_3:
    sub_419620((__int64)v14, v8);
    sub_419660((__int64)v14, a3, nullptr, 0, v9, v10);
    sub_357520(a2);
    return (__int64 *)(v15 - __readfsqword(0x28u));
  }
  return sub_357520(a2);
}

