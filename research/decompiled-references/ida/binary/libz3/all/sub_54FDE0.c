__int64 __fastcall sub_54FDE0(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // ecx
  int v6; // eax
  bool v7; // zf
  unsigned int v8; // edx
  __int64 result; // rax

  v3 = a3 - 1;
  if ( (a3 & 1) == 0 )
    v3 = a3 + 1;
  v4 = v3;
  v5 = a2 - 1;
  if ( (a2 & 1) == 0 )
    v5 = a2 + 1;
  v6 = sub_54FB50(a1, v5, v4);
  v7 = (v6 & 1) == 0;
  v8 = v6 + 1;
  result = (unsigned int)(v6 - 1);
  if ( v7 )
    return v8;
  return result;
}

