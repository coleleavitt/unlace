__int64 __fastcall sub_192290(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v6[5]; // [rsp+10h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  v5 = -1;
  if ( !a3 )
  {
LABEL_6:
    result = str2ea_ex(&v5, a2, xmmword_8CC810, 1);
    v3 = -1;
    if ( !(_BYTE)result )
      goto LABEL_4;
    v3 = v5;
LABEL_8:
    result = 1;
    goto LABEL_4;
  }
  if ( !(unsigned __int8)sub_23FB10(a2, v6) )
  {
    v5 = sub_2407B0(a2);
    v3 = v5;
    if ( v5 != -1 )
      goto LABEL_8;
    goto LABEL_6;
  }
  v3 = *(_QWORD *)(get_eah() + 16) & v6[0];
  result = 1;
LABEL_4:
  *a1 = v3;
  return result;
}
