unsigned __int64 __fastcall sub_3CA000(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // rbx
  __int64 *v4; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v3 = a2;
  v4 = *(__int64 **)(a1 + 1672);
  v9 = __readfsqword(0x28u);
  v6 = sub_3C9200(v4, a2);
  if ( v6 != -1 )
  {
    if ( a3 )
    {
      sub_411F00(v4, a2, v6);
      if ( a2 == -1 )
        goto LABEL_5;
    }
    else if ( a2 == -1 )
    {
LABEL_5:
      v8 = v3;
      sub_7BE850(&v8, a1, 3, 65);
      return v9 - __readfsqword(0x28u);
    }
    v3 = sub_3B9DC0(v4, a2);
    goto LABEL_5;
  }
  return v9 - __readfsqword(0x28u);
}
