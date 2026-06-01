__int64 __fastcall sub_A332B0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 (*v5)(); // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 17448);
  v3 = a2[1];
  v4 = *a2;
  v5 = *(__int64 (**)())(*(_QWORD *)v2 + 544LL);
  if ( v3 )
  {
    --v3;
    ++v4;
  }
  result = 0;
  if ( v5 != sub_A32190 )
    return ((unsigned int (__fastcall *)(__int64, __int64, __int64))v5)(v2, v4, v3) ^ 1;
  return result;
}

