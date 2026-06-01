__int64 __fastcall sub_62C820(__int64 a1, __int64 a2, char a3, char a4)
{
  unsigned int v6; // eax
  unsigned int v7; // ebp
  char *v9; // r13
  const char **v10; // r14
  int v11; // r15d
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // r9
  __int64 v15; // r9
  void *v16; // rsi
  unsigned int v17; // r13d
  __int64 v18; // r15
  int v19; // eax
  int v20; // r12d
  __int64 v21; // r14
  char *v22; // [rsp+10h] [rbp-B8h]
  __int64 v23; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-A0h] BYREF
  char *s1; // [rsp+30h] [rbp-98h] BYREF
  __int128 v27; // [rsp+38h] [rbp-90h]
  void *ptr; // [rsp+50h] [rbp-78h] BYREF
  __int128 v29; // [rsp+58h] [rbp-70h]
  _BYTE v30[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+88h] [rbp-40h]

  v23 = a1;
  v31 = __readfsqword(0x28u);
  v6 = netnode_exist(&v23);
  if ( !(_BYTE)v6 )
    return 0;
  v7 = v6;
  v24 = v23;
  v25 = a2;
  s1 = nullptr;
  v27 = 0;
  if ( netnode_qsupstr(v23, &s1, 2, 65) <= 0 )
  {
    if ( (unsigned __int8)netnode_exist(&v25) && (unsigned int)netnode_supval(v24, -1, v30, 17, 83) == 16 )
    {
      netnode_supset(v25, -1, v30, 16, 83, v15);
      netnode_kill((int)&v24);
      if ( s1 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(s1);
      }
    }
    else
    {
LABEL_10:
      ptr = nullptr;
      v29 = 0;
      if ( netnode_get_name(v24, &ptr) < 0 )
      {
        v16 = ptr;
        if ( *((_QWORD *)&v29 + 1) <= 0xCu )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, 13, 1);
          v16 = ptr;
        }
        *(_QWORD *)&v29 = 13;
        qmemcpy(v16, "UNNAMED NODE", 12);
        *((_BYTE *)ptr + 12) = 0;
      }
      if ( (a4 & 1) == 0 )
      {
        node2ea(v24);
        sub_368890();
      }
      if ( ptr )
      {
        *(_QWORD *)&v29 = 0;
        qfree(ptr);
      }
      if ( s1 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(s1);
        v13 = v23;
LABEL_17:
        ptr = nullptr;
        netnode_supset(v13, 0, &ptr, 8, 65, v12);
        ptr = nullptr;
        netnode_supset(v23, 1, &ptr, 8, 65, v14);
        return 0;
      }
    }
    v13 = v23;
    goto LABEL_17;
  }
  v9 = (char *)haystack;
  v10 = (const char **)&off_2B36BE0;
  v22 = s1;
  if ( (_QWORD)v27 )
    v9 = s1;
  v11 = 0;
  while ( strcmp(v9, *v10) )
  {
    ++v11;
    v10 += 2;
    if ( v11 == 4 )
      goto LABEL_10;
  }
  v17 = (unsigned int)(&off_2B36BE0)[2 * v11 + 1];
  if ( v22 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v22);
  }
  v13 = v23;
  if ( !v17 )
    goto LABEL_17;
  v18 = 0;
  v19 = netnode_altval(v23, 1, 65);
  v20 = a4 & 2;
  v21 = v19;
  if ( v19 )
  {
    do
    {
      if ( !(unsigned __int8)sub_62C0D0(v23, v18, a3, v17) )
      {
        if ( !v20 )
        {
          node2ea(v23);
          sub_368890();
        }
        node2ea(v23);
        sub_368890();
      }
      ++v18;
    }
    while ( v18 != v21 );
  }
  return v7;
}
