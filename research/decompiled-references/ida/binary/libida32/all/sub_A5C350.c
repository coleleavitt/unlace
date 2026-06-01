__int64 __fastcall sub_A5C350(unsigned __int8 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rbp
  unsigned int v11; // r13d
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // r8

  if ( (_BYTE)a2 )
    return (unsigned int)a2;
  if ( **a1 )
    v4 = *(_QWORD *)a1[1];
  else
    v4 = *(_QWORD *)a1[2];
  v6 = *(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)v6;
  v8 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v6 + 16LL) - 35;
  if ( (unsigned int)v8 > 1 )
    v7 = sub_F3F310(v7, a2, v8, a4);
  result = sub_F422E0(v7);
  if ( (_BYTE)result )
  {
    v10 = (__int64)a1[3];
    v11 = **a1;
    v12 = sub_F44270(*(_QWORD *)a1[2], v10);
    v13 = sub_F44270(*(_QWORD *)a1[1], a1[3]);
    return sub_A5BE60(v10, v13, v12, v11, v14);
  }
  return result;
}

