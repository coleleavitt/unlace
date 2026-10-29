const char *__fastcall sub_562E40(__int64 *a1, char *a2)
{
  __int64 v2; // rax
  unsigned __int8 v3; // bl
  unsigned __int64 v4; // rax
  int v5; // r12d
  unsigned __int64 v6; // r14
  __int64 v7; // r13
  const char *result; // rax
  __int64 ph; // rax
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  v2 = *a1;
  v3 = *(_BYTE *)(*a1)++;
  if ( !*(_BYTE *)(v2 + 1) )
    return nullptr;
  v4 = sub_3792E0(0x7D2u);
  v5 = v4;
  v6 = v4;
  if ( v4 )
  {
    v7 = v3;
    if ( v4 >= v3 )
    {
LABEL_4:
      *(_QWORD *)a2 = v7;
      return &byte_22F0C30;
    }
  }
  else
  {
    v6 = 4;
    v7 = v3;
    v5 = 4;
    if ( v3 <= 4uLL )
      goto LABEL_4;
  }
  v10[0] = 0;
  ph = get_ph(2002, a2);
  result = (const char *)sub_5E6630(ph, (unsigned int)v3 - 1 - v5, v10);
  if ( result )
  {
    v7 = v10[0];
    if ( v10[0] - 1LL >= v6 )
      return nullptr;
  }
  *(_QWORD *)a2 = v7;
  return result;
}
