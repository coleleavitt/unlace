__int64 __fastcall sub_3B9290(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // al
  char v7; // bl
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbp
  int v12; // r13d
  __int64 fchunk; // rax
  __int64 *next_func; // rbx
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rsi
  int v18; // eax
  unsigned int v19; // ebx
  unsigned __int64 v21; // [rsp+0h] [rbp-1098h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-1090h] BYREF
  __int64 v23; // [rsp+10h] [rbp-1088h]
  __int128 v24; // [rsp+18h] [rbp-1080h]
  __int64 v25; // [rsp+30h] [rbp-1068h] BYREF
  __int128 v26; // [rsp+38h] [rbp-1060h]
  char v27; // [rsp+50h] [rbp-1048h] BYREF
  unsigned __int64 v28; // [rsp+1058h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v21 = -1;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(9, 0, &v21, &v22, &callui, a6);
  v23 = 0;
  v7 = v6;
  v24 = 0;
  if ( !v6 || get_ea_name() <= 0 )
  {
    get_path();
    qbasename();
  }
  set_file_ext();
  v11 = sub_384060(1, (unsigned int)&v27, (unsigned int)"Please specify the output file name", v8, v9, v10, v21);
  if ( v11
    && ((v12 = 0, !qfilesize())
     || (v18 = sub_339E10(
                 (unsigned int)"~A~ppend",
                 (unsigned int)"~O~verwrite",
                 (unsigned int)"~C~ancel",
                 -1,
                 (unsigned int)"The file %s already exists. Do you want to overwrite it?",
                 v11,
                 v21),
         v12 = v18 == 1,
         v18 >= 0)) )
  {
    v25 = 0;
    v26 = 0;
    if ( v7 && v21 < v22 )
    {
      do
      {
        fchunk = get_fchunk();
        next_func = (__int64 *)fchunk;
        if ( !fchunk || *(char *)(fchunk + 17) < 0 )
        {
          next_func = (__int64 *)get_next_func();
          if ( !next_func )
            break;
        }
        v15 = v26;
        v16 = *next_func;
        v17 = v25;
        if ( *((_QWORD *)&v26 + 1) < (unsigned __int64)(v26 + 1) )
        {
          v25 = qvector_reserve();
          v17 = v25;
          v15 = v26;
        }
        *(_QWORD *)(v17 + 8 * v15) = v16;
        *(_QWORD *)&v26 = v26 + 1;
        v21 = next_func[1];
      }
      while ( v21 < v22 );
    }
    if ( !batch )
      v12 |= 8u;
    v19 = (unsigned __int8)sub_366160(*(_QWORD *)(a1 + 16), v11, &v25, v12 | 0x10u);
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree();
    }
  }
  else
  {
    v19 = 1;
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  return v19;
}
