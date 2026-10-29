// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_1065A0(__int64 a1, __int64 a2)
{
  char redo_action_label; // bp
  __int64 v3; // rax
  _BYTE *src; // [rsp+0h] [rbp-58h]

  redo_action_label = get_redo_action_label();
  src = (_BYTE *)qvector_reserve();
  src[5] = 0;
  *(_DWORD *)src = 1868850514;
  src[4] = 32;
  v3 = sub_19D0F0(*(_QWORD *)(a2 + 72));
  if ( v3 )
    sub_19C000(v3, 1, src);
  if ( src )
    qfree();
  return redo_action_label == 0 ? 7 : 3;
}

