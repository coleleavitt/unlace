__int64 __fastcall sub_36A440(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // ebp
  __int64 v4; // rax

  v2 = *(_DWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = num_flag();
  *(_DWORD *)(a2 + 8) = (unsigned __int8)set_op_type(v3, v4, v2);
  return 0;
}

