__int64 __fastcall sub_4F6730(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rbx
  unsigned int v3; // r12d
  __int64 v4; // rax
  unsigned int v5; // r13d
  unsigned int v6; // r12d
  unsigned int *v7; // rax
  __int64 v8; // rdx
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-30h]

  v2 = *(_QWORD **)(a1 + 1480);
  v11 = __readfsqword(0x28u);
  if ( !(unsigned int)sub_614FB0(*v2, 27) && !(unsigned int)sub_614FB0(*v2, 28) )
    sub_611A20(a1 + 552, a1);
  if ( !a2 )
    goto LABEL_16;
  v10 = 0;
  v3 = sub_3B9110(v2, a2);
  sub_6141A0(*v2, 26, &v10, 8);
  if ( v3 >= (unsigned int)v10 && v3 < HIDWORD(v10) )
    return v11 - __readfsqword(0x28u);
  v4 = sub_614FB0(*v2, 28);
  v5 = (unsigned int)&stru_100000 + v4;
  v6 = v4;
  if ( (unsigned int)v4 >= v5 || a2 >= (unsigned int)sub_3B90A0(v2, v5) )
LABEL_16:
    sub_375320((__int64)"Out of private address space for netnodes");
  v7 = sub_4EE960((__int64)(v2 + 194), v6 - 1);
  if ( v7 && (v8 = *v7, (unsigned int)v8 < v5) )
  {
    if ( v6 >= (unsigned int)v8 )
      sub_375400();
  }
  else
  {
    v8 = v5;
  }
  return sub_615AB0(*v2, 28, v8);
}

