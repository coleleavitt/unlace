unsigned __int64 __fastcall delete_all_xrefs_from(unsigned int a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  unsigned __int64 result; // rax

  v4 = *(_QWORD *)(qword_2CA1698 + 1480);
  sub_3DD870(v4, a1, a3, a4);
  result = sub_3DDB30((_QWORD *)v4, a1, a2);
  *(_DWORD *)(v4 + 2120) = a1;
  return result;
}

