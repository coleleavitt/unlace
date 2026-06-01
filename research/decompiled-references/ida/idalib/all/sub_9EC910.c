char __fastcall sub_9EC910(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  char result; // al
  __int16 v10; // dx
  char v11; // [rsp+Fh] [rbp-C9h]
  char v12; // [rsp+Fh] [rbp-C9h]
  __int16 v13; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+18h] [rbp-C0h]
  unsigned int v15; // [rsp+20h] [rbp-B8h] BYREF
  char v16; // [rsp+24h] [rbp-B4h]
  __int64 v17; // [rsp+28h] [rbp-B0h] BYREF
  unsigned int v18; // [rsp+30h] [rbp-A8h]
  __int16 v19; // [rsp+60h] [rbp-78h] BYREF
  __int64 v20; // [rsp+68h] [rbp-70h]
  unsigned int v21; // [rsp+70h] [rbp-68h] BYREF
  char v22; // [rsp+74h] [rbp-64h]
  _QWORD v23[12]; // [rsp+78h] [rbp-60h] BYREF

  v4 = sub_BFBAE0(a1);
  v5 = sub_BFBAE0(a2);
  if ( !sub_9EC890(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v6, v7, v8)
    || *(_QWORD *)(v5 + 8) != *(_QWORD *)(v4 + 8) )
  {
    return 0;
  }
  v19 = 0;
  v16 &= ~1u;
  v22 &= ~1u;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v20 = 0;
  v21 = 0;
  if ( (unsigned __int8)sub_C3F220(v4, &v13, a3, 0, 0) && (unsigned __int8)sub_C3F220(v5, &v19, a3, 0, 0) )
  {
    if ( v18 <= 0x40 )
      result = v23[0] == v17;
    else
      result = sub_2205D70(&v17, v23);
  }
  else
  {
    result = 0;
    v10 = *(_WORD *)v5 & 0x1FF;
    if ( v10 == (*(_WORD *)v4 & 0x1FF) )
    {
      if ( v10 == 71 )
      {
        result = *(_QWORD *)(v4 + 16) == *(_QWORD *)(v5 + 16);
      }
      else if ( v10 == 118 )
      {
        result = sub_9ECAD0(v4, *(_QWORD *)(v5 + 16), (*(_WORD *)(v5 + 2) >> 3) & 0x3F, *(_QWORD *)(v5 + 24), a3);
      }
    }
  }
  if ( v21 > 1 )
  {
    v11 = result;
    sub_A4F8E0(&v21);
    result = v11;
  }
  if ( v15 > 1 )
  {
    v12 = result;
    sub_A4F8E0(&v15);
    return v12;
  }
  return result;
}
