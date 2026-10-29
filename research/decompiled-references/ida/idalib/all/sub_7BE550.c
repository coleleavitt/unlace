unsigned __int64 __fastcall sub_7BE550(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // r15
  unsigned __int8 (__fastcall *v10)(__int64); // rax
  unsigned __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  unsigned __int64 v15; // [rsp+0h] [rbp-58h]
  __int64 v16; // [rsp+8h] [rbp-50h]
  __int64 v17; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v16 = a4 - a3;
  v8 = sub_7B72C0(a1, a2, 0x41u);
  if ( v8 != -1 )
  {
    v9 = v8;
    v15 = a3 + a5;
    do
    {
      v12 = **(__int64 (__fastcall ***)(__int64, __int64))a6;
      if ( v12 == sub_7BE530 )
      {
        v10 = *(unsigned __int8 (__fastcall **)(__int64))(a6 + 8);
        if ( !v10 || !v10(v9) )
        {
LABEL_5:
          v11 = sub_7B4330(a1, a2, v9, 0x41u) - 1;
          if ( v11 >= a3 && v11 < v15 )
          {
            v17 = v16 + v11 + 1;
            sub_7B4100(a1, a2, v9, (const char *)&v17, 8u, 65);
          }
        }
      }
      else if ( !(unsigned __int8)v12(a6, v9) )
      {
        goto LABEL_5;
      }
      v9 = sub_7B7340(a1, a2, v9, 65);
    }
    while ( v9 != -1 );
  }
  return v18 - __readfsqword(0x28u);
}
