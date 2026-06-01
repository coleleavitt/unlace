__int64 __fastcall sub_208F990(__int64 a1, int a2)
{
  __int64 v2; // rsi
  size_t v3; // rdx

  v2 = dword_2674460[a2];
  if ( &byte_2683120[v2] )
    v3 = strlen(&byte_2683120[v2]);
  else
    v3 = 0;
  return sub_20BE3F0(a1, &byte_2683120[v2], v3);
}
