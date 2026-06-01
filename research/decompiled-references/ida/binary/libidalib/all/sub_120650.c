__int64 __fastcall sub_120650(__int64 *a1, const char *a2, char a3)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // [rsp+8h] [rbp-30h]
  __int64 v6[5]; // [rsp+10h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  v5 = -1;
  if ( !a3 )
  {
LABEL_6:
    result = str2ea_ex();
    v3 = -1;
    if ( !(_BYTE)result )
      goto LABEL_4;
    v3 = v5;
LABEL_8:
    result = 1;
    goto LABEL_4;
  }
  if ( !(unsigned __int8)sub_D0330(a2, v6, a3) )
  {
    v5 = sub_D1420(a2);
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

