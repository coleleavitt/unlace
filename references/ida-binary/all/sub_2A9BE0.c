__int64 __fastcall sub_2A9BE0(__int64 a1, __int64 *a2)
{
  bool v2; // zf
  __int64 v3; // rbx
  int v5; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 528) == 0;
  v6 = __readfsqword(0x28u);
  v5 = dword_8CCA94;
  if ( v2 )
  {
    v3 = qalloc_or_throw(384);
    sub_27CCF0(v3, *a2, &v5);
  }
  else
  {
    v3 = qalloc_or_throw(384);
    sub_27CDE0(v3, *(_QWORD ***)(a1 + 528), &v5);
  }
  return v3;
}
