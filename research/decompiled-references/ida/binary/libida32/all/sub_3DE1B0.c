__int64 __fastcall sub_3DE1B0(_QWORD *a1, unsigned int *a2)
{
  char v2; // al
  bool v3; // zf
  __int64 v4; // rdx
  char v5; // r14
  bool v6; // al
  __int64 v8; // [rsp+8h] [rbp-40h] BYREF
  unsigned int v9; // [rsp+10h] [rbp-38h] BYREF
  char v10; // [rsp+14h] [rbp-34h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  while ( 1 )
  {
    v2 = *((_BYTE *)a2 + 9);
    v3 = *((_BYTE *)a2 + 8) == 0;
    v9 = a2[1];
    v4 = *a2;
    v10 = v2;
    if ( !v3 )
      break;
    if ( !(unsigned __int8)sub_3FD4E0(a1, &v9, v4) )
      return 0;
LABEL_7:
    v5 = *((_BYTE *)a2 + 11);
    a2[1] = v9;
    v6 = (v10 & 0x20) != 0;
    *((_BYTE *)a2 + 9) = v10 & 0x1F;
    *((_BYTE *)a2 + 10) = v6;
    if ( (v5 & 0x18) != 0 )
    {
      v8 = 0;
      getinf_buf(26, &v8, 8);
      if ( (v9 >= (unsigned int)v8 && v9 < HIDWORD(v8)) != ((v5 & 0x10) != 0) )
        continue;
    }
    return 1;
  }
  if ( (unsigned __int8)sub_3DD610(a1, (__int64)&v9, v4) )
    goto LABEL_7;
  if ( (*((_BYTE *)a2 + 11) & 4) == 0 && (unsigned __int8)sub_3FC530(a1, &v9) )
  {
    *((_BYTE *)a2 + 8) = 0;
    goto LABEL_7;
  }
  return 0;
}

