__int64 __fastcall sub_8143E0(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v8; // rdx

  if ( a2 < 0 || (v5 = a1[1], a2 >= v5) )
  {
    set_qerrno(3, a2);
    return -(__int64)(a1[1] != a2);
  }
  v6 = a1[4];
  if ( v6 == -1 )
    goto LABEL_7;
  if ( a1[5] < v6 )
  {
    set_qerrno(4, a2);
    return -1;
  }
  if ( a2 + v6 != qlseek(a1[3], a2 + v6, 0) )
    return -1;
  v5 = a1[1];
LABEL_7:
  v8 = v5 - a2;
  if ( v8 > a4 )
    v8 = a4;
  return qlread(a1[3], a3, v8);
}

