_BOOL8 __fastcall sub_3B9410(
        __int64 a1,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  char v14; // al
  char v15; // bl
  __int64 v16; // rdx
  __int64 path; // rax
  __int64 v18; // rax
  const char *v19; // rbp
  double v20; // xmm4_8
  double v21; // xmm5_8
  int v22; // r13d
  unsigned __int64 i; // rdi
  __int64 fchunk; // rax
  unsigned __int64 *next_func; // rbx
  __int64 v26; // rax
  unsigned __int64 v27; // r15
  unsigned __int64 *v28; // rsi
  int v29; // eax
  _BOOL4 v30; // ebx
  __int64 v32; // [rsp+0h] [rbp-1098h] BYREF
  unsigned __int64 v33; // [rsp+8h] [rbp-1090h] BYREF
  __int64 v34; // [rsp+10h] [rbp-1088h] BYREF
  __int128 v35; // [rsp+18h] [rbp-1080h]
  unsigned __int64 *v36; // [rsp+30h] [rbp-1068h] BYREF
  __int128 v37; // [rsp+38h] [rbp-1060h]
  _BYTE v38[4104]; // [rsp+50h] [rbp-1048h] BYREF
  unsigned __int64 v39; // [rsp+1058h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v32 = -1;
  v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(9, 0, &v32, &v33, &callui, a13);
  v34 = 0;
  v15 = v14;
  v35 = 0;
  if ( v14 && get_ea_name(&v34, v32, 1, 0) > 0 )
  {
    v16 = v34;
  }
  else
  {
    path = get_path(1);
    v16 = qbasename(path);
  }
  set_file_ext(v38, 4096, v16, "c");
  v18 = sub_383680(1u, (__int64)v38, (__int64)"Please specify the output file name");
  v19 = (const char *)v18;
  if ( v18
    && ((v22 = 0, !qfilesize(v18))
     || (v29 = sub_338360(
                 (__int64)"~A~ppend",
                 (__int64)"~O~verwrite",
                 (__int64)"~C~ancel",
                 0xFFFFFFFF,
                 (__int64)"The file %s already exists. Do you want to overwrite it?",
                 v19),
         v22 = v29 == 1,
         v29 >= 0)) )
  {
    v36 = nullptr;
    v37 = 0;
    if ( v15 )
    {
      for ( i = v32; i < v33; v32 = i )
      {
        fchunk = get_fchunk(i);
        next_func = (unsigned __int64 *)fchunk;
        if ( !fchunk || *(char *)(fchunk + 17) < 0 )
        {
          next_func = (unsigned __int64 *)get_next_func(v32);
          if ( !next_func )
            break;
        }
        v26 = v37;
        v27 = *next_func;
        v28 = v36;
        if ( *((_QWORD *)&v37 + 1) < (unsigned __int64)(v37 + 1) )
        {
          v36 = (unsigned __int64 *)qvector_reserve(&v36, v36, v37 + 1, 8);
          v28 = v36;
          v26 = v37;
        }
        v28[v26] = v27;
        *(_QWORD *)&v37 = v37 + 1;
        i = next_func[1];
      }
    }
    if ( !batch )
      v22 |= 8u;
    v30 = sub_3648A0(*(_QWORD *)(a1 + 16), v19, &v36, v22 | 0x10, 0.0, a3, a4, a5, v20, v21, a8);
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36);
    }
  }
  else
  {
    v30 = 1;
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  return v30;
}
