_BOOL8 __fastcall sub_5AB9C0(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  _QWORD v11[3]; // [rsp+0h] [rbp-F8h] BYREF
  char v12; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v13; // [rsp+D8h] [rbp-20h] BYREF

  v13 = __readfsqword(0x28u);
  if ( (unsigned int)a4 >= a1 )
  {
    if ( a2 >= (unsigned int)a4 )
      return 0;
    v4 = a4 - a2;
    if ( (unsigned int)a4 - a2 <= 0x3FF )
      return 0;
  }
  else
  {
    v4 = a1 - a4;
    if ( a1 - (unsigned int)a4 <= 0x3FF )
      return 0;
  }
  v11[0] = -1;
  v11[2] = 0;
  v11[1] = 0xFFFFFFFFLL;
  v6 = (unsigned __int64 *)&v12;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 3;
    *((_WORD *)v6 - 11) = 0;
    *((_WORD *)v6 - 10) = 0;
    *((_DWORD *)v6 - 1) = 0;
    *((_WORD *)v6 - 9) = 0;
    *(v6 - 2) = 0;
    *((_DWORD *)v6 - 2) = 0;
  }
  while ( &v13 != v6 );
  return a1 != (_DWORD)a3
      && a1 < (unsigned int)a4
      && (unsigned int)decode_insn(v11, (unsigned int)a4, a3, a4, 0, 0)
      && sub_375980(0x24u, v11, 0, v7, v8, v9) == 100
      && !(unsigned __int8)is_ret_insn(v11, 1, v10)
      || v4 > 0x7FFF;
}

