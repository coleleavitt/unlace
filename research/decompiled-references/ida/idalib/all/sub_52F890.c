unsigned __int64 __fastcall sub_52F890(__int64 *a1, unsigned int a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // rbx
  __int64 *v4; // r13
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( *((_BYTE *)a1 + 32) )
  {
    if ( !under_debugger )
      interr(1732);
    BUG();
  }
  v2 = *((int *)a1 + 4);
  v3 = a2;
  v4 = a1 + 5;
  while ( v3 < v2 )
  {
    v5 = *a1;
    v6 = v3;
    v7 = *(_QWORD *)(a1[1] + 8 * v3++);
    v10 = v7 + 1;
    sub_7BE7C0(v4, v5, v6, &v10, 8, 65);
  }
  v8 = *a1;
  v10 = v2;
  sub_7BE7C0(v4, v8, -1, &v10, 8, 65);
  return v11 - __readfsqword(0x28u);
}
