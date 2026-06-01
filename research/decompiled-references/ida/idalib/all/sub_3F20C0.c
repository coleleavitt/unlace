__int64 sub_3F20C0()
{
  __int64 v0; // rbx
  __int64 v1; // rax

  v0 = operator new(0x40u);
  *(_QWORD *)(v0 + 8) = 0;
  *(_QWORD *)v0 = &off_2BF9EE0;
  *(_QWORD *)(v0 + 16) = &off_2BF9F20;
  *(_QWORD *)(v0 + 32) = -1;
  v1 = qword_2CCB598;
  *(_QWORD *)(v0 + 40) = 0;
  *(_OWORD *)(v0 + 48) = 0;
  *(_QWORD *)(v0 + 24) = v1;
  hook_event_listener(0, v0, 0, 1);
  *(_QWORD *)v0 = off_2B26F78;
  *(_QWORD *)(v0 + 16) = off_2B26FB8;
  if ( v0 )
    v0 += 16;
  return v0;
}
