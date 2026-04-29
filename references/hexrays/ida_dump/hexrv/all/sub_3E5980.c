__int64 __fastcall sub_3E5980(__int64 a1, int a2, __int64 a3)
{
  char *v4; // rax
  __int64 *v5; // rbx
  int v6; // edx
  __int64 result; // rax
  int v8; // edi
  __int64 v9; // rdx
  int v10; // ecx
  _DWORD *v11; // rcx
  char v12; // dl
  __int128 v13; // [rsp+0h] [rbp-198h] BYREF
  __int64 v14; // [rsp+10h] [rbp-188h]
  __int64 v15; // [rsp+18h] [rbp-180h]
  __int64 v16; // [rsp+20h] [rbp-178h]
  char v17; // [rsp+28h] [rbp-170h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-F8h] BYREF
  _QWORD v19[6]; // [rsp+168h] [rbp-30h] BYREF

  v19[0] = __readfsqword(0x28u);
  v13 = -1;
  v4 = &v17;
  v14 = -1;
  v5 = (__int64 *)&v13;
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
  v6 = decode_insn(&v13, a3, 0, v19, 0, 0, 0.0);
  result = 0;
  if ( v6 )
  {
    v8 = 0;
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL);
    v10 = *(_DWORD *)(v9 + 104);
    if ( (unsigned __int16)v15 >= v10 && (unsigned __int16)v15 < *(int *)(v9 + 108) )
      v8 = *(_DWORD *)(*(_QWORD *)(v9 + 112) + 16LL * ((unsigned __int16)v15 - v10) + 8);
    v11 = dword_4087C0;
    result = 0;
    do
    {
      v12 = *((_BYTE *)v5 + 41);
      if ( v12 == 1 )
      {
        if ( *((unsigned __int16 *)v5 + 23) == a2 )
          result = (((v8 & *v11) == 0) + 1) | (unsigned int)result;
      }
      else if ( (unsigned __int8)(v12 - 3) <= 1u && *((unsigned __int16 *)v5 + 23) == a2 )
      {
        result = (unsigned int)result | 2;
      }
      v5 += 5;
      ++v11;
    }
    while ( &v18 != v5 );
  }
  return result;
}
