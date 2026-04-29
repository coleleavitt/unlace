__n128 __usercall dyld4::JustInTimeLoader::fileID@<Q0>(__int64 a1@<X0>, __int64 a2@<X8>)
{
  __n128 result; // q0
  __int128 v3; // q1

  result = *(__n128 *)(a1 + 32);
  v3 = *(_OWORD *)(a1 + 48);
  *(__n128 *)a2 = result;
  *(_OWORD *)(a2 + 16) = v3;
  return result;
}
