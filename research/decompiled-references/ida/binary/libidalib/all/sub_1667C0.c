unsigned __int64 __fastcall sub_1667C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  _OWORD *v3; // rcx
  __int64 v4; // r12
  __int64 v5; // r8
  __int128 v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  *((_QWORD *)&v7 + 1) = a2;
  *(_QWORD *)&v7 = 0;
  v2 = sub_15B8E0(a1, &v7);
  if ( v2 )
  {
    v3 = *(_OWORD **)v2;
    v4 = v2;
    v5 = *(_QWORD *)v2 + 16LL * *(_QWORD *)(v2 + 8);
    if ( *(_QWORD *)v2 == v5 )
      goto LABEL_9;
    while ( *v3 - v7 != 0 )
    {
      if ( (_OWORD *)v5 == ++v3 )
        goto LABEL_9;
    }
    if ( v3 == (_OWORD *)v5 )
LABEL_9:
      sub_8F740((__int64)"Coherency check failed: g->has(ssv)\n");
    sub_166640(a1, v4, &v7);
  }
  return v8 - __readfsqword(0x28u);
}

