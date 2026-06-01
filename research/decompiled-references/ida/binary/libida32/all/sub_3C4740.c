bool __fastcall sub_3C4740(__int64 *a1, unsigned int a2, __int64 a3, int a4, _QWORD *a5)
{
  int v9; // ecx
  int v10; // eax
  __int64 v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rdx
  char *v15; // rax
  __int64 v16; // r8
  int i; // r12d
  int v18; // edx
  __int64 v19; // rax
  _QWORD *v20; // rax
  char v21; // cl
  char v22; // si
  unsigned int v23; // r15d
  unsigned int v24; // eax
  unsigned int v25; // r15d
  unsigned int v26; // r15d
  unsigned int v27; // eax
  unsigned int v28; // r13d
  int v29; // eax
  unsigned int v30; // r14d
  int v31; // ebx
  __int64 v32; // rsi
  unsigned int v33; // r15d
  _QWORD *v34; // [rsp+0h] [rbp-128h]
  _QWORD v35[3]; // [rsp+10h] [rbp-118h] BYREF
  char v36; // [rsp+28h] [rbp-100h] BYREF
  _QWORD v37[8]; // [rsp+E8h] [rbp-40h] BYREF

  v9 = a4 & 0xF;
  v37[0] = __readfsqword(0x28u);
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
  if ( (unsigned int)sub_614FB0(*a1, 23) == -1 )
    return 0;
  v13 = a3 & 0x600;
  if ( v13 != 1024 )
  {
    if ( v13 == 1536 && (a3 & 0x40000000) != 0 )
    {
      v35[0] = -1;
      v14 = v37;
      v35[2] = 0;
      v35[1] = 0xFFFFFFFFLL;
      v15 = &v36;
      do
      {
        v16 = 0;
        *(_WORD *)v15 = 0;
        v15 += 24;
        *((_WORD *)v15 - 11) = 0;
        *((_WORD *)v15 - 10) = 0;
        *((_DWORD *)v15 - 1) = 0;
        *((_WORD *)v15 - 9) = 0;
        *((_QWORD *)v15 - 2) = 0;
        *((_DWORD *)v15 - 2) = 0;
      }
      while ( v15 != (char *)v37 );
      if ( a4 == 1 )
        goto LABEL_15;
      for ( i = 0; ; i = 1 )
      {
        if ( (a3 & (15LL << (4 * (unsigned __int8)i + 20))) == 0 )
        {
          if ( !a5 )
          {
            a5 = v35;
            decode_insn(v35, a2, v14, (unsigned int)(4 * i + 20), v16, v12);
          }
          v14 = (_QWORD *)i;
          v20 = &a5[3 * i];
          v21 = *((_BYTE *)v20 + 28);
          if ( (v21 & 8) != 0 )
          {
            v22 = *((_BYTE *)v20 + 25);
            if ( v22 == 4 )
            {
              if ( v21 >= 0 )
              {
                v26 = *((_DWORD *)v20 + 9);
                v27 = getinf(23);
                v14 = (_QWORD *)i;
                if ( v26 >= v27 )
                {
                  v33 = HIDWORD(a5[3 * i + 4]);
                  if ( v33 <= (unsigned int)getinf(24) )
                    return 1;
                  v14 = (_QWORD *)i;
                  v21 = BYTE4(a5[3 * i + 3]);
                }
                else
                {
                  v21 = BYTE4(a5[3 * i + 3]);
                }
              }
              if ( (v21 & 0x40) != 0 )
              {
                v34 = v14;
                v23 = a5[3 * (_QWORD)v14 + 4];
                goto LABEL_36;
              }
            }
            else
            {
              v34 = (_QWORD *)i;
              if ( v22 == 5 && *((_BYTE *)v20 + 29) <= 2u )
              {
                v23 = *((_DWORD *)v20 + 8);
LABEL_36:
                v24 = getinf(23);
                v14 = v34;
                if ( v23 >= v24 )
                {
                  v25 = a5[3 * (_QWORD)v34 + 4];
                  if ( v25 <= (unsigned int)getinf(24) )
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
  if ( v19 == 1342177280 || v19 == 2952790016LL || (sub_3B9AA0((__int64)a1, a2, 1) & 0x100) == 0 )
    return 0;
  if ( sub_3BD760(a1, a2, a3) )
    return 1;
  v28 = sub_3BCF60((__int64)a1, a2);
  v29 = sub_3C4370(a1, a2, a3, nullptr);
  v30 = v29 + a2;
  v31 = v29;
  if ( v29 + a2 >= v28 )
    return 0;
  if ( sub_3BD760(a1, v30, a3) )
    return 1;
  v32 = v31 + v30;
  if ( (unsigned int)v32 >= v28 )
    return 0;
  return sub_3BD760(a1, v32, a3);
}

