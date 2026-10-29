__int64 __fastcall sub_50DE90(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r12
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rdx
  __int128 v10; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD **)(a1 + 1672);
  v11 = __readfsqword(0x28u);
  if ( !sub_631AD0(*v2, 27) && !sub_631AD0(*v2, 28) )
    sub_62DF70(a1 + 640, a1);
  if ( !a2 )
    goto LABEL_16;
  v10 = 0;
  v3 = sub_3BDE50(v2, a2);
  sub_630CA0(*v2, 26, &v10, 16);
  if ( v3 >= (unsigned __int64)v10 && v3 < *((_QWORD *)&v10 + 1) )
    return v11 - __readfsqword(0x28u);
  v4 = sub_631AD0(*v2, 28);
  v5 = v4 + 0x100000;
  v6 = v4;
  if ( v4 >= v4 + 0x100000 || a2 >= sub_3BDD60(v2, v4 + 0x100000) )
LABEL_16:
    sub_378C70((__int64)"Out of private address space for netnodes");
  v7 = sub_505EB0((__int64)(v2 + 203), v6 - 1);
  if ( v7 && (v8 = *v7, *v7 < v5) )
  {
    if ( v6 >= v8 )
      sub_378D50();
  }
  else
  {
    v8 = v5;
  }
  return sub_632610(*v2, 28, v8);
}
