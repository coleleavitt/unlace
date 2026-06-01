__int64 __fastcall sub_1251410(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  _QWORD *v3; // rbp
  int v4; // esi
  char v5; // al

  v1 = *(_DWORD *)(a1 + 152);
  if ( v1 == 2 )
  {
    v3 = (_QWORD *)(a1 + 272);
    sub_9EE8A0(a1 + 272, a1 + 208);
    sub_12510C0((unsigned __int8 *)(a1 + 8));
    v4 = 8;
LABEL_6:
    v5 = sub_12513B0(a1, v4);
    sub_998CE0(v3, 0, *(_QWORD *)(a1 + 280), 1u, v5);
    return 1;
  }
  if ( v1 == 3 )
  {
    v3 = (_QWORD *)(a1 + 272);
    sub_9EE8A0(a1 + 272, a1 + 208);
    sub_12510C0((unsigned __int8 *)(a1 + 8));
    v4 = 16;
    goto LABEL_6;
  }
  result = 0;
  if ( v1 == 1 )
  {
    sub_9EE8A0(a1 + 272, a1 + 208);
    sub_12510C0((unsigned __int8 *)(a1 + 8));
    return 1;
  }
  return result;
}
