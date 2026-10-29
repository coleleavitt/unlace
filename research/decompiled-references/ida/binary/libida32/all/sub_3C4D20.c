unsigned __int64 __fastcall sub_3C4D20(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // ebx
  _QWORD *v4; // r12
  unsigned int v6; // eax
  unsigned int v8; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v3 = a2;
  v4 = *(_QWORD **)(a1 + 1480);
  v9 = __readfsqword(0x28u);
  v6 = sub_3C3F20(v4, a2);
  if ( v6 != -1 )
  {
    if ( a3 )
    {
      sub_3FEBE0(v4, a2, v6);
      if ( a2 == -1 )
        goto LABEL_5;
    }
    else if ( a2 == -1 )
    {
LABEL_5:
      v8 = v3;
      sub_79B4D0(&v8, a1, 3, 65);
      return v9 - __readfsqword(0x28u);
    }
    v3 = sub_614FB0(*v4, 29) + a2;
    goto LABEL_5;
  }
  return v9 - __readfsqword(0x28u);
}

