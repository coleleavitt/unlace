unsigned __int64 __fastcall sub_7E5FB0(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  size_t v4; // rax
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdi
  _BYTE v10[3]; // [rsp+5h] [rbp-43h] BYREF
  unsigned __int64 v11[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = *a1;
  v11[0] = __readfsqword(0x28u);
  sub_3A0A80(a2, v3 + 1);
  sub_3A0A80(a2, a1[1] + 1);
  v4 = pack_dw(v10, v11, *((unsigned __int16 *)a1 + 8)) - (_QWORD)v10;
  if ( v4 )
    sub_7DE6E0(a2, v10, v4);
  v5 = a1[4];
  sub_3A0970(a2, v5);
  if ( v5 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      ++v7;
      v8 = v6 + a1[3];
      v6 += 416;
      sub_7E5AC0(v8, a2);
    }
    while ( v5 != v7 );
  }
  return v11[0] - __readfsqword(0x28u);
}
