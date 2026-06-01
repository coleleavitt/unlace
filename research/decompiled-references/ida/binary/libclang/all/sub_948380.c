__int64 __fastcall sub_948380(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  _QWORD v10[3]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+18h] [rbp-90h]
  __int64 v12; // [rsp+20h] [rbp-88h]
  int v13; // [rsp+30h] [rbp-78h]
  _QWORD v14[13]; // [rsp+40h] [rbp-68h] BYREF

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = *(_QWORD *)(a1 + 792);
  *(_QWORD *)(a1 + 800) = *a2;
  v5 = sub_A1A5A0(v3, 56);
  sub_A1C070(v10, v5);
  sub_A1A5E0(v3, 56);
  if ( !v13 )
  {
    if ( v11 )
      goto LABEL_5;
LABEL_16:
    v7 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
    sub_A1BFE0(v7, v10);
    goto LABEL_17;
  }
  if ( v13 == 2 )
  {
    if ( !v11 )
      goto LABEL_16;
  }
  else if ( v13 != 3 && !(v10[0] | v12) )
  {
    goto LABEL_16;
  }
LABEL_5:
  if ( (unsigned __int8)sub_9D7120(a1 + 384, v4, v10, 3) )
  {
    if ( !v13
      && v11
      && *(_DWORD *)(*(_QWORD *)(v11 + 32) + 16LL) != (_DWORD)v12
      && (_DWORD)v12
      && *(_DWORD *)(sub_8E5480((__int64)v10) + 12) == -1 )
    {
      v14[0] = sub_A16CE0(*(_QWORD *)(a1 + 584), v4);
      sub_A2E0C0(a1 + 384, v14, 2297, 0);
      goto LABEL_12;
    }
    v8 = *(_QWORD *)(a1 + 568);
    sub_8E6410((__int64)v14, (__int64)v10);
    v9 = sub_A1A4E0(v8, 56);
    sub_A1C070(v9, v14);
    sub_A1C0C0(v14);
LABEL_17:
    v6 = 1;
    goto LABEL_18;
  }
LABEL_12:
  v6 = 0;
LABEL_18:
  sub_A1C0C0(v10);
  return v6;
}

