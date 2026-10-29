__int64 __fastcall sub_5A6516(__int64 a1, unsigned __int64 a2, const char *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v9; // [rsp+10h] [rbp-30h] BYREF
  __int64 v10; // [rsp+18h] [rbp-28h]
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-18h]

  v10 = a1;
  v9 = a2;
  v3 = sub_5A6322(a1);
  if ( v3 - sub_5A4CB0(a1) < a2 )
    std::__throw_length_error(a3);
  v4 = sub_5A4CB0(v10);
  v11 = sub_5A4CB0(v10);
  v12 = v4 + *sub_5956EE(&v11, &v9);
  v5 = sub_5A4CB0(v10);
  if ( v12 >= v5 && (v6 = sub_5A6322(v10), v12 <= v6) )
    return v12;
  else
    return sub_5A6322(v10);
}
