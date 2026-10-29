__int64 __fastcall sub_18CF90(__int64 a1, int a2)
{
  __int64 v2; // rax
  TView *v3; // rdi
  __int64 result; // rax
  char v5; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v2 = sub_184EF0(a1, a2, &v5, nullptr);
  if ( !v2 )
    return 0;
  v3 = (TView *)v2;
  result = 0;
  if ( v5 != 32 )
  {
    TView::select(v3);
    return 1;
  }
  return result;
}

