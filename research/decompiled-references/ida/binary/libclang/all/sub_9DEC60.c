__int64 __fastcall sub_9DEC60(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // r13d
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // ebp
  unsigned int v8; // [rsp+Ch] [rbp-6Ch] BYREF
  _QWORD v9[3]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-48h]
  int v12; // [rsp+40h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_DWORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v8 = v3;
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v9, v5);
  sub_A1A5E0(v4, 56);
  if ( !v12 )
  {
    if ( !v10 )
      goto LABEL_3;
LABEL_8:
    if ( v8 && !(unsigned __int8)sub_9D4C70(a1, a2, (__int64)v9) )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( v12 == 2 )
  {
    if ( v10 )
      goto LABEL_8;
  }
  else if ( v12 == 3 || v9[0] | v11 )
  {
    goto LABEL_8;
  }
LABEL_3:
  v6 = sub_941420(a1, a2, &v8, (__int64)v9, 0);
  if ( (_BYTE)v6 )
  {
    sub_9C74F0(a1);
    goto LABEL_5;
  }
LABEL_4:
  v6 = 0;
LABEL_5:
  sub_A1C0C0(v9);
  return v6;
}

