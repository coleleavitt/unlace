__int64 sub_3F2A80()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rsi
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[1] = __readfsqword(0x28u);
  v0 = operator new(0x48u);
  *(_QWORD *)(v0 + 8) = 0;
  *(_QWORD *)v0 = &off_2BF9EE0;
  *(_QWORD *)(v0 + 16) = &off_2BF9F20;
  *(_QWORD *)(v0 + 32) = -1;
  v1 = qword_2CCB598;
  *(_QWORD *)(v0 + 40) = 0;
  *(_OWORD *)(v0 + 48) = 0;
  *(_QWORD *)(v0 + 24) = v1;
  hook_event_listener(0, v0, 0, 1);
  v2 = *(_QWORD *)(v0 + 24);
  *(_QWORD *)v0 = off_2B26F10;
  *(_QWORD *)(v0 + 16) = off_2B26F50;
  *(_QWORD *)(v0 + 64) = -1;
  sub_7BEFF0(v4, v2, "$ watch list", 0, 0);
  *(_QWORD *)(v0 + 64) = v4[0];
  if ( v0 )
    v0 += 16;
  return v0;
}
