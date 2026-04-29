__int64 __fastcall sub_3657D0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rbp
  unsigned int v5; // r15d
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ebx
  __int64 v10; // rdi
  unsigned int v11; // r13d
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // [rsp+10h] [rbp-78h] BYREF
  __int64 v18; // [rsp+18h] [rbp-70h] BYREF
  __int64 v19; // [rsp+20h] [rbp-68h] BYREF
  __int64 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+30h] [rbp-58h]
  __int128 v22; // [rsp+38h] [rbp-50h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v2 = *(int *)(a1 + 480);
  if ( (_DWORD)v2 == -1 )
    return 1;
  v4 = *(_QWORD *)(a1 + 432) + 104 * v2;
  v5 = sub_1BFF60(a1, (_QWORD *)(v4 + 80), (_DWORD *)v4, a2);
  if ( (_BYTE)v5 )
    return 1;
  v7 = a2;
  if ( a2 <= 0x10 )
    v7 = getinf(99);
  if ( v7 == 176 )
  {
    if ( (unsigned __int64)getinf(88) > 0x397
      || (unsigned __int8)getinf_flag(3, 4)
      && (netnode_check(&v19, "$ golang", 0, 0), v10 = v19, v11 = netnode_altval(v19, 0, 65), v11 > 0x74)
      && ((v12 = *(_DWORD *)(get_ph(v10) + 4)) == 0
       || (v13 = (unsigned int)(v12 - 13), (unsigned int)v13 <= 0x3B)
       && (v14 = 0x800000000000005LL, _bittest64(&v14, v13))
       && v11 != 117) )
    {
      v8 = *(_DWORD *)(v4 + 88);
      v17 = 0;
      if ( v8 == 1 )
      {
        if ( (unsigned int)sub_1BCC80((_DWORD *)v4) == -1 )
        {
          v8 = *(_DWORD *)(v4 + 88);
        }
        else
        {
          v18 = 17;
          v20 = 0x200000000LL;
          v19 = 0;
          copy_tinfo_t(&v19, &v18);
          create_tinfo(&v17, 11, 11, &v19);
          clear_tinfo_t(&v19);
          clear_tinfo_t(&v18);
          if ( !sub_1E8570(v4, *(_QWORD *)(a1 + 1504), &v17, 1) )
          {
            v5 = 0;
            goto LABEL_29;
          }
          v8 = *(_DWORD *)(v4 + 88);
        }
      }
      v22 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      sub_1BC930(v4, &v19, v8, 0, (_QWORD *)(v4 + 80));
      copy_tinfo_t(&v17, v4 + 80);
      if ( !(unsigned __int8)sub_216B40((_QWORD *)a1, &v17, 0, &v19)
        || (v9 = sub_1BFF60(a1, &v17, (_DWORD *)v4, a2), !(_BYTE)v9) )
      {
        if ( v21 )
        {
          *(_QWORD *)&v22 = 0;
          qfree(v21);
        }
        qfree(v19);
        clear_tinfo_t(&v17);
        return v5;
      }
      v15 = v17;
      v16 = v21;
      v17 = *(_QWORD *)(v4 + 80);
      *(_QWORD *)(v4 + 80) = v15;
      if ( v16 )
      {
        *(_QWORD *)&v22 = 0;
        qfree(v16);
      }
      v5 = v9;
      qfree(v19);
LABEL_29:
      clear_tinfo_t(&v17);
    }
  }
  return v5;
}
