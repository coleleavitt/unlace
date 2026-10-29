__int64 __fastcall sub_3FF4F0(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  __int64 qword; // rax
  unsigned int v5; // ebp
  char v7; // al
  __int64 v8; // rdi

  v2 = *(_QWORD *)(a1 + 24);
  v3 = qword_2CCB598;
  *(_QWORD *)(a1 + 16) = v2;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 1672) + 24LL) + 16LL) >= v2 && (v5 = is_mapped(v2), (_BYTE)v5) )
  {
    v7 = getinf_flag(3, 4);
    v8 = *(_QWORD *)(a1 + 24);
    if ( v7 )
      qword = get_qword(v8);
    else
      qword = (unsigned int)get_dword(v8);
  }
  else
  {
    qword = -1;
    v5 = 0;
  }
  *(_QWORD *)(a1 + 24) = qword;
  return v5;
}
