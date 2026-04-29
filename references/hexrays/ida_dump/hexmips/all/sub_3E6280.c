__int64 __fastcall sub_3E6280(__int64 a1, int a2, __int64 a3)
{
  char *v4; // rax
  int v5; // edx
  __int64 result; // rax
  int v7; // r9d
  __int64 v8; // rdx
  int v9; // ecx
  char *v10; // rdx
  _DWORD *v11; // rsi
  char v12; // cl
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
    v7 = 0;
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL);
    v9 = *(_DWORD *)(v8 + 104);
    if ( (unsigned __int16)v15 >= v9 && *(_DWORD *)(v8 + 108) > (int)(unsigned __int16)v15 )
      v7 = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 16LL * ((unsigned __int16)v15 - v9) + 8);
    v10 = &v18;
    v11 = dword_4117A0;
    result = 0;
    while ( 1 )
    {
      v12 = *v10;
      if ( *v10 == 3 )
      {
        if ( v10[31] == 1 )
          goto LABEL_13;
        if ( a2 == (*(_DWORD *)(v10 + 23) & 0x1F) || a2 == ((*(_QWORD *)(v10 + 23) >> 5) & 0x1F) )
        {
          v10 += 40;
          result = (unsigned int)result | 2;
          ++v11;
          if ( (char *)v19 + 1 == v10 )
            return result;
        }
        else
        {
LABEL_11:
          v10 += 40;
          ++v11;
          if ( (char *)v19 + 1 == v10 )
            return result;
        }
      }
      else
      {
        if ( v12 != 4 )
        {
          if ( v12 == 1 && *(unsigned __int16 *)(v10 + 5) == a2 )
            result = (((v7 & *v11) == 0) + 1) | (unsigned int)result;
          goto LABEL_11;
        }
LABEL_13:
        if ( *(unsigned __int16 *)(v10 + 5) == a2 )
          result = (unsigned int)result | 2;
        v10 += 40;
        ++v11;
        if ( (char *)v19 + 1 == v10 )
          return result;
      }
    }
  }
  return result;
}
