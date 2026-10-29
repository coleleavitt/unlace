unsigned __int64 __fastcall sub_A4D1E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  v3 = a2 & 7;
  if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return a2 & 0xFFFFFFFFFFFFFFF8LL | (unsigned int)a3 | (unsigned int)v3;
  v4 = v3 | a3;
  if ( (a2 & 8) != 0 )
    return sub_A4CF00(
             a1,
             *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL),
             *(__int64 *)((char *)&qword_18 + (a2 & 0xFFFFFFFFFFFFFFF0LL)) | v4);
  else
    return sub_A4CF00(a1, a2 & 0xFFFFFFFFFFFFFFF0LL, v4);
}

