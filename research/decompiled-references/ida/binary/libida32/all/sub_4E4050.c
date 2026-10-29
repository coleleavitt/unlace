__int64 __fastcall sub_4E4050(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD v10[9]; // [rsp+10h] [rbp-48h] BYREF

  v10[1] = __readfsqword(0x28u);
  v2 = *(_QWORD **)(**(_QWORD **)(a1 + 160) + 48 * a2 + 32);
  v3 = (__int64 *)v2[3];
  v4 = &v3[v2[4]];
  if ( v4 != v3 )
  {
    do
    {
      v5 = *(_QWORD *)(a1 + 168);
      v6 = *v3++;
      v10[0] = v6;
      v7 = sub_4E3940(v5, (unsigned int *)v10);
      sub_4E3AB0(v5, v7, v8);
    }
    while ( v4 != v3 );
    v3 = (__int64 *)v2[3];
  }
  if ( v3 )
  {
    v2[4] = 0;
    qfree(v3);
    v2[3] = 0;
    v2[5] = 0;
  }
  return sub_4E0690(*(__int64 **)(a1 + 160), a2);
}

