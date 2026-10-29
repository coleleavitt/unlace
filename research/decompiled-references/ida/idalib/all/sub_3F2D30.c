__int64 sub_3F2D30()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  char **v2; // rbp
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v8; // rax
  _QWORD v9[8]; // [rsp+8h] [rbp-40h] BYREF

  v9[2] = __readfsqword(0x28u);
  v0 = operator new(0x58u);
  *(_QWORD *)(v0 + 8) = 0;
  *(_QWORD *)v0 = &off_2BF9EE0;
  *(_QWORD *)(v0 + 16) = &off_2BF9F20;
  *(_QWORD *)(v0 + 32) = -1;
  v1 = qword_2CCB598;
  *(_QWORD *)(v0 + 40) = 0;
  *(_OWORD *)(v0 + 48) = 0;
  *(_QWORD *)(v0 + 24) = v1;
  hook_event_listener(0, v0, 0, 1);
  *(_QWORD *)(v0 + 64) = 0;
  v2 = off_2B27430;
  *(_QWORD *)v0 = off_2B26E78;
  *(_QWORD *)(v0 + 16) = off_2B26EB8;
  *(_OWORD *)(v0 + 72) = 0;
  do
  {
    netnode_check(v9, *v2, 0, 0);
    v3 = v9[0];
    if ( v9[0] != -1 )
    {
      v4 = *(_QWORD *)(v0 + 72);
      v5 = *(_QWORD *)(v0 + 80);
      v9[1] = v9[0];
      v6 = *(_QWORD *)(v0 + 64);
      if ( v5 < v4 + 1 )
      {
        v8 = qvector_reserve(v0 + 64, v6, v4 + 1, 8);
        *(_QWORD *)(v0 + 64) = v8;
        v6 = v8;
        v4 = *(_QWORD *)(v0 + 72);
      }
      *(_QWORD *)(v6 + 8 * v4) = v3;
      ++*(_QWORD *)(v0 + 72);
    }
    ++v2;
  }
  while ( &off_2B27440 != v2 );
  if ( v0 )
    v0 += 16;
  return v0;
}
