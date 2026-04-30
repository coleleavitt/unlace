__int64 __fastcall sub_23E940(_QWORD *a1, __int64 a2, __int64 a3, char *a4, int a5, __int64 a6, double a7)
{
  _QWORD *v8; // rdi
  __int64 v10; // rdx
  __int64 result; // rax

  v8 = qword_8CC600;
  if ( !qword_8CC600 )
    return 0;
  v10 = dbg;
  if ( !dbg || (result = 0, (*(_BYTE *)(dbg + 34) & 0x20) == 0) )
  {
    *((_QWORD *)qword_8CC600 + 1) = a2;
    v8[2] = a3;
    v8[3] = a4;
    *((_DWORD *)v8 + 8) = a5;
    v8[5] = a6;
    result = sub_23D480((__int64)v8, 27, v10, a4, a7);
    if ( (_DWORD)result == 1 )
      *a1 = *(_QWORD *)qword_8CC600;
    else
      *a1 = -1;
  }
  return result;
}
