__int64 __fastcall sub_36CF50(__int64 a1, __int64 a2)
{
  __int64 *first_seg; // rax
  __int64 v3; // rdx

  first_seg = (__int64 *)get_first_seg();
  v3 = -1;
  if ( first_seg )
    v3 = *first_seg;
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
