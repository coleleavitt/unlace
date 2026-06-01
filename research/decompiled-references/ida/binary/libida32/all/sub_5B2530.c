__int64 __fastcall sub_5B2530(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbp
  char *v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rbp
  char *v10; // rbx
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  int v14; // eax
  char v15; // r15
  char *v16; // rdi
  __int64 v17; // r13
  __int64 v18; // rbp
  char *v19; // rbx
  void *v20; // rdi
  void *v21; // rdi
  __int64 v22; // [rsp+0h] [rbp-D8h] BYREF
  int v23; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD *v24; // [rsp+10h] [rbp-C8h]
  int *v25; // [rsp+18h] [rbp-C0h]
  int *v26; // [rsp+20h] [rbp-B8h]
  __int64 v27; // [rsp+28h] [rbp-B0h]
  __int64 (__fastcall **v28)(); // [rsp+30h] [rbp-A8h] BYREF
  char v29; // [rsp+38h] [rbp-A0h]
  void *v30; // [rsp+40h] [rbp-98h] BYREF
  __int128 v31; // [rsp+48h] [rbp-90h]
  __int64 v32; // [rsp+58h] [rbp-80h]
  unsigned int *v33; // [rsp+60h] [rbp-78h]
  int v34; // [rsp+68h] [rbp-70h]
  void *ptr; // [rsp+70h] [rbp-68h]
  __int128 v36; // [rsp+78h] [rbp-60h]
  int v37; // [rsp+88h] [rbp-50h]
  unsigned __int64 v38; // [rsp+98h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 1480);
  v38 = __readfsqword(0x28u);
  if ( (int)get_func_chunknum(a2, *(unsigned int *)(v2 + 2120)) >= 0 )
    return v38 - __readfsqword(0x28u);
  *((_QWORD *)a2 + 1) &= ~0x200uLL;
  update_func(a2);
  if ( (getinf(10) & 0x4000) == 0 )
    return v38 - __readfsqword(0x28u);
  v4 = *((_QWORD *)a2 + 1);
  v5 = (unsigned __int8)v4 & 0x80;
  if ( (v4 & 0x80) == 0 )
  {
    if ( (v4 & 1) == 0 && !(unsigned __int8)is_spec_ea(*a2) )
    {
      v29 = 0;
      v28 = &off_2B059F0;
      v30 = nullptr;
      v31 = 0;
      v30 = (void *)qvector_reserve(&v30, 0, 1, 1);
      *(_QWORD *)&v31 = 1;
      *(_BYTE *)v30 = 0;
      v32 = 0;
      v33 = a2;
      v34 = 64;
      ptr = nullptr;
      v37 = 0;
      v36 = 0;
      create_qflow_chart(&v28);
      v6 = 0;
      if ( (int)v36 > 0 )
      {
        while ( 1 )
        {
          v14 = fc_calc_block_type(&v28, v6);
          if ( v14 == 7 || v14 == 1 )
            break;
          if ( (unsigned int)(v14 - 2) <= 1 || v14 == 6 )
          {
            v23 = 0;
            v24 = nullptr;
            v25 = &v23;
            v26 = &v23;
            v27 = 0;
            v15 = sub_5BFA40(&v28, &v22, 0, (unsigned int)v6);
            sub_5AAFF0(v24);
            if ( v15 )
              break;
          }
          if ( (int)v36 <= (int)++v6 )
            goto LABEL_8;
        }
        v16 = (char *)ptr;
        v28 = &off_2B059F0;
        if ( ptr )
        {
          v17 = v36;
          if ( (_QWORD)v36 )
          {
            v18 = 0;
            do
            {
              v19 = &v16[v18];
              v20 = *(void **)&v16[v18 + 32];
              if ( v20 )
              {
                *((_QWORD *)v19 + 5) = 0;
                qfree(v20);
              }
              v21 = *((void **)v19 + 1);
              if ( v21 )
              {
                *((_QWORD *)v19 + 2) = 0;
                qfree(v21);
              }
              ++v5;
              v16 = (char *)ptr;
              v18 += 56;
            }
            while ( v17 != v5 );
          }
          *(_QWORD *)&v36 = 0;
          qfree(v16);
        }
        v13 = v30;
        if ( !v30 )
          return v38 - __readfsqword(0x28u);
      }
      else
      {
LABEL_8:
        sub_5ACD00(a2);
        v7 = (char *)ptr;
        v28 = &off_2B059F0;
        if ( ptr )
        {
          v8 = v36;
          v9 = 0;
          if ( (_QWORD)v36 )
          {
            do
            {
              v10 = &v7[v9];
              v11 = *(void **)&v7[v9 + 32];
              if ( v11 )
              {
                *((_QWORD *)v10 + 5) = 0;
                qfree(v11);
              }
              v12 = *((void **)v10 + 1);
              if ( v12 )
              {
                *((_QWORD *)v10 + 2) = 0;
                qfree(v12);
              }
              ++v5;
              v7 = (char *)ptr;
              v9 += 56;
            }
            while ( v8 != v5 );
          }
          *(_QWORD *)&v36 = 0;
          qfree(v7);
        }
        v13 = v30;
        if ( !v30 )
          return v38 - __readfsqword(0x28u);
      }
      *(_QWORD *)&v31 = 0;
      qfree(v13);
    }
    return v38 - __readfsqword(0x28u);
  }
  return sub_5B2430(a1, a2, nullptr, nullptr);
}

