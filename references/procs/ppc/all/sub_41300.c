__int64 __fastcall sub_41300(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  char *v6; // rax
  __int64 v7; // r15
  int *v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // r14d
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // esi
  __int64 v16; // [rsp+0h] [rbp-1E0h]
  __int64 v17; // [rsp+10h] [rbp-1D0h] BYREF
  __int64 v18; // [rsp+18h] [rbp-1C8h] BYREF
  __int128 v19; // [rsp+20h] [rbp-1C0h]
  __int128 v20; // [rsp+38h] [rbp-1A8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-198h]
  __int64 v22; // [rsp+50h] [rbp-190h]
  __int64 v23; // [rsp+58h] [rbp-188h]
  char v24; // [rsp+60h] [rbp-180h] BYREF
  _QWORD v25[8]; // [rsp+1A0h] [rbp-40h] BYREF

  v25[0] = __readfsqword(0x28u);
  v6 = &v24;
  v20 = -1;
  v21 = -1;
  v22 = 0;
  v23 = 0;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 40;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *((_QWORD *)v6 - 2) = 0;
  }
  while ( v25 != (_QWORD *)v6 );
  if ( (unsigned int)decode_insn(&v20, a2, v25, 0.0) )
  {
    v7 = a3[1];
    v8 = nullptr;
    v18 = 0;
    v19 = 0;
    if ( (_DWORD)v7 )
    {
      v18 = qvector_reserve(&v18, 0, (int)v7, 4);
      memset((void *)(v18 + 4 * v19), 0, 4 * ((int)v7 - (_QWORD)v19));
      *(_QWORD *)&v19 = (int)v7;
      if ( (int)v7 > 0 )
      {
        v13 = 0;
        v14 = 0;
        do
        {
          v15 = *(unsigned __int16 *)(*a3 + v13 + 8);
          v13 += 80;
          *(_DWORD *)(v18 + v14) = v15;
          v14 += 4;
        }
        while ( 4LL * (unsigned int)(v7 - 1) + 4 != v14 );
      }
      v8 = (int *)v18;
    }
    v9 = sub_3F060(a1, (__int64)&v20, v8, (unsigned int)v7);
    v11 = v9;
    if ( v9 >= 0 )
    {
      v17 = 0;
      v16 = 80LL * v9;
      copy_tinfo_t(&v17, *a3 + v16 + 64);
      sub_40420(a1, (__int64)&v20, (__int64)&v17, *(_QWORD *)(*a3 + v16 + 16), a4);
      clear_tinfo_t(&v17);
    }
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18, &v20, v10, 0.0);
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v11;
}
