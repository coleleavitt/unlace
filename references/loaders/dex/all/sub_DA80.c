__int64 __fastcall sub_DA80(__int64 a1, __int64 a2, int a3, unsigned __int16 a4)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  unsigned int v9; // ebx
  __int64 v11; // [rsp+8h] [rbp-60h] BYREF
  __int64 v12; // [rsp+10h] [rbp-58h] BYREF
  __int128 v13; // [rsp+18h] [rbp-50h]
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v4 = (unsigned int)(a3 - 1);
  if ( v4 >= *(_QWORD *)(a1 + 56) )
    sub_59F0();
  v5 = *(_QWORD *)(a1 + 48);
  v13 = 0;
  v12 = 0;
  if ( netnode_qgetblob(*(_QWORD *)(v5 + 8 * v4), &v12, 1, a4, 80) < 0 )
  {
    v9 = 0;
  }
  else
  {
    v11 = v12;
    v6 = v13 + v12;
    *(_DWORD *)a2 = unpack_dd(&v11, v13 + v12);
    *(_DWORD *)(a2 + 4) = unpack_dd(&v11, v6);
    v7 = (unsigned __int16)unpack_dw(&v11, v6);
    sub_DA10((__int64 *)(a2 + 8), v7);
    v8 = 0;
    if ( (_WORD)v7 )
    {
      do
      {
        *(_WORD *)(*(_QWORD *)(a2 + 8) + v8) = unpack_dw(&v11, v6);
        v8 += 2;
      }
      while ( v8 != 2 * v7 );
    }
    v9 = 1;
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  return v9;
}
