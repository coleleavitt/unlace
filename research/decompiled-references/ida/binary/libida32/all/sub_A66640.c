__int64 __fastcall sub_A66640(_QWORD *a1)
{
  __int64 result; // rax
  size_t v2; // rax

  result = a1[181];
  if ( !result )
  {
    v2 = j__strlen("__int128_t");
    result = sub_A66330(a1, a1[2343], "__int128_t", v2);
    a1[181] = result;
  }
  return result;
}

