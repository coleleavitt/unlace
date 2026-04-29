unsigned __int64 __fastcall sub_1B1ED0(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v3; // r13
  __int128 v7; // rdi
  __int64 v8; // rax
  char v9; // al
  __int64 v10; // rdi
  _QWORD v12[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+10h] [rbp-48h]
  __int128 v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( a3 )
  {
    v3 = *(_QWORD *)(a1 + 80);
    *((_QWORD *)&v7 + 1) = v12;
    *(_QWORD *)&v7 = a2;
    v12[0] = 0;
    v12[1] = 0;
    v13 = 0;
    v14 = 0;
    sub_11D7E0(v7, v3, 1u, 0xFFFF0000);
    v8 = sub_A33E0((__int64)a2, v12, a3, 0, 1u);
    if ( a3 == v8 )
    {
      v10 = v13;
      if ( !v13 )
        goto LABEL_7;
      goto LABEL_6;
    }
    if ( v8 )
    {
      v9 = sub_1B1970(a2, v3, a3);
      v10 = v13;
      if ( !v9 )
      {
        if ( !v13 )
        {
LABEL_7:
          qfree(v12[0]);
          *(_BYTE *)(a1 + 88) = 1;
          return v15 - __readfsqword(0x28u);
        }
LABEL_6:
        *(_QWORD *)&v14 = 0;
        qfree(v10);
        goto LABEL_7;
      }
      if ( !v13 )
      {
LABEL_11:
        qfree(v12[0]);
        return v15 - __readfsqword(0x28u);
      }
    }
    else
    {
      v10 = v13;
      if ( !v13 )
        goto LABEL_11;
    }
    *(_QWORD *)&v14 = 0;
    qfree(v10);
    goto LABEL_11;
  }
  return v15 - __readfsqword(0x28u);
}
