bool __fastcall sub_13FC0(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rax
  bool result; // al
  __int16 v4; // r12
  __int128 v5; // [rsp+0h] [rbp-188h] BYREF
  __int64 v6; // [rsp+10h] [rbp-178h]
  __int64 v7; // [rsp+18h] [rbp-170h]
  __int64 v8; // [rsp+20h] [rbp-168h]
  char v9; // [rsp+28h] [rbp-160h] BYREF
  __int16 v10; // [rsp+2Eh] [rbp-15Ah]
  __int16 v11; // [rsp+56h] [rbp-132h]
  unsigned __int64 v12; // [rsp+168h] [rbp-20h] BYREF

  v12 = __readfsqword(0x28u);
  v2 = (unsigned __int64 *)&v9;
  v5 = -1;
  v7 = 0;
  v8 = 0;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 5;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *(v2 - 2) = 0;
  }
  while ( v2 != &v12 );
  v6 = a2;
  result = (unsigned int)sub_13600(a1, (__int64)&v5)
        && (_WORD)v7 == 2
        && (v4 = v10, v6 += WORD1(v7), LODWORD(v7) = 0, (unsigned int)sub_13600(a1, (__int64)&v5))
        && (_WORD)v7 == 4
        && v11 == v4;
  return result;
}
