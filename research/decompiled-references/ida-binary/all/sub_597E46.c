__int64 __fastcall sub_597E46(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 j; // [rsp+10h] [rbp-30h] BYREF
  __int64 v8; // [rsp+18h] [rbp-28h] BYREF
  _QWORD *v9; // [rsp+20h] [rbp-20h]
  unsigned int i; // [rsp+2Ch] [rbp-14h]

  for ( i = 0; ; ++i )
  {
    v1 = sub_598368(*(_QWORD *)(a1 + 16));
    if ( i >= (unsigned __int64)sub_5986F2(v1) )
      break;
    v2 = sub_598368(*(_QWORD *)(a1 + 16));
    v9 = *(_QWORD **)sub_59871A(v2, i);
    if ( *((_BYTE *)v9 + 41) && *((_BYTE *)v9 + 40) == 1 && v9[1] > 0xFFFu && !(unsigned __int8)sub_5979AC(a1, v9) )
      sub_597A8A(a1, v9, 1u, i, 0);
  }
  for ( j = sub_59843E(*(_QWORD *)(a1 + 24)); ; sub_5984AE(&j) )
  {
    v8 = sub_598466(*(_QWORD *)(a1 + 24));
    result = sub_59848C(&j, &v8);
    if ( !(_BYTE)result )
      break;
    v5 = sub_5984CE(&j) + 296;
    v6 = (_QWORD *)sub_5984CE(&j);
    sub_597A8A(a1, v6, 0, 0, v5);
  }
  return result;
}
