__int64 __fastcall sub_5CD440(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbp
  char *v7; // rdi
  __int64 v8; // rbp
  char *v9; // rbx
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  int v13; // eax
  char v14; // r15
  char *v15; // rdi
  __int64 v16; // rbp
  char *v17; // rbx
  void *v18; // rdi
  void *v19; // rdi
  __int64 v20; // [rsp+0h] [rbp-D8h] BYREF
  int v21; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD *v22; // [rsp+10h] [rbp-C8h]
  int *v23; // [rsp+18h] [rbp-C0h]
  int *v24; // [rsp+20h] [rbp-B8h]
  __int64 v25; // [rsp+28h] [rbp-B0h]
  __int64 (__fastcall **v26)(); // [rsp+30h] [rbp-A8h] BYREF
  char v27; // [rsp+38h] [rbp-A0h]
  void *v28; // [rsp+40h] [rbp-98h] BYREF
  __int128 v29; // [rsp+48h] [rbp-90h]
  __int128 v30; // [rsp+58h] [rbp-80h]
  __int64 *v31; // [rsp+68h] [rbp-70h]
  int v32; // [rsp+70h] [rbp-68h]
  void *ptr; // [rsp+78h] [rbp-60h]
  __int128 v34; // [rsp+80h] [rbp-58h]
  int v35; // [rsp+90h] [rbp-48h]
  unsigned __int64 v36; // [rsp+98h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 1672);
  v36 = __readfsqword(0x28u);
  if ( (int)get_func_chunknum(a2, *(_QWORD *)(v2 + 2208)) >= 0 )
    return v36 - __readfsqword(0x28u);
  a2[2] &= ~0x200uLL;
  update_func(a2);
  if ( (getinf(10) & 0x4000) == 0 )
    return v36 - __readfsqword(0x28u);
  v4 = a2[2];
  v5 = (unsigned __int8)v4 & 0x80;
  if ( (v4 & 0x80) == 0 )
  {
    if ( (v4 & 1) == 0 && !(unsigned __int8)is_spec_ea(*a2) )
    {
      v27 = 0;
      v26 = &off_2B2F9B0;
      v28 = nullptr;
      v29 = 0;
      v28 = (void *)qvector_reserve(&v28, 0, 1, 1);
      *(_QWORD *)&v29 = 1;
      *(_BYTE *)v28 = 0;
      v31 = a2;
      v32 = 64;
      ptr = nullptr;
      v35 = 0;
      v30 = 0;
      v34 = 0;
      create_qflow_chart(&v26);
      v6 = 0;
      if ( (int)v34 > 0 )
      {
        while ( 1 )
        {
          v13 = fc_calc_block_type(&v26, v6);
          if ( v13 == 7 || v13 == 1 )
            break;
          if ( (unsigned int)(v13 - 2) <= 1 || v13 == 6 )
          {
            v21 = 0;
            v22 = nullptr;
            v23 = &v21;
            v24 = &v21;
            v25 = 0;
            v14 = sub_5DB600(&v26, &v20, 0, (unsigned int)v6);
            sub_5C5590(v22);
            if ( v14 )
              break;
          }
          if ( (int)v34 <= (int)++v6 )
            goto LABEL_8;
        }
        v15 = (char *)ptr;
        v26 = &off_2B2F9B0;
        if ( ptr )
        {
          v16 = v34;
          if ( (_QWORD)v34 )
          {
            do
            {
              v17 = &v15[64 * v5];
              v18 = *((void **)v17 + 5);
              if ( v18 )
              {
                *((_QWORD *)v17 + 6) = 0;
                qfree(v18);
              }
              v19 = *((void **)v17 + 2);
              if ( v19 )
              {
                *((_QWORD *)v17 + 3) = 0;
                qfree(v19);
              }
              ++v5;
              v15 = (char *)ptr;
            }
            while ( v16 != v5 );
          }
          *(_QWORD *)&v34 = 0;
          qfree(v15);
        }
        v12 = v28;
        if ( !v28 )
          return v36 - __readfsqword(0x28u);
      }
      else
      {
LABEL_8:
        sub_5C7750(a2);
        v7 = (char *)ptr;
        v26 = &off_2B2F9B0;
        if ( ptr )
        {
          v8 = v34;
          if ( (_QWORD)v34 )
          {
            do
            {
              v9 = &v7[64 * v5];
              v10 = *((void **)v9 + 5);
              if ( v10 )
              {
                *((_QWORD *)v9 + 6) = 0;
                qfree(v10);
              }
              v11 = *((void **)v9 + 2);
              if ( v11 )
              {
                *((_QWORD *)v9 + 3) = 0;
                qfree(v11);
              }
              ++v5;
              v7 = (char *)ptr;
            }
            while ( v8 != v5 );
          }
          *(_QWORD *)&v34 = 0;
          qfree(v7);
        }
        v12 = v28;
        if ( !v28 )
          return v36 - __readfsqword(0x28u);
      }
      *(_QWORD *)&v29 = 0;
      qfree(v12);
    }
    return v36 - __readfsqword(0x28u);
  }
  return sub_5CD340(a1, (unsigned __int64 *)a2, nullptr, nullptr);
}
