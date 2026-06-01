__int64 __fastcall sub_77FD90(__int64 a1, const char *a2)
{
  char *v2; // rax
  char *v3; // rbp
  __int64 v4; // r12
  __int64 result; // rax

  v2 = strchr(a2, 40);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = v2;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v2 + 1;
  *(_BYTE *)(a1 + 580) = 40;
  result = sub_77F990(a1);
  if ( (int)result >= 0 )
    *v3 = 0;
  *(_QWORD *)(a1 + 8) = v4;
  return result;
}

