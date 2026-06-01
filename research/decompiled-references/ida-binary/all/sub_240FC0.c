__int64 __fastcall sub_240FC0(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax
  char v9; // bp
  char *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r13
  _QWORD *v13; // rdi
  char *v14; // rax
  __int64 result; // rax
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // [rsp+8h] [rbp-1A0h] BYREF
  __int128 v20; // [rsp+10h] [rbp-198h] BYREF
  __int64 v21; // [rsp+20h] [rbp-188h]
  __int64 v22; // [rsp+28h] [rbp-180h]
  __int64 v23; // [rsp+30h] [rbp-178h]
  char v24; // [rsp+38h] [rbp-170h] BYREF
  _QWORD v25[6]; // [rsp+178h] [rbp-30h] BYREF

  v25[0] = __readfsqword(0x28u);
  if ( !a1 || !dbg )
    return -1;
  v7 = *(_QWORD *)(dbg + 32);
  v9 = a2;
  v10 = (char *)dword_8BA594;
  v11 = 32LL * dword_8BA594;
  v12 = *(_QWORD *)(a1 + v11 + 8);
  if ( (v7 & 0x400000000000LL) != 0 )
  {
    v13 = qword_8CC600;
    if ( qword_8CC600 )
    {
      *(_QWORD *)qword_8CC600 = v12;
      a2 = 11;
      v12 = -1;
      v13[1] = a1;
      *((_DWORD *)v13 + 4) = (_DWORD)v10;
      v11 = (unsigned int)sub_23D480((__int64)v13, 11, v11, v10, a3);
      v7 = *(_QWORD *)(dbg + 32);
      if ( (_DWORD)v11 == 1 )
      {
        v11 = (__int64)qword_8CC600;
        v12 = *(_QWORD *)qword_8CC600;
      }
    }
  }
  if ( (v7 & 0x200000) == 0 && !(unsigned __int8)is_debugger_memory(v12, a2, v11, v10) )
  {
    sub_240EA0(1, a3);
    if ( !(unsigned __int8)is_debugger_memory(v12, a2, v17, v18) )
      return -1;
  }
  if ( !v9 )
  {
    v21 = -1;
    v14 = &v24;
    v22 = 0;
    v23 = 0;
    v20 = -1;
    a3 = 0.0;
    do
    {
      *(_WORD *)v14 = 0;
      v14 += 40;
      *((_WORD *)v14 - 19) = 0;
      *((_WORD *)v14 - 18) = 0;
      *((_DWORD *)v14 - 2) = 0;
      *((_WORD *)v14 - 17) = 0;
      *((_OWORD *)v14 - 2) = 0;
      *((_QWORD *)v14 - 2) = 0;
    }
    while ( v14 != (char *)v25 );
    if ( (unsigned int)decode_insn(&v20, v12, v25, 0, 0, a7, 0.0)
      && ((unsigned __int8)is_call_insn(&v20) || (unsigned __int8)is_ret_insn(&v20, 3)) )
    {
      return -1;
    }
  }
  v16 = sub_1E73C0(0x3E8u, &v19, v12, (unsigned int)dword_8CC428, sub_23F5C0, a1);
  result = -1;
  if ( v16 == 1 )
  {
    result = v19;
    if ( v19 != -1 )
      return sub_23DB80(v19, 0, 0, a3);
  }
  return result;
}
