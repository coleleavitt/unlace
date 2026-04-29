__int64 __fastcall sub_329D50(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 result; // rax

  v2 = a1 + 376;
  v3 = a1 + 200;
  sub_D0960(a1);
  do
  {
    v4 = v3;
    v3 += 8;
    clear_tinfo_t(v4);
  }
  while ( v3 != v2 );
  v5 = a1 + 408;
  do
  {
    v6 = v3;
    v3 += 8;
    result = clear_tinfo_t(v6);
  }
  while ( v3 != v5 );
  return result;
}
