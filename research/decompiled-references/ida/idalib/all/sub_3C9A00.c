bool __fastcall sub_3C9A00(__int64 *a1, __int64 *a2, __int64 a3, int a4, __int128 *a5)
{
  int v9; // ecx
  int v10; // eax
  __int64 v12; // r9
  __int64 v13; // rax
  char *v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // r8
  int i; // r12d
  int v18; // edx
  __int64 v19; // rax
  char *v20; // rax
  char v21; // cl
  char v22; // si
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r13
  __int64 v29; // rax
  unsigned __int64 v30; // r14
  __int64 v31; // rbx
  char *v32; // r15
  _QWORD *v33; // [rsp+0h] [rbp-1B8h]
  unsigned __int64 v34; // [rsp+0h] [rbp-1B8h]
  __int128 v35; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v36; // [rsp+20h] [rbp-198h]
  __int64 v37; // [rsp+28h] [rbp-190h]
  __int64 v38; // [rsp+30h] [rbp-188h]
  char v39; // [rsp+38h] [rbp-180h] BYREF
  _QWORD v40[8]; // [rsp+178h] [rbp-40h] BYREF

  v9 = a4 & 0xF;
  v40[0] = __readfsqword(0x28u);
  LOBYTE(v10) = 0;
  if ( v9 == 15 )
  {
    if ( (a3 & 0xF00000) != 0 )
    {
      v18 = 1;
      while ( (a3 & (15LL << (4 * ((unsigned __int8)v10 + (v18 != 1) + 6)))) != 0 )
      {
        v10 = v18++;
        if ( v10 == 7 )
          return 0;
      }
    }
  }
  else if ( (a4 & 8) != 0 || (a3 & (15LL << (4 * (v9 - (((a4 & 0xE) == 0) - 6))))) != 0 )
  {
    return 0;
  }
  if ( sub_631AD0(*a1, 23) == -1 )
    return 0;
  v13 = a3 & 0x600;
  if ( v13 != 1024 )
  {
    if ( v13 == 1536 && (a3 & 0x40000000) != 0 )
    {
      v36 = -1;
      v14 = &v39;
      v15 = v40;
      v37 = 0;
      v38 = 0;
      v35 = -1;
      do
      {
        v16 = 0;
        *(_WORD *)v14 = 0;
        v14 += 40;
        *((_WORD *)v14 - 19) = 0;
        *((_WORD *)v14 - 18) = 0;
        *((_DWORD *)v14 - 2) = 0;
        *((_WORD *)v14 - 17) = 0;
        *((_OWORD *)v14 - 2) = 0;
        *((_QWORD *)v14 - 2) = 0;
      }
      while ( v14 != (char *)v40 );
      if ( a4 == 1 )
        goto LABEL_15;
      for ( i = 0; ; i = 1 )
      {
        if ( (a3 & (15LL << (4 * (unsigned __int8)i + 20))) == 0 )
        {
          if ( !a5 )
          {
            a5 = &v35;
            decode_insn(&v35, a2, v15, (unsigned int)(4 * i + 20), v16, v12, 0.0);
          }
          v15 = (_QWORD *)i;
          v20 = (char *)a5 + 40 * i;
          v21 = v20[44];
          if ( (v21 & 8) != 0 )
          {
            v22 = v20[41];
            if ( v22 == 4 )
            {
              if ( v21 >= 0 )
              {
                v26 = *((_QWORD *)v20 + 7);
                v27 = getinf(23);
                v15 = (_QWORD *)i;
                if ( v26 >= v27 )
                {
                  v32 = (char *)a5 + 40 * i;
                  v34 = *((_QWORD *)v32 + 7);
                  if ( getinf(24) >= v34 )
                    return 1;
                  v21 = v32[44];
                  v15 = (_QWORD *)i;
                }
                else
                {
                  v21 = *((_BYTE *)a5 + 40 * i + 44);
                }
              }
              if ( (v21 & 0x40) != 0 )
              {
                v33 = v15;
                v23 = *((_QWORD *)a5 + 5 * (_QWORD)v15 + 6);
                goto LABEL_36;
              }
            }
            else
            {
              v33 = (_QWORD *)i;
              if ( v22 == 5 && (unsigned __int8)v20[45] <= 2u )
              {
                v23 = *((_QWORD *)v20 + 6);
LABEL_36:
                v24 = getinf(23);
                v15 = v33;
                if ( v23 >= v24 )
                {
                  v25 = *((_QWORD *)a5 + 5 * (_QWORD)v33 + 6);
                  if ( getinf(24) >= v25 )
                    return 1;
                }
              }
            }
          }
        }
        if ( i == 1 )
          return 0;
LABEL_15:
        if ( !a4 )
          return 0;
      }
    }
    return 0;
  }
  if ( (unsigned int)(a4 + 1) > 1 )
    return 0;
  if ( (a3 & 0xF00000) != 0 )
    return 0;
  v19 = (unsigned int)a3 & 0xF0000000;
  if ( v19 == 1342177280 || v19 == 2952790016LL || (sub_3BE900(a1, (unsigned __int64)a2, 1) & 0x100) == 0 )
    return 0;
  if ( sub_3C2850(a1, (unsigned __int64)a2, a3) )
    return 1;
  v28 = sub_3C1F00(a1, (unsigned __int64)a2);
  v29 = sub_3C9650(a1, a2, a3, nullptr);
  v30 = (unsigned __int64)a2 + v29;
  v31 = v29;
  if ( (unsigned __int64)a2 + v29 >= v28 )
    return 0;
  if ( sub_3C2850(a1, v30, a3) )
    return 1;
  if ( v31 + v30 >= v28 )
    return 0;
  return sub_3C2850(a1, v31 + v30, a3);
}
