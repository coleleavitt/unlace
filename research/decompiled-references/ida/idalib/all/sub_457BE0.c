void __fastcall __noreturn sub_457BE0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // r14
  unsigned __int64 v4; // rdx
  __int128 v5; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-30h]
  __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = v2;
  v3 = *(_QWORD **)(a1 + 1672);
  v6 = __readfsqword(0x28u);
  v5 = 0;
  sub_630CA0(*v3, 26, &v5, 16);
  v4 = a2[1] - *a2;
  if ( v4 < *((_QWORD *)&v5 + 1) - (_QWORD)v5 )
    sub_632610(*v3, 28, v5 + v4);
  sub_457B60();
}
