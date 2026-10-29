__int64 __fastcall sub_40BBF0(__int64 a1, void *a2)
{
  int *v2; // rbp
  int *v3; // rbx
  int v4; // eax
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  int v12; // eax
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF

  v2 = (int *)sub_48DF10("::info functions ", 0xFFFFFFFF);
  if ( a2 )
  {
    v13 = sub_48DF10(a2, 0xFFFFFFFF);
    v3 = (int *)sub_46EEB0(1, &v13);
    sub_48F180(v2, v3);
    v4 = *v3 - 1;
    v5 = *v3 == 1;
    *v3 = v4;
    if ( v4 < 0 || v5 )
      sub_47B120(v3);
  }
  v6 = sub_48B7B0(a1, 0);
  ++*v2;
  v7 = v6;
  if ( (unsigned int)sub_40BBC0(a1, (__int64)v2, 0) )
  {
    v9 = sub_47B0B0();
    v12 = *v2 - 1;
    v5 = *v2 == 1;
    *v2 = v12;
    if ( v12 >= 0 && !v5 )
      goto LABEL_6;
LABEL_8:
    sub_47B120(v2);
    goto LABEL_6;
  }
  v8 = sub_48B5D0(a1);
  v9 = sub_47B2A0(v8);
  v10 = *v2 - 1;
  v5 = *v2 == 1;
  *v2 = v10;
  if ( v10 < 0 || v5 )
    goto LABEL_8;
LABEL_6:
  sub_48B090(a1, v7);
  return v9;
}

