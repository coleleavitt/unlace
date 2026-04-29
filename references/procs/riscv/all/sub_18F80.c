__int64 __fastcall sub_18F80(__int64 a1, __int64 a2, _QWORD *a3)
{
  char *v4; // rax
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  __int64 v10; // rbx
  void *v11; // rcx
  __int64 v13; // [rsp+0h] [rbp-1B0h] BYREF
  __int128 v14; // [rsp+8h] [rbp-1A8h] BYREF
  __int64 v15; // [rsp+18h] [rbp-198h]
  __int64 v16; // [rsp+20h] [rbp-190h]
  __int64 v17; // [rsp+28h] [rbp-188h]
  char v18; // [rsp+30h] [rbp-180h] BYREF
  _QWORD v19[8]; // [rsp+170h] [rbp-40h] BYREF

  v19[0] = __readfsqword(0x28u);
  v4 = &v18;
  v14 = -1;
  v15 = -1;
  v16 = 0;
  v17 = 0;
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
  if ( (int)decode_insn(&v14, a2, v19, 0, 0, 0, 0.0) > 0 && (v5 = 0, v6 = 0, a3[1]) )
  {
    while ( 1 )
    {
      v7 = 80 * v6;
      if ( (unsigned __int8)sub_17AE0(a1, (__int64)&v14, *(unsigned __int16 *)(80 * v6 + *a3 + 8)) )
        break;
      v6 = (int)++v5;
      if ( (int)v5 >= v9 )
        return (unsigned int)-1;
    }
    v13 = 0;
    copy_tinfo_t(&v13, v8 + 64);
    v10 = *a3 + v7;
    v11 = &unk_2B040;
    if ( *(_QWORD *)(v10 + 24) )
      v11 = *(void **)(v10 + 16);
    if ( !(unsigned __int8)sub_18790(a1, (__int64)&v14, (__int64)&v13, (__int64)v11, nullptr) )
      v5 |= 0x80000000;
    clear_tinfo_t(&v13);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v5;
}
