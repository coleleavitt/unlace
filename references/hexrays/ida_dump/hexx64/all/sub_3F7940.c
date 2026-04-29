__int64 __fastcall sub_3F7940(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  __int64 result; // rax
  char *v5; // rax
  __int64 v6; // rax
  int v7; // edx
  __int128 v8; // [rsp+0h] [rbp-188h] BYREF
  __int64 v9; // [rsp+10h] [rbp-178h]
  __int64 v10; // [rsp+18h] [rbp-170h]
  __int64 v11; // [rsp+20h] [rbp-168h]
  char v12; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v13[4]; // [rsp+168h] [rbp-20h] BYREF

  v13[0] = __readfsqword(0x28u);
  result = 0;
  if ( *(_DWORD *)a1 == 62 )
  {
    v5 = &v12;
    v8 = -1;
    v9 = -1;
    v10 = 0;
    v11 = 0;
    do
    {
      *(_WORD *)v5 = 0;
      v5 += 40;
      *((_WORD *)v5 - 19) = 0;
      *((_WORD *)v5 - 18) = 0;
      *((_DWORD *)v5 - 2) = 0;
      *((_WORD *)v5 - 17) = 0;
      *((_OWORD *)v5 - 2) = 0;
      *((_QWORD *)v5 - 2) = 0;
    }
    while ( v13 != (_QWORD *)v5 );
    v6 = decode_insn(&v8, *(_QWORD *)(a1 + 24), v13, 0, 0, 0, 0.0);
    v7 = (unsigned __int16)v10;
    LOBYTE(v6) = a3 >= (unsigned __int16)v10;
    LOBYTE(v7) = (unsigned __int16)v10 >= a2;
    return v7 & (unsigned int)v6;
  }
  return result;
}
