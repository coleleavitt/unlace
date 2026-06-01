__int64 __fastcall sub_36D290(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v3 = getseg(*(_QWORD *)(a1 + 8));
  *(_QWORD *)(a2 + 8) = (unsigned __int8)set_segm_addressing(v3, v2);
  return 0;
}
