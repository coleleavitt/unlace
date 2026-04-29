__int64 __fastcall sub_3E2F80(__int64 a1, int a2, __int64 a3)
{
  char *v4; // rax
  int v5; // edx
  __int64 result; // rax
  char *v7; // rdx
  _DWORD *v8; // rsi
  char v9; // cl
  int v10; // r8d
  __int64 v11; // r9
  int v12; // r10d
  __int128 v13; // [rsp+0h] [rbp-188h] BYREF
  __int64 v14; // [rsp+10h] [rbp-178h]
  __int64 v15; // [rsp+18h] [rbp-170h]
  __int64 v16; // [rsp+20h] [rbp-168h]
  char v17; // [rsp+28h] [rbp-160h] BYREF
  char v18; // [rsp+29h] [rbp-15Fh] BYREF
  _QWORD v19[4]; // [rsp+168h] [rbp-20h] BYREF

  v19[0] = __readfsqword(0x28u);
  v13 = -1;
  v4 = &v17;
  v14 = -1;
  v15 = 0;
  v16 = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 40;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *((_QWORD *)v4 - 2) = 0;
  }
  while ( v4 != (char *)v19 );
  v5 = decode_insn(&v13, a3, 0, v19, 0, 0, 0.0);
  result = 0;
  if ( v5 )
  {
    v7 = &v18;
    v8 = dword_404680;
    result = 0;
    while ( 1 )
    {
      v9 = *v7;
      if ( !*v7 )
        return result;
      if ( v9 == 3 )
      {
        if ( *(unsigned __int16 *)(v7 + 5) == a2 || v7[31] == a2 )
          result = (unsigned int)result | 2;
        goto LABEL_7;
      }
      if ( v9 != 4 )
        break;
      if ( *(unsigned __int16 *)(v7 + 5) == a2 )
      {
        result = (unsigned int)result | 2;
        if ( (v15 & 0x1800000000LL) != 0 )
          result = 3;
        v7 += 40;
        ++v8;
        if ( v7 == (char *)v19 + 1 )
          return result;
      }
      else
      {
LABEL_7:
        v7 += 40;
        ++v8;
        if ( v7 == (char *)v19 + 1 )
          return result;
      }
    }
    if ( v9 == 1 && *(unsigned __int16 *)(v7 + 5) == a2 )
    {
      v10 = 2;
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL);
      v12 = *(_DWORD *)(v11 + 104);
      if ( (unsigned __int16)v15 >= v12 && (unsigned __int16)v15 < *(int *)(v11 + 108) )
        v10 = ((*v8 & *(_DWORD *)(*(_QWORD *)(v11 + 112) + 16LL * ((unsigned __int16)v15 - v12) + 8)) == 0) + 1;
      result = v10 | (unsigned int)result;
    }
    goto LABEL_7;
  }
  return result;
}
