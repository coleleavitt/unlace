__int64 __fastcall sub_3EC440(__int64 a1, __int64 a2)
{
  char *v2; // rbx
  _QWORD *v3; // rax
  int v4; // edx
  __int64 result; // rax
  int v6; // ebp
  __int128 v7; // [rsp+0h] [rbp-188h] BYREF
  __int64 v8; // [rsp+10h] [rbp-178h]
  __int64 v9; // [rsp+18h] [rbp-170h]
  __int64 v10; // [rsp+20h] [rbp-168h]
  _BYTE v11[6]; // [rsp+28h] [rbp-160h] BYREF
  __int16 v12; // [rsp+2Eh] [rbp-15Ah]
  char v13; // [rsp+50h] [rbp-138h] BYREF
  _QWORD v14[4]; // [rsp+168h] [rbp-20h] BYREF

  v14[0] = __readfsqword(0x28u);
  v2 = v11;
  v7 = -1;
  v8 = -1;
  v3 = v11;
  v9 = 0;
  v10 = 0;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 5;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *(v3 - 2) = 0;
  }
  while ( v14 != v3 );
  v4 = decode_insn(&v7, *(_QWORD *)(a2 + 24), v14, 0, 0, 0, 0.0);
  result = 0;
  if ( v4 )
  {
    if ( (_WORD)v9 == 42 )
      goto LABEL_10;
    if ( (_WORD)v9 == 33 && v11[1] == 1 && v12 == 13 )
    {
      v2 = &v13;
LABEL_10:
      result = 0;
      if ( v2[1] == 9 )
      {
        v6 = bitcount(*((_QWORD *)v2 + 3));
        return get_dtype_size((unsigned __int8)v2[5]) * v6;
      }
    }
  }
  return result;
}
